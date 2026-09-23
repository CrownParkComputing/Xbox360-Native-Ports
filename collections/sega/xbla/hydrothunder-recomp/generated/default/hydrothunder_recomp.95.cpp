#include "hydrothunder_funcs.95.h"

DEFINE_REX_FUNC(sub_82125910) {
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
	// bl 0x823ecd40
	ctx.lr = 0x82125920;
	sub_823ECD40(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// subfc r11,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82127890) {
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
	ctx.lr = 0x82127898;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r3,68
	r28.s64 = ctx.r3.s64 + 68;
	// b 0x821278c0
	goto loc_821278C0;
loc_821278AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821278bc
	if (ctx.cr6.eq) goto loc_821278BC;
	// bl 0x82127160
	ctx.lr = 0x821278BC;
	sub_82127160(ctx, base);
loc_821278BC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821278C0:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821278ac
	if (!ctx.cr6.eq) goto loc_821278AC;
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821278f4
	goto loc_821278F4;
loc_821278DC:
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82122a78
	ctx.lr = 0x821278E4;
	sub_82122A78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212aa28
	ctx.lr = 0x821278EC;
	sub_8212AA28(ctx, base);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821278F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821278dc
	if (!ctx.cr6.eq) goto loc_821278DC;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8212792c
	if (ctx.cr6.eq) goto loc_8212792C;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82127924;
	sub_8269CC20(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_8212792C:
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r29,84
	r31.s64 = r29.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82127970
	if (ctx.cr6.eq) goto loc_82127970;
loc_82127958:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82127960;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82127958
	if (!ctx.cr6.eq) goto loc_82127958;
loc_82127970:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162298
	ctx.lr = 0x8212797C;
	sub_82162298(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24852
	ctx.r4.s64 = ctx.r11.s64 + -24852;
	// bl 0x82120600
	ctx.lr = 0x8212798C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821289b8
	ctx.lr = 0x82127998;
	sub_821289B8(ctx, base);
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
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x821279B4;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x821279c4
	if (ctx.cr0.eq) goto loc_821279C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821279e4
	goto loc_821279E4;
loc_821279C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821279D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821279E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82134208) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c71d8
	ctx.lr = 0x8213423C;
	sub_822C71D8(ctx, base);
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

DEFINE_REX_FUNC(sub_82135B88) {
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
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82172c88
	ctx.lr = 0x82135BAC;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82172c88
	ctx.lr = 0x82135BB8;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82172c88
	ctx.lr = 0x82135BC4;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82172c88
	ctx.lr = 0x82135BD0;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82172c88
	ctx.lr = 0x82135BDC;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82172c88
	ctx.lr = 0x82135BE8;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82172c88
	ctx.lr = 0x82135BF4;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82172c88
	ctx.lr = 0x82135C00;
	sub_82172C88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82172c88
	ctx.lr = 0x82135C0C;
	sub_82172C88(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135C50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x8212eae0
	ctx.lr = 0x82135CE8;
	sub_8212EAE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x821357c8
	ctx.lr = 0x82135DDC;
	sub_821357C8(ctx, base);
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

DEFINE_REX_FUNC(sub_8214AB78) {
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
	ctx.lr = 0x8214AB9C;
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
	ctx.lr = 0x8214ABB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6168(r10)
	REX_STORE_U32(ctx.r10.u32 + 6168, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214C920) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8214c958
	if (ctx.cr6.eq) goto loc_8214C958;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C958:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c980
	if (ctx.cr6.eq) goto loc_8214C980;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C980:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c9a8
	if (ctx.cr6.eq) goto loc_8214C9A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C9A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c9c8
	if (ctx.cr6.eq) goto loc_8214C9C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C9C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C9C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214C9D0;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_82152330) {
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
	ctx.lr = 0x82152338;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82152430
	if (!ctx.cr6.gt) goto loc_82152430;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82152358:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8215237c
	if (ctx.cr6.eq) goto loc_8215237C;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82152358
	if (ctx.cr6.lt) goto loc_82152358;
	// b 0x82152430
	goto loc_82152430;
loc_8215237C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82152390
	if (ctx.cr6.lt) goto loc_82152390;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821523a8
	if (!ctx.cr6.gt) goto loc_821523A8;
loc_82152390:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-23616
	ctx.r3.s64 = ctx.r10.s64 + -23616;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x821523A8;
	sub_821231D0(ctx, base);
loc_821523A8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x821523CC;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8215242c
	if (!ctx.cr6.gt) goto loc_8215242C;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bgt cr6,0x821523f8
	if (ctx.cr6.gt) goto loc_821523F8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821523F8:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8215242c
	if (!ctx.cr6.gt) goto loc_8215242C;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8215240C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8215241C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82152424;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8215242C:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82152430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215AD60) {
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
	ctx.lr = 0x8215AD68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215ad8c
	if (!ctx.cr6.lt) goto loc_8215AD8C;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x8215adc8
	goto loc_8215ADC8;
loc_8215AD8C:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215ADA0:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215ada0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215ADA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215ADC8:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215add8
	if (!ctx.cr0.eq) goto loc_8215ADD8;
loc_8215ADD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215b0d4
	goto loc_8215B0D4;
loc_8215ADD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215b074
	if (ctx.cr6.eq) goto loc_8215B074;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215b018
	if (ctx.cr6.eq) goto loc_8215B018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215afec
	if (ctx.cr6.eq) goto loc_8215AFEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215afd8
	if (ctx.cr6.eq) goto loc_8215AFD8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215af24
	if (ctx.cr6.eq) goto loc_8215AF24;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8215ae5c
	if (ctx.cr6.eq) goto loc_8215AE5C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215b0d0
	if (!ctx.cr6.eq) goto loc_8215B0D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8215b024
	if (ctx.cr6.lt) goto loc_8215B024;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r28,7
	ctx.r11.s64 = r28.s64 + 7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215AE34:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215ae34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215AE34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x8215b064
	goto loc_8215B064;
loc_8215AE5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215ae7c
	if (!ctx.cr6.lt) goto loc_8215AE7C;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x8215aec0
	goto loc_8215AEC0;
loc_8215AE7C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215AEC0:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215add0
	if (ctx.cr0.eq) goto loc_8215ADD0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8215af18
	goto loc_8215AF18;
loc_8215AEDC:
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215b0e0
	ctx.lr = 0x8215AEE8;
	sub_8215B0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215add0
	if (ctx.cr0.eq) goto loc_8215ADD0;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215ad60
	ctx.lr = 0x8215AEFC;
	sub_8215AD60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215add0
	if (ctx.cr0.eq) goto loc_8215ADD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x8215AF0C;
	sub_8212A9B0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8215AF18:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215aedc
	if (!ctx.cr6.eq) goto loc_8215AEDC;
	// b 0x8215b0d0
	goto loc_8215B0D0;
loc_8215AF24:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r27,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r27.s64 = ctx.r11.s32 >> 4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bge cr6,0x8215af50
	if (!ctx.cr6.lt) goto loc_8215AF50;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x8215af94
	goto loc_8215AF94;
loc_8215AF50:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215AF94:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215add0
	if (ctx.cr0.eq) goto loc_8215ADD0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8215b0d0
	if (!ctx.cr6.gt) goto loc_8215B0D0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8215AFA8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8215ad60
	ctx.lr = 0x8215AFBC;
	sub_8215AD60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215add0
	if (ctx.cr0.eq) goto loc_8215ADD0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x8215afa8
	if (ctx.cr6.lt) goto loc_8215AFA8;
	// b 0x8215b0d0
	goto loc_8215B0D0;
loc_8215AFD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x8215b0e0
	ctx.lr = 0x8215AFE4;
	sub_8215B0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8215b06c
	goto loc_8215B06C;
loc_8215AFEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215b024
	if (ctx.cr6.lt) goto loc_8215B024;
	// lbz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8215b05c
	goto loc_8215B05C;
loc_8215B018:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215b02c
	if (!ctx.cr6.lt) goto loc_8215B02C;
loc_8215B024:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x8215b068
	goto loc_8215B068;
loc_8215B02C:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r28,7
	ctx.r9.s64 = r28.s64 + 7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215B040:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B040;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8215B05C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8215B064:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8215B068:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8215B06C:
	// bne 0x8215b0d0
	if (!ctx.cr0.eq) goto loc_8215B0D0;
	// b 0x8215add0
	goto loc_8215ADD0;
loc_8215B074:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215b088
	if (!ctx.cr6.lt) goto loc_8215B088;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x8215b0c4
	goto loc_8215B0C4;
loc_8215B088:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r28,7
	ctx.r9.s64 = r28.s64 + 7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215B09C:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B09C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8215B0C4:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8215b0d4
	if (ctx.cr0.eq) goto loc_8215B0D4;
loc_8215B0D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215B0D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821780D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82178268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82178270;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,28412
	ctx.r11.s64 = ctx.r11.s64 + 28412;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8216ba58
	ctx.lr = 0x821782A0;
	sub_8216BA58(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120ac0
	ctx.lr = 0x821782B4;
	sub_82120AC0(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821782DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82178304
	if (ctx.cr0.eq) goto loc_82178304;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82178304:
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
	ctx.lr = 0x8217831C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8217B938) {
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
	ctx.lr = 0x8217B940;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217b970
	if (!ctx.cr6.eq) goto loc_8217B970;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8217B958:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8217daf0
	ctx.lr = 0x8217B968;
	sub_8217DAF0(ctx, base);
loc_8217B968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217bb40
	goto loc_8217BB40;
loc_8217B970:
	// bl 0x8217ac08
	ctx.lr = 0x8217B974;
	sub_8217AC08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0a48
	ctx.lr = 0x8217B990;
	sub_826A0A48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0d60
	ctx.lr = 0x8217B998;
	sub_826A0D60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0a48
	ctx.lr = 0x8217B9AC;
	sub_826A0A48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x8217b9c0
	if (ctx.cr6.gt) goto loc_8217B9C0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8217b958
	goto loc_8217B958;
loc_8217B9C0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r26,r11,-20
	r26.s64 = ctx.r11.s64 + -20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x8217a2e0
	ctx.lr = 0x8217B9D8;
	sub_8217A2E0(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x822f6338
	ctx.lr = 0x8217B9E0;
	sub_822F6338(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826a11e8
	ctx.lr = 0x8217B9FC;
	sub_826A11E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8217ba38
	if (ctx.cr6.eq) goto loc_8217BA38;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217BA0C;
	sub_8269D6A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217BA24;
	sub_8217DAF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// beq cr6,0x8217b968
	if (ctx.cr6.eq) goto loc_8217B968;
loc_8217BA30:
	// bl 0x8269d6a0
	ctx.lr = 0x8217BA34;
	sub_8269D6A0(ctx, base);
	// b 0x8217b968
	goto loc_8217B968;
loc_8217BA38:
	// stbx r28,r29,r31
	REX_STORE_U8(r29.u32 + r31.u32, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8217bad0
	goto loc_8217BAD0;
loc_8217BA4C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8217ba78
	if (!ctx.cr6.eq) goto loc_8217BA78;
	// subf r11,r4,r31
	ctx.r11.u64 = r31.u64 - ctx.r4.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8217a438
	ctx.lr = 0x8217BA6C;
	sub_8217A438(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8217BA70:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8217bacc
	goto loc_8217BACC;
loc_8217BA78:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8217bac8
	if (!ctx.cr6.eq) goto loc_8217BAC8;
	// subf. r5,r4,r31
	ctx.r5.u64 = r31.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8217ba90
	if (!ctx.cr0.gt) goto loc_8217BA90;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8217a438
	ctx.lr = 0x8217BA90;
	sub_8217A438(ctx, base);
loc_8217BA90:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8217a438
	ctx.lr = 0x8217BAA8;
	sub_8217A438(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8217bac0
	if (!ctx.cr6.eq) goto loc_8217BAC0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x8217ba70
	goto loc_8217BA70;
loc_8217BAC0:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x8217bacc
	goto loc_8217BACC;
loc_8217BAC8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8217BACC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
loc_8217BAD0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8217ba4c
	if (!ctx.cr0.eq) goto loc_8217BA4C;
	// subf. r5,r4,r31
	ctx.r5.u64 = r31.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8217bae8
	if (ctx.cr0.eq) goto loc_8217BAE8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8217a438
	ctx.lr = 0x8217BAE8;
	sub_8217A438(ctx, base);
loc_8217BAE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217BAF0;
	sub_8269D6A0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217BB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 44);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217bb30
	if (ctx.cr0.eq) goto loc_8217BB30;
	// beq cr6,0x8217b968
	if (ctx.cr6.eq) goto loc_8217B968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217ba30
	goto loc_8217BA30;
loc_8217BB30:
	// beq cr6,0x8217bb3c
	if (ctx.cr6.eq) goto loc_8217BB3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217BB3C;
	sub_8269D6A0(ctx, base);
loc_8217BB3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217BB40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8218CA70) {
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
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c84
	ctx.lr = 0x8218CA80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f11,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f9,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f8,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f27,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	f27.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f0,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f6,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f5,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f31,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	f30.f64 = double(temp.f32);
	// lfs f29,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	f29.f64 = double(temp.f32);
	// lfs f28,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	f28.f64 = double(temp.f32);
	// lfs f26,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f26.f64 = double(temp.f32);
	// lfs f25,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	f25.f64 = double(temp.f32);
	// lfs f24,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	f24.f64 = double(temp.f32);
	// fmuls f23,f4,f2
	f23.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// lfs f22,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f21,f13,f1
	f21.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 * ctx.f11.f64));
	// fmuls f20,f4,f4
	f20.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f19,f13,f13
	f19.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f27,f23,f2
	f27.f64 = double(float(f23.f64 * ctx.f2.f64));
	// fmuls f23,f21,f1
	f23.f64 = double(float(f21.f64 * ctx.f1.f64));
	// fmuls f2,f20,f2
	ctx.f2.f64 = double(float(f20.f64 * ctx.f2.f64));
	// fmuls f1,f19,f1
	ctx.f1.f64 = double(float(f19.f64 * ctx.f1.f64));
	// fmuls f4,f20,f4
	ctx.f4.f64 = double(float(f20.f64 * ctx.f4.f64));
	// fmuls f13,f19,f13
	ctx.f13.f64 = double(float(f19.f64 * ctx.f13.f64));
	// fmuls f27,f27,f0
	f27.f64 = double(float(f27.f64 * ctx.f0.f64));
	// fmuls f23,f23,f0
	f23.f64 = double(float(f23.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f31,f4
	f31.f64 = double(float(f31.f64 * ctx.f4.f64));
	// fmuls f29,f29,f4
	f29.f64 = double(float(f29.f64 * ctx.f4.f64));
	// fmuls f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fmuls f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * f27.f64));
	// fmuls f30,f30,f27
	f30.f64 = double(float(f30.f64 * f27.f64));
	// fmuls f27,f26,f27
	f27.f64 = double(float(f26.f64 * f27.f64));
	// fmuls f1,f25,f4
	ctx.f1.f64 = double(float(f25.f64 * ctx.f4.f64));
	// fmuls f4,f22,f4
	ctx.f4.f64 = double(float(f22.f64 * ctx.f4.f64));
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f28,f28,f2
	f28.f64 = double(float(f28.f64 * ctx.f2.f64));
	// fmuls f2,f24,f2
	ctx.f2.f64 = double(float(f24.f64 * ctx.f2.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f8,f23,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, f23.f64, ctx.f10.f64)));
	// fmadds f10,f7,f23,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f23.f64, ctx.f10.f64)));
	// fmadds f10,f6,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f5,f23,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, f23.f64, ctx.f10.f64)));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f12,f31,f12,f10
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f12,f30,f0,f12
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f12,f29,f23,f12
	ctx.f12.f64 = double(float(std::fma(f29.f64, f23.f64, ctx.f12.f64)));
	// fmadds f12,f28,f0,f12
	ctx.f12.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f12,f27,f13,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f1,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f2,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f4,f13,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f0.f64)));
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd0
	ctx.lr = 0x8218CBA8;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821958A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x821957b0
	ctx.lr = 0x821958D0;
	sub_821957B0(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f6,f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f9.f64)));
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bge cr6,0x82195928
	if (!ctx.cr6.lt) goto loc_82195928;
loc_82195920:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821959b8
	goto loc_821959B8;
loc_82195928:
	// lfs f10,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f8,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f9,f7,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f9.f64)));
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x82195920
	if (!ctx.cr6.gt) goto loc_82195920;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,560
	ctx.r11.s64 = 560;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82195970:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfsx f10,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f8,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f10,f10,f13,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bdnz 0x82195970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82195970;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821959B8:
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

DEFINE_REX_FUNC(sub_821A0430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821A0438;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A0458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0468:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a0468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0468;
	// lwz r31,44(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a0524
	if (ctx.cr6.eq) goto loc_821A0524;
	// addi r30,r30,120
	r30.s64 = r30.s64 + 120;
loc_821A0484:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A049C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821a049c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A049C;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216d040
	ctx.lr = 0x821A04B4;
	sub_8216D040(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821263d8
	ctx.lr = 0x821A04C0;
	sub_821263D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823fbf60
	ctx.lr = 0x821A04D0;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A04E0:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a04e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A04E0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821A0508;
	sub_821884B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5c80
	ctx.lr = 0x821A0518;
	sub_821D5C80(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821a0484
	if (!ctx.cr6.eq) goto loc_821A0484;
loc_821A0524:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A6B78) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// addi r11,r11,-25236
	ctx.r11.s64 = ctx.r11.s64 + -25236;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8212aaa0
	ctx.lr = 0x821A6BA8;
	sub_8212AAA0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x8269ce98
	ctx.lr = 0x821A6BB0;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821780e8
	ctx.lr = 0x821A6BB8;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6bc8
	if (ctx.cr0.eq) goto loc_821A6BC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A6BC8;
	sub_8269CE98(ctx, base);
loc_821A6BC8:
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

DEFINE_REX_FUNC(sub_821A8A58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,93(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821a8a78
	if (!ctx.cr0.eq) goto loc_821A8A78;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_821A8A78:
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
	// bne cr6,0x821a8a98
	if (!ctx.cr6.eq) goto loc_821A8A98;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x821a8ab4
	goto loc_821A8AB4;
loc_821A8A98:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821a8ab0
	if (!ctx.cr6.eq) goto loc_821A8AB0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x821a8ab4
	goto loc_821A8AB4;
loc_821A8AB0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_821A8AB4:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB6F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15280
	ctx.r3.s64 = ctx.r11.s64 + -15280;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ABE50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15264
	ctx.r3.s64 = ctx.r11.s64 + -15264;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC658) {
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
	// lwz r4,104(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AC680;
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

DEFINE_REX_FUNC(sub_821ADED8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15232
	ctx.r3.s64 = ctx.r11.s64 + -15232;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE880) {
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
	// lwz r3,196(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821AE8A4;
	sub_8269D1B8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x8269d1b8
	ctx.lr = 0x821AE8AC;
	sub_8269D1B8(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x8269d1b8
	ctx.lr = 0x821AE8B4;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821AE8BC;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae8cc
	if (ctx.cr0.eq) goto loc_821AE8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AE8CC;
	sub_8269CE98(ctx, base);
loc_821AE8CC:
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

DEFINE_REX_FUNC(sub_821B13A0) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

DEFINE_REX_FUNC(sub_821B2D78) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B2E78) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x821B2E80;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x82178268
	ctx.lr = 0x821B2EA4;
	sub_82178268(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r11,r9,-14552
	ctx.r11.s64 = ctx.r9.s64 + -14552;
	// addi r9,r8,-18396
	ctx.r9.s64 = ctx.r8.s64 + -18396;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r24,140(r31)
	REX_STORE_U32(r31.u32 + 140, r24.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r11,r7,-22264
	ctx.r11.s64 = ctx.r7.s64 + -22264;
	// addi r10,r10,-22216
	ctx.r10.s64 = ctx.r10.s64 + -22216;
	// addi r8,r6,-22224
	ctx.r8.s64 = ctx.r6.s64 + -22224;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r9,r5,-22212
	ctx.r9.s64 = ctx.r5.s64 + -22212;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// addi r18,r31,120
	r18.s64 = r31.s64 + 120;
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// addi r10,r31,136
	ctx.r10.s64 = r31.s64 + 136;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821B2F10:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b2f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B2F10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r24,192(r31)
	REX_STORE_U8(r31.u32 + 192, r24.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r24,193(r31)
	REX_STORE_U8(r31.u32 + 193, r24.u8);
	// addi r20,r11,16592
	r20.s64 = ctx.r11.s64 + 16592;
	// stw r24,196(r31)
	REX_STORE_U32(r31.u32 + 196, r24.u32);
	// stw r24,200(r31)
	REX_STORE_U32(r31.u32 + 200, r24.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r24,204(r31)
	REX_STORE_U8(r31.u32 + 204, r24.u8);
	// addi r19,r31,192
	r19.s64 = r31.s64 + 192;
	// stw r24,208(r31)
	REX_STORE_U32(r31.u32 + 208, r24.u32);
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// lfs f30,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r27,r31,164
	r27.s64 = r31.s64 + 164;
	// lfs f0,700(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r31,168
	r26.s64 = r31.s64 + 168;
	// lfs f31,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r25,r31,172
	r25.s64 = r31.s64 + 172;
	// lfs f13,88(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r31,176
	r23.s64 = r31.s64 + 176;
	// lfs f12,228(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// addi r22,r31,180
	r22.s64 = r31.s64 + 180;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r21,r31,184
	r21.s64 = r31.s64 + 184;
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f30,168(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B2F94;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b2fc4
	if (ctx.cr0.eq) goto loc_821B2FC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-22488
	ctx.r4.s64 = ctx.r11.s64 + -22488;
	// bl 0x82120600
	ctx.lr = 0x821B2FAC;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B2FC0;
	sub_82196BA8(ctx, base);
	// b 0x821b2fc8
	goto loc_821B2FC8;
loc_821B2FC4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B2FC8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B2FDC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b2ff8
	if (ctx.cr0.eq) goto loc_821B2FF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B2FF8;
	sub_82120AC0(ctx, base);
loc_821B2FF8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B3000;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b3030
	if (ctx.cr0.eq) goto loc_821B3030;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-20952
	ctx.r4.s64 = ctx.r11.s64 + -20952;
	// bl 0x82120600
	ctx.lr = 0x821B3018;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821B302C;
	sub_82196BA8(ctx, base);
	// b 0x821b3034
	goto loc_821B3034;
loc_821B3030:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B3034:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B3044;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3060
	if (ctx.cr0.eq) goto loc_821B3060;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B3060;
	sub_82120AC0(ctx, base);
loc_821B3060:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B3068;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b3098
	if (ctx.cr0.eq) goto loc_821B3098;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-22472
	ctx.r4.s64 = ctx.r11.s64 + -22472;
	// bl 0x82120600
	ctx.lr = 0x821B3080;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B3094;
	sub_82196BA8(ctx, base);
	// b 0x821b309c
	goto loc_821B309C;
loc_821B3098:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B309C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B30AC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b30c8
	if (ctx.cr0.eq) goto loc_821B30C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B30C8;
	sub_82120AC0(ctx, base);
loc_821B30C8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B30E0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b3110
	if (ctx.cr0.eq) goto loc_821B3110;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-22460
	ctx.r4.s64 = ctx.r11.s64 + -22460;
	// bl 0x82120600
	ctx.lr = 0x821B30F8;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821B310C;
	sub_82196BA8(ctx, base);
	// b 0x821b3114
	goto loc_821B3114;
loc_821B3110:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B3114:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B3124;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B3130;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B3138;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3160
	if (ctx.cr0.eq) goto loc_821B3160;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-13900
	ctx.r9.s64 = ctx.r9.s64 + -13900;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b3164
	goto loc_821B3164;
loc_821B3160:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821B3164:
	// rlwinm. r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r24,33(r29)
	REX_STORE_U8(r29.u32 + 33, r24.u8);
	// beq 0x821b3188
	if (ctx.cr0.eq) goto loc_821B3188;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B3188;
	sub_82120AC0(ctx, base);
loc_821B3188:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B3190;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b31c0
	if (ctx.cr0.eq) goto loc_821B31C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-23528
	ctx.r4.s64 = ctx.r11.s64 + -23528;
	// bl 0x82120600
	ctx.lr = 0x821B31A8;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B31BC;
	sub_82196BA8(ctx, base);
	// b 0x821b31c4
	goto loc_821B31C4;
loc_821B31C0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B31C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B31D4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b31f0
	if (ctx.cr0.eq) goto loc_821B31F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B31F0;
	sub_82120AC0(ctx, base);
loc_821B31F0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B31F8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b3228
	if (ctx.cr0.eq) goto loc_821B3228;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-22448
	ctx.r4.s64 = ctx.r11.s64 + -22448;
	// bl 0x82120600
	ctx.lr = 0x821B3210;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B3224;
	sub_82196BA8(ctx, base);
	// b 0x821b322c
	goto loc_821B322C;
loc_821B3228:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B322C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B323C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3258
	if (ctx.cr0.eq) goto loc_821B3258;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821B3258;
	sub_82120AC0(ctx, base);
loc_821B3258:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B3260;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b3290
	if (ctx.cr0.eq) goto loc_821B3290;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-22436
	ctx.r4.s64 = ctx.r11.s64 + -22436;
	// bl 0x82120600
	ctx.lr = 0x821B3278;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821B328C;
	sub_82196BA8(ctx, base);
	// b 0x821b3294
	goto loc_821B3294;
loc_821B3290:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B3294:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B32A4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b32c0
	if (ctx.cr0.eq) goto loc_821B32C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821B32C0;
	sub_82120AC0(ctx, base);
loc_821B32C0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B32C8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b32f8
	if (ctx.cr0.eq) goto loc_821B32F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-24012
	ctx.r4.s64 = ctx.r11.s64 + -24012;
	// bl 0x82120600
	ctx.lr = 0x821B32E0;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82191600
	ctx.lr = 0x821B32F4;
	sub_82191600(ctx, base);
	// b 0x821b32fc
	goto loc_821B32FC;
loc_821B32F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821B32FC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B330C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3324
	if (ctx.cr0.eq) goto loc_821B3324;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x821B3324;
	sub_82120AC0(ctx, base);
loc_821B3324:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B332C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3344
	if (ctx.cr0.eq) goto loc_821B3344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B333C;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b3348
	goto loc_821B3348;
loc_821B3344:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821B3348:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B3358;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B3360;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b338c
	if (ctx.cr0.eq) goto loc_821B338C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,15792
	ctx.r11.s64 = ctx.r11.s64 + 15792;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82233df8
	ctx.lr = 0x821B3384;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b3390
	goto loc_821B3390;
loc_821B338C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821B3390:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B339C;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821B33A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b33c4
	if (ctx.cr0.eq) goto loc_821B33C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821B33BC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b33c8
	goto loc_821B33C8;
loc_821B33C4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821B33C8:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B33D4;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821B33DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b33f8
	if (ctx.cr0.eq) goto loc_821B33F8;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821B33F0;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b33fc
	goto loc_821B33FC;
loc_821B33F8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821B33FC:
	// stw r4,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B3408;
	sub_821D3988(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x821a1ff8
	ctx.lr = 0x821B3414;
	sub_821A1FF8(ctx, base);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,8(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// li r3,108
	ctx.r3.s64 = 108;
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// ld r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// ld r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// bl 0x822f6280
	ctx.lr = 0x821B3494;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-19528
	r28.s64 = ctx.r11.s64 + -19528;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821b3514
	if (ctx.cr0.eq) goto loc_821B3514;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// addi r11,r11,14472
	ctx.r11.s64 = ctx.r11.s64 + 14472;
	// addi r4,r10,-22424
	ctx.r4.s64 = ctx.r10.s64 + -22424;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821B34D8;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B34E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3504
	if (ctx.cr0.eq) goto loc_821B3504;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b3508
	goto loc_821B3508;
loc_821B3504:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821B3508:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821b3518
	goto loc_821B3518;
loc_821B3514:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821B3518:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821B3530;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821B3538;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b35a8
	if (ctx.cr0.eq) goto loc_821B35A8;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// addi r11,r11,14832
	ctx.r11.s64 = ctx.r11.s64 + 14832;
	// addi r4,r10,-22416
	ctx.r4.s64 = ctx.r10.s64 + -22416;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821B356C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B3578;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3598
	if (ctx.cr0.eq) goto loc_821B3598;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b359c
	goto loc_821B359C;
loc_821B3598:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821B359C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821b35ac
	goto loc_821B35AC;
loc_821B35A8:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821B35AC:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821B35C4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821B35CC;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821b3604
	if (ctx.cr0.eq) goto loc_821B3604;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-22408
	ctx.r4.s64 = ctx.r11.s64 + -22408;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821B35F8;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821b3608
	goto loc_821B3608;
loc_821B3604:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821B3608:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821B3620;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821B3628;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b3658
	if (ctx.cr0.eq) goto loc_821B3658;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-22400
	ctx.r4.s64 = ctx.r11.s64 + -22400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821B364C;
	sub_821DBB48(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821b365c
	goto loc_821B365C;
loc_821B3658:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821B365C:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x821B3674;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_821EBAA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821EBAB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// bl 0x821a5c88
	ctx.lr = 0x821EBAC8;
	sub_821A5C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bl 0x821613d8
	ctx.lr = 0x821EBAD8;
	sub_821613D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r29,128
	ctx.r4.s64 = r29.s64 + 128;
	// bl 0x821613d8
	ctx.lr = 0x821EBAE8;
	sub_821613D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821EBAF8;
	sub_821613D8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ebb60
	if (ctx.cr0.eq) goto loc_821EBB60;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x821EBB10;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ebb4c
	if (ctx.cr0.eq) goto loc_821EBB4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x821EBB40;
	sub_82120AC0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// b 0x821ebb50
	goto loc_821EBB50;
loc_821EBB4C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821EBB50:
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5c88
	ctx.lr = 0x821EBB60;
	sub_821A5C88(ctx, base);
loc_821EBB60:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821EBB70;
	sub_821613D8(ctx, base);
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d8220
	ctx.lr = 0x821EBB80;
	sub_821D8220(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ebbbc
	goto loc_821EBBBC;
loc_821EBB8C:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x821EBB94;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ebba4
	if (ctx.cr0.eq) goto loc_821EBBA4;
	// bl 0x821eb768
	ctx.lr = 0x821EBBA0;
	sub_821EB768(ctx, base);
	// b 0x821ebba8
	goto loc_821EBBA8;
loc_821EBBA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_821EBBA8:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821ebaa8
	ctx.lr = 0x821EBBB4;
	sub_821EBAA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821EBBBC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ebb8c
	if (!ctx.cr6.eq) goto loc_821EBB8C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821F5EC8) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f5f0c
	if (ctx.cr6.eq) goto loc_821F5F0C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F5F08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_821F5F0C:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
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

DEFINE_REX_FUNC(sub_821F8F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821F8F50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f8fa4
	if (!ctx.cr6.gt) goto loc_821F8FA4;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
loc_821F8F70:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F8F7C;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f8f70
	if (ctx.cr6.lt) goto loc_821F8F70;
loc_821F8FA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821FB228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821FB230;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb268
	if (ctx.cr6.eq) goto loc_821FB268;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,211
	ctx.r5.s64 = 211;
	// bl 0x821231d0
	ctx.lr = 0x821FB268;
	sub_821231D0(ctx, base);
loc_821FB268:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// bne cr6,0x821fb288
	if (!ctx.cr6.eq) goto loc_821FB288;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_821FB288:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x821fb29c
	if (!ctx.cr6.eq) goto loc_821FB29C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_821FB29C:
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x821fbf98
	ctx.lr = 0x821FB2B0;
	sub_821FBF98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821FECC0) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821fecf8
	if (!ctx.cr6.lt) goto loc_821FECF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821fecfc
	if (!ctx.cr6.gt) goto loc_821FECFC;
loc_821FECF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FECFC:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x821fedbc
	if (ctx.cr0.eq) goto loc_821FEDBC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// subf r7,r10,r30
	ctx.r7.u64 = r30.u64 - ctx.r10.u64;
	// divw r30,r7,r11
	r30.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// bne cr6,0x821fed8c
	if (!ctx.cr6.eq) goto loc_821FED8C;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lis r7,5461
	ctx.r7.s64 = 357892096;
	// divw r9,r9,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// ori r7,r7,21844
	ctx.r7.u64 = ctx.r7.u64 | 21844;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821fed44
	if (!ctx.cr6.gt) goto loc_821FED44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x821FED44;
	sub_822F6020(ctx, base);
loc_821FED44:
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821fed8c
	if (!ctx.cr6.gt) goto loc_821FED8C;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821fed78
	if (ctx.cr6.lt) goto loc_821FED78;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_821FED78:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821fed84
	if (!ctx.cr6.lt) goto loc_821FED84;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_821FED84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fee80
	ctx.lr = 0x821FED8C;
	sub_821FEE80(ctx, base);
loc_821FED8C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r9,r30,12
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fee58
	if (ctx.cr6.eq) goto loc_821FEE58;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x821fee54
	goto loc_821FEE54;
loc_821FEDBC:
	// bne cr6,0x821fee34
	if (!ctx.cr6.eq) goto loc_821FEE34;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r7,5461
	ctx.r7.s64 = 357892096;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// ori r7,r7,21844
	ctx.r7.u64 = ctx.r7.u64 | 21844;
	// divw r9,r9,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821fedec
	if (!ctx.cr6.gt) goto loc_821FEDEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x821FEDEC;
	sub_822F6020(ctx, base);
loc_821FEDEC:
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821fee34
	if (!ctx.cr6.gt) goto loc_821FEE34;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821fee20
	if (ctx.cr6.lt) goto loc_821FEE20;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_821FEE20:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821fee2c
	if (!ctx.cr6.lt) goto loc_821FEE2C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_821FEE2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fee80
	ctx.lr = 0x821FEE34;
	sub_821FEE80(ctx, base);
loc_821FEE34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fee58
	if (ctx.cr6.eq) goto loc_821FEE58;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_821FEE54:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_821FEE58:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
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

DEFINE_REX_FUNC(sub_8220AA08) {
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
	ctx.lr = 0x8220AA10;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x8220AA2C;
	sub_82178268(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r11,r11,32656
	ctx.r11.s64 = ctx.r11.s64 + 32656;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// lfs f0,-7264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r26,r31,124
	r26.s64 = r31.s64 + 124;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stb r27,124(r31)
	REX_STORE_U8(r31.u32 + 124, r27.u8);
	// bl 0x822f6280
	ctx.lr = 0x8220AA5C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220aac4
	if (ctx.cr0.eq) goto loc_8220AAC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8220AA88;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220aab4
	if (ctx.cr0.eq) goto loc_8220AAB4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-22024
	ctx.r10.s64 = ctx.r10.s64 + -22024;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220aab8
	goto loc_8220AAB8;
loc_8220AAB4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8220AAB8:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8220aac8
	goto loc_8220AAC8;
loc_8220AAC4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8220AAC8:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8220AAD4;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8220AADC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220aaf4
	if (ctx.cr0.eq) goto loc_8220AAF4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8220b998
	ctx.lr = 0x8220AAEC;
	sub_8220B998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8220aaf8
	goto loc_8220AAF8;
loc_8220AAF4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8220AAF8:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8220AB04;
	sub_821D3988(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x8220AB0C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220ab3c
	if (ctx.cr0.eq) goto loc_8220AB3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x8220AB24;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x8220AB38;
	sub_821D13F8(ctx, base);
	// b 0x8220ab40
	goto loc_8220AB40;
loc_8220AB3C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8220AB40:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8220AB54;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ab70
	if (ctx.cr0.eq) goto loc_8220AB70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8220AB70;
	sub_82120AC0(ctx, base);
loc_8220AB70:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8220AB78;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220aba8
	if (ctx.cr0.eq) goto loc_8220ABA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// bl 0x82120600
	ctx.lr = 0x8220AB90;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x8220ABA4;
	sub_82191600(ctx, base);
	// b 0x8220abac
	goto loc_8220ABAC;
loc_8220ABA8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8220ABAC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8220ABBC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220abd4
	if (ctx.cr0.eq) goto loc_8220ABD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220ABD4;
	sub_82120AC0(ctx, base);
loc_8220ABD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x8220ABE4;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220ABF4;
	sub_82180E18(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8220AC08;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x82120600
	ctx.lr = 0x8220AC18;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220AC24;
	sub_82180E18(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8220AC38;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8221ED08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221ed18
	if (!ctx.cr6.eq) goto loc_8221ED18;
	// li r11,100
	ctx.r11.s64 = 100;
loc_8221ED18:
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221ed28
	if (!ctx.cr6.eq) goto loc_8221ED28;
	// li r10,100
	ctx.r10.s64 = 100;
loc_8221ED28:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221ed44
	if (!ctx.cr6.eq) goto loc_8221ED44;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8221ed44
	if (ctx.cr0.eq) goto loc_8221ED44;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
loc_8221ED44:
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

DEFINE_REX_FUNC(sub_82222758) {
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
	ctx.lr = 0x82222760;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r25,16(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822e6ff8
	ctx.lr = 0x8222278C;
	sub_822E6FF8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82222844
	if (ctx.cr0.eq) goto loc_82222844;
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x826a1e70
	ctx.lr = 0x822227A4;
	sub_826A1E70(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822227b4
	if (ctx.cr0.eq) goto loc_822227B4;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_822227B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// lwz r6,112(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r9,112
	ctx.r9.s64 = 112;
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
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
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f6,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f7,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
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
	ctx.lr = 0x82222844;
	sub_82174318(ctx, base);
loc_82222844:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82229C40) {
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
	// blt cr6,0x82229c74
	if (ctx.cr6.lt) goto loc_82229C74;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82229C74:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82229C78:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229c78
	if (!ctx.cr6.eq) goto loc_82229C78;
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
	ctx.lr = 0x82229CA4;
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
	ctx.lr = 0x82229CBC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x8216bc98
	ctx.lr = 0x82229CCC;
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

DEFINE_REX_FUNC(sub_8222C8E0) {
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
	// lbz r11,544(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 544);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c95c
	if (ctx.cr0.eq) goto loc_8222C95C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c95c
	if (ctx.cr0.eq) goto loc_8222C95C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222C920:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8222c920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C920;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x8222C93C;
	sub_821884B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lfs f1,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c9318
	ctx.lr = 0x8222C950;
	sub_821C9318(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a4ca0
	ctx.lr = 0x8222C95C;
	sub_821A4CA0(ctx, base);
loc_8222C95C:
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

DEFINE_REX_FUNC(sub_82231B48) {
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
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82231b9c
	if (!ctx.cr6.eq) goto loc_82231B9C;
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82231b9c
	if (!ctx.cr6.eq) goto loc_82231B9C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-20212
	ctx.r4.s64 = ctx.r11.s64 + -20212;
	// addi r3,r10,-20072
	ctx.r3.s64 = ctx.r10.s64 + -20072;
	// li r5,452
	ctx.r5.s64 = 452;
	// bl 0x821231d0
	ctx.lr = 0x82231B9C;
	sub_821231D0(ctx, base);
loc_82231B9C:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_82237188) {
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
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822371B4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822371e8
	ctx.lr = 0x822371BC;
	sub_822371E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822371cc
	if (ctx.cr0.eq) goto loc_822371CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822371CC;
	sub_8269CE98(ctx, base);
loc_822371CC:
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

DEFINE_REX_FUNC(sub_82238FA8) {
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
	ctx.lr = 0x82238FB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x82238FCC;
	sub_821B2D80(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// blt 0x82238ff4
	if (ctx.cr0.lt) goto loc_82238FF4;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223900c
	if (ctx.cr6.lt) goto loc_8223900C;
loc_82238FF4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-18236
	ctx.r4.s64 = ctx.r11.s64 + -18236;
	// addi r3,r10,-17904
	ctx.r3.s64 = ctx.r10.s64 + -17904;
	// li r5,284
	ctx.r5.s64 = 284;
	// bl 0x821231d0
	ctx.lr = 0x8223900C;
	sub_821231D0(ctx, base);
loc_8223900C:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r31,3836
	r28.s64 = r31.s64 + 3836;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82158750
	ctx.lr = 0x82239068;
	sub_82158750(ctx, base);
	// addi r27,r31,3852
	r27.s64 = r31.s64 + 3852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82158750
	ctx.lr = 0x82239078;
	sub_82158750(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x822390a8
	if (!ctx.cr6.gt) goto loc_822390A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8223908C:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223908c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223908C;
loc_822390A8:
	// lwz r11,3868(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3868);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822390c0
	if (ctx.cr6.eq) goto loc_822390C0;
	// lwz r11,3872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3872);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822390c8
	if (!ctx.cr6.eq) goto loc_822390C8;
loc_822390C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223a030
	ctx.lr = 0x822390C8;
	sub_8223A030(ctx, base);
loc_822390C8:
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82239118
	if (!ctx.cr6.lt) goto loc_82239118;
	// mulli r28,r29,320
	r28.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(320));
loc_822390DC:
	// lwz r11,3828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3828);
	// add r30,r28,r11
	r30.u64 = r28.u64 + ctx.r11.u64;
	// addi r4,r30,320
	ctx.r4.s64 = r30.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82239150
	ctx.lr = 0x822390F0;
	sub_82239150(ctx, base);
	// lwz r11,624(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 624);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,320
	r28.s64 = r28.s64 + 320;
	// stw r11,304(r30)
	REX_STORE_U32(r30.u32 + 304, ctx.r11.u32);
	// lbz r11,628(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 628);
	// stb r11,308(r30)
	REX_STORE_U8(r30.u32 + 308, ctx.r11.u8);
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822390dc
	if (ctx.cr6.lt) goto loc_822390DC;
loc_82239118:
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,3828(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3828);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r11,320
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(320));
	// stw r11,3820(r31)
	REX_STORE_U32(r31.u32 + 3820, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82245B00) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82245bc0
	if (ctx.cr0.eq) goto loc_82245BC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82245B34:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82245b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245B34;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x82245B50;
	sub_821884B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823fbf60
	ctx.lr = 0x82245B64;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82245B74:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82245b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245B74;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 6096);
	// lfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82137838
	ctx.lr = 0x82245BC0;
	sub_82137838(ctx, base);
loc_82245BC0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224D8F0) {
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
	// lbz r11,658(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 658);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224d980
	if (ctx.cr0.eq) goto loc_8224D980;
	// lfs f0,660(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f12,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f13,660(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8224dab0
	if (!ctx.cr6.eq) goto loc_8224DAB0;
	// lwz r11,472(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r11,436(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// lfs f13,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8224dab0
	if (!ctx.cr6.gt) goto loc_8224DAB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,658(r3)
	REX_STORE_U8(ctx.r3.u32 + 658, ctx.r11.u8);
	// b 0x8224dab0
	goto loc_8224DAB0;
loc_8224D980:
	// lwz r11,616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8224d994
	if (!ctx.cr6.eq) goto loc_8224D994;
	// lbz r11,605(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 605);
loc_8224D994:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224dab0
	if (ctx.cr0.eq) goto loc_8224DAB0;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,472(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f11,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f10,264(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,320(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// addi r4,r10,256
	ctx.r4.s64 = ctx.r10.s64 + 256;
	// ld r31,328(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// lfs f9,368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,436(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 436);
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// lfs f8,372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// lfs f7,376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f7.f64 = double(temp.f32);
	// std r31,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r31.u64);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r3,320
	ctx.r8.s64 = ctx.r3.s64 + 320;
	// lfs f5,240(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f3,244(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f4.f64)));
	// lfs f2,248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	f31.f64 = double(temp.f32);
	// lfs f30,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	f30.f64 = double(temp.f32);
	// lfs f29,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	f29.f64 = double(temp.f32);
	// fmadds f6,f2,f6,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmsubs f13,f11,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f11,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f13,320(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// fadds f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 + ctx.f11.f64));
	// stfs f13,324(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// stfs f12,660(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// stb r6,658(r3)
	REX_STORE_U8(ctx.r3.u32 + 658, ctx.r6.u8);
	// lwz r11,340(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8224daa8
	if (ctx.cr6.lt) goto loc_8224DAA8;
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_8224DAA8:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8224df90
	ctx.lr = 0x8224DAB0;
	sub_8224DF90(ctx, base);
loc_8224DAB0:
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

DEFINE_REX_FUNC(sub_82261828) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82261830;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,-608
	r30.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x82261864
	if (!ctx.cr6.eq) goto loc_82261864;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x82261864;
	sub_821231D0(ctx, base);
loc_82261864:
	// cmplwi cr6,r29,14
	ctx.cr6.compare<uint32_t>(r29.u32, 14, ctx.xer);
	// bge cr6,0x82261880
	if (!ctx.cr6.lt) goto loc_82261880;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82261880;
	sub_821231D0(ctx, base);
loc_82261880:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32782
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32782, ctx.xer);
	// beq cr6,0x822618a0
	if (ctx.cr6.eq) goto loc_822618A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x822618A0;
	sub_821231D0(ctx, base);
loc_822618A0:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r30,10(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 10);
	// ldx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x822618d0
	if (!ctx.cr6.eq) goto loc_822618D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-364
	ctx.r3.s64 = ctx.r10.s64 + -364;
	// li r5,471
	ctx.r5.s64 = 471;
	// bl 0x821231d0
	ctx.lr = 0x822618D0;
	sub_821231D0(ctx, base);
loc_822618D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,192
	ctx.r3.s64 = r28.s64 + 192;
	// bl 0x8228c390
	ctx.lr = 0x822618DC;
	sub_8228C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822618f0
	if (ctx.cr0.eq) goto loc_822618F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, r30.u32);
	// stb r11,100(r3)
	REX_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
loc_822618F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82266908) {
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
	ctx.lr = 0x82266910;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82266a44
	if (ctx.cr6.eq) goto loc_82266A44;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r25,r11,29788
	r25.u64 = ctx.r11.u64 | 29788;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x822669c4
	goto loc_822669C4;
loc_82266940:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82266a44
	if (ctx.cr6.eq) goto loc_82266A44;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822665a8
	ctx.lr = 0x82266954;
	sub_822665A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822669c0
	if (ctx.cr0.eq) goto loc_822669C0;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r25
	ctx.r9.u64 = r25.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x822669f4
	if (ctx.cr6.lt) goto loc_822669F4;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r9,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x822669c4
	goto loc_822669C4;
loc_822669C0:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_822669C4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82266940
	if (!ctx.cr6.eq) goto loc_82266940;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82266a44
	if (ctx.cr6.eq) goto loc_82266A44;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r9,r10,r25
	ctx.r9.u64 = r25.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82266a00
	if (!ctx.cr6.lt) goto loc_82266A00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x822669F4;
	sub_822F6020(ctx, base);
loc_822669F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82266A00;
	sub_822F6020(ctx, base);
loc_82266A00:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82266A44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8226FF98) {
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
	ctx.lr = 0x8226FFA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226FFB8;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226FFBC;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x8215f670
	ctx.lr = 0x8226FFCC;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226FFD4;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r30,8(r27)
	REX_STORE_U32(r27.u32 + 8, r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f670
	ctx.lr = 0x8226FFF0;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226FFF8;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82272050) {
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
	ctx.lr = 0x82272058;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// addi r31,r3,648
	r31.s64 = ctx.r3.s64 + 648;
	// li r25,0
	r25.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82272108
	if (!ctx.cr0.gt) goto loc_82272108;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-17296
	r27.s64 = ctx.r11.s64 + -17296;
	// addi r26,r10,-17164
	r26.s64 = ctx.r10.s64 + -17164;
loc_82272090:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r24,r28,r11
	r24.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82273438
	ctx.lr = 0x822720A4;
	sub_82273438(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x822720B0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822720B4;
	sub_8215FA30(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x822720C4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822720C8;
	sub_8215FA30(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822720E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272114
	if (!ctx.cr0.eq) goto loc_82272114;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82272090
	if (ctx.cr6.lt) goto loc_82272090;
loc_82272108:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227210C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82272114:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227210c
	goto loc_8227210C;
}

DEFINE_REX_FUNC(sub_82277770) {
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
	ctx.lr = 0x82277778;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822777d8
	if (!ctx.cr0.eq) goto loc_822777D8;
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
loc_822777A8:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822777c8
	if (ctx.cr0.eq) goto loc_822777C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822777cc
	goto loc_822777CC;
loc_822777C8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822777CC:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822777a8
	if (ctx.cr0.eq) goto loc_822777A8;
loc_822777D8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x8227782c
	if (ctx.cr0.eq) goto loc_8227782C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82277824
	if (!ctx.cr6.eq) goto loc_82277824;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82277800:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82277868
	ctx.lr = 0x82277810;
	sub_82277868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8227785c
	goto loc_8227785C;
loc_82277824:
	// bl 0x8216a6c8
	ctx.lr = 0x82277828;
	sub_8216A6C8(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8227782C:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82277848
	if (!ctx.cr6.lt) goto loc_82277848;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82277800
	goto loc_82277800;
loc_82277848:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82277850;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8227785C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8227E990) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8227e9c0
	if (ctx.cr6.lt) goto loc_8227E9C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e9d8
	if (ctx.cr6.lt) goto loc_8227E9D8;
loc_8227E9C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,144
	ctx.r3.s64 = ctx.r10.s64 + 144;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x821231d0
	ctx.lr = 0x8227E9D8;
	sub_821231D0(ctx, base);
loc_8227E9D8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227e9f0
	if (!ctx.cr6.eq) goto loc_8227E9F0;
loc_8227E9E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227E9F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8227ea04
	if (ctx.cr6.lt) goto loc_8227EA04;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ea1c
	if (ctx.cr6.lt) goto loc_8227EA1C;
loc_8227EA04:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8227EA1C;
	sub_821231D0(ctx, base);
loc_8227EA1C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x8227e9e4
	if (!ctx.cr6.eq) goto loc_8227E9E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227eadc
	if (ctx.cr6.eq) goto loc_8227EADC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227ead0
	if (ctx.cr6.eq) goto loc_8227EAD0;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227eac4
	if (ctx.cr6.eq) goto loc_8227EAC4;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227eab8
	if (ctx.cr6.eq) goto loc_8227EAB8;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227eaac
	if (ctx.cr6.eq) goto loc_8227EAAC;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8227eaa0
	if (ctx.cr6.eq) goto loc_8227EAA0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227e9e4
	if (!ctx.cr6.eq) goto loc_8227E9E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// b 0x8227eab0
	goto loc_8227EAB0;
loc_8227EAA0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227EAAC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_8227EAB0:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227EAB8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227EAC4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227EAD0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8227eae4
	goto loc_8227EAE4;
loc_8227EADC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
loc_8227EAE4:
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

DEFINE_REX_FUNC(sub_82289FF8) {
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
	ctx.lr = 0x8228A000;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8228a128
	if (!ctx.cr0.gt) goto loc_8228A128;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// addi r28,r9,1624
	r28.s64 = ctx.r9.s64 + 1624;
	// addi r27,r10,-26752
	r27.s64 = ctx.r10.s64 + -26752;
	// addi r26,r11,-27048
	r26.s64 = ctx.r11.s64 + -27048;
loc_8228A048:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a0f8
	if (ctx.cr0.eq) goto loc_8228A0F8;
	// lwz r3,6080(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6080);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,128(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a0f8
	if (!ctx.cr0.eq) goto loc_8228A0F8;
	// lwz r11,88(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228a0f8
	if (ctx.cr6.eq) goto loc_8228A0F8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228A0C0;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228A0C8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8228a0ec
	if (!ctx.cr6.eq) goto loc_8228A0EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8228a0f0
	goto loc_8228A0F0;
loc_8228A0EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228A0F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a11c
	if (ctx.cr6.eq) goto loc_8228A11C;
loc_8228A0F8:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8228a048
	if (ctx.cr6.lt) goto loc_8228A048;
	// b 0x8228a128
	goto loc_8228A128;
loc_8228A11C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,88(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 88);
	// bl 0x8228d508
	ctx.lr = 0x8228A128;
	sub_8228D508(ctx, base);
loc_8228A128:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822902E0) {
	REX_FUNC_PROLOGUE();
	// stw r4,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// stw r5,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822904F0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x822904F8;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// beq 0x82290588
	if (ctx.cr0.eq) goto loc_82290588;
	// lwz r3,204(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 204);
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,-19388(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -19388);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lfs f0,-19388(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -19388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229056C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82290580
	if (ctx.cr6.lt) goto loc_82290580;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82290580:
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// b 0x82290590
	goto loc_82290590;
loc_82290588:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f30,-19388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19388);
	f30.f64 = double(temp.f32);
loc_82290590:
	// lfs f0,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lfs f13,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// blt cr6,0x822905b0
	if (ctx.cr6.lt) goto loc_822905B0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822905B0:
	// lwz r11,216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 216);
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822905e0
	if (ctx.cr6.eq) goto loc_822905E0;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x822905e8
	goto loc_822905E8;
loc_822905E0:
	// li r3,816
	ctx.r3.s64 = 816;
	// bl 0x822c1a70
	ctx.lr = 0x822905E8;
	sub_822C1A70(ctx, base);
loc_822905E8:
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x8229065c
	if (ctx.cr6.eq) goto loc_8229065C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_82290614:
	// stfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stw r28,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, r28.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stb r28,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, r28.u8);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stwu r28,192(r11)
	ea = 192 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82290614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82290614;
	// stfs f30,796(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 796, temp.u32);
	// stw r31,784(r3)
	REX_STORE_U32(ctx.r3.u32 + 784, r31.u32);
	// stfs f31,800(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 800, temp.u32);
	// stw r29,788(r3)
	REX_STORE_U32(ctx.r3.u32 + 788, r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,792(r3)
	REX_STORE_U32(ctx.r3.u32 + 792, r28.u32);
	// b 0x82290660
	goto loc_82290660;
loc_8229065C:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82290660:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// stw r11,804(r27)
	REX_STORE_U32(r27.u32 + 804, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82290734
	if (!ctx.cr6.eq) goto loc_82290734;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229068c
	if (!ctx.cr0.eq) goto loc_8229068C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8229068C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x82290734
	if (!ctx.cr6.lt) goto loc_82290734;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822906ac
	if (ctx.cr6.eq) goto loc_822906AC;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822906A4;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822906b0
	goto loc_822906B0;
loc_822906AC:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822906B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822906e8
	if (!ctx.cr6.gt) goto loc_822906E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822906C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822906dc
	if (ctx.cr6.eq) goto loc_822906DC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822906DC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822906c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822906C8;
loc_822906E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290728
	if (ctx.cr6.eq) goto loc_82290728;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82290724
	if (ctx.cr0.eq) goto loc_82290724;
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
	ctx.lr = 0x82290724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290724:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_82290728:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r26,16(r31)
	REX_STORE_U8(r31.u32 + 16, r26.u8);
loc_82290734:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229074c
	if (ctx.cr0.eq) goto loc_8229074C;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_8229074C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822A6C88) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,6640
	ctx.r11.s64 = ctx.r11.s64 + 6640;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a6e40
	ctx.lr = 0x822A6CB0;
	sub_822A6E40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
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

DEFINE_REX_FUNC(sub_822A8660) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x822A8668;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c70
	ctx.lr = 0x822A8670;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 384);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f31,f10,f13
	f31.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f30,f9,f12
	f30.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// beq 0x822a88cc
	if (ctx.cr0.eq) goto loc_822A88CC;
	// addi r4,r29,192
	ctx.r4.s64 = r29.s64 + 192;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822940c8
	ctx.lr = 0x822A86CC;
	sub_822940C8(ctx, base);
	// lfs f9,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r29,320
	ctx.r9.s64 = r29.s64 + 320;
	// lfs f12,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f0,324(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f4,356(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lfs f5,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f3,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f6,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,320(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f10,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f13.f64)));
	// lfs f1,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f4,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f12.f64)));
	// lfs f10,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// lfs f29,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	f29.f64 = double(temp.f32);
	// fmadds f7,f11,f6,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f7.f64)));
	// lfs f24,352(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 352);
	f24.f64 = double(temp.f32);
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f26,328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 328);
	f26.f64 = double(temp.f32);
	// fmr f21,f24
	f21.f64 = f24.f64;
	// lfs f28,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	f28.f64 = double(temp.f32);
	// fmuls f27,f0,f29
	f27.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f23,368(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 368);
	f23.f64 = double(temp.f32);
	// fmuls f25,f0,f28
	f25.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f20,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f20.f64 = double(temp.f32);
	// lfs f17,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	f17.f64 = double(temp.f32);
	// lfs f22,376(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 376);
	f22.f64 = double(temp.f32);
	// fmadds f13,f10,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f13.f64)));
	// lfs f19,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	f19.f64 = double(temp.f32);
	// fmr f10,f24
	ctx.f10.f64 = f24.f64;
	// lfs f21,356(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 356);
	f21.f64 = double(temp.f32);
	// fmadds f8,f8,f29,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, ctx.f3.f64)));
	// lfs f3,372(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 372);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f24,f6,f12
	ctx.f12.f64 = double(float(std::fma(f24.f64, ctx.f6.f64, ctx.f12.f64)));
	// lfs f24,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	f24.f64 = double(temp.f32);
	// fmadds f9,f26,f9,f7
	ctx.f9.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, ctx.f7.f64)));
	// lfs f7,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f4,f28,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, f28.f64, ctx.f1.f64)));
	// fmuls f24,f24,f5
	f24.f64 = double(float(f24.f64 * ctx.f5.f64));
	// lfs f1,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f14,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f14.f64 = double(temp.f32);
	// lfs f15,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f15.f64 = double(temp.f32);
	// fmadds f27,f11,f1,f27
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, f27.f64)));
	// stfs f14,80(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// lfs f18,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f18.f64 = double(temp.f32);
	// lfs f14,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f14.f64 = double(temp.f32);
	// fmadds f25,f11,f20,f25
	f25.f64 = double(float(std::fma(ctx.f11.f64, f20.f64, f25.f64)));
	// fmadds f8,f1,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f8.f64)));
	// fadds f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 + f22.f64));
	// fadds f9,f9,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 + f23.f64));
	// lfs f23,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	f23.f64 = double(temp.f32);
	// fmadds f10,f20,f10,f4
	ctx.f10.f64 = double(float(std::fma(f20.f64, ctx.f10.f64, ctx.f4.f64)));
	// lfs f4,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f17,f29,f24
	ctx.f3.f64 = double(float(std::fma(f17.f64, f29.f64, f24.f64)));
	// lfs f29,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	f29.f64 = double(temp.f32);
	// fmadds f6,f21,f19,f6
	ctx.f6.f64 = double(float(std::fma(f21.f64, f19.f64, ctx.f6.f64)));
	// lfs f21,352(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 352);
	f21.f64 = double(temp.f32);
	// fmuls f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmr f24,f17
	f24.f64 = f17.f64;
	// fmuls f23,f23,f7
	f23.f64 = double(float(f23.f64 * ctx.f7.f64));
	// fmr f22,f29
	f22.f64 = f29.f64;
	// fmr f16,f29
	f16.f64 = f29.f64;
	// fmuls f8,f30,f8
	ctx.f8.f64 = double(float(f30.f64 * ctx.f8.f64));
	// fmadds f3,f29,f1,f3
	ctx.f3.f64 = double(float(std::fma(f29.f64, ctx.f1.f64, ctx.f3.f64)));
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f17,f28,f4
	ctx.f4.f64 = double(float(std::fma(f17.f64, f28.f64, ctx.f4.f64)));
	// lfs f29,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f29.f64 = double(temp.f32);
	// fmadds f11,f11,f18,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f18.f64, ctx.f0.f64)));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f26,f5,f27
	ctx.f5.f64 = double(float(std::fma(f26.f64, ctx.f5.f64, f27.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f10,f31,f10,f8
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, ctx.f8.f64)));
	// lfs f28,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmadds f0,f21,f18,f6
	ctx.f0.f64 = double(float(std::fma(f21.f64, f18.f64, ctx.f6.f64)));
	// lfs f24,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f24.f64 = double(temp.f32);
	// fmadds f27,f17,f19,f23
	f27.f64 = double(float(std::fma(f17.f64, f19.f64, f23.f64)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmadds f2,f26,f2,f25
	ctx.f2.f64 = double(float(std::fma(f26.f64, ctx.f2.f64, f25.f64)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f30,f3
	ctx.f8.f64 = double(float(f30.f64 * ctx.f3.f64));
	// fmadds f6,f16,f20,f4
	ctx.f6.f64 = double(float(std::fma(f16.f64, f20.f64, ctx.f4.f64)));
	// fmadds f11,f26,f7,f11
	ctx.f11.f64 = double(float(std::fma(f26.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmuls f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 * ctx.f5.f64));
	// fmadds f0,f0,f15,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f15.f64, ctx.f10.f64)));
	// fmadds f4,f16,f18,f27
	ctx.f4.f64 = double(float(std::fma(f16.f64, f18.f64, f27.f64)));
	// fmadds f10,f31,f6,f8
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f8.f64)));
	// fmadds f8,f31,f2,f5
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f2.f64, ctx.f5.f64)));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmadds f12,f4,f15,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, f15.f64, ctx.f10.f64)));
	// fmadds f11,f11,f15,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f15.f64, ctx.f8.f64)));
	// fsubs f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fmuls f11,f11,f14
	ctx.f11.f64 = double(float(ctx.f11.f64 * f14.f64));
	// fmadds f11,f9,f29,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f11.f64)));
	// fmadds f1,f10,f24,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, ctx.f11.f64)));
	// fmuls f11,f29,f1
	ctx.f11.f64 = double(float(f29.f64 * ctx.f1.f64));
	// fmuls f10,f14,f1
	ctx.f10.f64 = double(float(f14.f64 * ctx.f1.f64));
	// fmuls f9,f24,f1
	ctx.f9.f64 = double(float(f24.f64 * ctx.f1.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x822a8ab8
	goto loc_822A8AB8;
loc_822A88CC:
	// addi r4,r29,256
	ctx.r4.s64 = r29.s64 + 256;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822940c8
	ctx.lr = 0x822A88D8;
	sub_822940C8(ctx, base);
	// lfs f0,324(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r29,320
	ctx.r9.s64 = r29.s64 + 320;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f9,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// lfs f6,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f11,320(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lfs f12,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f2,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f10,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,356(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f28,328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 328);
	f28.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f11,f6,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f7.f64)));
	// lfs f3,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f26,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	f26.f64 = double(temp.f32);
	// fmuls f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmadds f13,f10,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f13.f64)));
	// lfs f10,352(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	f29.f64 = double(temp.f32);
	// lfs f25,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	f25.f64 = double(temp.f32);
	// fmuls f27,f0,f29
	f27.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmadds f12,f4,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f12.f64)));
	// lfs f18,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	f18.f64 = double(temp.f32);
	// fmuls f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// lfs f24,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	f24.f64 = double(temp.f32);
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// lfs f23,360(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 360);
	f23.f64 = double(temp.f32);
	// fmuls f23,f23,f24
	f23.f64 = double(float(f23.f64 * f24.f64));
	// lfs f19,356(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 356);
	f19.f64 = double(temp.f32);
	// lfs f22,368(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 368);
	f22.f64 = double(temp.f32);
	// fmadds f9,f28,f9,f7
	ctx.f9.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, ctx.f7.f64)));
	// lfs f21,376(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 376);
	f21.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f17,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f17.f64 = double(temp.f32);
	// fmadds f13,f26,f6,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f6.f64, ctx.f13.f64)));
	// lfs f26,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f16,352(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 352);
	f16.f64 = double(temp.f32);
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f4,f29,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f1.f64)));
	// lfs f1,372(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f8,f25,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, f25.f64, ctx.f2.f64)));
	// lfs f2,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f23,f19,f2,f23
	f23.f64 = double(float(std::fma(f19.f64, ctx.f2.f64, f23.f64)));
	// fmuls f20,f0,f2
	f20.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fadds f9,f9,f22
	ctx.f9.f64 = double(float(ctx.f9.f64 + f22.f64));
	// lfs f22,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	f22.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmr f19,f18
	f19.f64 = f18.f64;
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fmuls f1,f18,f24
	ctx.f1.f64 = double(float(f18.f64 * f24.f64));
	// fadds f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 + f21.f64));
	// lfs f21,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f21.f64 = double(temp.f32);
	// fmuls f19,f0,f25
	f19.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fmadds f8,f26,f7,f8
	ctx.f8.f64 = double(float(std::fma(f26.f64, ctx.f7.f64, ctx.f8.f64)));
	// lfs f7,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f23,f16,f17,f23
	f23.f64 = double(float(std::fma(f16.f64, f17.f64, f23.f64)));
	// lfs f16,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f16.f64 = double(temp.f32);
	// fmadds f27,f11,f10,f27
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, f27.f64)));
	// fmr f0,f22
	ctx.f0.f64 = f22.f64;
	// fmadds f6,f10,f6,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmuls f4,f18,f5
	ctx.f4.f64 = double(float(f18.f64 * ctx.f5.f64));
	// fmadds f20,f11,f17,f20
	f20.f64 = double(float(std::fma(ctx.f11.f64, f17.f64, f20.f64)));
	// fmuls f6,f21,f6
	ctx.f6.f64 = double(float(f21.f64 * ctx.f6.f64));
	// fmadds f7,f7,f29,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f4.f64)));
	// lfs f29,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	f29.f64 = double(temp.f32);
	// fmr f4,f18
	ctx.f4.f64 = f18.f64;
	// fmr f18,f29
	f18.f64 = f29.f64;
	// fmr f15,f29
	f15.f64 = f29.f64;
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f10,f29,f10,f7
	ctx.f10.f64 = double(float(std::fma(f29.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f22,f2,f1
	ctx.f2.f64 = double(float(std::fma(f22.f64, ctx.f2.f64, ctx.f1.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f5,f28,f5,f27
	ctx.f5.f64 = double(float(std::fma(f28.f64, ctx.f5.f64, f27.f64)));
	// lfs f14,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f14.f64 = double(temp.f32);
	// fmadds f6,f23,f16,f6
	ctx.f6.f64 = double(float(std::fma(f23.f64, f16.f64, ctx.f6.f64)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmadds f4,f22,f25,f4
	ctx.f4.f64 = double(float(std::fma(f22.f64, f25.f64, ctx.f4.f64)));
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f11,f26,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f19.f64)));
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f28,f24,f20
	ctx.f0.f64 = double(float(std::fma(f28.f64, f24.f64, f20.f64)));
	// lfs f29,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f27,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmuls f10,f21,f10
	ctx.f10.f64 = double(float(f21.f64 * ctx.f10.f64));
	// fmadds f2,f17,f15,f2
	ctx.f2.f64 = double(float(std::fma(f17.f64, f15.f64, ctx.f2.f64)));
	// fmuls f5,f21,f5
	ctx.f5.f64 = double(float(f21.f64 * ctx.f5.f64));
	// fmadds f8,f14,f8,f6
	ctx.f8.f64 = double(float(std::fma(f14.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f4,f15,f26,f4
	ctx.f4.f64 = double(float(std::fma(f15.f64, f26.f64, ctx.f4.f64)));
	// fmadds f11,f28,f3,f11
	ctx.f11.f64 = double(float(std::fma(f28.f64, ctx.f3.f64, ctx.f11.f64)));
	// fmadds f10,f2,f16,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f16.f64, ctx.f10.f64)));
	// fmadds f6,f0,f16,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, f16.f64, ctx.f5.f64)));
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f14,f4,f10
	ctx.f12.f64 = double(float(std::fma(f14.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f11,f14,f11,f6
	ctx.f11.f64 = double(float(std::fma(f14.f64, ctx.f11.f64, ctx.f6.f64)));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f0,f0,f1,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f1,f27,f13,f0
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f0.f64)));
loc_822A8AB8:
	// lwz r3,176(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 176);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cbc
	ctx.lr = 0x822A8AE0;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D36C8) {
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
	ctx.lr = 0x822D36D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12008(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12008);
	// rlwinm r10,r6,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lbz r25,12704(r3)
	r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 12704);
	// stb r10,12704(r3)
	REX_STORE_U8(ctx.r3.u32 + 12704, ctx.r10.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// rlwinm r23,r9,30,2,31
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d3718
	if (ctx.cr6.eq) goto loc_822D3718;
	// lwz r11,12872(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12872);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3718
	if (ctx.cr6.eq) goto loc_822D3718;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_822D3718:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// li r26,0
	r26.s64 = 0;
	// rldicr r11,r11,0,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r27,32(r31)
	r27.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r30,16(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = REX_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x822d3758
	if (ctx.cr6.eq) goto loc_822D3758;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db9c8
	ctx.lr = 0x822D3754;
	sub_822DB9C8(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(r31.u32 + 0, r26.u64);
loc_822D3758:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// beq cr6,0x822d3778
	if (ctx.cr6.eq) goto loc_822D3778;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db9c8
	ctx.lr = 0x822D3774;
	sub_822DB9C8(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(r31.u32 + 8, r26.u64);
loc_822D3778:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x822d3858
	if (ctx.cr6.eq) goto loc_822D3858;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d379c
	if (ctx.cr6.eq) goto loc_822D379C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc7e8
	ctx.lr = 0x822D3798;
	sub_822DC7E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D379C:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d37c0
	if (ctx.cr6.eq) goto loc_822D37C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db298
	ctx.lr = 0x822D37BC;
	sub_822DB298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D37C0:
	// clrldi r11,r30,52
	ctx.r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d37e0
	if (ctx.cr6.eq) goto loc_822D37E0;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D37E0;
	sub_822DB630(ctx, base);
loc_822D37E0:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d3800
	if (ctx.cr6.eq) goto loc_822D3800;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D3800;
	sub_822DB630(ctx, base);
loc_822D3800:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d382c
	if (ctx.cr6.eq) goto loc_822D382C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D382C;
	sub_822DB630(ctx, base);
loc_822D382C:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d3854
	if (ctx.cr6.eq) goto loc_822D3854;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D3854;
	sub_822DB630(ctx, base);
loc_822D3854:
	// std r26,16(r31)
	REX_STORE_U64(r31.u32 + 16, r26.u64);
loc_822D3858:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x822d38a8
	if (ctx.cr6.eq) goto loc_822D38A8;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d3878
	if (ctx.cr6.eq) goto loc_822D3878;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db870
	ctx.lr = 0x822D3878;
	sub_822DB870(ctx, base);
loc_822D3878:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d38a4
	if (ctx.cr6.eq) goto loc_822D38A4;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D38A4;
	sub_822DB630(ctx, base);
loc_822D38A4:
	// std r26,24(r31)
	REX_STORE_U64(r31.u32 + 24, r26.u64);
loc_822D38A8:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x822d3944
	if (ctx.cr6.eq) goto loc_822D3944;
	// clrldi r11,r27,26
	ctx.r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d38d0
	if (ctx.cr6.eq) goto loc_822D38D0;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D38D0;
	sub_822DB630(ctx, base);
loc_822D38D0:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d38f8
	if (ctx.cr6.eq) goto loc_822D38F8;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D38F8;
	sub_822DB630(ctx, base);
loc_822D38F8:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d3918
	if (ctx.cr6.eq) goto loc_822D3918;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db6f0
	ctx.lr = 0x822D3918;
	sub_822DB6F0(ctx, base);
loc_822D3918:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d3940
	if (ctx.cr6.eq) goto loc_822D3940;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D3940;
	sub_822DB630(ctx, base);
loc_822D3940:
	// std r26,32(r31)
	REX_STORE_U64(r31.u32 + 32, r26.u64);
loc_822D3944:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stb r25,12704(r31)
	REX_STORE_U8(r31.u32 + 12704, r25.u8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d3964
	if (!ctx.cr6.gt) goto loc_822D3964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D3960;
	sub_822D5B28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D3964:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822D3974;
	sub_822D4EA8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x822d3988
	if (!ctx.cr0.eq) goto loc_822D3988;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d3b54
	goto loc_822D3B54;
loc_822D3988:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r8,r11,18618
	ctx.r8.u64 = ctx.r11.u64 | 18618;
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r28,3
	ctx.r11.u64 = r28.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// ori r10,r4,2
	ctx.r10.u64 = ctx.r4.u64 | 2;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// rlwimi r10,r23,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// ori r8,r8,20480
	ctx.r8.u64 = ctx.r8.u64 | 20480;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// lbz r11,12363(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,12298(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 12298);
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r29,r10,23
	r29.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r29,r29,0,26,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x822d3a6c
	if (!ctx.cr0.eq) goto loc_822D3A6C;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// clrlwi r10,r22,26
	ctx.r10.u64 = r22.u32 & 0x3F;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822d3b38
	goto loc_822D3B38;
loc_822D3A6C:
	// lwz r11,13436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13436);
	// addi r3,r31,13424
	ctx.r3.s64 = r31.s64 + 13424;
	// lwz r10,13440(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13440);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d3a8c
	if (!ctx.cr6.gt) goto loc_822D3A8C;
	// bl 0x822d4978
	ctx.lr = 0x822D3A88;
	sub_822D4978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D3A8C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13436(r31)
	REX_STORE_U32(r31.u32 + 13436, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// rlwinm r6,r24,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r22,26
	ctx.r7.u64 = r22.u32 & 0x3F;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r29,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_822D3B38:
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// stw r11,13652(r31)
	REX_STORE_U32(r31.u32 + 13652, ctx.r11.u32);
	// stw r28,13656(r31)
	REX_STORE_U32(r31.u32 + 13656, r28.u32);
	// stw r23,13664(r31)
	REX_STORE_U32(r31.u32 + 13664, r23.u32);
loc_822D3B54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822F5208) {
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
	ctx.lr = 0x822F5210;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f5350
	if (!ctx.cr6.eq) goto loc_822F5350;
loc_822F523C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f5328
	if (ctx.cr6.eq) goto loc_822F5328;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822F526C:
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
	// bne cr6,0x822f5290
	if (!ctx.cr6.eq) goto loc_822F5290;
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
	// bne 0x822f526c
	if (!ctx.cr0.eq) goto loc_822F526C;
	// b 0x822f5298
	goto loc_822F5298;
loc_822F5290:
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
loc_822F5298:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f523c
	if (!ctx.cr6.eq) goto loc_822F523C;
loc_822F52A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r22,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r22.u64);
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_822F52C4:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x822f52c4
	if (!ctx.cr6.eq) goto loc_822F52C4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x822f5620
	if (!ctx.cr6.eq) goto loc_822F5620;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_822F5304:
	// mfmsr r4
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r4.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f55d8
	if (!ctx.cr6.eq) goto loc_822F55D8;
	// stdcx. r8,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f5304
	if (!ctx.cr0.eq) goto loc_822F5304;
	// b 0x822f55e0
	goto loc_822F55E0;
loc_822F5328:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f5344
	if (ctx.cr6.eq) goto loc_822F5344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f4420
	ctx.lr = 0x822F533C;
	sub_822F4420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f52a4
	if (!ctx.cr6.eq) goto loc_822F52A4;
loc_822F5344:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_822F5350:
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r24,r31,24
	r24.s64 = r31.s64 + 24;
loc_822F535C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r24
	ea = r24.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r24
	ea = r24.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f535c
	if (!ctx.cr0.eq) goto loc_822F535C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822f53ec
	if (ctx.cr6.lt) goto loc_822F53EC;
loc_822F5380:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f53ec
	if (ctx.cr6.eq) goto loc_822F53EC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822F53B0:
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
	// bne cr6,0x822f53d4
	if (!ctx.cr6.eq) goto loc_822F53D4;
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
	// bne 0x822f53b0
	if (!ctx.cr0.eq) goto loc_822F53B0;
	// b 0x822f53dc
	goto loc_822F53DC;
loc_822F53D4:
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
loc_822F53DC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f5380
	if (!ctx.cr6.eq) goto loc_822F5380;
	// b 0x822f52a4
	goto loc_822F52A4;
loc_822F53EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f5408
	if (ctx.cr6.eq) goto loc_822F5408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f4420
	ctx.lr = 0x822F5400;
	sub_822F4420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f52a4
	if (!ctx.cr6.eq) goto loc_822F52A4;
loc_822F5408:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x822f54b0
	if (ctx.cr6.eq) goto loc_822F54B0;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_822F5414:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822F541C:
	// db16cyc 
	std::this_thread::yield();
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822f541c
	if (!ctx.cr0.lt) goto loc_822F541C;
	// cmpwi cr6,r29,511
	ctx.cr6.compare<int32_t>(r29.s32, 511, ctx.xer);
	// bgt cr6,0x822f5438
	if (ctx.cr6.gt) goto loc_822F5438;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_822F5438:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_822F543C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f54a8
	if (ctx.cr6.eq) goto loc_822F54A8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F546C:
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
	// bne cr6,0x822f5490
	if (!ctx.cr6.eq) goto loc_822F5490;
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
	// bne 0x822f546c
	if (!ctx.cr0.eq) goto loc_822F546C;
	// b 0x822f5498
	goto loc_822F5498;
loc_822F5490:
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
loc_822F5498:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f543c
	if (!ctx.cr6.eq) goto loc_822F543C;
	// b 0x822f52a4
	goto loc_822F52A4;
loc_822F54A8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5414
	if (!ctx.cr0.eq) goto loc_822F5414;
loc_822F54B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f52a4
	if (!ctx.cr6.eq) goto loc_822F52A4;
	// lis r30,-32761
	r30.s64 = -2147024896;
loc_822F54BC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x822f54ec
	if (ctx.cr6.eq) goto loc_822F54EC;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822F54CC:
	// db16cyc 
	std::this_thread::yield();
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822f54cc
	if (!ctx.cr0.lt) goto loc_822F54CC;
	// cmpwi cr6,r29,511
	ctx.cr6.compare<int32_t>(r29.s32, 511, ctx.xer);
	// bgt cr6,0x822f54e8
	if (ctx.cr6.gt) goto loc_822F54E8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_822F54E8:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_822F54EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822f5528
	if (!ctx.cr6.eq) goto loc_822F5528;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822f5508
	if (!ctx.cr6.eq) goto loc_822F5508;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x822f5540
	goto loc_822F5540;
loc_822F5508:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823f05b8
	ctx.lr = 0x822F5514;
	sub_823F05B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f5540
	if (!ctx.cr6.gt) goto loc_822F5540;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 | r30.u64;
	// b 0x822f5540
	goto loc_822F5540;
loc_822F5528:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x822F5540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5540:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f55b4
	if (!ctx.cr6.eq) goto loc_822F55B4;
loc_822F5548:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f54bc
	if (ctx.cr6.eq) goto loc_822F54BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F5578:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f559c
	if (!ctx.cr6.eq) goto loc_822F559C;
	// stdcx. r6,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f5578
	if (!ctx.cr0.eq) goto loc_822F5578;
	// b 0x822f55a4
	goto loc_822F55A4;
loc_822F559C:
	// stdcx. r8,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F55A4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f5548
	if (!ctx.cr6.eq) goto loc_822F5548;
	// b 0x822f52a4
	goto loc_822F52A4;
loc_822F55B4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r24
	ea = r24.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r24
	ea = r24.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f55b4
	if (!ctx.cr0.eq) goto loc_822F55B4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_822F55D8:
	// stdcx. r5,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F55E0:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f52c4
	if (!ctx.cr6.eq) goto loc_822F52C4;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822F55FC:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x822f5660
	if (!ctx.cr6.eq) goto loc_822F5660;
	// stdcx. r5,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f55fc
	if (!ctx.cr0.eq) goto loc_822F55FC;
	// b 0x822f5668
	goto loc_822F5668;
loc_822F5620:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822F5630:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x822f5654
	if (!ctx.cr6.eq) goto loc_822F5654;
	// stdcx. r4,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f5630
	if (!ctx.cr0.eq) goto loc_822F5630;
	// b 0x822f52c4
	goto loc_822F52C4;
loc_822F5654:
	// stdcx. r6,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x822f52c4
	goto loc_822F52C4;
loc_822F5660:
	// stdcx. r8,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F5668:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5698
	if (ctx.cr6.eq) goto loc_822F5698;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f5698
	if (!ctx.cr6.gt) goto loc_822F5698;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eebb0
	ctx.lr = 0x822F568C;
	sub_823EEBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f5698
	if (!ctx.cr6.eq) goto loc_822F5698;
	// bl 0x823ee280
	ctx.lr = 0x822F5698;
	sub_823EE280(ctx, base);
loc_822F5698:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8231BCF0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82319b48
	ctx.lr = 0x8231BD0C;
	sub_82319B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231bd44
	if (!ctx.cr0.eq) goto loc_8231BD44;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231bd40
	if (ctx.cr6.eq) goto loc_8231BD40;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1751
	ctx.r6.s64 = 1751;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231BD40;
	sub_82330D00(ctx, base);
loc_8231BD40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231BD44:
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

DEFINE_REX_FUNC(sub_82320428) {
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
	ctx.lr = 0x82320430;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232044c
	if (!ctx.cr6.eq) goto loc_8232044C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823204e8
	goto loc_823204E8;
loc_8232044C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f31,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232046c
	if (ctx.cr6.eq) goto loc_8232046C;
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82320470
	goto loc_82320470;
loc_8232046C:
	// li r30,0
	r30.s64 = 0;
loc_82320470:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823204e0
	if (ctx.cr6.eq) goto loc_823204E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82330438
	ctx.lr = 0x82320484;
	sub_82330438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823204e8
	if (!ctx.cr0.eq) goto loc_823204E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823204e0
	if (!ctx.cr6.gt) goto loc_823204E0;
loc_8232049C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82330480
	ctx.lr = 0x823204AC;
	sub_82330480(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823204e8
	if (!ctx.cr0.eq) goto loc_823204E8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233f2b8
	ctx.lr = 0x823204C0;
	sub_8233F2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823204e8
	if (!ctx.cr0.eq) goto loc_823204E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8232049c
	if (ctx.cr6.lt) goto loc_8232049C;
loc_823204E0:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823204E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82327768) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// ble cr6,0x823277e4
	if (!ctx.cr6.gt) goto loc_823277E4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_823277A4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823277c4
	if (ctx.cr6.eq) goto loc_823277C4;
	// stfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stw r9,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
loc_823277C4:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bdnz 0x823277a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823277A4;
loc_823277E4:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D158) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// std r4,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D718) {
	REX_FUNC_PROLOGUE();
	// lbz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D750) {
	REX_FUNC_PROLOGUE();
	// ld r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DF38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232df58
	if (ctx.cr6.eq) goto loc_8232DF58;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x8232df5c
	goto loc_8232DF5C;
loc_8232DF58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8232DF5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232df84
	if (ctx.cr6.eq) goto loc_8232DF84;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232df78
	if (ctx.cr6.eq) goto loc_8232DF78;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8232df7c
	goto loc_8232DF7C;
loc_8232DF78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DF7C:
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_8232DF84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FBB0) {
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
	// bl 0x82332760
	ctx.lr = 0x8232FBD4;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fbec
	if (!ctx.cr6.eq) goto loc_8232FBEC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x8232FBEC;
	sub_823347C8(ctx, base);
loc_8232FBEC:
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

DEFINE_REX_FUNC(sub_82331888) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82331960
	if (ctx.cr6.eq) goto loc_82331960;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823318bc
	if (ctx.cr6.eq) goto loc_823318BC;
loc_823318B0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823318b0
	if (!ctx.cr6.eq) goto loc_823318B0;
loc_823318BC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82331960
	if (ctx.cr6.lt) goto loc_82331960;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82331940
	if (ctx.cr6.lt) goto loc_82331940;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823318F8:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r7,-48
	r31.s64 = ctx.r7.s64 + -48;
	// addi r30,r8,-48
	r30.s64 = ctx.r8.s64 + -48;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r31,r10
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r30,r9
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x823318f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823318F8;
loc_82331940:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82331958
	if (ctx.cr6.lt) goto loc_82331958;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
loc_82331958:
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82331960:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233F178) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233F194;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f1a8
	if (!ctx.cr6.eq) goto loc_8233F1A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234cf90
	ctx.lr = 0x8233F1A8;
	sub_8234CF90(ctx, base);
loc_8233F1A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82340718) {
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
	ctx.lr = 0x82340720;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82340758
	if (!ctx.cr6.eq) goto loc_82340758;
loc_8234074C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_82340758:
	// mullw. r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8234074c
	if (ctx.cr0.lt) goto loc_8234074C;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r6,r11,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r6.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823407a4
	if (!ctx.cr6.gt) goto loc_823407A4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x823408c8
	if (ctx.cr6.gt) goto loc_823408C8;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// li r23,1
	r23.s64 = 1;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
loc_823407A4:
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340994
	if (ctx.cr6.eq) goto loc_82340994;
loc_823407B0:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// stw r27,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823408d4
	if (!ctx.cr6.eq) goto loc_823408D4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823408d4
	if (!ctx.cr6.gt) goto loc_823408D4;
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823408d4
	if (!ctx.cr6.eq) goto loc_823408D4;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823408d4
	if (ctx.cr6.eq) goto loc_823408D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234082c
	if (ctx.cr6.eq) goto loc_8234082C;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82340818
	if (ctx.cr6.eq) goto loc_82340818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340348
	ctx.lr = 0x8234080C;
	sub_82340348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82340bb0
	if (!ctx.cr6.eq) goto loc_82340BB0;
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
loc_82340818:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// divwu r10,r5,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
loc_8234082C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234084C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// beq cr6,0x82340890
	if (ctx.cr6.eq) goto loc_82340890;
	// lwz r11,21996(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340890
	if (ctx.cr6.eq) goto loc_82340890;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82340890:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823408a0
	if (ctx.cr6.eq) goto loc_823408A0;
	// cmpwi cr6,r26,22
	ctx.cr6.compare<int32_t>(r26.s32, 22, ctx.xer);
	// bne cr6,0x82340bac
	if (!ctx.cr6.eq) goto loc_82340BAC;
loc_823408A0:
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r9.u32);
	// stw r10,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// beq cr6,0x82340990
	if (ctx.cr6.eq) goto loc_82340990;
	// cmpwi cr6,r26,22
	ctx.cr6.compare<int32_t>(r26.s32, 22, ctx.xer);
	// beq cr6,0x82340994
	if (ctx.cr6.eq) goto loc_82340994;
	// b 0x82340974
	goto loc_82340974;
loc_823408C8:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_823408D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340418
	ctx.lr = 0x823408DC;
	sub_82340418(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8234090c
	if (!ctx.cr6.eq) goto loc_8234090C;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82340904
	if (!ctx.cr6.eq) goto loc_82340904;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8234090c
	if (ctx.cr6.eq) goto loc_8234090C;
loc_82340904:
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x82340914
	goto loc_82340914;
loc_8234090C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82340994
	if (!ctx.cr6.eq) goto loc_82340994;
loc_82340914:
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82340944
	if (!ctx.cr6.gt) goto loc_82340944;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
loc_82340944:
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 400);
	// add r3,r28,r29
	ctx.r3.u64 = r28.u64 + r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82340954;
	sub_823EF2F8(ctx, base);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82340974
	if (ctx.cr6.lt) goto loc_82340974;
	// stw r24,340(r31)
	REX_STORE_U32(r31.u32 + 340, r24.u32);
loc_82340974:
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// subf. r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// bne 0x823407b0
	if (!ctx.cr0.eq) goto loc_823407B0;
	// b 0x82340994
	goto loc_82340994;
loc_82340990:
	// li r26,22
	r26.s64 = 22;
loc_82340994:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// bne cr6,0x823409d8
	if (!ctx.cr6.eq) goto loc_823409D8;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82340a2c
	if (!ctx.cr6.eq) goto loc_82340A2C;
	// rlwinm r10,r28,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340a2c
	if (ctx.cr6.eq) goto loc_82340A2C;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823409C0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwimi r10,r9,8,8,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFFF0000FF);
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823409c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823409C0;
	// b 0x82340a2c
	goto loc_82340A2C;
loc_823409D8:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// bne cr6,0x82340a2c
	if (!ctx.cr6.eq) goto loc_82340A2C;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82340a2c
	if (!ctx.cr6.eq) goto loc_82340A2C;
	// rlwinm r10,r28,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340a2c
	if (ctx.cr6.eq) goto loc_82340A2C;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82340A04:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r8,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82340a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82340A04;
loc_82340A2C:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// divwu r9,r28,r25
	ctx.r9.u64 = uint32_t(r25.u32 ? r28.u32 / r25.u32 : 0);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340b88
	if (ctx.cr6.eq) goto loc_82340B88;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340af0
	if (ctx.cr6.eq) goto loc_82340AF0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82340b88
	if (ctx.cr6.eq) goto loc_82340B88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82340A60:
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lbzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r7,r31,r10
	ctx.r7.u64 = r31.u64 + ctx.r10.u64;
	// lbz r6,300(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 300);
	// xor r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwimi r3,r4,2,22,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwimi r10,r3,2,20,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF007);
	// rlwimi r8,r4,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r3,r10,2,18,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FF0;
	// rlwinm r7,r4,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 | ctx.r7.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r6,r8,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// rlwinm r7,r5,31,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0xC;
	// rlwimi r10,r4,30,26,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r4,r10,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r5.u8);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r10.u8);
	// lwz r8,332(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82340ae4
	if (ctx.cr6.lt) goto loc_82340AE4;
	// stw r24,336(r31)
	REX_STORE_U32(r31.u32 + 336, r24.u32);
loc_82340AE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82340a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82340A60;
	// b 0x82340b88
	goto loc_82340B88;
loc_82340AF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82340b88
	if (ctx.cr6.eq) goto loc_82340B88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82340AFC:
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r6,r10,2,22,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r7,r6,2,20,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFF8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF007);
	// rlwinm r4,r10,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// rlwinm r6,r7,2,18,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FF0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r5,r10,30,28,28
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x8) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF7);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwimi r8,r10,30,26,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r3,r4,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// rlwinm r5,r5,31,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0xC;
	// rlwinm r10,r8,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r8.u8);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r6,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r6.u8);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// lbz r3,300(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 300);
	// xor r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r10.u8);
	// lwz r7,332(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82340b80
	if (ctx.cr6.lt) goto loc_82340B80;
	// stw r24,336(r31)
	REX_STORE_U32(r31.u32 + 336, r24.u32);
loc_82340B80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82340afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82340AFC;
loc_82340B88:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82340b94
	if (ctx.cr6.eq) goto loc_82340B94;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
loc_82340B94:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82340bac
	if (!ctx.cr6.eq) goto loc_82340BAC;
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340bac
	if (ctx.cr6.eq) goto loc_82340BAC;
	// li r26,22
	r26.s64 = 22;
loc_82340BAC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82340BB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823649A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823649b8
	if (!ctx.cr6.eq) goto loc_823649B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823649B8:
	// b 0x823646f8
	sub_823646F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82364F70) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82364f80
	if (!ctx.cr6.eq) goto loc_82364F80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364F80:
	// b 0x82364b20
	sub_82364B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82365238) {
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
	ctx.lr = 0x82365240;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c80
	ctx.lr = 0x82365248;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
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
	// lwz r9,352(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// lfs f0,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r31,r9,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// beq cr6,0x823658c0
	if (ctx.cr6.eq) goto loc_823658C0;
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// li r20,0
	r20.s64 = 0;
	// lhz r9,388(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 388);
	// li r18,1
	r18.s64 = 1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823652fc
	if (ctx.cr6.eq) goto loc_823652FC;
	// xor r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823652f4
	if (ctx.cr6.eq) goto loc_823652F4;
loc_823652A0:
	// slw r9,r18,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823652e8
	if (ctx.cr6.eq) goto loc_823652E8;
	// lwz r8,344(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,352(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// ble cr6,0x823652e8
	if (!ctx.cr6.gt) goto loc_823652E8;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
loc_823652D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthux r20,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r9.u32 = ea;
	// lwz r30,352(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x823652d4
	if (ctx.cr6.lt) goto loc_823652D4;
loc_823652E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823652a0
	if (ctx.cr6.lt) goto loc_823652A0;
loc_823652F4:
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// sth r10,388(r11)
	REX_STORE_U16(ctx.r11.u32 + 388, ctx.r10.u16);
loc_823652FC:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// slw r10,r18,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82365334
	if (!ctx.cr6.eq) goto loc_82365334;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x82365320;
	sub_823EF2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ccc
	ctx.lr = 0x82365330;
	// b 0x826a1cd0
	return;
loc_82365334:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823658c0
	if (ctx.cr6.eq) goto loc_823658C0;
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,3712(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3712);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f2.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfs f31,3800(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3800);
	f31.f64 = double(temp.f32);
	// lfs f4,13260(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 13260);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r19,r7,2,0,29
	r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,13256(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 13256);
	ctx.f7.f64 = double(temp.f32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lfs f8,10520(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10520);
	ctx.f8.f64 = double(temp.f32);
	// ori r22,r9,32865
	r22.u64 = ctx.r9.u64 | 32865;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
loc_8236539C:
	// lfs f13,364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// lfs f12,372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fctidz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f9,368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f9.f64 = double(temp.f32);
	// fctidz f11,f9
	ctx.f11.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// extsw r31,r8
	r31.s64 = ctx.r8.s32;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r30,352(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r5,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// divwu r5,r9,r30
	ctx.r5.u64 = uint32_t(r30.u32 ? ctx.r9.u32 / r30.u32 : 0);
	// divwu r10,r8,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r8.u32 / r30.u32 : 0);
	// divwu r31,r6,r30
	r31.u64 = uint32_t(r30.u32 ? ctx.r6.u32 / r30.u32 : 0);
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f30,112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mullw r30,r31,r30
	r30.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// subf r31,r5,r9
	r31.u64 = ctx.r9.u64 - ctx.r5.u64;
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// subf r30,r30,r6
	r30.u64 = ctx.r6.u64 - r30.u64;
	// subf r29,r10,r8
	r29.u64 = ctx.r8.u64 - ctx.r10.u64;
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// fsubs f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 - f30.f64));
	// mr r24,r18
	r24.u64 = r18.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// ble cr6,0x82365624
	if (!ctx.cr6.gt) goto loc_82365624;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r25,r4,r3
	r25.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_82365480:
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// and r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 & r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82365610
	if (ctx.cr6.eq) goto loc_82365610;
	// mullw r8,r27,r7
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// lwz r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// lfs f30,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	f30.f64 = double(temp.f32);
	// fsubs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f28,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	f28.f64 = double(temp.f32);
	// fsubs f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f26,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	f26.f64 = double(temp.f32);
	// fsubs f27,f0,f10
	f27.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f25,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	f25.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f24,332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	f24.f64 = double(temp.f32);
	// add r17,r8,r9
	r17.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r28,r7
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// fmuls f30,f30,f8
	f30.f64 = double(float(f30.f64 * ctx.f8.f64));
	// add r16,r8,r9
	r16.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r29,r7
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// add r15,r8,r9
	r15.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r8,1,0,30
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r26,r7
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// lhzx r17,r17,r10
	r17.u64 = REX_LOAD_U16(r17.u32 + ctx.r10.u32);
	// lhzx r14,r14,r10
	r14.u64 = REX_LOAD_U16(r14.u32 + ctx.r10.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r17,r17
	r17.s64 = r17.s16;
	// mullw r6,r31,r7
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// std r17,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, r17.u64);
	// lfd f18,160(r1)
	f18.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lhzx r17,r16,r10
	r17.u64 = REX_LOAD_U16(r16.u32 + ctx.r10.u32);
	// fcfid f18,f18
	f18.f64 = double(f18.s64);
	// lhzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f18,f18
	f18.f64 = double(float(f18.f64));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// std r8,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsh r8,r17
	ctx.r8.s64 = r17.s16;
	// lfd f21,136(r1)
	f21.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// extsh r14,r14
	r14.s64 = r14.s16;
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f19,152(r1)
	f19.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lhzx r15,r15,r10
	r15.u64 = REX_LOAD_U16(r15.u32 + ctx.r10.u32);
	// lhzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// std r14,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r14.u64);
	// lfd f23,120(r1)
	f23.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// fcfid f23,f23
	f23.f64 = double(f23.s64);
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// extsh r6,r15
	ctx.r6.s64 = r15.s16;
	// fcfid f19,f19
	f19.f64 = double(f19.s64);
	// lfd f22,128(r1)
	f22.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r6,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f20,144(r1)
	f20.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f22,f22
	f22.f64 = double(f22.s64);
	// frsp f19,f19
	f19.f64 = double(float(f19.f64));
	// fcfid f21,f21
	f21.f64 = double(f21.s64);
	// frsp f23,f23
	f23.f64 = double(float(f23.f64));
	// fmuls f18,f18,f9
	f18.f64 = double(float(f18.f64 * ctx.f9.f64));
	// frsp f22,f22
	f22.f64 = double(float(f22.f64));
	// fcfid f20,f20
	f20.f64 = double(f20.s64);
	// fmuls f19,f19,f11
	f19.f64 = double(float(f19.f64 * ctx.f11.f64));
	// frsp f21,f21
	f21.f64 = double(float(f21.f64));
	// fmadds f12,f23,f12,f18
	ctx.f12.f64 = double(float(std::fma(f23.f64, ctx.f12.f64, f18.f64)));
	// frsp f20,f20
	f20.f64 = double(float(f20.f64));
	// fmadds f29,f22,f29,f19
	f29.f64 = double(float(std::fma(f22.f64, f29.f64, f19.f64)));
	// fmuls f22,f21,f10
	f22.f64 = double(float(f21.f64 * ctx.f10.f64));
	// fmadds f12,f12,f28,f30
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f30.f64)));
	// fmadds f27,f20,f27,f22
	f27.f64 = double(float(std::fma(f20.f64, f27.f64, f22.f64)));
	// fmadds f12,f29,f26,f12
	ctx.f12.f64 = double(float(std::fma(f29.f64, f26.f64, ctx.f12.f64)));
	// fmadds f12,f27,f25,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, f25.f64, ctx.f12.f64)));
	// fmadds f13,f24,f12,f13
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f12.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bge cr6,0x823655d4
	if (!ctx.cr6.lt) goto loc_823655D4;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// b 0x823655f4
	goto loc_823655F4;
loc_823655D4:
	// fcmpu cr6,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// ble cr6,0x823655e4
	if (!ctx.cr6.gt) goto loc_823655E4;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x823655f4
	goto loc_823655F4;
loc_823655E4:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_823655F4:
	// lwz r6,360(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// fmuls f13,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r17,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, r17.u16);
loc_82365610:
	// stfsx f13,r25,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + ctx.r5.u32, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rotlwi r24,r24,1
	r24.u64 = __builtin_rotateleft32(r24.u32, 1);
	// bdnz 0x82365480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365480;
loc_82365624:
	// lwz r10,360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365684
	if (!ctx.cr6.eq) goto loc_82365684;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82365684
	if (!ctx.cr6.gt) goto loc_82365684;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82365648:
	// lhz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82365674
	if (ctx.cr6.eq) goto loc_82365674;
	// lwz r8,352(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r5,344(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhzx r31,r5,r10
	r31.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r8,r5
	REX_STORE_U16(ctx.r8.u32 + ctx.r5.u32, r31.u16);
loc_82365674:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// bdnz 0x82365648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365648;
loc_82365684:
	// lwz r10,360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// lwz r8,352(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823656a0
	if (ctx.cr6.lt) goto loc_823656A0;
	// stw r20,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, r20.u32);
loc_823656A0:
	// lfs f11,376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823656c4
	if (!ctx.cr6.lt) goto loc_823656C4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_823656C4:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r9,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82365730
	if (ctx.cr6.gt) goto loc_82365730;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823656f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823656F8;
	// bdzf 4*cr6+eq,0x8236570c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236570C;
	// bne cr6,0x82365720
	if (!ctx.cr6.eq) goto loc_82365720;
	// addi r10,r10,98
	ctx.r10.s64 = ctx.r10.s64 + 98;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82365734
	goto loc_82365734;
loc_823656F8:
	// subfic r10,r10,16481
	ctx.xer.ca = ctx.r10.u32 <= 16481;
	ctx.r10.u64 = static_cast<uint64_t>(16481) - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82365734
	goto loc_82365734;
loc_8236570C:
	// addi r10,r10,-16286
	ctx.r10.s64 = ctx.r10.s64 + -16286;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82365734
	goto loc_82365734;
loc_82365720:
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82365734
	goto loc_82365734;
loc_82365730:
	// fmr f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f2.f64;
loc_82365734:
	// fadds f12,f11,f6
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f10,364(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// fmuls f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82365764
	if (!ctx.cr6.lt) goto loc_82365764;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_82365764:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r9,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x823657d0
	if (ctx.cr6.gt) goto loc_823657D0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82365798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365798;
	// bdzf 4*cr6+eq,0x823657ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823657AC;
	// bne cr6,0x823657c0
	if (!ctx.cr6.eq) goto loc_823657C0;
	// addi r10,r10,98
	ctx.r10.s64 = ctx.r10.s64 + 98;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823657d4
	goto loc_823657D4;
loc_82365798:
	// subfic r10,r10,16481
	ctx.xer.ca = ctx.r10.u32 <= 16481;
	ctx.r10.u64 = static_cast<uint64_t>(16481) - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x823657d4
	goto loc_823657D4;
loc_823657AC:
	// addi r10,r10,-16286
	ctx.r10.s64 = ctx.r10.s64 + -16286;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x823657d4
	goto loc_823657D4;
loc_823657C0:
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823657d4
	goto loc_823657D4;
loc_823657D0:
	// fmr f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f2.f64;
loc_823657D4:
	// fadds f12,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f13,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfs f13,368(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// fmuls f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fctiwz f12,f9
	ctx.f12.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82365804
	if (!ctx.cr6.lt) goto loc_82365804;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_82365804:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r9,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82365870
	if (ctx.cr6.gt) goto loc_82365870;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82365838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365838;
	// bdzf 4*cr6+eq,0x8236584c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236584C;
	// bne cr6,0x82365860
	if (!ctx.cr6.eq) goto loc_82365860;
	// addi r10,r10,98
	ctx.r10.s64 = ctx.r10.s64 + 98;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82365874
	goto loc_82365874;
loc_82365838:
	// subfic r10,r10,16481
	ctx.xer.ca = ctx.r10.u32 <= 16481;
	ctx.r10.u64 = static_cast<uint64_t>(16481) - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x82365874
	goto loc_82365874;
loc_8236584C:
	// addi r10,r10,-16286
	ctx.r10.s64 = ctx.r10.s64 + -16286;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x82365874
	goto loc_82365874;
loc_82365860:
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82365874
	goto loc_82365874;
loc_82365870:
	// fmr f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f2.f64;
loc_82365874:
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lfs f9,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,376(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 376, temp.u32);
	// std r10,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// add r23,r19,r23
	r23.u64 = r19.u64 + r23.u64;
	// lfd f9,168(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f11,f10,f9,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f11,364(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// fmadds f10,f13,f9,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f10,368(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// fmadds f9,f12,f5,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f3.f64)));
	// stfs f9,372(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 372, temp.u32);
	// bne 0x8236539c
	if (!ctx.cr0.eq) goto loc_8236539C;
loc_823658C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ccc
	ctx.lr = 0x823658D0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823AF2A0) {
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
	ctx.lr = 0x823AF2A8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// lwz r10,280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// stw r9,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r9.u32);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// beq cr6,0x823afb48
	if (ctx.cr6.eq) goto loc_823AFB48;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r22,0
	r22.s64 = 0;
	// lwz r30,0(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r26,r22
	r26.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823af30c
	if (ctx.cr6.eq) goto loc_823AF30C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e2b0
	ctx.lr = 0x823AF30C;
	sub_8233E2B0(ctx, base);
loc_823AF30C:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823af328
	if (ctx.cr6.eq) goto loc_823AF328;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r22,300(r31)
	REX_STORE_U32(r31.u32 + 300, r22.u32);
	// stw r10,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r10.u32);
loc_823AF328:
	// lwz r8,332(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,160(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823af39c
	if (ctx.cr6.eq) goto loc_823AF39C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r7,328(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r9,136(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 136);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,76(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823af388
	if (!ctx.cr6.gt) goto loc_823AF388;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,76(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823AF368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823af378
	if (ctx.cr6.eq) goto loc_823AF378;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
loc_823AF378:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bdnz 0x823af368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF368;
loc_823AF388:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823af3b4
	if (!ctx.cr6.eq) goto loc_823AF3B4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
loc_823AF39C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823af3b4
	if (!ctx.cr6.eq) goto loc_823AF3B4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
loc_823AF3B4:
	// lwz r27,292(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// addi r23,r11,44
	r23.s64 = ctx.r11.s64 + 44;
	// lwz r24,44(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823af408
	if (!ctx.cr6.eq) goto loc_823AF408;
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823AF3E0;
	sub_823EF5F0(ctx, base);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r8,332(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r7,r9,8
	ctx.r7.u64 = ctx.r9.u64 | 8;
	// stw r19,360(r31)
	REX_STORE_U32(r31.u32 + 360, r19.u32);
	// stw r7,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r7.u32);
	// lwz r6,72(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// stw r6,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r6.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
loc_823AF408:
	// ld r21,312(r31)
	r21.u64 = REX_LOAD_U64(r31.u32 + 312);
	// ld r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 344);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// std r21,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r21.u64);
	// ble cr6,0x823af488
	if (!ctx.cr6.gt) goto loc_823AF488;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// ld r10,20888(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20888);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x823af488
	if (!ctx.cr6.lt) goto loc_823AF488;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823af450
	if (!ctx.cr6.gt) goto loc_823AF450;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823AF450:
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r8,r30,r9
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823AF478;
	sub_823EF5F0(ctx, base);
	// lwz r6,284(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stw r19,360(r31)
	REX_STORE_U32(r31.u32 + 360, r19.u32);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stw r5,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r5.u32);
loc_823AF488:
	// ld r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 352);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x823af504
	if (!ctx.cr6.gt) goto loc_823AF504;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// ld r11,20888(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 20888);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x823af504
	if (!ctx.cr6.lt) goto loc_823AF504;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823af4c8
	if (!ctx.cr6.gt) goto loc_823AF4C8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823AF4C8:
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mullw r7,r30,r8
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823AF4F4;
	sub_823EF5F0(ctx, base);
	// lwz r5,284(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 284);
	// std r22,352(r31)
	REX_STORE_U64(r31.u32 + 352, r22.u64);
	// rlwinm r4,r5,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r4,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r4.u32);
loc_823AF504:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ld r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 336);
	// ld r10,20888(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20888);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x823af56c
	if (!ctx.cr6.gt) goto loc_823AF56C;
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x823af56c
	if (!ctx.cr6.gt) goto loc_823AF56C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// ble cr6,0x823af540
	if (!ctx.cr6.gt) goto loc_823AF540;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_823AF540:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823af56c
	if (ctx.cr6.eq) goto loc_823AF56C;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823AF564;
	sub_823EF5F0(ctx, base);
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_823AF56C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823afb00
	if (ctx.cr6.eq) goto loc_823AFB00;
	// lwz r20,104(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_823AF578:
	// ld r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 296);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// std r21,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r21.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r25,r9
	ctx.r9.u64 = ctx.r9.u64 - r25.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x823af5a8
	if (!ctx.cr6.eq) goto loc_823AF5A8;
	// neg r10,r21
	ctx.r10.s64 = static_cast<int64_t>(-r21.u64);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
loc_823AF5A8:
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpdi cr6,r21,256
	ctx.cr6.compare<int64_t>(r21.s64, 256, ctx.xer);
	// ble cr6,0x823af6e4
	if (!ctx.cr6.gt) goto loc_823AF6E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r7,r10,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// bne cr6,0x823af610
	if (!ctx.cr6.eq) goto loc_823AF610;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823af5f0
	if (ctx.cr6.eq) goto loc_823AF5F0;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823af5f0
	if (ctx.cr6.eq) goto loc_823AF5F0;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bge cr6,0x823af5f4
	if (!ctx.cr6.lt) goto loc_823AF5F4;
loc_823AF5F0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823AF5F4:
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// ble cr6,0x823af680
	if (!ctx.cr6.gt) goto loc_823AF680;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x823af684
	goto loc_823AF684;
loc_823AF610:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823af638
	if (ctx.cr6.eq) goto loc_823AF638;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823af638
	if (ctx.cr6.eq) goto loc_823AF638;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x823af644
	goto loc_823AF644;
loc_823AF638:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_823AF644:
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bgt cr6,0x823af660
	if (ctx.cr6.gt) goto loc_823AF660;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823AF660:
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// ble cr6,0x823af684
	if (!ctx.cr6.gt) goto loc_823AF684;
	// subf r11,r9,r24
	ctx.r11.u64 = r24.u64 - ctx.r9.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_823AF680:
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_823AF684:
	// divdu r10,r11,r21
	ctx.r10.u64 = r21.u64 ? ctx.r11.u64 / r21.u64 : 0;
	// tdllei r21,0
	if (r21.s64 == 0ll || r21.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r9,r10,r21
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * r21.u64);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divdu r11,r11,r21
	ctx.r11.u64 = r21.u64 ? ctx.r11.u64 / r21.u64 : 0;
	// tdllei r21,0
	if (r21.s64 == 0ll || r21.u64 < 0ull) ppc_trap(ctx, base, 0);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x823af6b0
	if (ctx.cr6.eq) goto loc_823AF6B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_823AF6B0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823af6e4
	if (ctx.cr6.gt) goto loc_823AF6E4;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// li r28,2
	r28.s64 = 2;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823af6e4
	if (ctx.cr6.eq) goto loc_823AF6E4;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823af6e4
	if (ctx.cr6.eq) goto loc_823AF6E4;
	// li r28,3
	r28.s64 = 3;
loc_823AF6E4:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// bne cr6,0x823af72c
	if (!ctx.cr6.eq) goto loc_823AF72C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823af72c
	if (!ctx.cr6.eq) goto loc_823AF72C;
loc_823AF6F8:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mullw r3,r9,r26
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823b9c58
	ctx.lr = 0x823AF728;
	sub_823B9C58(ctx, base);
	// b 0x823af7e8
	goto loc_823AF7E8;
loc_823AF72C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,21948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21948);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823af7b8
	if (ctx.cr6.gt) goto loc_823AF7B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823af6f8
	if (ctx.cr6.eq) goto loc_823AF6F8;
	// bdz 0x823af7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823AF7B8;
	// bdnz 0x823af784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF784;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mullw r3,r9,r26
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823b73e0
	ctx.lr = 0x823AF780;
	sub_823B73E0(ctx, base);
	// b 0x823af7e8
	goto loc_823AF7E8;
loc_823AF784:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mullw r3,r9,r26
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823b55c0
	ctx.lr = 0x823AF7B4;
	sub_823B55C0(ctx, base);
	// b 0x823af7e8
	goto loc_823AF7E8;
loc_823AF7B8:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mullw r3,r9,r26
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823b2940
	ctx.lr = 0x823AF7E8;
	sub_823B2940(ctx, base);
loc_823AF7E8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r9.u64);
	// bne cr6,0x823af954
	if (!ctx.cr6.eq) goto loc_823AF954;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823af850
	if (ctx.cr6.eq) goto loc_823AF850;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823af850
	if (ctx.cr6.eq) goto loc_823AF850;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823af83c
	if (!ctx.cr6.lt) goto loc_823AF83C;
	// stw r22,296(r31)
	REX_STORE_U32(r31.u32 + 296, r22.u32);
loc_823AF83C:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r9.u32);
	// b 0x823afa70
	goto loc_823AFA70;
loc_823AF850:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823afa7c
	if (ctx.cr6.eq) goto loc_823AFA7C;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823afa7c
	if (ctx.cr6.eq) goto loc_823AFA7C;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823af8d0
	if (!ctx.cr6.eq) goto loc_823AF8D0;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823af8b4
	if (!ctx.cr6.lt) goto loc_823AF8B4;
loc_823AF890:
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,328(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r7,56(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823af890
	if (ctx.cr6.lt) goto loc_823AF890;
loc_823AF8B4:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823afa70
	if (!ctx.cr6.gt) goto loc_823AFA70;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// b 0x823afa70
	goto loc_823AFA70;
loc_823AF8D0:
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823af8f0
	if (ctx.cr6.lt) goto loc_823AF8F0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r8.u32);
	// b 0x823af8f4
	goto loc_823AF8F4;
loc_823AF8F0:
	// stw r22,296(r31)
	REX_STORE_U32(r31.u32 + 296, r22.u32);
loc_823AF8F4:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r8,296(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823af938
	if (ctx.cr6.lt) goto loc_823AF938;
loc_823AF90C:
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,328(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,60(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r9,56(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823af90c
	if (!ctx.cr6.lt) goto loc_823AF90C;
loc_823AF938:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823afa70
	if (!ctx.cr6.gt) goto loc_823AFA70;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// b 0x823afa70
	goto loc_823AFA70;
loc_823AF954:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// bne cr6,0x823afa70
	if (!ctx.cr6.eq) goto loc_823AFA70;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bne cr6,0x823afa1c
	if (!ctx.cr6.eq) goto loc_823AFA1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r8,164(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823af9c4
	if (ctx.cr6.lt) goto loc_823AF9C4;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823afac0
	if (ctx.cr6.eq) goto loc_823AFAC0;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823afac0
	if (ctx.cr6.eq) goto loc_823AFAC0;
	// stw r22,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r22.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r8.u32);
loc_823AF9C4:
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,160(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 160);
	// lwz r9,136(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 136);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// ble cr6,0x823afa24
	if (!ctx.cr6.gt) goto loc_823AFA24;
	// lwz r8,328(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r7,76(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823AF9F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823afa08
	if (ctx.cr6.eq) goto loc_823AFA08;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
loc_823AFA08:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bdnz 0x823af9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF9F8;
	// b 0x823afa24
	goto loc_823AFA24;
loc_823AFA1C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_823AFA24:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r7,160(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,136(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// lwzx r4,r6,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r23,r11,44
	r23.s64 = ctx.r11.s64 + 44;
	// lwz r27,292(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r24,44(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bne cr6,0x823afa70
	if (!ctx.cr6.eq) goto loc_823AFA70;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// subf r25,r24,r25
	r25.u64 = r25.u64 - r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
loc_823AFA70:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823af578
	if (!ctx.cr6.eq) goto loc_823AF578;
	// b 0x823afb00
	goto loc_823AFB00;
loc_823AFA7C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r22,300(r31)
	REX_STORE_U32(r31.u32 + 300, r22.u32);
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mullw r7,r8,r26
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r26.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r6,r8,r30
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823AFAB0;
	sub_823EF5F0(ctx, base);
	// lwz r5,284(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 284);
	// ori r4,r5,8
	ctx.r4.u64 = ctx.r5.u64 | 8;
	// stw r4,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r4.u32);
	// b 0x823afafc
	goto loc_823AFAFC;
loc_823AFAC0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r22,300(r31)
	REX_STORE_U32(r31.u32 + 300, r22.u32);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823AFAF0;
	sub_823EF5F0(ctx, base);
	// lwz r6,284(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 284);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stw r5,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r5.u32);
loc_823AFAFC:
	// stw r19,360(r31)
	REX_STORE_U32(r31.u32 + 360, r19.u32);
loc_823AFB00:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823afb48
	if (ctx.cr6.eq) goto loc_823AFB48;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x823AFB1C;
	sub_8233E2B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// sth r8,86(r31)
	REX_STORE_U16(r31.u32 + 86, ctx.r8.u16);
	// lwz r6,72(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r5,0(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 0);
	// bl 0x823496f8
	ctx.lr = 0x823AFB48;
	sub_823496F8(ctx, base);
loc_823AFB48:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// stw r9,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823EB968) {
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
	// beq cr6,0x823eb9a8
	if (ctx.cr6.eq) goto loc_823EB9A8;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EB99C;
	sub_823EF5F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EB9A8;
	sub_82393BF0(ctx, base);
loc_823EB9A8:
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

DEFINE_REX_FUNC(sub_823ECD40) {
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
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827938f4
	ctx.lr = 0x823ECD6C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ecedc
	if (ctx.cr0.lt) goto loc_823ECEDC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x823ecedc
	if (ctx.cr6.gt) goto loc_823ECEDC;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bgt cr6,0x823ecedc
	if (ctx.cr6.gt) goto loc_823ECEDC;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,12152
	ctx.r12.s64 = ctx.r12.s64 + 12152;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// nop 
	// addi r12,r12,-12876
	ctx.r12.s64 = ctx.r12.s64 + -12876;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ECDBC;
	case 1:
		goto loc_823ECDB4;
	case 2:
		goto loc_823ECEDC;
	case 3:
		goto loc_823ECDC4;
	case 4:
		goto loc_823ECEDC;
	case 5:
		goto loc_823ECEDC;
	case 6:
		goto loc_823ECEDC;
	case 7:
		goto loc_823ECEDC;
	case 8:
		goto loc_823ECDCC;
	case 9:
		goto loc_823ECEDC;
	case 10:
		goto loc_823ECEDC;
	case 11:
		goto loc_823ECDD4;
	case 12:
		goto loc_823ECEDC;
	case 13:
		goto loc_823ECEBC;
	case 14:
		goto loc_823ECDDC;
	case 15:
		goto loc_823ECDE4;
	case 16:
		goto loc_823ECDEC;
	case 17:
		goto loc_823ECEDC;
	case 18:
		goto loc_823ECDF4;
	case 19:
		goto loc_823ECE14;
	case 20:
		goto loc_823ECDFC;
	case 21:
		goto loc_823ECEDC;
	case 22:
		goto loc_823ECEDC;
	case 23:
		goto loc_823ECEDC;
	case 24:
		goto loc_823ECEDC;
	case 25:
		goto loc_823ECEDC;
	case 26:
		goto loc_823ECEAC;
	case 27:
		goto loc_823ECE04;
	case 28:
		goto loc_823ECEDC;
	case 29:
		goto loc_823ECE0C;
	case 30:
		goto loc_823ECECC;
	case 31:
		goto loc_823ECEDC;
	case 32:
		goto loc_823ECE1C;
	case 33:
		goto loc_823ECEDC;
	case 34:
		goto loc_823ECE24;
	case 35:
		goto loc_823ECEDC;
	case 36:
		goto loc_823ECEDC;
	case 37:
		goto loc_823ECE2C;
	case 38:
		goto loc_823ECEDC;
	case 39:
		goto loc_823ECE3C;
	case 40:
		goto loc_823ECEDC;
	case 41:
		goto loc_823ECE34;
	case 42:
		goto loc_823ECEDC;
	case 43:
		goto loc_823ECEDC;
	case 44:
		goto loc_823ECEDC;
	case 45:
		goto loc_823ECE44;
	case 46:
		goto loc_823ECEDC;
	case 47:
		goto loc_823ECEDC;
	case 48:
		goto loc_823ECE4C;
	case 49:
		goto loc_823ECEDC;
	case 50:
		goto loc_823ECEDC;
	case 51:
		goto loc_823ECE54;
	case 52:
		goto loc_823ECEDC;
	case 53:
		goto loc_823ECEDC;
	case 54:
		goto loc_823ECEDC;
	case 55:
		goto loc_823ECEDC;
	case 56:
		goto loc_823ECEDC;
	case 57:
		goto loc_823ECEDC;
	case 58:
		goto loc_823ECEDC;
	case 59:
		goto loc_823ECEDC;
	case 60:
		goto loc_823ECEDC;
	case 61:
		goto loc_823ECEDC;
	case 62:
		goto loc_823ECEDC;
	case 63:
		goto loc_823ECEDC;
	case 64:
		goto loc_823ECEDC;
	case 65:
		goto loc_823ECEDC;
	case 66:
		goto loc_823ECE5C;
	case 67:
		goto loc_823ECEDC;
	case 68:
		goto loc_823ECEDC;
	case 69:
		goto loc_823ECE64;
	case 70:
		goto loc_823ECE74;
	case 71:
		goto loc_823ECE6C;
	case 72:
		goto loc_823ECEDC;
	case 73:
		goto loc_823ECEDC;
	case 74:
		goto loc_823ECEDC;
	case 75:
		goto loc_823ECEDC;
	case 76:
		goto loc_823ECEDC;
	case 77:
		goto loc_823ECE7C;
	case 78:
		goto loc_823ECEDC;
	case 79:
		goto loc_823ECE84;
	case 80:
		goto loc_823ECEDC;
	case 81:
		goto loc_823ECEDC;
	case 82:
		goto loc_823ECEDC;
	case 83:
		goto loc_823ECE8C;
	case 84:
		goto loc_823ECEDC;
	case 85:
		goto loc_823ECEB4;
	case 86:
		goto loc_823ECE94;
	case 87:
		goto loc_823ECEDC;
	case 88:
		goto loc_823ECE9C;
	case 89:
		goto loc_823ECEDC;
	case 90:
		goto loc_823ECEDC;
	case 91:
		goto loc_823ECEDC;
	case 92:
		goto loc_823ECEDC;
	case 93:
		goto loc_823ECEDC;
	case 94:
		goto loc_823ECEDC;
	case 95:
		goto loc_823ECEDC;
	case 96:
		goto loc_823ECEC4;
	case 97:
		goto loc_823ECEDC;
	case 98:
		goto loc_823ECED4;
	case 99:
		goto loc_823ECEDC;
	case 100:
		goto loc_823ECEDC;
	case 101:
		goto loc_823ECEDC;
	case 102:
		goto loc_823ECEDC;
	case 103:
		goto loc_823ECEDC;
	case 104:
		goto loc_823ECEA4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ECDB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDBC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDC4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDCC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDD4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDDC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDE4:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDEC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDF4:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECDFC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE04:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE0C:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE14:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE1C:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE24:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE2C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE34:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE3C:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE44:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE4C:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE54:
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE5C:
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE64:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE6C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE74:
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE7C:
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE84:
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE8C:
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE94:
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECE9C:
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEA4:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEAC:
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEB4:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEBC:
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEC4:
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECECC:
	// li r11,35
	ctx.r11.s64 = 35;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECED4:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x823ecee0
	goto loc_823ECEE0;
loc_823ECEDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823ECEE0:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823ecef0
	if (ctx.cr0.eq) goto loc_823ECEF0;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// ble cr6,0x823ecf2c
	if (!ctx.cr6.gt) goto loc_823ECF2C;
loc_823ECEF0:
	// bl 0x82793614
	ctx.lr = 0x823ECEF4;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823ecf18
	if (!ctx.cr6.eq) goto loc_823ECF18;
	// addi r11,r3,-257
	ctx.r11.s64 = ctx.r3.s64 + -257;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x823ecf2c
	goto loc_823ECF2C;
loc_823ECF18:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
loc_823ECF2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FB0B0) {
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
	ctx.lr = 0x823FB0B8;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
loc_823FB0D0:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f8390
	ctx.lr = 0x823FB0DC;
	sub_823F8390(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// blt cr6,0x823fb0d0
	if (ctx.cr6.lt) goto loc_823FB0D0;
	// lbz r11,11959(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11959);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb104
	if (ctx.cr0.eq) goto loc_823FB104;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823fb5dc
	goto loc_823FB5DC;
loc_823FB104:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823fb748
	ctx.lr = 0x823FB120;
	sub_823FB748(ctx, base);
	// lwz r11,11012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11012);
	// lwz r10,11952(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 11952);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r7,11956(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 11956);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r3,11959(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 11959);
	// lwz r31,11016(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 11016);
	// ble cr6,0x823fb5c0
	if (!ctx.cr6.gt) goto loc_823FB5C0;
loc_823FB140:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lhax r8,r9,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823fb190
	if (!ctx.cr0.lt) goto loc_823FB190;
	// lis r9,128
	ctx.r9.s64 = 8388608;
loc_823FB158:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r5
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x823fb158
	if (ctx.cr0.lt) goto loc_823FB158;
loc_823FB190:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fb21c
	if (ctx.cr0.gt) goto loc_823FB21C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x823fb1ec
	if (!ctx.cr6.lt) goto loc_823FB1EC;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x823fb21c
	if (ctx.cr0.gt) goto loc_823FB21C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x823fb1f4
	if (ctx.cr6.lt) goto loc_823FB1F4;
loc_823FB1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fb21c
	goto loc_823FB21C;
loc_823FB1F4:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FB21C:
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823fb5c0
	if (!ctx.cr0.eq) goto loc_823FB5C0;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// bne cr6,0x823fb2f4
	if (!ctx.cr6.eq) goto loc_823FB2F4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fb2b4
	if (ctx.cr0.gt) goto loc_823FB2B4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x823fb284
	if (!ctx.cr6.lt) goto loc_823FB284;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x823fb2b4
	if (ctx.cr0.gt) goto loc_823FB2B4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x823fb28c
	if (ctx.cr6.lt) goto loc_823FB28C;
loc_823FB284:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fb2b4
	goto loc_823FB2B4;
loc_823FB28C:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FB2B4:
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r29.s32, ctx.xer);
	// blt cr6,0x823fb2c8
	if (ctx.cr6.lt) goto loc_823FB2C8;
	// subf r9,r4,r29
	ctx.r9.u64 = r29.u64 - ctx.r4.u64;
loc_823FB2C8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823fb590
	if (!ctx.cr6.gt) goto loc_823FB590;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823fb3c0
	if (ctx.cr0.eq) goto loc_823FB3C0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823FB2E8:
	// stbu r6,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823fb2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB2E8;
	// b 0x823fb3c0
	goto loc_823FB3C0;
loc_823FB2F4:
	// cmpwi cr6,r8,18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 18, ctx.xer);
	// bne cr6,0x823fb3c8
	if (!ctx.cr6.eq) goto loc_823FB3C8;
	// addi r9,r7,-5
	ctx.r9.s64 = ctx.r7.s64 + -5;
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fb384
	if (ctx.cr0.gt) goto loc_823FB384;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x823fb354
	if (!ctx.cr6.lt) goto loc_823FB354;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x823fb384
	if (ctx.cr0.gt) goto loc_823FB384;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x823fb35c
	if (ctx.cr6.lt) goto loc_823FB35C;
loc_823FB354:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fb384
	goto loc_823FB384;
loc_823FB35C:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FB384:
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r29.s32, ctx.xer);
	// blt cr6,0x823fb398
	if (ctx.cr6.lt) goto loc_823FB398;
	// subf r9,r4,r29
	ctx.r9.u64 = r29.u64 - ctx.r4.u64;
loc_823FB398:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823fb590
	if (!ctx.cr6.gt) goto loc_823FB590;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823fb3c0
	if (ctx.cr0.eq) goto loc_823FB3C0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823FB3B8:
	// stbu r6,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823fb3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB3B8;
loc_823FB3C0:
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x823fb590
	goto loc_823FB590;
loc_823FB3C8:
	// cmpwi cr6,r8,19
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 19, ctx.xer);
	// bne cr6,0x823fb598
	if (!ctx.cr6.eq) goto loc_823FB598;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr. r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x823fb45c
	if (ctx.cr0.gt) goto loc_823FB45C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x823fb42c
	if (!ctx.cr6.lt) goto loc_823FB42C;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// neg r26,r10
	r26.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 | ctx.r5.u64;
	// mr. r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x823fb45c
	if (ctx.cr0.gt) goto loc_823FB45C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x823fb434
	if (ctx.cr6.lt) goto loc_823FB434;
loc_823FB42C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fb45c
	goto loc_823FB45C;
loc_823FB434:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// slw r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_823FB45C:
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x823fb470
	if (ctx.cr6.lt) goto loc_823FB470;
	// subf r5,r4,r29
	ctx.r5.u64 = r29.u64 - ctx.r4.u64;
loc_823FB470:
	// rlwinm r10,r9,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FE;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823fb4c0
	if (!ctx.cr0.lt) goto loc_823FB4C0;
	// lis r10,128
	ctx.r10.s64 = 8388608;
loc_823FB488:
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r26
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r26.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x823fb488
	if (ctx.cr0.lt) goto loc_823FB488;
loc_823FB4C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fb54c
	if (ctx.cr0.gt) goto loc_823FB54C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x823fb51c
	if (!ctx.cr6.lt) goto loc_823FB51C;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r25,r9
	r25.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r26
	ctx.r6.u64 = ctx.r9.u64 | r26.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r6,r6,r25
	ctx.r6.u64 = r25.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r25.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x823fb54c
	if (ctx.cr0.gt) goto loc_823FB54C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x823fb524
	if (ctx.cr6.lt) goto loc_823FB524;
loc_823FB51C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fb54c
	goto loc_823FB54C;
loc_823FB524:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r26,r7,r26
	r26.u64 = ctx.r7.u64 | r26.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r26,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FB54C:
	// lbzx r9,r4,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r27.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x823fb564
	if (ctx.cr6.lt) goto loc_823FB564;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_823FB564:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823fb590
	if (!ctx.cr6.gt) goto loc_823FB590;
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// beq 0x823fb58c
	if (ctx.cr0.eq) goto loc_823FB58C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823FB584:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823fb584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB584;
loc_823FB58C:
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
loc_823FB590:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x823fb5b4
	goto loc_823FB5B4;
loc_823FB598:
	// lbzx r9,r4,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r27.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x823fb5b0
	if (ctx.cr6.lt) goto loc_823FB5B0;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_823FB5B0:
	// stbx r9,r4,r28
	REX_STORE_U8(ctx.r4.u32 + r28.u32, ctx.r9.u8);
loc_823FB5B4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r29.s32, ctx.xer);
	// blt cr6,0x823fb140
	if (ctx.cr6.lt) goto loc_823FB140;
loc_823FB5C0:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,11012(r30)
	REX_STORE_U32(r30.u32 + 11012, ctx.r11.u32);
	// stb r3,11959(r30)
	REX_STORE_U8(r30.u32 + 11959, ctx.r3.u8);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,11952(r30)
	REX_STORE_U32(r30.u32 + 11952, ctx.r10.u32);
	// stb r7,11956(r30)
	REX_STORE_U8(r30.u32 + 11956, ctx.r7.u8);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823FB5DC:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82415DC8) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823f02b8
	ctx.lr = 0x82415DF0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82415e10
	if (ctx.cr0.eq) goto loc_82415E10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82415E10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82415e24
	if (!ctx.cr6.eq) goto loc_82415E24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82415e38
	goto loc_82415E38;
loc_82415E24:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r30,672(r31)
	REX_STORE_U32(r31.u32 + 672, r30.u32);
loc_82415E38:
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

DEFINE_REX_FUNC(sub_82419A48) {
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
	ctx.lr = 0x82419A50;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419af0
	if (!ctx.cr6.lt) goto loc_82419AF0;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419A7C;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419af0
	if (ctx.cr0.eq) goto loc_82419AF0;
	// addi r30,r26,1
	r30.s64 = r26.s64 + 1;
	// b 0x82419aa0
	goto loc_82419AA0;
loc_82419A8C:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419A94;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419aac
	if (ctx.cr0.eq) goto loc_82419AAC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82419AA0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419a8c
	if (ctx.cr6.lt) goto loc_82419A8C;
loc_82419AAC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419ac4
	if (!ctx.cr6.lt) goto loc_82419AC4;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82419ae0
	if (ctx.cr6.eq) goto loc_82419AE0;
loc_82419AC4:
	// li r25,1
	r25.s64 = 1;
	// b 0x82419b44
	goto loc_82419B44;
loc_82419ACC:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419AD4;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419b44
	if (ctx.cr0.eq) goto loc_82419B44;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_82419AE0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419acc
	if (ctx.cr6.lt) goto loc_82419ACC;
	// b 0x82419b44
	goto loc_82419B44;
loc_82419AF0:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82419cec
	if (!ctx.cr6.lt) goto loc_82419CEC;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82419cec
	if (!ctx.cr6.eq) goto loc_82419CEC;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419B14;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419cec
	if (ctx.cr0.eq) goto loc_82419CEC;
	// addi r30,r26,2
	r30.s64 = r26.s64 + 2;
	// b 0x82419b38
	goto loc_82419B38;
loc_82419B24:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419B2C;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419b44
	if (ctx.cr0.eq) goto loc_82419B44;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82419B38:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419b24
	if (ctx.cr6.lt) goto loc_82419B24;
loc_82419B44:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419ba0
	if (!ctx.cr6.lt) goto loc_82419BA0;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a14c8
	ctx.lr = 0x82419B5C;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82419ba0
	if (!ctx.cr6.eq) goto loc_82419BA0;
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419B6C;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419ba0
	if (ctx.cr0.eq) goto loc_82419BA0;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82419b90
	goto loc_82419B90;
loc_82419B7C:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419B84;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419c88
	if (ctx.cr0.eq) goto loc_82419C88;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82419B90:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419b7c
	if (ctx.cr6.lt) goto loc_82419B7C;
	// b 0x82419c88
	goto loc_82419C88;
loc_82419BA0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r27,r30,2
	r27.s64 = r30.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419c14
	if (!ctx.cr6.lt) goto loc_82419C14;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a14c8
	ctx.lr = 0x82419BB8;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82419c14
	if (!ctx.cr6.eq) goto loc_82419C14;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82419bd8
	if (ctx.cr6.eq) goto loc_82419BD8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82419c14
	if (!ctx.cr6.eq) goto loc_82419C14;
loc_82419BD8:
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419BE0;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419c14
	if (ctx.cr0.eq) goto loc_82419C14;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// b 0x82419c04
	goto loc_82419C04;
loc_82419BF0:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82419BF8;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419c88
	if (ctx.cr0.eq) goto loc_82419C88;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82419C04:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419bf0
	if (ctx.cr6.lt) goto loc_82419BF0;
	// b 0x82419c88
	goto loc_82419C88;
loc_82419C14:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82419c80
	if (!ctx.cr6.eq) goto loc_82419C80;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,24568
	r27.s64 = ctx.r11.s64 + 24568;
loc_82419C28:
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82419C30:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82419c30
	if (!ctx.cr6.eq) goto loc_82419C30;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r26
	ctx.r11.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82419c70
	if (ctx.cr6.gt) goto loc_82419C70;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269f180
	ctx.lr = 0x82419C68;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419cdc
	if (ctx.cr0.eq) goto loc_82419CDC;
loc_82419C70:
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82419c28
	if (!ctx.cr6.eq) goto loc_82419C28;
loc_82419C80:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82419cec
	if (!ctx.cr6.eq) goto loc_82419CEC;
loc_82419C88:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82419cd4
	if (ctx.cr6.eq) goto loc_82419CD4;
	// subf r29,r26,r30
	r29.u64 = r30.u64 - r26.u64;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x82419CA4;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82419CC0;
	sub_826A1E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stbx r11,r28,r29
	REX_STORE_U8(r28.u32 + r29.u32, ctx.r11.u8);
	// bl 0x826a0970
	ctx.lr = 0x82419CD0;
	sub_826A0970(ctx, base);
	// stfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r24.u32 + 0, ctx.f1.u64);
loc_82419CD4:
	// subf r3,r26,r30
	ctx.r3.u64 = r30.u64 - r26.u64;
	// b 0x82419cf0
	goto loc_82419CF0;
loc_82419CDC:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfd f0,0(r24)
	REX_STORE_U64(r24.u32 + 0, ctx.f0.u64);
	// b 0x82419cf0
	goto loc_82419CF0;
loc_82419CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82419CF0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8243BC20) {
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
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// bne cr6,0x8243bc5c
	if (!ctx.cr6.eq) goto loc_8243BC5C;
	// bl 0x8243aba0
	ctx.lr = 0x8243BC50;
	sub_8243ABA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x8243BC5C;
	sub_823F0350(ctx, base);
loc_8243BC5C:
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

DEFINE_REX_FUNC(sub_8243EE00) {
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
	// lwz r11,420(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8243ee44
	if (!ctx.cr6.eq) goto loc_8243EE44;
	// bl 0x8243e890
	ctx.lr = 0x8243EE24;
	sub_8243E890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8243ee44
	if (!ctx.cr6.eq) goto loc_8243EE44;
loc_8243EE2C:
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
loc_8243EE44:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r4,208
	ctx.r9.s64 = ctx.r4.s64 + 208;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8243ee9c
	if (!ctx.cr6.eq) goto loc_8243EE9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,98
	ctx.r10.s64 = 98;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,444(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8243EE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r4.u32);
	// b 0x8243eeb8
	goto loc_8243EEB8;
loc_8243EE9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243EEB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243ee2c
	if (ctx.cr6.eq) goto loc_8243EE2C;
loc_8243EEB8:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82443820) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82443510
	ctx.lr = 0x82443844;
	sub_82443510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824438c8
	if (ctx.cr0.lt) goto loc_824438C8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
loc_82443868:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82443868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443868;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r9,r31,124
	ctx.r9.s64 = r31.s64 + 124;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824438A0:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824438a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824438A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824438C8:
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

DEFINE_REX_FUNC(sub_82445C98) {
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
	ctx.lr = 0x82445CB4;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82444608
	ctx.lr = 0x82445CC4;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445cf8
	if (ctx.cr0.eq) goto loc_82445CF8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82445cfc
	goto loc_82445CFC;
loc_82445CF8:
	// li r31,0
	r31.s64 = 0;
loc_82445CFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82445d0c
	if (!ctx.cr6.eq) goto loc_82445D0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82445d40
	goto loc_82445D40;
loc_82445D0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445d3c
	if (ctx.cr6.eq) goto loc_82445D3C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82445d40
	if (ctx.cr0.eq) goto loc_82445D40;
loc_82445D3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82445D40:
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

DEFINE_REX_FUNC(sub_82448050) {
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
	ctx.lr = 0x8244806C;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82444608
	ctx.lr = 0x8244807C;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824480c0
	if (ctx.cr0.eq) goto loc_824480C0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r10,r10,-7852
	ctx.r10.s64 = ctx.r10.s64 + -7852;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x824480c4
	goto loc_824480C4;
loc_824480C0:
	// li r31,0
	r31.s64 = 0;
loc_824480C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824480d4
	if (!ctx.cr6.eq) goto loc_824480D4;
loc_824480CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82448164
	goto loc_82448164;
loc_824480D4:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448108
	if (ctx.cr6.eq) goto loc_82448108;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824480FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824480cc
	if (ctx.cr0.eq) goto loc_824480CC;
loc_82448108:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448134
	if (ctx.cr6.eq) goto loc_82448134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824480cc
	if (ctx.cr0.eq) goto loc_824480CC;
loc_82448134:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448160
	if (ctx.cr6.eq) goto loc_82448160;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824480cc
	if (ctx.cr0.eq) goto loc_824480CC;
loc_82448160:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82448164:
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

DEFINE_REX_FUNC(sub_82453F50) {
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
	ctx.lr = 0x82453F58;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// ble cr6,0x82453fa0
	if (!ctx.cr6.gt) goto loc_82453FA0;
	// li r29,0
	r29.s64 = 0;
loc_82453F74:
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
	ctx.lr = 0x82453F8C;
	sub_824605A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82453f74
	if (ctx.cr6.lt) goto loc_82453F74;
loc_82453FA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82454704
	if (!ctx.cr6.gt) goto loc_82454704;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r29,24816
	r29.s64 = 1626341376;
	// lis r14,4336
	r14.s64 = 284164096;
	// lis r15,4176
	r15.s64 = 273678336;
	// lis r30,1
	r30.s64 = 65536;
	// ori r27,r11,16385
	r27.u64 = ctx.r11.u64 | 16385;
	// lis r16,8208
	r16.s64 = 537919488;
	// lis r17,24640
	r17.s64 = 1614807040;
	// lis r18,20528
	r18.s64 = 1345323008;
	// lis r28,15
	r28.s64 = 983040;
	// lis r19,24736
	r19.s64 = 1621098496;
	// lis r20,29504
	r20.s64 = 1933574144;
	// lis r21,28768
	r21.s64 = 1885339648;
	// lis r22,28688
	r22.s64 = 1880096768;
	// lis r23,28880
	r23.s64 = 1892679680;
	// lis r24,29680
	r24.s64 = 1945108480;
	// lis r25,29600
	r25.s64 = 1939865600;
	// lis r26,29776
	r26.s64 = 1951399936;
loc_82453FFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82454034
	if (ctx.cr6.eq) goto loc_82454034;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82454034
	if (!ctx.cr6.eq) goto loc_82454034;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
loc_82454034:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bd3d0
	ctx.lr = 0x8245403C;
	sub_824BD3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82454708
	if (ctx.cr0.lt) goto loc_82454708;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x82454420
	if (ctx.cr6.gt) goto loc_82454420;
	// beq cr6,0x82454408
	if (ctx.cr6.eq) goto loc_82454408;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82454274
	if (ctx.cr6.gt) goto loc_82454274;
	// beq cr6,0x82454268
	if (ctx.cr6.eq) goto loc_82454268;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bgt cr6,0x8245419c
	if (ctx.cr6.gt) goto loc_8245419C;
	// beq cr6,0x8245465c
	if (ctx.cr6.eq) goto loc_8245465C;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bgt cr6,0x82454114
	if (ctx.cr6.gt) goto loc_82454114;
	// beq cr6,0x82454104
	if (ctx.cr6.eq) goto loc_82454104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824540f8
	if (ctx.cr6.eq) goto loc_824540F8;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824540ec
	if (ctx.cr6.eq) goto loc_824540EC;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824540e0
	if (ctx.cr6.eq) goto loc_824540E0;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824540d0
	if (ctx.cr6.eq) goto loc_824540D0;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x824546d8
	goto loc_824546D8;
loc_824540D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r30.u32);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x824546d8
	goto loc_824546D8;
loc_824540E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x824546d8
	goto loc_824546D8;
loc_824540EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x824546d8
	goto loc_824546D8;
loc_824540F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454104:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r30.u32);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454114:
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245418c
	if (ctx.cr6.eq) goto loc_8245418C;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245417c
	if (ctx.cr6.eq) goto loc_8245417C;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245415c
	if (ctx.cr6.eq) goto loc_8245415C;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82454174
	if (ctx.cr0.eq) goto loc_82454174;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245415C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82454174
	if (ctx.cr0.eq) goto loc_82454174;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454174:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x824546e4
	goto loc_824546E4;
loc_8245417C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r30.u32);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245418C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r30.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245419C:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bgt cr6,0x82454208
	if (ctx.cr6.gt) goto loc_82454208;
	// beq cr6,0x82454558
	if (ctx.cr6.eq) goto loc_82454558;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824541f0
	if (ctx.cr6.eq) goto loc_824541F0;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824540ec
	if (ctx.cr6.eq) goto loc_824540EC;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824546ec
	if (ctx.cr6.eq) goto loc_824546EC;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824540ec
	if (ctx.cr6.eq) goto loc_824540EC;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_824541E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x824546d8
	goto loc_824546D8;
loc_824541F0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454774
	if (!ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454208:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245425c
	if (ctx.cr6.eq) goto loc_8245425C;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454250
	if (ctx.cr6.eq) goto loc_82454250;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454244
	if (ctx.cr6.eq) goto loc_82454244;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454244:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454250:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245425C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454268:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454274:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bgt cr6,0x8245437c
	if (ctx.cr6.gt) goto loc_8245437C;
	// beq cr6,0x824543c4
	if (ctx.cr6.eq) goto loc_824543C4;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bgt cr6,0x82454334
	if (ctx.cr6.gt) goto loc_82454334;
	// beq cr6,0x82454324
	if (ctx.cr6.eq) goto loc_82454324;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824546ec
	if (ctx.cr6.eq) goto loc_824546EC;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824540ec
	if (ctx.cr6.eq) goto loc_824540EC;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245430c
	if (ctx.cr6.eq) goto loc_8245430C;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824542d4
	if (ctx.cr6.eq) goto loc_824542D4;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x824546d8
	goto loc_824546D8;
loc_824542D4:
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824542f8
	if (ctx.cr6.eq) goto loc_824542F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82454770
	if (!ctx.cr6.eq) goto loc_82454770;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r28.u32);
	// lwz r11,584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// b 0x824546d8
	goto loc_824546D8;
loc_824542F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// stw r11,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r11.u32);
	// lwz r11,580(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 580);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245430C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454774
	if (!ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454324:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, r28.u32);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454334:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454408
	if (ctx.cr6.eq) goto loc_82454408;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544a4
	if (ctx.cr6.eq) goto loc_824544A4;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245448c
	if (ctx.cr6.eq) goto loc_8245448C;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_82454364:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454774
	if (!ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245437C:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bgt cr6,0x824543dc
	if (ctx.cr6.gt) goto loc_824543DC;
	// beq cr6,0x82454408
	if (ctx.cr6.eq) goto loc_82454408;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454408
	if (ctx.cr6.eq) goto loc_82454408;
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544a4
	if (ctx.cr6.eq) goto loc_824544A4;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245448c
	if (ctx.cr6.eq) goto loc_8245448C;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454364
	if (ctx.cr6.eq) goto loc_82454364;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
loc_824543BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_824543C4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82454774
	if (ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x824546d8
	goto loc_824546D8;
loc_824543DC:
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544a4
	if (ctx.cr6.eq) goto loc_824544A4;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245448c
	if (ctx.cr6.eq) goto loc_8245448C;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454364
	if (ctx.cr6.eq) goto loc_82454364;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x824543bc
	goto loc_824543BC;
loc_82454408:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454774
	if (!ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454420:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bgt cr6,0x824545fc
	if (ctx.cr6.gt) goto loc_824545FC;
	// beq cr6,0x824545f0
	if (ctx.cr6.eq) goto loc_824545F0;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bgt cr6,0x82454510
	if (ctx.cr6.gt) goto loc_82454510;
	// beq cr6,0x824544ec
	if (ctx.cr6.eq) goto loc_824544EC;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x824544bc
	if (ctx.cr6.gt) goto loc_824544BC;
	// beq cr6,0x824544b0
	if (ctx.cr6.eq) goto loc_824544B0;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544a4
	if (ctx.cr6.eq) goto loc_824544A4;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245448c
	if (ctx.cr6.eq) goto loc_8245448C;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454364
	if (ctx.cr6.eq) goto loc_82454364;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824543c4
	if (ctx.cr6.eq) goto loc_824543C4;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245448C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454774
	if (!ctx.cr0.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x824546d8
	goto loc_824546D8;
loc_824544A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x824546d8
	goto loc_824546D8;
loc_824544B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x824546d8
	goto loc_824546D8;
loc_824544BC:
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454504
	if (ctx.cr6.eq) goto loc_82454504;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544f8
	if (ctx.cr6.eq) goto loc_824544F8;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544f8
	if (ctx.cr6.eq) goto loc_824544F8;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_824544EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x824546d8
	goto loc_824546D8;
loc_824544F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454504:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454510:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x82454590
	if (ctx.cr6.gt) goto loc_82454590;
	// beq cr6,0x82454584
	if (ctx.cr6.eq) goto loc_82454584;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824544ec
	if (ctx.cr6.eq) goto loc_824544EC;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454570
	if (ctx.cr6.eq) goto loc_82454570;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454564
	if (ctx.cr6.eq) goto loc_82454564;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824541e4
	if (ctx.cr6.eq) goto loc_824541E4;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_82454558:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454564:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454570:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r11,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r11.u32);
	// lwz r11,284(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454584:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454590:
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824545d4
	if (ctx.cr6.eq) goto loc_824545D4;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824545c0
	if (ctx.cr6.eq) goto loc_824545C0;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824545cc
	if (ctx.cr6.eq) goto loc_824545CC;
	// lis r10,29488
	ctx.r10.s64 = 1932525568;
loc_824545B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_824545C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x824546d8
	goto loc_824546D8;
loc_824545CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824545d8
	goto loc_824545D8;
loc_824545D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824545D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824545EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824546e4
	goto loc_824546E4;
loc_824545F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x824546d8
	goto loc_824546D8;
loc_824545FC:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x82454694
	if (ctx.cr6.gt) goto loc_82454694;
	// beq cr6,0x824545c0
	if (ctx.cr6.eq) goto loc_824545C0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x82454668
	if (ctx.cr6.gt) goto loc_82454668;
	// beq cr6,0x82454650
	if (ctx.cr6.eq) goto loc_82454650;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245465c
	if (ctx.cr6.eq) goto loc_8245465C;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245465c
	if (ctx.cr6.eq) goto loc_8245465C;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245465c
	if (ctx.cr6.eq) goto loc_8245465C;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245465c
	if (ctx.cr6.eq) goto loc_8245465C;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_82454650:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245465C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454668:
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454650
	if (ctx.cr6.eq) goto loc_82454650;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454650
	if (ctx.cr6.eq) goto loc_82454650;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824545c0
	if (ctx.cr6.eq) goto loc_824545C0;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// b 0x824545b8
	goto loc_824545B8;
loc_82454694:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82454728
	if (ctx.cr6.gt) goto loc_82454728;
	// beq cr6,0x824546d0
	if (ctx.cr6.eq) goto loc_824546D0;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824545c0
	if (ctx.cr6.eq) goto loc_824545C0;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245471c
	if (ctx.cr6.eq) goto loc_8245471C;
	// lis r10,29728
	ctx.r10.s64 = 1948254208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454710
	if (ctx.cr6.eq) goto loc_82454710;
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
loc_824546D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
loc_824546D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824546E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824546E4:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r27.s32, ctx.xer);
	// beq cr6,0x82454774
	if (ctx.cr6.eq) goto loc_82454774;
loc_824546EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82453ffc
	if (ctx.cr6.lt) goto loc_82453FFC;
loc_82454704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82454708:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82454710:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x824546d8
	goto loc_824546D8;
loc_8245471C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454728:
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824546d0
	if (ctx.cr6.eq) goto loc_824546D0;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824546d0
	if (ctx.cr6.eq) goto loc_824546D0;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82454764
	if (ctx.cr6.eq) goto loc_82454764;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454774
	if (!ctx.cr6.eq) goto loc_82454774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454764:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x824546d8
	goto loc_824546D8;
loc_82454770:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82454774:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// beq 0x8245479c
	if (ctx.cr0.eq) goto loc_8245479C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,13008
	ctx.r6.s64 = ctx.r10.s64 + 13008;
	// b 0x824547a4
	goto loc_824547A4;
loc_8245479C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,12952
	ctx.r6.s64 = ctx.r10.s64 + 12952;
loc_824547A4:
	// bl 0x82489c30
	ctx.lr = 0x824547A8;
	sub_82489C30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82454708
	goto loc_82454708;
}

DEFINE_REX_FUNC(sub_82494EB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82494efc
	if (!ctx.cr6.eq) goto loc_82494EFC;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82494ef0
	if (!ctx.cr6.eq) goto loc_82494EF0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12464
	ctx.r6.s64 = ctx.r11.s64 + -12464;
	// bl 0x82494e30
	ctx.lr = 0x82494EF0;
	sub_82494E30(ctx, base);
loc_82494EF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_82494EFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82495F28) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82495F30;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca8
	ctx.lr = 0x82495F38;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82495f60
	if (!ctx.cr6.eq) goto loc_82495F60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82497494
	if (!ctx.cr6.eq) goto loc_82497494;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249749c
	goto loc_8249749C;
loc_82495F60:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82497494
	if (!ctx.cr6.eq) goto loc_82497494;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lwz r9,24(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 24);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// mullw r26,r11,r9
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bne cr6,0x82497494
	if (!ctx.cr6.eq) goto loc_82497494;
	// lwz r22,36(r23)
	r22.u64 = REX_LOAD_U32(r23.u32 + 36);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r24,0
	r24.s64 = 0;
	// lwz r25,8(r22)
	r25.u64 = REX_LOAD_U32(r22.u32 + 8);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// std r24,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r24.u64);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// std r24,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r24.u64);
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r24.u64);
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r24.u64);
	// std r24,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r24.u64);
	// beq cr6,0x82496084
	if (ctx.cr6.eq) goto loc_82496084;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82495FC0:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82496074
	if (ctx.cr6.eq) goto loc_82496074;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82496074
	if (!ctx.cr6.eq) goto loc_82496074;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
	// stwx r10,r30,r28
	REX_STORE_U32(r30.u32 + r28.u32, ctx.r10.u32);
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82496000;
	sub_823F02B8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// beq 0x824960c0
	if (ctx.cr0.eq) goto loc_824960C0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8249a210
	ctx.lr = 0x82496020;
	sub_8249A210(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8249746c
	if (ctx.cr0.lt) goto loc_8249746C;
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82496074
	if (!ctx.cr6.gt) goto loc_82496074;
	// addi r6,r23,48
	ctx.r6.s64 = r23.s64 + 48;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82496040:
	// add r5,r29,r10
	ctx.r5.u64 = r29.u64 + ctx.r10.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// bl 0x82493d20
	ctx.lr = 0x82496050;
	sub_82493D20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8249746c
	if (ctx.cr0.lt) goto loc_8249746C;
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82496040
	if (ctx.cr6.lt) goto loc_82496040;
loc_82496074:
	// lwz r25,12(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82495fc0
	if (!ctx.cr6.eq) goto loc_82495FC0;
loc_82496084:
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,137
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 137, ctx.xer);
	// bgt cr6,0x82497464
	if (ctx.cr6.gt) goto loc_82497464;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-15296
	ctx.r12.s64 = ctx.r12.s64 + -15296;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,24768
	ctx.r12.s64 = ctx.r12.s64 + 24768;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824960CC;
	case 1:
		goto loc_824960FC;
	case 2:
		goto loc_82496154;
	case 3:
		goto loc_8249619C;
	case 4:
		goto loc_824961EC;
	case 5:
		goto loc_82497464;
	case 6:
		goto loc_82496244;
	case 7:
		goto loc_82496278;
	case 8:
		goto loc_824962B8;
	case 9:
		goto loc_824962EC;
	case 10:
		goto loc_82497464;
	case 11:
		goto loc_82496348;
	case 12:
		goto loc_8249637C;
	case 13:
		goto loc_824963B0;
	case 14:
		goto loc_82497464;
	case 15:
		goto loc_82497464;
	case 16:
		goto loc_82496410;
	case 17:
		goto loc_82496434;
	case 18:
		goto loc_82496458;
	case 19:
		goto loc_82496490;
	case 20:
		goto loc_82497464;
	case 21:
		goto loc_824965EC;
	case 22:
		goto loc_82496630;
	case 23:
		goto loc_8249667C;
	case 24:
		goto loc_824966B0;
	case 25:
		goto loc_824966E4;
	case 26:
		goto loc_82496724;
	case 27:
		goto loc_82496798;
	case 28:
		goto loc_824967CC;
	case 29:
		goto loc_8249680C;
	case 30:
		goto loc_82497464;
	case 31:
		goto loc_82496868;
	case 32:
		goto loc_8249688C;
	case 33:
		goto loc_824968E4;
	case 34:
		goto loc_8249693C;
	case 35:
		goto loc_82496994;
	case 36:
		goto loc_824969E4;
	case 37:
		goto loc_82496A14;
	case 38:
		goto loc_82496A64;
	case 39:
		goto loc_82497464;
	case 40:
		goto loc_82496ABC;
	case 41:
		goto loc_82496B04;
	case 42:
		goto loc_82496B64;
	case 43:
		goto loc_82496BC4;
	case 44:
		goto loc_82496C08;
	case 45:
		goto loc_82497464;
	case 46:
		goto loc_82496C4C;
	case 47:
		goto loc_82496C4C;
	case 48:
		goto loc_82496C4C;
	case 49:
		goto loc_82496C84;
	case 50:
		goto loc_82496CBC;
	case 51:
		goto loc_82496CBC;
	case 52:
		goto loc_82496C84;
	case 53:
		goto loc_82496CBC;
	case 54:
		goto loc_82496CBC;
	case 55:
		goto loc_82497464;
	case 56:
		goto loc_82496D9C;
	case 57:
		goto loc_82496E14;
	case 58:
		goto loc_82496E6C;
	case 59:
		goto loc_82497464;
	case 60:
		goto loc_82497464;
	case 61:
		goto loc_82497464;
	case 62:
		goto loc_82496EA4;
	case 63:
		goto loc_82496F1C;
	case 64:
		goto loc_82496FD8;
	case 65:
		goto loc_82497018;
	case 66:
		goto loc_82497074;
	case 67:
		goto loc_824970D0;
	case 68:
		goto loc_82497134;
	case 69:
		goto loc_82497464;
	case 70:
		goto loc_82497168;
	case 71:
		goto loc_8249719C;
	case 72:
		goto loc_82497240;
	case 73:
		goto loc_82497288;
	case 74:
		goto loc_824972E4;
	case 75:
		goto loc_82497318;
	case 76:
		goto loc_82497464;
	case 77:
		goto loc_82497464;
	case 78:
		goto loc_82497464;
	case 79:
		goto loc_82497464;
	case 80:
		goto loc_82497464;
	case 81:
		goto loc_82497464;
	case 82:
		goto loc_82497464;
	case 83:
		goto loc_82497464;
	case 84:
		goto loc_82497464;
	case 85:
		goto loc_82497464;
	case 86:
		goto loc_82497464;
	case 87:
		goto loc_82497464;
	case 88:
		goto loc_82497464;
	case 89:
		goto loc_82497464;
	case 90:
		goto loc_82497464;
	case 91:
		goto loc_82497464;
	case 92:
		goto loc_82497464;
	case 93:
		goto loc_82497464;
	case 94:
		goto loc_82497464;
	case 95:
		goto loc_82497464;
	case 96:
		goto loc_82497464;
	case 97:
		goto loc_82497464;
	case 98:
		goto loc_82497464;
	case 99:
		goto loc_82497464;
	case 100:
		goto loc_82497464;
	case 101:
		goto loc_82497464;
	case 102:
		goto loc_82497464;
	case 103:
		goto loc_82497464;
	case 104:
		goto loc_82497464;
	case 105:
		goto loc_82497464;
	case 106:
		goto loc_82497464;
	case 107:
		goto loc_82497464;
	case 108:
		goto loc_82497464;
	case 109:
		goto loc_82497464;
	case 110:
		goto loc_82497464;
	case 111:
		goto loc_82497464;
	case 112:
		goto loc_82497464;
	case 113:
		goto loc_82497464;
	case 114:
		goto loc_82497464;
	case 115:
		goto loc_82497464;
	case 116:
		goto loc_82497464;
	case 117:
		goto loc_82497464;
	case 118:
		goto loc_82497464;
	case 119:
		goto loc_82497464;
	case 120:
		goto loc_82497464;
	case 121:
		goto loc_82497464;
	case 122:
		goto loc_82497464;
	case 123:
		goto loc_82497464;
	case 124:
		goto loc_82497464;
	case 125:
		goto loc_82497464;
	case 126:
		goto loc_82497464;
	case 127:
		goto loc_82497464;
	case 128:
		goto loc_82497464;
	case 129:
		goto loc_82497464;
	case 130:
		goto loc_82497464;
	case 131:
		goto loc_82497464;
	case 132:
		goto loc_82497464;
	case 133:
		goto loc_82497464;
	case 134:
		goto loc_82497464;
	case 135:
		goto loc_8249734C;
	case 136:
		goto loc_82497464;
	case 137:
		goto loc_824973C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824960C0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8249746c
	goto loc_8249746C;
loc_824960CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_824960E4:
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824960e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824960E4;
	// b 0x82497404
	goto loc_82497404;
loc_824960FC:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,4296(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// lfd f30,3728(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82496124:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82497464
	if (ctx.cr6.lt) goto loc_82497464;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x82497464
	if (ctx.cr6.gt) goto loc_82497464;
	// bl 0x8269d438
	ctx.lr = 0x8249613C;
	sub_8269D438(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfdx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r29.u32 + r31.u32, ctx.f1.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496124
	if (ctx.cr6.lt) goto loc_82496124;
	// b 0x82497404
	goto loc_82497404;
loc_82496154:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f0,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfd f0,-3744(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
loc_8249617C:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x824961e4
	if (ctx.cr6.eq) goto loc_824961E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x8249617c
	if (ctx.cr6.lt) goto loc_8249617C;
	// b 0x82497404
	goto loc_82497404;
loc_8249619C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_824961BC:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824961dc
	if (!ctx.cr6.eq) goto loc_824961DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x824961bc
	if (ctx.cr6.lt) goto loc_824961BC;
	// b 0x82497404
	goto loc_82497404;
loc_824961DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_824961E4:
	// stfd f0,8(r27)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// b 0x82497404
	goto loc_82497404;
loc_824961EC:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,4296(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// lfd f30,3728(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82496214:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82497464
	if (ctx.cr6.lt) goto loc_82497464;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x82497464
	if (ctx.cr6.gt) goto loc_82497464;
	// bl 0x8269d370
	ctx.lr = 0x8249622C;
	sub_8269D370(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r29.u32, ctx.f1.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496214
	if (ctx.cr6.lt) goto loc_82496214;
	// b 0x82497404
	goto loc_82497404;
loc_82496244:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_8249625C:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x8269d440
	ctx.lr = 0x82496264;
	sub_8269D440(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8249625c
	if (!ctx.cr0.eq) goto loc_8249625C;
	// b 0x82497404
	goto loc_82497404;
loc_82496278:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r28,r11,r27
	r28.u64 = r27.u64 - ctx.r11.u64;
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_82496298:
	// lfdx f2,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// lfd f1,0(r31)
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x8269d528
	ctx.lr = 0x824962A4;
	sub_8269D528(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496298
	if (!ctx.cr0.eq) goto loc_82496298;
	// b 0x82497404
	goto loc_82497404;
loc_824962B8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_824962D0:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a3cb0
	ctx.lr = 0x824962D8;
	sub_826A3CB0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824962d0
	if (!ctx.cr0.eq) goto loc_824962D0;
	// b 0x82497404
	goto loc_82497404;
loc_824962EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
loc_82496314:
	// lfdx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f13,r9,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82496330
	if (ctx.cr6.lt) goto loc_82496330;
	// lfd f13,0(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82496338
	if (!ctx.cr6.gt) goto loc_82496338;
loc_82496330:
	// stfdx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f13.u64);
	// b 0x8249633c
	goto loc_8249633C;
loc_82496338:
	// stfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u64);
loc_8249633C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82496314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496314;
	// b 0x82497404
	goto loc_82497404;
loc_82496348:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_82496360:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a15c0
	ctx.lr = 0x82496368;
	sub_826A15C0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496360
	if (!ctx.cr0.eq) goto loc_82496360;
	// b 0x82497404
	goto loc_82497404;
loc_8249637C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_82496394:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a4e50
	ctx.lr = 0x8249639C;
	sub_826A4E50(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496394
	if (!ctx.cr0.eq) goto loc_82496394;
	// b 0x82497404
	goto loc_82497404;
loc_824963B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f13,40(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f13,24(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// lfd f12,40(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmsub f0,f13,f12,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// lfd f13,40(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// lfd f0,8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f11,40(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfd f12,8(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fmul f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmsub f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64);
	// stfd f0,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.f0.u64);
	// lfd f0,24(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f13,8(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f12,8(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f11,24(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmsub f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64);
	// stfd f0,40(r27)
	REX_STORE_U64(r27.u32 + 40, ctx.f0.u64);
	// b 0x82497404
	goto loc_82497404;
loc_82496410:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_82496428:
	// stfdu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82496428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496428;
	// b 0x82497404
	goto loc_82497404;
loc_82496434:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_8249644C:
	// stfdu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8249644c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8249644C;
	// b 0x82497404
	goto loc_82497404;
loc_82496458:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// lfd f0,-22720(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -22720);
loc_82496478:
	// lfdx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496478;
	// b 0x82497404
	goto loc_82497404;
loc_82496490:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824965e0
	if (ctx.cr6.eq) goto loc_824965E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824965c0
	if (ctx.cr6.eq) goto loc_824965C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82496570
	if (ctx.cr6.eq) goto loc_82496570;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82497464
	if (!ctx.cr6.eq) goto loc_82497464;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 184);
	// lfd f13,200(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 200);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f6,168(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 168);
	// lfd f10,232(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 232);
	// fmul f4,f13,f6
	ctx.f4.f64 = ctx.f13.f64 * ctx.f6.f64;
	// lfd f9,216(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 216);
	// fmul f8,f0,f10
	ctx.f8.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lfd f5,152(r11)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 152);
	// fmul f0,f9,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f0.f64;
	// lfd f11,248(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 248);
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// lfd f7,136(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// fmul f2,f9,f6
	ctx.f2.f64 = ctx.f9.f64 * ctx.f6.f64;
	// lfd f3,104(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f31,88(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f1,72(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f30,120(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 120);
	// fmsub f12,f7,f11,f12
	ctx.f12.f64 = std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f12.f64);
	// lfd f29,24(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmsub f4,f7,f10,f4
	ctx.f4.f64 = std::fma(ctx.f7.f64, ctx.f10.f64, -ctx.f4.f64);
	// lfd f28,8(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmsub f8,f6,f11,f8
	ctx.f8.f64 = std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f8.f64);
	// lfd f6,40(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmsub f0,f5,f11,f0
	ctx.f0.f64 = std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f0.f64);
	// lfd f11,56(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmsub f13,f7,f9,f13
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f13.f64);
	// fmsub f10,f5,f10,f2
	ctx.f10.f64 = std::fma(ctx.f5.f64, ctx.f10.f64, -ctx.f2.f64);
	// fmul f9,f12,f3
	ctx.f9.f64 = ctx.f12.f64 * ctx.f3.f64;
	// fmul f12,f12,f31
	ctx.f12.f64 = ctx.f12.f64 * f31.f64;
	// fmul f5,f4,f31
	ctx.f5.f64 = ctx.f4.f64 * f31.f64;
	// fmul f7,f3,f0
	ctx.f7.f64 = ctx.f3.f64 * ctx.f0.f64;
	// fmsub f9,f1,f8,f9
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f8.f64, -ctx.f9.f64);
	// fmsub f0,f1,f0,f12
	ctx.f0.f64 = std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f12.f64);
	// fmsub f12,f31,f8,f7
	ctx.f12.f64 = std::fma(f31.f64, ctx.f8.f64, -ctx.f7.f64);
	// fmsub f8,f1,f10,f5
	ctx.f8.f64 = std::fma(ctx.f1.f64, ctx.f10.f64, -ctx.f5.f64);
	// fmadd f9,f4,f30,f9
	ctx.f9.f64 = std::fma(ctx.f4.f64, f30.f64, ctx.f9.f64);
	// fmadd f0,f13,f30,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64);
	// fmadd f12,f30,f10,f12
	ctx.f12.f64 = std::fma(f30.f64, ctx.f10.f64, ctx.f12.f64);
	// fmadd f13,f13,f3,f8
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f8.f64);
	// fmul f10,f9,f29
	ctx.f10.f64 = ctx.f9.f64 * f29.f64;
	// fmsub f12,f12,f28,f10
	ctx.f12.f64 = std::fma(ctx.f12.f64, f28.f64, -ctx.f10.f64);
	// fmadd f0,f0,f6,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f12.f64);
	// fnmsub f0,f13,f11,f0
	ctx.f0.f64 = -std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f0.f64);
	// b 0x824961e4
	goto loc_824961E4;
loc_82496570:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,88(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f13,104(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f11,136(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// lfd f10,120(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f9,56(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmul f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lfd f8,72(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f7,24(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f13,f13,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f8.f64;
	// lfd f6,8(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f5,40(r11)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmsub f12,f9,f11,f12
	ctx.f12.f64 = std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f12.f64);
	// fmsub f0,f8,f11,f0
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f0.f64);
	// fmsub f13,f9,f10,f13
	ctx.f13.f64 = std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f13.f64);
	// fmul f12,f12,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f7.f64;
	// fmsub f0,f0,f6,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f12.f64);
	// fmadd f0,f13,f5,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f0.f64);
	// b 0x824961e4
	goto loc_824961E4;
loc_824965C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f0,40(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f13,56(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f12,8(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmsub f0,f13,f12,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64);
	// b 0x824961e4
	goto loc_824961E4;
loc_824965E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x824961e4
	goto loc_824961E4;
loc_824965EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// beq cr6,0x82496628
	if (ctx.cr6.eq) goto loc_82496628;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82496610:
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfd f12,0(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fmadd f0,f13,f13,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64);
	// bdnz 0x82496610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496610;
loc_82496628:
	// fsqrt f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// b 0x824961e4
	goto loc_824961E4;
loc_82496630:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8249665C:
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfd f12,8(r27)
	ctx.f12.u64 = REX_LOAD_U64(r27.u32 + 8);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// bdnz 0x8249665c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8249665C;
	// b 0x82497404
	goto loc_82497404;
loc_8249667C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,3728(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// stfd f0,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f0.u64);
	// lfd f0,24(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f13,24(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.f0.u64);
	// lfd f0,40(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// stfd f0,40(r27)
	REX_STORE_U64(r27.u32 + 40, ctx.f0.u64);
	// lfd f0,56(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// b 0x82497400
	goto loc_82497400;
loc_824966B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_824966C8:
	// lfdx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// bl 0x826a03b0
	ctx.lr = 0x824966D0;
	sub_826A03B0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824966c8
	if (!ctx.cr0.eq) goto loc_824966C8;
	// b 0x82497404
	goto loc_82497404;
loc_824966E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,8312(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_82496704:
	// lfdx f2,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x82496710;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496704
	if (!ctx.cr0.eq) goto loc_82496704;
	// b 0x82497404
	goto loc_82497404;
loc_82496724:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f12,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8249674C:
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfd f11,0(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmadd f13,f0,f11,f13
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64);
	// bdnz 0x8249674c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8249674C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
loc_82496778:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82496788
	if (ctx.cr6.lt) goto loc_82496788;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82496788:
	// stfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496778;
	// b 0x82497404
	goto loc_82497404;
loc_82496798:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_824967B0:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a2f00
	ctx.lr = 0x824967B8;
	sub_826A2F00(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824967b0
	if (!ctx.cr0.eq) goto loc_824967B0;
	// b 0x82497404
	goto loc_82497404;
loc_824967CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r28,r11,r27
	r28.u64 = r27.u64 - ctx.r11.u64;
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_824967EC:
	// lfdx f2,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// lfd f1,0(r31)
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x826a34b0
	ctx.lr = 0x824967F8;
	sub_826A34B0(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824967ec
	if (!ctx.cr0.eq) goto loc_824967EC;
	// b 0x82497404
	goto loc_82497404;
loc_8249680C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8249682C:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x826a18c8
	ctx.lr = 0x82496834;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82496854
	if (ctx.cr0.eq) goto loc_82496854;
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x826a2f00
	ctx.lr = 0x82496844;
	sub_826A2F00(ctx, base);
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fsub f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 - ctx.f1.f64;
	// stfdx f0,r31,r29
	REX_STORE_U64(r31.u32 + r29.u32, ctx.f0.u64);
	// b 0x82496858
	goto loc_82496858;
loc_82496854:
	// stfdx f31,r31,r29
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r29.u32, f31.u64);
loc_82496858:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8249682c
	if (!ctx.cr0.eq) goto loc_8249682C;
	// b 0x82497404
	goto loc_82497404;
loc_82496868:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_82496880:
	// stfdu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82496880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496880;
	// b 0x82497404
	goto loc_82497404;
loc_8249688C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lfd f31,3728(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// lfd f30,-3744(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824968B4:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a18c8
	ctx.lr = 0x824968BC;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824968cc
	if (ctx.cr0.eq) goto loc_824968CC;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x824968d0
	goto loc_824968D0;
loc_824968CC:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_824968D0:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824968b4
	if (!ctx.cr0.eq) goto loc_824968B4;
	// b 0x82497404
	goto loc_82497404;
loc_824968E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lfd f31,3728(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// lfd f30,-3744(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8249690C:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a18c8
	ctx.lr = 0x82496914;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82496924
	if (ctx.cr0.eq) goto loc_82496924;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// b 0x82496928
	goto loc_82496928;
loc_82496924:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_82496928:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8249690c
	if (!ctx.cr0.eq) goto loc_8249690C;
	// b 0x82497404
	goto loc_82497404;
loc_8249693C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lfd f31,3728(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// lfd f30,-3744(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82496964:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a18e8
	ctx.lr = 0x8249696C;
	sub_826A18E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249697c
	if (ctx.cr0.eq) goto loc_8249697C;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x82496980
	goto loc_82496980;
loc_8249697C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_82496980:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496964
	if (!ctx.cr0.eq) goto loc_82496964;
	// b 0x82497404
	goto loc_82497404;
loc_82496994:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r28,r11,r27
	r28.u64 = r27.u64 - ctx.r11.u64;
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,8312(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_824969BC:
	// lfdx f2,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x824969C8;
	sub_8269F778(ctx, base);
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfdx f0,r31,r28
	REX_STORE_U64(r31.u32 + r28.u32, ctx.f0.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824969bc
	if (!ctx.cr0.eq) goto loc_824969BC;
	// b 0x82497404
	goto loc_82497404;
loc_824969E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f13,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// beq cr6,0x82496a0c
	if (ctx.cr6.eq) goto loc_82496A0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82496A00:
	// lfdu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// fmadd f13,f0,f0,f13
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64);
	// bdnz 0x82496a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496A00;
loc_82496A0C:
	// fsqrt f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f13.f64);
	// b 0x824961e4
	goto loc_824961E4;
loc_82496A14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
loc_82496A3C:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfdx f13,r9,r11
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// lfdx f12,r7,r8
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r8.u32);
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fmadd f0,f12,f13,f0
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// stfdx f0,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496A3C;
	// b 0x82497404
	goto loc_82497404;
loc_82496A64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f13,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f0,-3744(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// stfd f13,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f13.u64);
	// stfd f0,40(r27)
	REX_STORE_U64(r27.u32 + 40, ctx.f0.u64);
	// stfd f13,56(r27)
	REX_STORE_U64(r27.u32 + 56, ctx.f13.u64);
	// stfd f0,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.f0.u64);
	// lfd f13,8(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82497404
	if (!ctx.cr6.gt) goto loc_82497404;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f13,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.f13.u64);
	// lfd f1,8(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82497404
	if (!ctx.cr6.gt) goto loc_82497404;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfd f2,8(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8269f778
	ctx.lr = 0x82496AB4;
	sub_8269F778(ctx, base);
	// stfd f1,40(r27)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r27.u32 + 40, ctx.f1.u64);
	// b 0x82497404
	goto loc_82497404;
loc_82496ABC:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82496ADC:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82497464
	if (!ctx.cr6.gt) goto loc_82497464;
	// bl 0x826a16a0
	ctx.lr = 0x82496AEC;
	sub_826A16A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r29.u32, ctx.f1.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496adc
	if (ctx.cr6.lt) goto loc_82496ADC;
	// b 0x82497404
	goto loc_82497404;
loc_82496B04:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lfd f30,10608(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
loc_82496B2C:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82497464
	if (!ctx.cr6.gt) goto loc_82497464;
	// bl 0x826a16a0
	ctx.lr = 0x82496B3C;
	sub_826A16A0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826a16a0
	ctx.lr = 0x82496B48;
	sub_826A16A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fdiv f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64 / ctx.f1.f64;
	// stfdx f0,r31,r29
	REX_STORE_U64(r31.u32 + r29.u32, ctx.f0.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496b2c
	if (ctx.cr6.lt) goto loc_82496B2C;
	// b 0x82497404
	goto loc_82497404;
loc_82496B64:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lfd f30,8312(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_82496B8C:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82497464
	if (!ctx.cr6.gt) goto loc_82497464;
	// bl 0x826a16a0
	ctx.lr = 0x82496B9C;
	sub_826A16A0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826a16a0
	ctx.lr = 0x82496BA8;
	sub_826A16A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fdiv f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64 / ctx.f1.f64;
	// stfdx f0,r29,r31
	REX_STORE_U64(r29.u32 + r31.u32, ctx.f0.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496b8c
	if (ctx.cr6.lt) goto loc_82496B8C;
	// b 0x82497404
	goto loc_82497404;
loc_82496BC4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82496BE4:
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,0(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82496bf8
	if (ctx.cr6.gt) goto loc_82496BF8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82496BF8:
	// stfdx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82496be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496BE4;
	// b 0x82497404
	goto loc_82497404;
loc_82496C08:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82496C28:
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,0(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82496c3c
	if (ctx.cr6.lt) goto loc_82496C3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82496C3C:
	// stfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82496c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496C28;
	// b 0x82497404
	goto loc_82497404;
loc_82496C4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_82496C68:
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfd f13,8(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496C68;
	// b 0x82497404
	goto loc_82497404;
loc_82496C84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_82496CA0:
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,8(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496CA0;
	// b 0x82497404
	goto loc_82497404;
loc_82496CBC:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82496ce8
	if (!ctx.cr6.eq) goto loc_82496CE8;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82496cf0
	goto loc_82496CF0;
loc_82496CE8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82496CF0:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82497464
	if (!ctx.cr6.eq) goto loc_82497464;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82497464
	if (!ctx.cr6.eq) goto loc_82497464;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r6,r27,8
	ctx.r6.s64 = r27.s64 + 8;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// lfd f12,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82496D24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82496d88
	if (ctx.cr6.eq) goto loc_82496D88;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r6,-16
	ctx.r3.s64 = ctx.r6.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_82496D3C:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82496d78
	if (ctx.cr6.eq) goto loc_82496D78;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82496D54:
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfdux f13,r10,r8
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r8.u32;
	ctx.f13.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// lfd f11,8(r9)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmadd f0,f11,f13,f0
	ctx.f0.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64);
	// bdnz 0x82496d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496D54;
loc_82496D78:
	// stfdu f0,16(r3)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r3.u32 = ea;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bne 0x82496d3c
	if (!ctx.cr0.eq) goto loc_82496D3C;
loc_82496D88:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// bne 0x82496d24
	if (!ctx.cr0.eq) goto loc_82496D24;
	// b 0x82497404
	goto loc_82497404;
loc_82496D9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f12,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// beq cr6,0x82496dd0
	if (ctx.cr6.eq) goto loc_82496DD0;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_82496DBC:
	// lfdu f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	ctx.f13.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// fmadd f0,f13,f13,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64);
	// bdnz 0x82496dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496DBC;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82496dd8
	if (!ctx.cr6.eq) goto loc_82496DD8;
loc_82496DD0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82496de8
	goto loc_82496DE8;
loc_82496DD8:
	// fsqrt f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
loc_82496DE8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_82496DFC:
	// lfdx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496DFC;
	// b 0x82497404
	goto loc_82497404;
loc_82496E14:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r27
	r29.u64 = r27.u64 - ctx.r11.u64;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_82496E34:
	// lfdx f2,r31,r30
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r31.u32 + r30.u32);
	// lfd f1,0(r31)
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x8269f778
	ctx.lr = 0x82496E40;
	sub_8269F778(ctx, base);
	// stfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + r29.u32, ctx.f1.u64);
	// bl 0x826a1930
	ctx.lr = 0x82496E48;
	sub_826A1930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82496e58
	if (!ctx.cr0.gt) goto loc_82496E58;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82497464
	if (!ctx.cr6.gt) goto loc_82497464;
loc_82496E58:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// blt cr6,0x82496e34
	if (ctx.cr6.lt) goto loc_82496E34;
	// b 0x82497404
	goto loc_82497404;
loc_82496E6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// lfd f0,-22728(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -22728);
loc_82496E8C:
	// lfdx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82496e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496E8C;
	// b 0x82497404
	goto loc_82497404;
loc_82496EA4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_82496EC8:
	// lfdx f13,r10,r8
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// lfd f12,0(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadd f0,f13,f12,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64);
	// bdnz 0x82496ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496EC8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// lfd f13,8312(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8312);
loc_82496EFC:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfdx f11,r9,r10
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fnmsub f12,f12,f13,f11
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f11.f64);
	// stfdx f12,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f12.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82496efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496EFC;
	// b 0x82497404
	goto loc_82497404;
loc_82496F1C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f11,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lfd f13,8(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// beq cr6,0x82496f60
	if (ctx.cr6.eq) goto loc_82496F60;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_82496F4C:
	// lfdx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// lfd f10,0(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadd f0,f12,f10,f0
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64);
	// bdnz 0x82496f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496F4C;
loc_82496F60:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fnmsub f10,f0,f0,f12
	ctx.f10.f64 = -std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f12.f64);
	// fmul f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fnmsub f12,f10,f13,f12
	ctx.f12.f64 = -std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f12.f64);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82496f98
	if (!ctx.cr6.lt) goto loc_82496F98;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_82496F8C:
	// stfdu f11,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f11.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82496f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496F8C;
	// b 0x82497404
	goto loc_82497404;
loc_82496F98:
	// fsqrt f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = sqrt(ctx.f12.f64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
loc_82496FB8:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfdx f11,r9,r10
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fmsub f12,f11,f13,f12
	ctx.f12.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f12.f64);
	// stfdx f12,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f12.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82496fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82496FB8;
	// b 0x82497404
	goto loc_82497404;
loc_82496FD8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,32424(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
loc_82496FF8:
	// lfdx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// fadd f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 + f31.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82497004;
	sub_826A2F00(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82496ff8
	if (!ctx.cr0.eq) goto loc_82496FF8;
	// b 0x82497404
	goto loc_82497404;
loc_82497018:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// subf r9,r9,r27
	ctx.r9.u64 = r27.u64 - ctx.r9.u64;
	// lfd f13,-3744(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
	// lfd f12,3728(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
loc_82497040:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82497464
	if (ctx.cr6.lt) goto loc_82497464;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82497464
	if (ctx.cr6.eq) goto loc_82497464;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// stfdx f0,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82497040
	if (ctx.cr6.lt) goto loc_82497040;
	// b 0x82497404
	goto loc_82497404;
loc_82497074:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// lfd f12,-3744(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// lfd f13,3728(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
loc_8249709C:
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x824970b0
	if (!ctx.cr6.lt) goto loc_824970B0;
	// stfd f12,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f12.u64);
	// b 0x824970c4
	goto loc_824970C4;
loc_824970B0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824970c0
	if (!ctx.cr6.gt) goto loc_824970C0;
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// b 0x824970c4
	goto loc_824970C4;
loc_824970C0:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
loc_824970C4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8249709c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8249709C;
	// b 0x82497404
	goto loc_82497404;
loc_824970D0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// lfd f13,-3744(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// lfd f11,3728(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// lfd f12,4296(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 4296);
loc_82497100:
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82497114
	if (!ctx.cr6.lt) goto loc_82497114;
	// stfd f12,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f12.u64);
	// b 0x82497128
	goto loc_82497128;
loc_82497114:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82497124
	if (!ctx.cr6.gt) goto loc_82497124;
	// stfd f11,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f11.u64);
	// b 0x82497128
	goto loc_82497128;
loc_82497124:
	// stfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
loc_82497128:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82497100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82497100;
	// b 0x82497404
	goto loc_82497404;
loc_82497134:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_8249714C:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a14e0
	ctx.lr = 0x82497154;
	sub_826A14E0(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8249714c
	if (!ctx.cr0.eq) goto loc_8249714C;
	// b 0x82497404
	goto loc_82497404;
loc_82497168:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_82497180:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a4be8
	ctx.lr = 0x82497188;
	sub_826A4BE8(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82497180
	if (!ctx.cr0.eq) goto loc_82497180;
	// b 0x82497404
	goto loc_82497404;
loc_8249719C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfd f12,8312(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + 8312);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lfd f9,-3744(r5)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r5.u32 + -3744);
	// lfd f10,3728(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 3728);
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// lfd f11,-22736(r7)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -22736);
loc_824971E4:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfdx f0,r9,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824971fc
	if (!ctx.cr6.lt) goto loc_824971FC;
	// stfdx f9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f9.u64);
	// b 0x82497234
	goto loc_82497234;
loc_824971FC:
	// lfdx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82497210
	if (ctx.cr6.lt) goto loc_82497210;
	// stfdx f10,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f10.u64);
	// b 0x82497234
	goto loc_82497234;
loc_82497210:
	// lfdx f8,r9,r10
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fsub f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 - ctx.f8.f64;
	// fsub f13,f13,f8
	ctx.f13.f64 = ctx.f13.f64 - ctx.f8.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fmul f13,f0,f0
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fmsub f0,f13,f11,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f0.f64);
	// stfdx f0,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u64);
loc_82497234:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x824971e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824971E4;
	// b 0x82497404
	goto loc_82497404;
loc_82497240:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// subf r9,r9,r27
	ctx.r9.u64 = r27.u64 - ctx.r9.u64;
	// lfd f13,-3744(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
loc_82497260:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82497464
	if (ctx.cr6.lt) goto loc_82497464;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// stfdx f0,r11,r9
	REX_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// blt cr6,0x82497260
	if (ctx.cr6.lt) goto loc_82497260;
	// b 0x82497404
	goto loc_82497404;
loc_82497288:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f13,3728(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
	// lfd f12,-3744(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
loc_824972B8:
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfd f11,0(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x824972d0
	if (ctx.cr6.lt) goto loc_824972D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824972d4
	goto loc_824972D4;
loc_824972D0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_824972D4:
	// stfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x824972b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824972B8;
	// b 0x82497404
	goto loc_82497404;
loc_824972E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_824972FC:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x8269ff50
	ctx.lr = 0x82497304;
	sub_8269FF50(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824972fc
	if (!ctx.cr0.eq) goto loc_824972FC;
	// b 0x82497404
	goto loc_82497404;
loc_82497318:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82497404
	if (ctx.cr6.eq) goto loc_82497404;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r27,r11
	r29.u64 = ctx.r11.u64 - r27.u64;
loc_82497330:
	// lfdx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + r29.u32);
	// bl 0x826a4ae8
	ctx.lr = 0x82497338;
	sub_826A4AE8(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82497330
	if (!ctx.cr0.eq) goto loc_82497330;
	// b 0x82497404
	goto loc_82497404;
loc_8249734C:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82497404
	if (!ctx.cr6.gt) goto loc_82497404;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_82497364:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824973b4
	if (ctx.cr6.eq) goto loc_824973B4;
loc_82497370:
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,24(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 24);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r7,r10,r7
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f0,8(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// stfd f0,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.f0.u64);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82497370
	if (ctx.cr6.lt) goto loc_82497370;
loc_824973B4:
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82497364
	if (ctx.cr6.lt) goto loc_82497364;
	// b 0x82497404
	goto loc_82497404;
loc_824973C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f13,40(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfd f0,-22832(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -22832);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.f13.u64);
	// lfd f13,24(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.f13.u64);
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,40(r27)
	REX_STORE_U64(r27.u32 + 40, ctx.f13.u64);
	// lfd f13,56(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82497400:
	// stfd f0,56(r27)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r27.u32 + 56, ctx.f0.u64);
loc_82497404:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// b 0x8249741c
	goto loc_8249741C;
loc_8249740C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82497464
	if (!ctx.cr6.eq) goto loc_82497464;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8249741C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249740c
	if (!ctx.cr6.eq) goto loc_8249740C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8249745c
	if (ctx.cr6.eq) goto loc_8249745C;
	// addi r6,r23,48
	ctx.r6.s64 = r23.s64 + 48;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82497438:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfd f1,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// bl 0x824944d8
	ctx.lr = 0x82497444;
	sub_824944D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8249746c
	if (ctx.cr0.lt) goto loc_8249746C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// blt cr6,0x82497438
	if (ctx.cr6.lt) goto loc_82497438;
loc_8249745C:
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x8249746c
	goto loc_8249746C;
loc_82497464:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8249746C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,4
	r30.s64 = 4;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_82497478:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x823f0350
	ctx.lr = 0x82497484;
	sub_823F0350(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82497478
	if (!ctx.cr0.eq) goto loc_82497478;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8249749c
	goto loc_8249749C;
loc_82497494:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8249749C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf4
	ctx.lr = 0x824974A8;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82554C88) {
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
	ctx.lr = 0x82554C90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554CC4;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82554ce8
	if (ctx.cr6.eq) goto loc_82554CE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82554CE4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554CE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554CF0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554D00;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554D0C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82554d30
	if (ctx.cr6.eq) goto loc_82554D30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82554D2C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554D30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554D38;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
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
	ctx.lr = 0x82554D68;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8255EA00) {
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
	ctx.lr = 0x8255EA08;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// addi r15,r4,4
	r15.s64 = ctx.r4.s64 + 4;
	// li r18,0
	r18.s64 = 0;
	// li r17,1
	r17.s64 = 1;
loc_8255EA28:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8255ea84
	if (ctx.cr6.eq) goto loc_8255EA84;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255ea7c
	if (ctx.cr6.eq) goto loc_8255EA7C;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255ea78
	if (ctx.cr0.eq) goto loc_8255EA78;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255EA54:
	// rlwinm r5,r8,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r5,r17,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8255ea54
	if (ctx.cr6.lt) goto loc_8255EA54;
loc_8255EA78:
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
loc_8255EA7C:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8255ea28
	goto loc_8255EA28;
loc_8255EA84:
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ebb4
	if (ctx.cr0.eq) goto loc_8255EBB4;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// mr r28,r17
	r28.u64 = r17.u64;
	// rlwinm. r30,r11,13,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8255ebb4
	if (ctx.cr0.eq) goto loc_8255EBB4;
	// addi r29,r19,44
	r29.s64 = r19.s64 + 44;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8255EAAC:
	// and. r11,r28,r18
	ctx.r11.u64 = r28.u64 & r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255eba8
	if (!ctx.cr0.eq) goto loc_8255EBA8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14464
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14464, ctx.xer);
	// beq cr6,0x8255eb38
	if (ctx.cr6.eq) goto loc_8255EB38;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8255EAD4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8255eb3c
	if (ctx.cr6.eq) goto loc_8255EB3C;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255eb30
	if (ctx.cr6.eq) goto loc_8255EB30;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x8255eb30
	if (ctx.cr6.eq) goto loc_8255EB30;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255eb2c
	if (ctx.cr0.eq) goto loc_8255EB2C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255EB08:
	// rlwinm r27,r8,27,24,31
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r27,r27,30
	r27.u64 = r27.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r27,r17,r27
	r27.u64 = r27.u8 & 0x20 ? 0 : (r17.u32 << (r27.u8 & 0x3F));
	// or r9,r27,r9
	ctx.r9.u64 = r27.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8255eb08
	if (ctx.cr6.lt) goto loc_8255EB08;
loc_8255EB2C:
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
loc_8255EB30:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8255ead4
	goto loc_8255EAD4;
loc_8255EB38:
	// rlwinm r5,r11,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_8255EB3C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255eba8
	if (ctx.cr0.eq) goto loc_8255EBA8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_8255EB5C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x8255eb9c
	if (!ctx.cr6.lt) goto loc_8255EB9C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8255eb90
	if (!ctx.cr6.eq) goto loc_8255EB90;
	// slw r7,r17,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// and. r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 & r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255eb90
	if (ctx.cr0.eq) goto loc_8255EB90;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// slw r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r10.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_8255EB90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8255eb5c
	goto loc_8255EB5C;
loc_8255EB9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8255eba8
	if (ctx.cr6.eq) goto loc_8255EBA8;
	// or r18,r28,r18
	r18.u64 = r28.u64 | r18.u64;
loc_8255EBA8:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x8255eaac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255EAAC;
loc_8255EBB4:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255ebd4
	if (!ctx.cr6.eq) goto loc_8255EBD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255eeb8
	goto loc_8255EEB8;
loc_8255EBD4:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r31,28(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 28);
	// bl 0x825162c0
	ctx.lr = 0x8255EBE0;
	sub_825162C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8255EBF4;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
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
	// beq cr6,0x8255ec48
	if (ctx.cr6.eq) goto loc_8255EC48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8255e698
	ctx.lr = 0x8255EC48;
	sub_8255E698(ctx, base);
loc_8255EC48:
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// li r20,0
	r20.s64 = 0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ec80
	if (ctx.cr0.eq) goto loc_8255EC80;
	// lwz r11,16(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 16);
	// b 0x8255ec74
	goto loc_8255EC74;
loc_8255EC64:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8255ec7c
	if (ctx.cr6.eq) goto loc_8255EC7C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8255EC74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255ec64
	if (!ctx.cr6.eq) goto loc_8255EC64;
loc_8255EC7C:
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_8255EC80:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// li r21,0
	r21.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,0
	r24.s64 = 0;
	// mr r25,r17
	r25.u64 = r17.u64;
	// beq 0x8255ed68
	if (ctx.cr0.eq) goto loc_8255ED68;
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r20,8
	r28.s64 = r20.s64 + 8;
	// addi r22,r19,44
	r22.s64 = r19.s64 + 44;
	// addi r26,r29,44
	r26.s64 = r29.s64 + 44;
loc_8255ECB4:
	// lwzx r4,r30,r22
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r22.u32);
	// and. r11,r25,r18
	ctx.r11.u64 = r25.u64 & r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ed44
	if (ctx.cr0.eq) goto loc_8255ED44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255ECC8;
	sub_8250AD28(ctx, base);
	// stwx r3,r26,r31
	REX_STORE_U32(r26.u32 + r31.u32, ctx.r3.u32);
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// li r11,15
	ctx.r11.s64 = 15;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// lhz r8,14(r19)
	ctx.r8.u64 = REX_LOAD_U16(r19.u32 + 14);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r31.u8 & 0x3F));
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8255ed08
	if (ctx.cr6.eq) goto loc_8255ED08;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r11.u16);
loc_8255ED08:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8255ed28
	if (ctx.cr6.eq) goto loc_8255ED28;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// lfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lfd f2,32(r28)
	ctx.f2.u64 = REX_LOAD_U64(r28.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b99f0
	ctx.lr = 0x8255ED28;
	sub_825B99F0(ctx, base);
loc_8255ED28:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r23,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r23.u32 << (r27.u8 & 0x3F));
	// slw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// andc r11,r21,r11
	ctx.r11.u64 = r21.u64 & ~ctx.r11.u64;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// or r21,r11,r10
	r21.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8255ED44:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// rlwinm r25,r25,1,0,30
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255ecb4
	if (ctx.cr6.lt) goto loc_8255ECB4;
loc_8255ED68:
	// mr r30,r15
	r30.u64 = r15.u64;
loc_8255ED6C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255ee2c
	if (ctx.cr6.eq) goto loc_8255EE2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255ee18
	if (ctx.cr6.eq) goto loc_8255EE18;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r21,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r10,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r21,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r21.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8255ede0
	goto loc_8255EDE0;
loc_8255EDD8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8255EDE0:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8255edd8
	if (!ctx.cr6.eq) goto loc_8255EDD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// beq cr6,0x8255ee18
	if (ctx.cr6.eq) goto loc_8255EE18;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8255e698
	ctx.lr = 0x8255EE18;
	sub_8255E698(ctx, base);
loc_8255EE18:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8255ed6c
	if (!ctx.cr6.eq) goto loc_8255ED6C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8255ed6c
	goto loc_8255ED6C;
loc_8255EE2C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8255ee84
	if (ctx.cr6.eq) goto loc_8255EE84;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r17
	r28.u64 = r17.u64;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ee84
	if (ctx.cr0.eq) goto loc_8255EE84;
	// addi r31,r19,44
	r31.s64 = r19.s64 + 44;
loc_8255EE4C:
	// and. r11,r28,r18
	ctx.r11.u64 = r28.u64 & r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ee68
	if (!ctx.cr0.eq) goto loc_8255EE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8255e698
	ctx.lr = 0x8255EE68;
	sub_8255E698(ctx, base);
loc_8255EE68:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255ee4c
	if (ctx.cr6.lt) goto loc_8255EE4C;
loc_8255EE84:
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255eeb4
	if (ctx.cr0.eq) goto loc_8255EEB4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r9,r11,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r8,r11,0,31,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw r11,r17,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r10,r11,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_8255EEB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8255EEB8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8258A098) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x8258a0bc
	if (ctx.cr0.eq) goto loc_8258A0BC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8258A0BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a0f0
	if (!ctx.cr0.eq) goto loc_8258A0F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a0f0
	if (ctx.cr0.eq) goto loc_8258A0F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258a0fc
	if (!ctx.cr6.gt) goto loc_8258A0FC;
loc_8258A0F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x8258A0F8;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258A0FC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259DFA0) {
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
	ctx.lr = 0x8259DFA8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8259dfc8
	if (ctx.cr6.eq) goto loc_8259DFC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8259e1d0
	goto loc_8259E1D0;
loc_8259DFC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r17,-1
	r17.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259dfec
	if (!ctx.cr6.gt) goto loc_8259DFEC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8259DFEC:
	// bl 0x822f6280
	ctx.lr = 0x8259DFF0;
	sub_822F6280(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8259e008
	if (!ctx.cr6.eq) goto loc_8259E008;
loc_8259DFFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8259e1d0
	goto loc_8259E1D0;
loc_8259E008:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e020
	if (!ctx.cr6.gt) goto loc_8259E020;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8259E020:
	// bl 0x822f6280
	ctx.lr = 0x8259E024;
	sub_822F6280(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8259e03c
	if (!ctx.cr6.eq) goto loc_8259E03C;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E038;
	sub_8269CE98(ctx, base);
	// b 0x8259dffc
	goto loc_8259DFFC;
loc_8259E03C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r20,0
	r20.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259e06c
	if (ctx.cr6.eq) goto loc_8259E06C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259e06c
	if (ctx.cr6.eq) goto loc_8259E06C;
	// stw r20,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r20.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r20,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r20.u32);
loc_8259E06C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r20
	r24.u64 = r20.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,104(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,108(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// divwu r23,r8,r6
	r23.u64 = uint32_t(ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r7,r5
	r22.u64 = uint32_t(ctx.r5.u32 ? ctx.r7.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r21,r10,r9
	r21.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8259e1bc
	if (!ctx.cr6.gt) goto loc_8259E1BC;
loc_8259E0C8:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r25,r17
	r25.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8259e1a8
	if (!ctx.cr6.gt) goto loc_8259E1A8;
loc_8259E0E0:
	// xor r11,r25,r30
	ctx.r11.u64 = r25.u64 ^ r30.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r20
	r29.u64 = r20.u64;
	// beq 0x8259e118
	if (ctx.cr0.eq) goto loc_8259E118;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// rlwinm r5,r24,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8259E118:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259e170
	if (!ctx.cr6.gt) goto loc_8259E170;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8259E12C:
	// rlwinm r10,r28,20,12,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0xFFFF0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r9,r10,r18
	ctx.r9.u64 = ctx.r10.u64 + r18.u64;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// lwzx r10,r10,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r18.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259e12c
	if (ctx.cr6.lt) goto loc_8259E12C;
loc_8259E170:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259e0e0
	if (ctx.cr6.lt) goto loc_8259E0E0;
loc_8259E1A8:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r24,r24,r21
	r24.u64 = r24.u64 + r21.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259e0c8
	if (ctx.cr6.lt) goto loc_8259E0C8;
loc_8259E1BC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E1C4;
	sub_8269CE98(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E1CC;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259E1D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825AC568) {
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
	ctx.lr = 0x825AC570;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,23208(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 23208);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subfic r28,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	r28.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// stw r10,23208(r29)
	REX_STORE_U32(r29.u32 + 23208, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825b7008
	ctx.lr = 0x825AC5B0;
	sub_825B7008(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// li r10,13
	ctx.r10.s64 = 13;
	// sth r9,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r10,17,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r8,r10,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r10,r8,64
	ctx.r10.u64 = ctx.r8.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ac63c
	if (ctx.cr0.eq) goto loc_825AC63C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC63C:
	// li r8,65
	ctx.r8.s64 = 65;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r7,r8,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// li r12,-30568
	ctx.r12.s64 = -30568;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// li r6,27
	ctx.r6.s64 = 27;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r28,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r28.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r10,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r6,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825ac6d4
	if (ctx.cr0.eq) goto loc_825AC6D4;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC6D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ac6ec
	if (ctx.cr0.eq) goto loc_825AC6EC;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC6EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ac710
	if (ctx.cr0.eq) goto loc_825AC710;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_825AC710:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ac728
	if (ctx.cr0.eq) goto loc_825AC728;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_825AC728:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a6210
	ctx.lr = 0x825AC750;
	sub_825A6210(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B77F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B77F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-2432
	r29.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b7834
	if (!ctx.cr6.eq) goto loc_825B7834;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1032
	ctx.r7.s64 = 1032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B7834;
	sub_824EA978(ctx, base);
loc_825B7834:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b785c
	if (!ctx.cr6.eq) goto loc_825B785C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-2040
	ctx.r5.s64 = ctx.r11.s64 + -2040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1033
	ctx.r7.s64 = 1033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B785C;
	sub_824EA978(ctx, base);
loc_825B785C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x824f08f8
	ctx.lr = 0x825B7864;
	sub_824F08F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b74a8
	ctx.lr = 0x825B7870;
	sub_825B74A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B89B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825B89B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825b7878
	ctx.lr = 0x825B89CC;
	sub_825B7878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b89e8
	if (ctx.cr0.eq) goto loc_825B89E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwimi r11,r31,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_825B89E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_825B89E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825b8a18
	if (ctx.cr6.eq) goto loc_825B8A18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_825B89FC:
	// srw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bdnz 0x825b89fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B89FC;
loc_825B8A18:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r8,r8,36262
	ctx.r8.u64 = ctx.r8.u64 | 36262;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rlwinm r6,r9,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r8,r9,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,3
	ctx.r4.s64 = 3;
loc_825B8A64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8aa0
	if (ctx.cr6.eq) goto loc_825B8AA0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// slw r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// andc r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subfic r5,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r5.u64;
	// andc r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ~r31.u64;
	// slw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// b 0x825b8a64
	goto loc_825B8A64;
loc_825B8AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B8AA4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x825b8b14
	if (ctx.cr6.eq) goto loc_825B8B14;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r5,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// beq cr6,0x825b8b04
	if (ctx.cr6.eq) goto loc_825B8B04;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B8ACC:
	// srw r31,r7,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r31,30
	r31.u64 = r31.u32 & 0x3;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// beq cr6,0x825b8af0
	if (ctx.cr6.eq) goto loc_825B8AF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825b8acc
	if (ctx.cr6.lt) goto loc_825B8ACC;
	// b 0x825b8b04
	goto loc_825B8B04;
loc_825B8AF0:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r4,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_825B8B04:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// b 0x825b8aa4
	goto loc_825B8AA4;
loc_825B8B14:
	// rlwimi r9,r6,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// stw r9,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// addi r10,r29,40
	ctx.r10.s64 = r29.s64 + 40;
loc_825B8B24:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825b8b94
	if (!ctx.cr6.lt) goto loc_825B8B94;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r6,r8,25,0,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
	// rlwinm r5,r7,27,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x6;
	// rlwinm r4,r7,29,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x6;
	// rlwinm r31,r7,31,29,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x6;
	// rlwinm r30,r7,1,29,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// lwz r28,0(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r28,0,7,3
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r6,r28,r6
	ctx.r6.u64 = r28.u64 | ctx.r6.u64;
	// rlwinm r28,r6,27,24,31
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r6,0,27,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r5,r28,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r4,r28,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r4,r5,2,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r5,r28,r31
	ctx.r5.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// srw r31,r28,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (r28.u32 >> (r30.u8 & 0x3F));
	// rlwimi r5,r4,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r31,r5,2,0,29
	r31.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (r31.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// b 0x825b8b24
	goto loc_825B8B24;
loc_825B8B94:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_825B8B98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b89e0
	if (ctx.cr6.eq) goto loc_825B89E0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b8bf8
	if (ctx.cr6.eq) goto loc_825B8BF8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b8bf8
	if (ctx.cr0.eq) goto loc_825B8BF8;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r3,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
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
loc_825B8BF8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825b8b98
	goto loc_825B8B98;
}

DEFINE_REX_FUNC(sub_825CC928) {
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
	ctx.lr = 0x825CC930;
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
	// beq cr6,0x825cc964
	if (ctx.cr6.eq) goto loc_825CC964;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CC960;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CC964:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cc980
	if (ctx.cr6.eq) goto loc_825CC980;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CC97C;
	sub_825C7448(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CC980:
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
	// bne 0x825cc9e8
	if (!ctx.cr0.eq) goto loc_825CC9E8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cc9f0
	goto loc_825CC9F0;
loc_825CC9E8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CC9F0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cca08
	if (ctx.cr6.eq) goto loc_825CCA08;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CCA08;
	sub_82409A88(ctx, base);
loc_825CCA08:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ccc0c
	if (!ctx.cr6.gt) goto loc_825CCC0C;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3800(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3800);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,13256(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 13256);
	ctx.f7.f64 = double(temp.f32);
loc_825CCA68:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x825ccb90
	if (ctx.cr6.eq) goto loc_825CCB90;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r9
	r29.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
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
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_825CCB90:
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x825ccba0
	if (ctx.cr6.lt) goto loc_825CCBA0;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_825CCBA0:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x825ccbb8
	if (!ctx.cr6.gt) goto loc_825CCBB8;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// blt cr6,0x825ccbbc
	if (ctx.cr6.lt) goto loc_825CCBBC;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x825ccbbc
	goto loc_825CCBBC;
loc_825CCBB8:
	// li r9,-32767
	ctx.r9.s64 = -32767;
loc_825CCBBC:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825ccbcc
	if (ctx.cr6.lt) goto loc_825CCBCC;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_825CCBCC:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x825ccbe4
	if (!ctx.cr6.gt) goto loc_825CCBE4;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x825ccbe8
	if (ctx.cr6.lt) goto loc_825CCBE8;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x825ccbe8
	goto loc_825CCBE8;
loc_825CCBE4:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_825CCBE8:
	// rlwimi r9,r5,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwux r9,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cca68
	if (ctx.cr6.lt) goto loc_825CCA68;
loc_825CCC0C:
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

DEFINE_REX_FUNC(sub_825D7D20) {
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
	// lwz r3,2068(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825D7D40;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_825D9C90) {
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
	ctx.lr = 0x825D9C98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
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
loc_825D9CBC:
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x825d61d8
	ctx.lr = 0x825D9CF0;
	sub_825D61D8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(r30.s32, 5, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// blt cr6,0x825d9cbc
	if (ctx.cr6.lt) goto loc_825D9CBC;
	// lbz r11,126(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d9ea8
	if (ctx.cr0.eq) goto loc_825D9EA8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825d9ea8
	if (ctx.cr6.eq) goto loc_825D9EA8;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d9ea8
	if (ctx.cr0.eq) goto loc_825D9EA8;
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
	// bl 0x825d4dc0
	ctx.lr = 0x825D9D4C;
	sub_825D4DC0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d4dc0
	ctx.lr = 0x825D9D68;
	sub_825D4DC0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825f9ad0
	ctx.lr = 0x825D9D7C;
	sub_825F9AD0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9D8C;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D9D9C;
	sub_825F9F38(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D9DBC;
	sub_825FAAB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D9DC8;
	sub_825D82D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fcc08
	ctx.lr = 0x825D9DD8;
	sub_825FCC08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D9DE0;
	sub_825F9B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,9792
	r28.s64 = ctx.r10.s64 + 9792;
	// bne 0x825d9e14
	if (!ctx.cr0.eq) goto loc_825D9E14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10476
	ctx.r5.s64 = ctx.r11.s64 + 10476;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2421
	ctx.r7.s64 = 2421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9E14;
	sub_824EA978(ctx, base);
loc_825D9E14:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D9E20;
	sub_825F9AD0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9E30;
	sub_825F9F38(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D9E40;
	sub_825F9F38(ctx, base);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D9E60;
	sub_825FAAB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D9E6C;
	sub_825D82D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fcc08
	ctx.lr = 0x825D9E7C;
	sub_825FCC08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D9E84;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d9ea8
	if (!ctx.cr0.eq) goto loc_825D9EA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10460
	ctx.r5.s64 = ctx.r11.s64 + 10460;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2429
	ctx.r7.s64 = 2429;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9EA8;
	sub_824EA978(ctx, base);
loc_825D9EA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825ED400) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825ED408;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ed4a4
	if (ctx.cr0.eq) goto loc_825ED4A4;
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ed47c
	if (ctx.cr6.eq) goto loc_825ED47C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r29,r11,-21368
	r29.s64 = ctx.r11.s64 + -21368;
loc_825ED448:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ed48c
	if (!ctx.cr0.eq) goto loc_825ED48C;
	// bl 0x825f99c0
	ctx.lr = 0x825ED464;
	sub_825F99C0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x825ed49c
	if (!ctx.cr6.lt) goto loc_825ED49C;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ed448
	if (!ctx.cr6.eq) goto loc_825ED448;
loc_825ED47C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// b 0x825ed548
	goto loc_825ED548;
loc_825ED48C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825ED490:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ED494:
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// b 0x825ed548
	goto loc_825ED548;
loc_825ED49C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825ed490
	goto loc_825ED490;
loc_825ED4A4:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED4B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ed4f4
	if (ctx.cr0.eq) goto loc_825ED4F4;
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// b 0x825ed4dc
	goto loc_825ED4DC;
loc_825ED4C8:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x825f99c0
	ctx.lr = 0x825ED4D0;
	sub_825F99C0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x825ed49c
	if (!ctx.cr6.lt) goto loc_825ED49C;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825ED4DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ed4c8
	if (!ctx.cr6.eq) goto loc_825ED4C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ED4EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825ed494
	goto loc_825ED494;
loc_825ED4F4:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ed544
	if (ctx.cr0.eq) goto loc_825ED544;
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// b 0x825ed52c
	goto loc_825ED52C;
loc_825ED518:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x825f99c0
	ctx.lr = 0x825ED520;
	sub_825F99C0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825ed53c
	if (ctx.cr6.lt) goto loc_825ED53C;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825ED52C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ed518
	if (!ctx.cr6.eq) goto loc_825ED518;
	// b 0x825ed47c
	goto loc_825ED47C;
loc_825ED53C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825ed4ec
	goto loc_825ED4EC;
loc_825ED544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ED548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F6808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F6810;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825f6938
	if (ctx.cr6.eq) goto loc_825F6938;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825F6830:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825f6830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F6830;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f10,20208(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f9,15196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lfs f11,17280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lfs f12,-8120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -8120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3720(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
loc_825F6880:
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f8,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-4(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lfs f7,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwa r5,92(r1)
	ctx.r5.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfsx f8,r4,r11
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// beq cr6,0x825f68e4
	if (ctx.cr6.eq) goto loc_825F68E4;
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_825F68E4:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x825f6920
	if (!ctx.cr6.lt) goto loc_825F6920;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825f6900
	if (ctx.cr6.eq) goto loc_825F6900;
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_825F6900:
	// lfs f8,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// fmadds f8,f0,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f8.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x825f6920
	if (ctx.cr6.eq) goto loc_825F6920;
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_825F6920:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825f6880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F6880;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_825F6938:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825f59b0
	ctx.lr = 0x825F6940;
	sub_825F59B0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FAD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FADA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825fad18
	ctx.lr = 0x825FADB8;
	sub_825FAD18(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,31192
	ctx.r11.s64 = ctx.r11.s64 + 31192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f9f38
	ctx.lr = 0x825FADD4;
	sub_825F9F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FB8F8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB918;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31360
	ctx.r11.s64 = ctx.r11.s64 + -31360;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FD0A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FD7F8) {
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
	// bl 0x825fcd38
	ctx.lr = 0x825FD810;
	sub_825FCD38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30872
	ctx.r11.s64 = ctx.r11.s64 + -30872;
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

DEFINE_REX_FUNC(sub_82607668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607670;
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
	ctx.lr = 0x82607690;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x826076b4
	if (ctx.cr0.eq) goto loc_826076B4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8a50
	ctx.lr = 0x826076B0;
	sub_825F8A50(ctx, base);
	// b 0x826076b8
	goto loc_826076B8;
loc_826076B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826076B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82608FD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260902c
	if (ctx.cr6.eq) goto loc_8260902C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82608FE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_82608FF4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82609034
	if (!ctx.cr6.eq) goto loc_82609034;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x82608ff4
	if (ctx.cr6.lt) goto loc_82608FF4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82609018:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82608fe0
	if (!ctx.cr6.eq) goto loc_82608FE0;
loc_8260902C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82609034:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82609018
	goto loc_82609018;
}

DEFINE_REX_FUNC(sub_8260B770) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x827938b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260B9B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16032);
	// b 0x822f5a50
	sub_822F5A50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260BA98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260BAA0;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260bb30
	if (!ctx.cr6.eq) goto loc_8260BB30;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260bb28
	if (ctx.cr6.eq) goto loc_8260BB28;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// lwz r4,532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260bb30
	if (ctx.cr0.lt) goto loc_8260BB30;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8260BB28:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_8260BB30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BB44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BB58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260BB60;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260F878) {
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
	// bl 0x8260f280
	ctx.lr = 0x8260F898;
	sub_8260F280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260f8dc
	if (ctx.cr0.eq) goto loc_8260F8DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260f8c8
	if (ctx.cr6.eq) goto loc_8260F8C8;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x8260f8cc
	goto loc_8260F8CC;
loc_8260F8C8:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_8260F8CC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8260F8DC:
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

DEFINE_REX_FUNC(sub_82612428) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8260e7b8
	ctx.lr = 0x82612450;
	sub_8260E7B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82612484
	if (ctx.cr6.eq) goto loc_82612484;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-140
	ctx.r3.s64 = r31.s64 + -140;
	// bl 0x82611e48
	ctx.lr = 0x82612464;
	sub_82611E48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82612484
	if (!ctx.cr0.lt) goto loc_82612484;
	// lwz r11,-88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -88);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82612484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82612484:
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

DEFINE_REX_FUNC(sub_82614230) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x823f02b8
	ctx.lr = 0x82614258;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// beq 0x826142bc
	if (ctx.cr0.eq) goto loc_826142BC;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8260b5b8
	ctx.lr = 0x8261427C;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82614298
	if (ctx.cr0.eq) goto loc_82614298;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8261429c
	goto loc_8261429C;
loc_82614298:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8261429C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826142bc
	if (ctx.cr6.eq) goto loc_826142BC;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82613b78
	ctx.lr = 0x826142AC;
	sub_82613B78(ctx, base);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,260(r31)
	REX_STORE_U32(r31.u32 + 260, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826142c4
	goto loc_826142C4;
loc_826142BC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_826142C4:
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

DEFINE_REX_FUNC(sub_82617278) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82617250
	sub_82617250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617610) {
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
	ctx.lr = 0x82617618;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r25,r3,28
	r25.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r10,8343
	ctx.r10.s64 = 546766848;
	// addi r29,r11,20576
	r29.s64 = ctx.r11.s64 + 20576;
	// ori r26,r10,6
	r26.u64 = ctx.r10.u64 | 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,556
	ctx.r4.s64 = 556;
	// bl 0x8260b5b8
	ctx.lr = 0x8261766C;
	sub_8260B5B8(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82617688
	if (ctx.cr0.eq) goto loc_82617688;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82625af0
	ctx.lr = 0x82617684;
	sub_82625AF0(ctx, base);
	// b 0x8261768c
	goto loc_8261768C;
loc_82617688:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8261768C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82617734
	if (ctx.cr6.eq) goto loc_82617734;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,228
	ctx.r4.s64 = 228;
	// bl 0x8260b5b8
	ctx.lr = 0x826176AC;
	sub_8260B5B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826176cc
	if (ctx.cr0.eq) goto loc_826176CC;
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r24,4(r30)
	REX_STORE_U32(r30.u32 + 4, r24.u32);
	// bl 0x826166a0
	ctx.lr = 0x826176C4;
	sub_826166A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x826176d0
	goto loc_826176D0;
loc_826176CC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_826176D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82617734
	if (ctx.cr6.eq) goto loc_82617734;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82617020
	ctx.lr = 0x826176E4;
	sub_82617020(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8261773c
	if (ctx.cr0.lt) goto loc_8261773C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,688
	ctx.r4.s64 = 688;
	// bl 0x8260b5b8
	ctx.lr = 0x82617700;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82617724
	if (ctx.cr0.eq) goto loc_82617724;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82626a88
	ctx.lr = 0x82617720;
	sub_82626A88(ctx, base);
	// b 0x82617728
	goto loc_82617728;
loc_82617724:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82617728:
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82617764
	if (!ctx.cr6.eq) goto loc_82617764;
loc_82617734:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_8261773C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82617298
	ctx.lr = 0x82617744;
	sub_82617298(ctx, base);
loc_82617744:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82617764:
	// bl 0x826267d0
	ctx.lr = 0x82617768;
	sub_826267D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8261773c
	if (ctx.cr0.lt) goto loc_8261773C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x82617744
	goto loc_82617744;
}

DEFINE_REX_FUNC(sub_82625CB8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82625cc8
	if (ctx.cr6.eq) goto loc_82625CC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82625cd8
	goto loc_82625CD8;
loc_82625CC8:
	// lwz r11,572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82625CD8:
	// stw r11,572(r3)
	REX_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626588) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,2224
	ctx.r11.s64 = ctx.r11.s64 + 2224;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826265d8
	if (ctx.cr6.eq) goto loc_826265D8;
	// bl 0x82625df8
	ctx.lr = 0x826265B8;
	sub_82625DF8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826263b0
	ctx.lr = 0x826265C0;
	sub_826263B0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x826263b0
	ctx.lr = 0x826265C8;
	sub_826263B0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826263b0
	ctx.lr = 0x826265D0;
	sub_826263B0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x826263b0
	ctx.lr = 0x826265D8;
	sub_826263B0(ctx, base);
loc_826265D8:
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

DEFINE_REX_FUNC(sub_82627778) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82627540
	sub_82627540(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826277B8) {
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
	// beq cr6,0x826277dc
	if (ctx.cr6.eq) goto loc_826277DC;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x826277f8
	if (!ctx.cr6.eq) goto loc_826277F8;
loc_826277DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82627800
	if (ctx.cr6.eq) goto loc_82627800;
	// bl 0x823eea88
	ctx.lr = 0x826277EC;
	sub_823EEA88(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82627800
	if (ctx.cr6.eq) goto loc_82627800;
loc_826277F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82627804
	goto loc_82627804;
loc_82627800:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82627804:
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

DEFINE_REX_FUNC(sub_826292E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826292f0
	sub_826292F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82629580) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826293b0
	sub_826293B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82629618) {
	REX_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629818) {
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
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bl 0x826294a8
	ctx.lr = 0x8262982C;
	sub_826294A8(ctx, base);
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

DEFINE_REX_FUNC(sub_8262A100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8262A108;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82629a98
	ctx.lr = 0x8262A11C;
	sub_82629A98(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8262a140
	if (!ctx.cr6.eq) goto loc_8262A140;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-14696
	ctx.r5.s64 = ctx.r11.s64 + -14696;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404168
	ctx.lr = 0x8262A13C;
	sub_82404168(ctx, base);
	// b 0x8262a308
	goto loc_8262A308;
loc_8262A140:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8262a158
	if (!ctx.cr6.eq) goto loc_8262A158;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14704
	ctx.r8.s64 = ctx.r11.s64 + -14704;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A158:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8262a16c
	if (!ctx.cr6.eq) goto loc_8262A16C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14712
	ctx.r8.s64 = ctx.r11.s64 + -14712;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A16C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8262a180
	if (!ctx.cr6.eq) goto loc_8262A180;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14716
	ctx.r8.s64 = ctx.r11.s64 + -14716;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A180:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8262a194
	if (!ctx.cr6.eq) goto loc_8262A194;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r8,r11,-12340
	ctx.r8.s64 = ctx.r11.s64 + -12340;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A194:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8262a1a8
	if (!ctx.cr6.eq) goto loc_8262A1A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14720
	ctx.r8.s64 = ctx.r11.s64 + -14720;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A1A8:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8262a1bc
	if (!ctx.cr6.eq) goto loc_8262A1BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14724
	ctx.r8.s64 = ctx.r11.s64 + -14724;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A1BC:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8262a1d0
	if (!ctx.cr6.eq) goto loc_8262A1D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14728
	ctx.r8.s64 = ctx.r11.s64 + -14728;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A1D0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8262a1e4
	if (!ctx.cr6.eq) goto loc_8262A1E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14732
	ctx.r8.s64 = ctx.r11.s64 + -14732;
	// b 0x8262a1ec
	goto loc_8262A1EC;
loc_8262A1E4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-14748
	ctx.r8.s64 = ctx.r11.s64 + -14748;
loc_8262A1EC:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8262a200
	if (!ctx.cr6.eq) goto loc_8262A200;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r11,24460
	ctx.r7.s64 = ctx.r11.s64 + 24460;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A200:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8262a214
	if (!ctx.cr6.eq) goto loc_8262A214;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14756
	ctx.r7.s64 = ctx.r11.s64 + -14756;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A214:
	// cmplwi cr6,r10,358
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 358, ctx.xer);
	// bne cr6,0x8262a228
	if (!ctx.cr6.eq) goto loc_8262A228;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,18216
	ctx.r7.s64 = ctx.r11.s64 + 18216;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A228:
	// cmplwi cr6,r10,353
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 353, ctx.xer);
	// bne cr6,0x8262a23c
	if (!ctx.cr6.eq) goto loc_8262A23C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14764
	ctx.r7.s64 = ctx.r11.s64 + -14764;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A23C:
	// cmplwi cr6,r10,354
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 354, ctx.xer);
	// bne cr6,0x8262a250
	if (!ctx.cr6.eq) goto loc_8262A250;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14772
	ctx.r7.s64 = ctx.r11.s64 + -14772;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A250:
	// cmplwi cr6,r10,356
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 356, ctx.xer);
	// bne cr6,0x8262a264
	if (!ctx.cr6.eq) goto loc_8262A264;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14784
	ctx.r7.s64 = ctx.r11.s64 + -14784;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A264:
	// cmplwi cr6,r10,146
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 146, ctx.xer);
	// bne cr6,0x8262a278
	if (!ctx.cr6.eq) goto loc_8262A278;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14796
	ctx.r7.s64 = ctx.r11.s64 + -14796;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A278:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8262a28c
	if (ctx.cr6.eq) goto loc_8262A28C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r11,-15840
	ctx.r7.s64 = ctx.r11.s64 + -15840;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A28C:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8262a2a4
	if (!ctx.cr6.eq) goto loc_8262A2A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14804
	ctx.r7.s64 = ctx.r11.s64 + -14804;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A2A4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8262a2b8
	if (!ctx.cr6.eq) goto loc_8262A2B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14816
	ctx.r7.s64 = ctx.r11.s64 + -14816;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A2B8:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8262a2cc
	if (!ctx.cr6.eq) goto loc_8262A2CC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14828
	ctx.r7.s64 = ctx.r11.s64 + -14828;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A2CC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8262a2e0
	if (!ctx.cr6.eq) goto loc_8262A2E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14840
	ctx.r7.s64 = ctx.r11.s64 + -14840;
	// b 0x8262a2e8
	goto loc_8262A2E8;
loc_8262A2E0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r11,-14860
	ctx.r7.s64 = ctx.r11.s64 + -14860;
loc_8262A2E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// divwu r6,r11,r10
	ctx.r6.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r5,r9,-14872
	ctx.r5.s64 = ctx.r9.s64 + -14872;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404168
	ctx.lr = 0x8262A308;
	sub_82404168(ctx, base);
loc_8262A308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8263A148) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,22048
	r30.s64 = ctx.r11.s64 + 22048;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263a178
	if (!ctx.cr6.eq) goto loc_8263A178;
	// bl 0x8263a078
	ctx.lr = 0x8263A178;
	sub_8263A078(ctx, base);
loc_8263A178:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// blt cr6,0x8263a1e4
	if (ctx.cr6.lt) goto loc_8263A1E4;
	// cmpwi cr6,r31,320
	ctx.cr6.compare<int32_t>(r31.s32, 320, ctx.xer);
	// bge cr6,0x8263a1e4
	if (!ctx.cr6.lt) goto loc_8263A1E4;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// li r10,20
	ctx.r10.s64 = 20;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// divw r10,r31,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r31.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r31.s32 / ctx.r10.s32 : 0);
	// mulhw r8,r31,r9
	ctx.r8.s64 = (int64_t(r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r6,r31
	ctx.r11.u64 = r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8263a1c4
	if (!ctx.cr0.lt) goto loc_8263A1C4;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8263A1C4:
	// addi r9,r30,80
	ctx.r9.s64 = r30.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8263a214
	goto loc_8263A214;
loc_8263A1E4:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8516(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8516);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x8263A210;
	sub_8269F778(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_8263A214:
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

DEFINE_REX_FUNC(sub_82641A48) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82641a94
	if (!ctx.cr6.eq) goto loc_82641A94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82641840
	ctx.lr = 0x82641A88;
	sub_82641840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82641A90;
	sub_8264C3D0(ctx, base);
	// b 0x82641aa8
	goto loc_82641AA8;
loc_82641A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82641AA8:
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

DEFINE_REX_FUNC(sub_82642480) {
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
	// bl 0x82642168
	ctx.lr = 0x826424A0;
	sub_82642168(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826424b0
	if (ctx.cr0.eq) goto loc_826424B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826424B0;
	sub_8264C3D0(ctx, base);
loc_826424B0:
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

DEFINE_REX_FUNC(sub_82643100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82643108;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x826431b0
	if (ctx.cr0.eq) goto loc_826431B0;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// std r30,200(r31)
	REX_STORE_U64(r31.u32 + 200, r30.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// beq cr6,0x82643144
	if (ctx.cr6.eq) goto loc_82643144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643144:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643160
	if (ctx.cr6.eq) goto loc_82643160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643160:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826431b0
	if (ctx.cr6.eq) goto loc_826431B0;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826431a8
	if (!ctx.cr6.lt) goto loc_826431A8;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x826431ac
	goto loc_826431AC;
loc_826431A8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826431AC:
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
loc_826431B0:
	// rlwinm. r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826431e0
	if (ctx.cr0.eq) goto loc_826431E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826431CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826431ec
	if (ctx.cr0.eq) goto loc_826431EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// b 0x826431ec
	goto loc_826431EC;
loc_826431E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_826431EC:
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264320c
	if (ctx.cr6.eq) goto loc_8264320C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264320C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264320C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8264C7D8) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8264c718
	sub_8264C718(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C828) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793f84
	__imp__NetDll_XNetInAddrToXnAddr(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C8F0) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793fe4
	__imp__NetDll_XNetQosServiceLookup(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CA58) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6304
	ctx.r11.s64 = ctx.r11.s64 + -6304;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x8264ca8c
	if (!ctx.cr0.eq) goto loc_8264CA8C;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x8264cac8
	goto loc_8264CAC8;
loc_8264CA8C:
	// sth r3,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r7,r9,-14016
	ctx.r7.s64 = ctx.r9.s64 + -14016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a59c0
	ctx.lr = 0x8264CAA8;
	sub_826A59C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8264cabc
	if (!ctx.cr0.eq) goto loc_8264CABC;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8264cac8
	goto loc_8264CAC8;
loc_8264CABC:
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8264CAC8:
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

DEFINE_REX_FUNC(sub_8264E218) {
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
	ctx.lr = 0x8264E220;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mulli r11,r5,1326
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1326));
	// addi r27,r11,8
	r27.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x8264e2f0
	if (ctx.cr6.lt) goto loc_8264E2F0;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264e2f0
	if (ctx.cr6.eq) goto loc_8264E2F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// sth r29,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, r29.u16);
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r28,276(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x827937c4
	ctx.lr = 0x8264E2A8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264e2c8
	if (!ctx.cr0.lt) goto loc_8264E2C8;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8264e2f0
	if (ctx.cr6.eq) goto loc_8264E2F0;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8264e2f8
	goto loc_8264E2F8;
loc_8264E2C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8264e2e8
	if (!ctx.cr6.eq) goto loc_8264E2E8;
	// bl 0x823f0058
	ctx.lr = 0x8264E2D4;
	sub_823F0058(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264e2f8
	goto loc_8264E2F8;
loc_8264E2E8:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x8264e2f8
	goto loc_8264E2F8;
loc_8264E2F0:
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_8264E2F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82651318) {
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
	ctx.lr = 0x82651320;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r29,r3,248
	r29.s64 = ctx.r3.s64 + 248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826513d0
	if (ctx.cr6.eq) goto loc_826513D0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826513d0
	if (ctx.cr0.eq) goto loc_826513D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,-11464
	r28.s64 = ctx.r11.s64 + -11464;
loc_8265134C:
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// addi r31,r30,-92
	r31.s64 = r30.s64 + -92;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82651384
	if (ctx.cr0.eq) goto loc_82651384;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// beq 0x82651384
	if (ctx.cr0.eq) goto loc_82651384;
	// lwz r3,12(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82651384:
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826513d0
	if (ctx.cr6.eq) goto loc_826513D0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8265134c
	if (!ctx.cr0.eq) goto loc_8265134C;
loc_826513D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82659168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82659170;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826591c4
	if (ctx.cr6.eq) goto loc_826591C4;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826591a4
	if (ctx.cr6.eq) goto loc_826591A4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826591b8
	if (!ctx.cr6.eq) goto loc_826591B8;
loc_826591A4:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// b 0x826592a4
	goto loc_826592A4;
loc_826591B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x826592a4
	goto loc_826592A4;
loc_826591C4:
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264dfe8
	ctx.lr = 0x826591E0;
	sub_8264DFE8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x826591fc
	if (ctx.cr6.eq) goto loc_826591FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x826591F0;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826592a4
	if (ctx.cr0.lt) goto loc_826592A4;
	// b 0x82659208
	goto loc_82659208;
loc_826591FC:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82659214
	if (!ctx.cr6.eq) goto loc_82659214;
loc_82659208:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x826592a4
	goto loc_826592A4;
loc_82659214:
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d838
	ctx.lr = 0x8265921C;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// bne 0x82659234
	if (!ctx.cr0.eq) goto loc_82659234;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826592a4
	goto loc_826592A4;
loc_82659234:
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r29,200(r31)
	REX_STORE_U64(r31.u32 + 200, r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r29,208(r31)
	REX_STORE_U64(r31.u32 + 208, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,216(r31)
	REX_STORE_U64(r31.u32 + 216, r29.u64);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 184);
	// ld r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264dfe8
	ctx.lr = 0x82659268;
	sub_8264DFE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659294
	if (ctx.cr0.eq) goto loc_82659294;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82659294
	if (ctx.cr6.eq) goto loc_82659294;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x82659280;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826592a4
	if (ctx.cr0.lt) goto loc_826592A4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x826592a4
	goto loc_826592A4;
loc_82659294:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,32096
	ctx.r11.s64 = ctx.r11.s64 + 32096;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
loc_826592A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8265EC18) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x826513d8
	sub_826513D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265EDA8) {
	REX_FUNC_PROLOGUE();
	// ld r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265EEB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265eed8
	if (!ctx.cr6.eq) goto loc_8265EED8;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265eed8
	if (!ctx.cr0.eq) goto loc_8265EED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265EED8:
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F910) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82656be8
	ctx.lr = 0x8265F92C;
	sub_82656BE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,260
	ctx.r3.s64 = 260;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8265d850
	ctx.lr = 0x8265F940;
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

DEFINE_REX_FUNC(sub_82660B40) {
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
	ctx.lr = 0x82660B48;
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x823ef900
	ctx.lr = 0x82660B64;
	sub_823EF900(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,-1
	r29.s64 = -1;
	// li r27,1
	r27.s64 = 1;
loc_82660B70:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660c10
	if (ctx.cr6.eq) goto loc_82660C10;
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x82660c10
	if (ctx.cr6.lt) goto loc_82660C10;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82660c10
	if (ctx.cr6.eq) goto loc_82660C10;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 36);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r24,2
	r24.s64 = 2;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// li r9,16
	ctx.r9.s64 = 16;
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// stw r6,97(r1)
	REX_STORE_U32(ctx.r1.u32 + 97, ctx.r6.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// sth r4,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r4.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stb r30,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r30.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r24,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, r24.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8264cff8
	ctx.lr = 0x82660BF4;
	sub_8264CFF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82660d48
	if (!ctx.cr0.eq) goto loc_82660D48;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82660c10
	if (!ctx.cr6.eq) goto loc_82660C10;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82660C10:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r27,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// bl 0x8264cef0
	ctx.lr = 0x82660C3C;
	sub_8264CEF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82660d48
	if (ctx.cr6.eq) goto loc_82660D48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82660d9c
	if (!ctx.cr6.gt) goto loc_82660D9C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1500
	ctx.r5.s64 = 1500;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x8264cf48
	ctx.lr = 0x82660C70;
	sub_8264CF48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82660c90
	if (ctx.cr0.gt) goto loc_82660C90;
	// bl 0x8264d050
	ctx.lr = 0x82660C7C;
	sub_8264D050(ctx, base);
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// beq cr6,0x82660d9c
	if (ctx.cr6.eq) goto loc_82660D9C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82660da8
	if (!ctx.cr6.gt) goto loc_82660DA8;
	// b 0x82660d54
	goto loc_82660D54;
loc_82660C90:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82660d9c
	if (ctx.cr6.lt) goto loc_82660D9C;
	// lbz r11,512(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 512);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82660d60
	if (!ctx.cr0.eq) goto loc_82660D60;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82660d9c
	if (ctx.cr6.lt) goto loc_82660D9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660d9c
	if (!ctx.cr6.eq) goto loc_82660D9C;
	// lwz r11,513(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 513);
	// addi r3,r1,165
	ctx.r3.s64 = ctx.r1.s64 + 165;
	// stb r27,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, r27.u8);
	// stw r11,161(r1)
	REX_STORE_U32(ctx.r1.u32 + 161, ctx.r11.u32);
	// bl 0x8264c918
	ctx.lr = 0x82660CCC;
	sub_8264C918(ctx, base);
	// ld r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 12);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r12,201
	ctx.r12.s64 = 201;
	// stdx r11,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// bl 0x826a1e70
	ctx.lr = 0x82660CE8;
	sub_826A1E70(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,65
	ctx.r10.s64 = 65;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660d1c
	if (ctx.cr6.eq) goto loc_82660D1C;
	// addi r10,r31,124
	ctx.r10.s64 = r31.s64 + 124;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_82660D1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8264cff8
	ctx.lr = 0x82660D40;
	sub_8264CFF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82660d9c
	if (ctx.cr0.eq) goto loc_82660D9C;
loc_82660D48:
	// bl 0x8264d050
	ctx.lr = 0x82660D4C;
	sub_8264D050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82660da8
	if (!ctx.cr0.gt) goto loc_82660DA8;
loc_82660D54:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82660da8
	goto loc_82660DA8;
loc_82660D60:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82660d9c
	if (!ctx.cr6.eq) goto loc_82660D9C;
	// cmplwi cr6,r3,65
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65, ctx.xer);
	// blt cr6,0x82660d9c
	if (ctx.cr6.lt) goto loc_82660D9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660d9c
	if (ctx.cr6.eq) goto loc_82660D9C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,513(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 513);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82660d9c
	if (!ctx.cr6.eq) goto loc_82660D9C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r8,r3,-65
	ctx.r8.s64 = ctx.r3.s64 + -65;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82660db0
	if (!ctx.cr6.gt) goto loc_82660DB0;
loc_82660D9C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82660b70
	if (!ctx.cr6.eq) goto loc_82660B70;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82660DA8:
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x826a1cf8
	return;
loc_82660DB0:
	// addi r7,r1,577
	ctx.r7.s64 = ctx.r1.s64 + 577;
	// addi r6,r1,561
	ctx.r6.s64 = ctx.r1.s64 + 561;
	// addi r5,r1,553
	ctx.r5.s64 = ctx.r1.s64 + 553;
	// addi r4,r1,517
	ctx.r4.s64 = ctx.r1.s64 + 517;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660870
	ctx.lr = 0x82660DC8;
	sub_82660870(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82660da8
	goto loc_82660DA8;
}

DEFINE_REX_FUNC(sub_82671240) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82671CB0) {
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
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// rlwimi r9,r8,23,0,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// addi r10,r4,244
	ctx.r10.s64 = ctx.r4.s64 + 244;
	// rlwimi r9,r8,23,8,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r9,r8,23,4,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,248(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 248);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,248(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 248);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,248(r4)
	REX_STORE_U32(ctx.r4.u32 + 248, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_82671D28:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671d28
	if (!ctx.cr0.eq) goto loc_82671D28;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82671d54
	if (!ctx.cr6.eq) goto loc_82671D54;
	// bl 0x82670cd8
	ctx.lr = 0x82671D54;
	sub_82670CD8(ctx, base);
loc_82671D54:
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
	// bne 0x82671d54
	if (!ctx.cr0.eq) goto loc_82671D54;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
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

DEFINE_REX_FUNC(sub_826773C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826773C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-10532
	ctx.r11.s64 = ctx.r11.s64 + -10532;
	// addi r10,r10,-10540
	ctx.r10.s64 = ctx.r10.s64 + -10540;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r29,r3,348
	r29.s64 = ctx.r3.s64 + 348;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x826773F4;
	sub_82130E88(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// bl 0x82676d18
	ctx.lr = 0x826773FC;
	sub_82676D18(ctx, base);
	// lwz r3,444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82677414
	if (ctx.cr6.eq) goto loc_82677414;
	// bl 0x82676d18
	ctx.lr = 0x8267740C;
	sub_82676D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
loc_82677414:
	// lwz r3,440(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 440);
	// bl 0x82676d18
	ctx.lr = 0x8267741C;
	sub_82676D18(ctx, base);
	// addi r30,r31,400
	r30.s64 = r31.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x82677428;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267ffc0
	ctx.lr = 0x82677430;
	sub_8267FFC0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82661120
	ctx.lr = 0x82677438;
	sub_82661120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x82677440;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82677448;
	sub_82130E88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,5148
	ctx.r10.s64 = ctx.r10.s64 + 5148;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82679938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82679940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267995C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r11,r30,-8192
	ctx.r11.s64 = r30.s64 + -536870912;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82679a08
	if (ctx.cr6.gt) goto loc_82679A08;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10512
	ctx.r12.s64 = ctx.r12.s64 + -10512;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// nop 
	// addi r12,r12,-26224
	ctx.r12.s64 = ctx.r12.s64 + -26224;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82679990;
	case 1:
		goto loc_826799A0;
	case 2:
		goto loc_826799A8;
	case 3:
		goto loc_826799B8;
	case 4:
		goto loc_826799D0;
	case 5:
		goto loc_826799D8;
	case 6:
		goto loc_826799E0;
	case 7:
		goto loc_826799E8;
	case 8:
		goto loc_826799F0;
	case 9:
		goto loc_826799F8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82679990:
	// ld r11,808(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 808);
loc_82679994:
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82679a10
	goto loc_82679A10;
loc_826799A0:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// b 0x82679994
	goto loc_82679994;
loc_826799A8:
	// lwz r11,1196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// lwz r10,1192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1192);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82679994
	goto loc_82679994;
loc_826799B8:
	// ld r11,1216(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1216);
	// ld r10,1208(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 1208);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826799C4:
	// li r30,0
	r30.s64 = 0;
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// b 0x82679a10
	goto loc_82679A10;
loc_826799D0:
	// lwz r11,1196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// b 0x82679994
	goto loc_82679994;
loc_826799D8:
	// ld r11,1216(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1216);
	// b 0x826799c4
	goto loc_826799C4;
loc_826799E0:
	// lwz r11,1200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// b 0x82679994
	goto loc_82679994;
loc_826799E8:
	// ld r11,1224(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1224);
	// b 0x826799c4
	goto loc_826799C4;
loc_826799F0:
	// lwz r11,1204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1204);
	// b 0x82679994
	goto loc_82679994;
loc_826799F8:
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// lhz r10,1072(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1072);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82679994
	goto loc_82679994;
loc_82679A08:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4105
	r30.u64 = r30.u64 | 4105;
loc_82679A10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82679A18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82680570) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82680578;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,22236
	r28.s64 = ctx.r11.s64 + 22236;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x82680598;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r31,4096
	ctx.cr6.compare<int32_t>(r31.s32, 4096, ctx.xer);
	// bgt cr6,0x82680900
	if (ctx.cr6.gt) goto loc_82680900;
	// beq cr6,0x826808e4
	if (ctx.cr6.eq) goto loc_826808E4;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82680a10
	if (ctx.cr6.gt) goto loc_82680A10;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-10376
	ctx.r12.s64 = ctx.r12.s64 + -10376;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// addi r12,r12,1496
	ctx.r12.s64 = ctx.r12.s64 + 1496;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826805D8;
	case 1:
		goto loc_82680610;
	case 2:
		goto loc_8268062C;
	case 3:
		goto loc_82680648;
	case 4:
		goto loc_82680660;
	case 5:
		goto loc_8268067C;
	case 6:
		goto loc_82680698;
	case 7:
		goto loc_826806B4;
	case 8:
		goto loc_826806D0;
	case 9:
		goto loc_826806EC;
	case 10:
		goto loc_82680708;
	case 11:
		goto loc_82680724;
	case 12:
		goto loc_82680740;
	case 13:
		goto loc_8268075C;
	case 14:
		goto loc_82680778;
	case 15:
		goto loc_82680794;
	case 16:
		goto loc_826807B0;
	case 17:
		goto loc_826807CC;
	case 18:
		goto loc_826807E8;
	case 19:
		goto loc_82680804;
	case 20:
		goto loc_82680820;
	case 21:
		goto loc_8268083C;
	case 22:
		goto loc_82680858;
	case 23:
		goto loc_82680874;
	case 24:
		goto loc_82680890;
	case 25:
		goto loc_82680A10;
	case 26:
		goto loc_826808AC;
	case 27:
		goto loc_826808C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826805D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
loc_826805F0:
	// li r31,0
	r31.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82680604
	goto loc_82680604;
loc_826805FC:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4097
	r31.u64 = r31.u64 | 4097;
loc_82680604:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82680a18
	goto loc_82680A18;
loc_82680610:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826805f0
	goto loc_826805F0;
loc_8268062C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680648:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,22104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22104);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680660:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x826805f0
	goto loc_826805F0;
loc_8268067C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680698:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x826805f0
	goto loc_826805F0;
loc_826806B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x826805f0
	goto loc_826805F0;
loc_826806D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x826805f0
	goto loc_826805F0;
loc_826806EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680708:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,118(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680724:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680740:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,122(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 122);
	// b 0x826805f0
	goto loc_826805F0;
loc_8268075C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680778:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680794:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x826805f0
	goto loc_826805F0;
loc_826807B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x826805f0
	goto loc_826805F0;
loc_826807CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826805f0
	goto loc_826805F0;
loc_826807E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680804:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680820:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x826805f0
	goto loc_826805F0;
loc_8268083C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680858:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680874:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680890:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x826805f0
	goto loc_826805F0;
loc_826808AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x826805f0
	goto loc_826805F0;
loc_826808C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x826805f0
	goto loc_826805F0;
loc_826808E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680900:
	// addi r11,r31,-4099
	ctx.r11.s64 = r31.s64 + -4099;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82680a10
	if (ctx.cr6.gt) goto loc_82680A10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8268094c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8268094C;
	// bdzf 4*cr6+eq,0x82680968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82680968;
	// bdzf 4*cr6+eq,0x82680984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82680984;
	// bdzf 4*cr6+eq,0x826809a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826809A0;
	// bdzf 4*cr6+eq,0x826809bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826809BC;
	// bdzf 4*cr6+eq,0x826809d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826809D8;
	// bne cr6,0x826809f4
	if (!ctx.cr6.eq) goto loc_826809F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x826805f0
	goto loc_826805F0;
loc_8268094C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680968:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680984:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lhz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// b 0x826805f0
	goto loc_826805F0;
loc_826809A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x826805f0
	goto loc_826805F0;
loc_826809BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x826805f0
	goto loc_826805F0;
loc_826809D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x826805f0
	goto loc_826805F0;
loc_826809F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826805fc
	if (ctx.cr6.lt) goto loc_826805FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x826805f0
	goto loc_826805F0;
loc_82680A10:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
loc_82680A18:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x827938b4
	ctx.lr = 0x82680A20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8269CD20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8269CD30:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x8269cd4c
	if (ctx.cr0.eq) goto loc_8269CD4C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8269cd30
	if (!ctx.cr0.eq) goto loc_8269CD30;
loc_8269CD4C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8269CD70:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8269cd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269CD70;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E838) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8269e868
	if (!ctx.cr6.eq) goto loc_8269E868;
loc_8269E854:
	// bl 0x826a33d0
	ctx.lr = 0x8269E858;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269E864;
	sub_8269CB20(ctx, base);
	// b 0x8269e884
	goto loc_8269E884;
loc_8269E868:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8269e854
	if (ctx.cr6.eq) goto loc_8269E854;
	// bl 0x826aa2f8
	ctx.lr = 0x8269E874;
	sub_826AA2F8(ctx, base);
	// std r3,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8269e888
	if (!ctx.cr6.eq) goto loc_8269E888;
loc_8269E884:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8269E888:
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

DEFINE_REX_FUNC(sub_826A0AFC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x826A0B1C;
	sub_8269E1E0(ctx, base);
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

DEFINE_REX_FUNC(__savegprlr_22) {
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
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A29E8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826a2a14
	if (ctx.cr6.lt) goto loc_826A2A14;
	// bl 0x826af298
	ctx.lr = 0x826A2A08;
	sub_826AF298(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a2a1c
	if (ctx.cr6.lt) goto loc_826A2A1C;
loc_826A2A14:
	// bl 0x826af298
	ctx.lr = 0x826A2A18;
	sub_826AF298(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_826A2A1C:
	// bl 0x826af2a8
	ctx.lr = 0x826A2A20;
	sub_826AF2A8(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(__savevmx_27) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_117) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_91) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AF380) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x826AF3A0;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x826af3b8
	if (ctx.cr6.eq) goto loc_826AF3B8;
loc_826AF3A8:
	// lbzu r3,1(r31)
	ea = 1 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// bl 0x826a0820
	ctx.lr = 0x826AF3B0;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826af3a8
	if (!ctx.cr0.eq) goto loc_826AF3A8;
loc_826AF3B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x826AF3C4;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x826af3d0
	if (!ctx.cr6.eq) goto loc_826AF3D0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_826AF3D0:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r11,27400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27400);
	// lwz r9,188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
loc_826AF3F0:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x826af3f0
	if (!ctx.cr0.eq) goto loc_826AF3F0;
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

DEFINE_REX_FUNC(sub_826B4180) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826b41b0
	if (ctx.cr6.eq) goto loc_826B41B0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f0130
	ctx.lr = 0x826B41A8;
	sub_823F0130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b41b4
	goto loc_826B41B4;
loc_826B41B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B41B4:
	// cntlzw r11,r31
	ctx.r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82794374
	ctx.lr = 0x826B41C4;
	__imp__NtCreateTimer(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826b41ec
	if (ctx.cr0.lt) goto loc_826B41EC;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x826b41e0
	if (ctx.cr6.eq) goto loc_826B41E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B41E0:
	// bl 0x823f0188
	ctx.lr = 0x826B41E4;
	sub_823F0188(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826b41f4
	goto loc_826B41F4;
loc_826B41EC:
	// bl 0x823f0020
	ctx.lr = 0x826B41F0;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B41F4:
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

DEFINE_REX_FUNC(sub_826B8348) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B8608) {
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
	// bl 0x826bc110
	ctx.lr = 0x826B8620;
	sub_826BC110(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826bc390
	ctx.lr = 0x826B8628;
	sub_826BC390(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x826b6250
	ctx.lr = 0x826B8630;
	sub_826B6250(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x826bf578
	ctx.lr = 0x826B8638;
	sub_826BF578(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,27632
	ctx.r10.s64 = ctx.r11.s64 + 27632;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826bc448
	ctx.lr = 0x826B864C;
	sub_826BC448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	REX_STORE_U64(r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r8,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_826BB038) {
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
	ctx.lr = 0x826BB040;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// mulld r8,r9,r11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r11.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x826bb080
	if (!ctx.cr6.gt) goto loc_826BB080;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// rotlwi r27,r9,0
	r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_826BB080:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r5,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// bne cr6,0x826bb094
	if (!ctx.cr6.eq) goto loc_826BB094;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826BB094:
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bb0a8
	if (ctx.cr6.eq) goto loc_826BB0A8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x826bb0d4
	goto loc_826BB0D4;
loc_826BB0A8:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x823f02b8
	ctx.lr = 0x826BB0B8;
	sub_823F02B8(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826bb0cc
	if (!ctx.cr6.eq) goto loc_826BB0CC;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_826BB0CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826bb17c
	if (ctx.cr6.lt) goto loc_826BB17C;
loc_826BB0D4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826bb15c
	if (ctx.cr6.eq) goto loc_826BB15C;
loc_826BB0E0:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x826c6010
	ctx.lr = 0x826BB0E8;
	sub_826C6010(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bb19c
	if (ctx.cr6.eq) goto loc_826BB19C;
	// bl 0x826c60b8
	ctx.lr = 0x826BB0F4;
	sub_826C60B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bb19c
	if (ctx.cr6.eq) goto loc_826BB19C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826BB13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bb17c
	if (ctx.cr6.lt) goto loc_826BB17C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x826bb0e0
	if (ctx.cr6.lt) goto loc_826BB0E0;
loc_826BB15C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826bb190
	if (!ctx.cr6.lt) goto loc_826BB190;
loc_826BB17C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB190:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826BB19C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x826bb17c
	goto loc_826BB17C;
}

DEFINE_REX_FUNC(sub_826C6E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826C6E08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// bl 0x826c6d18
	ctx.lr = 0x826C6E30;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826c6ee8
	if (ctx.cr6.eq) goto loc_826C6EE8;
	// lbz r31,80(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_826C6E44:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c6ee8
	if (ctx.cr6.lt) goto loc_826C6EE8;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c6e78
	if (ctx.cr6.eq) goto loc_826C6E78;
	// rlwinm r10,r31,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FC;
	// lwz r6,524(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bctrl 
	ctx.lr = 0x826C6E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C6E78:
	// rlwinm r11,r31,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FC;
	// lwz r3,508(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826c68d8
	ctx.lr = 0x826C6E90;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c6e9c
	if (ctx.cr6.lt) goto loc_826C6E9C;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_826C6E9C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r10,512(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 512);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
loc_826C6EAC:
	// bge cr6,0x826c6eec
	if (!ctx.cr6.lt) goto loc_826C6EEC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826c6ed4
	if (!ctx.cr6.eq) goto loc_826C6ED4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// b 0x826c6eac
	goto loc_826C6EAC;
loc_826C6ED4:
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,512(r8)
	REX_STORE_U8(ctx.r8.u32 + 512, ctx.r10.u8);
	// b 0x826c6e44
	goto loc_826C6E44;
loc_826C6EE8:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_826C6EEC:
	// stb r29,512(r8)
	REX_STORE_U8(ctx.r8.u32 + 512, r29.u8);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x826c68d8
	ctx.lr = 0x826C6F04;
	sub_826C68D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826D38C8) {
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
	ctx.lr = 0x826D38D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r29,r11,r4
	r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpd cr6,r29,r10
	ctx.cr6.compare<int64_t>(r29.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x826d390c
	if (ctx.cr6.gt) goto loc_826D390C;
	// cmpd cr6,r29,r11
	ctx.cr6.compare<int64_t>(r29.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x826d391c
	if (!ctx.cr6.lt) goto loc_826D391C;
loc_826D390C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D391C:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d3a78
	if (ctx.cr6.eq) goto loc_826D3A78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826D3938;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3a80
	if (ctx.cr6.lt) goto loc_826D3A80;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d39ac
	if (ctx.cr6.eq) goto loc_826D39AC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x826d39ac
	if (ctx.cr6.eq) goto loc_826D39AC;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826d3a78
	if (!ctx.cr6.eq) goto loc_826D3A78;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x826d39bc
	if (ctx.cr6.eq) goto loc_826D39BC;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r7,r8,999
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(999));
	// divwu r6,r7,r9
	ctx.r6.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// rotldi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 1);
	// divd r3,r4,r8
	ctx.r3.s64 = (ctx.r8.s64 && !(ctx.r4.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r4.s64 / ctx.r8.s64 : 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// andc r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// tdlgei r9,-1
	if (ctx.r9.s64 == -1ll || ctx.r9.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// b 0x826d39e0
	goto loc_826D39E0;
loc_826D39AC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,188
	ctx.r3.u64 = ctx.r3.u64 | 188;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D39BC:
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rotldi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft64(r29.u64, 1);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// divd r6,r29,r7
	ctx.r6.s64 = (ctx.r7.s64 && !(r29.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? r29.s64 / ctx.r7.s64 : 0;
	// andc r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// tdllei r7,0
	if (ctx.r7.s64 == 0ll || ctx.r7.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r30,r6,0
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// tdlgei r5,-1
	if (ctx.r5.s64 == -1ll || ctx.r5.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_826D39E0:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826d390c
	if (ctx.cr6.gt) goto loc_826D390C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x826d390c
	if (ctx.cr6.gt) goto loc_826D390C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x826d3588
	ctx.lr = 0x826D3A28;
	sub_826D3588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3a80
	if (ctx.cr6.lt) goto loc_826D3A80;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826d3a48
	if (ctx.cr6.eq) goto loc_826D3A48;
	// stw r28,184(r31)
	REX_STORE_U32(r31.u32 + 184, r28.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// b 0x826d3a50
	goto loc_826D3A50;
loc_826D3A48:
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
loc_826D3A50:
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r29,192(r31)
	REX_STORE_U32(r31.u32 + 192, r29.u32);
	// stw r28,200(r31)
	REX_STORE_U32(r31.u32 + 200, r28.u32);
	// stw r28,208(r31)
	REX_STORE_U32(r31.u32 + 208, r28.u32);
	// stw r28,212(r31)
	REX_STORE_U32(r31.u32 + 212, r28.u32);
	// stw r28,216(r31)
	REX_STORE_U32(r31.u32 + 216, r28.u32);
	// stw r28,204(r31)
	REX_STORE_U32(r31.u32 + 204, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D3A78:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,187
	ctx.r3.u64 = ctx.r3.u64 | 187;
loc_826D3A80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826DECA8) {
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
	ctx.lr = 0x826DECB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826dece8
	if (!ctx.cr6.gt) goto loc_826DECE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r4.u64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826DECE8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DED00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ded48
	if (ctx.cr6.lt) goto loc_826DED48;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// std r30,32(r31)
	REX_STORE_U64(r31.u32 + 32, r30.u64);
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,56(r31)
	REX_STORE_U64(r31.u32 + 56, r29.u64);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// std r30,128(r31)
	REX_STORE_U64(r31.u32 + 128, r30.u64);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// std r29,72(r31)
	REX_STORE_U64(r31.u32 + 72, r29.u64);
	// bne cr6,0x826ded48
	if (!ctx.cr6.eq) goto loc_826DED48;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826ded48
	if (!ctx.cr6.gt) goto loc_826DED48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826de850
	ctx.lr = 0x826DED48;
	sub_826DE850(ctx, base);
loc_826DED48:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E1550) {
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
	ctx.lr = 0x826E1558;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r22,32767
	r22.s64 = 32767;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826e1580
	if (!ctx.cr6.eq) goto loc_826E1580;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x826e6f48
	ctx.lr = 0x826E1580;
	sub_826E6F48(ctx, base);
loc_826E1580:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e175c
	if (ctx.cr6.eq) goto loc_826E175C;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_826E1598:
	// lwz r10,356(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 356);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// lwzx r9,r25,r10
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	// clrlwi r31,r9,16
	r31.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x826e16a8
	if (ctx.cr6.eq) goto loc_826E16A8;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_826E15BC:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 424);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lhz r19,0(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,-2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bl 0x826e6a68
	ctx.lr = 0x826E15E8;
	sub_826E6A68(ctx, base);
	// lwz r10,424(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 424);
	// extsh r28,r19
	r28.s64 = r19.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// bl 0x826e6b38
	ctx.lr = 0x826E1618;
	sub_826E6B38(ctx, base);
	// lwz r5,60(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x826e1640
	if (ctx.cr6.gt) goto loc_826E1640;
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x826e1668
	goto loc_826E1668;
loc_826E1640:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 424);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lhz r8,-2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
loc_826E1668:
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 256);
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e15bc
	if (ctx.cr6.lt) goto loc_826E15BC;
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e1730
	if (!ctx.cr6.gt) goto loc_826E1730;
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826e169c
	if (!ctx.cr6.lt) goto loc_826E169C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E169C:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826e1730
	goto loc_826E1730;
loc_826E16A8:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826e16e4
	if (!ctx.cr6.eq) goto loc_826E16E4;
	// lhz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 112);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x826e16e4
	if (ctx.cr6.eq) goto loc_826E16E4;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826e17b0
	if (ctx.cr6.gt) goto loc_826E17B0;
	// lhz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 132);
	// lhz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 128);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
loc_826E16E4:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e1724
	if (!ctx.cr6.gt) goto loc_826E1724;
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x826e1708
	if (ctx.cr6.lt) goto loc_826E1708;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_826E1708:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r7,r25,r11
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r6.u32);
loc_826E1724:
	// lwz r11,356(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 356);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// stwx r10,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r10.u32);
loc_826E1730:
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826e1744
	if (!ctx.cr6.lt) goto loc_826E1744;
	// mr r22,r31
	r22.u64 = r31.u64;
loc_826E1744:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,1776
	r24.s64 = r24.s64 + 1776;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e1598
	if (ctx.cr6.lt) goto loc_826E1598;
loc_826E175C:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e17e4
	if (ctx.cr6.eq) goto loc_826E17E4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x826e1778
	if (ctx.cr6.eq) goto loc_826E1778;
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 256);
	// clrlwi r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
loc_826E1778:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 384);
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826e178c
	if (!ctx.cr6.lt) goto loc_826E178C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E178C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x826e17d8
	if (!ctx.cr6.eq) goto loc_826E17D8;
	// lhz r10,210(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 210);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sth r8,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r8.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_826E17B0:
	// lhz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 124);
	// lhz r9,122(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 122);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x826e16e4
	goto loc_826E16E4;
loc_826E17D8:
	// sth r11,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r11.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_826E17E4:
	// sth r22,0(r20)
	REX_STORE_U16(r20.u32 + 0, r22.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826F7E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826F7E18;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826f7ca8
	ctx.lr = 0x826F7E38;
	sub_826F7CA8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f7950
	ctx.lr = 0x826F7E50;
	sub_826F7950(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826F9B70) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x826F9B78;
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a3f64
	ctx.lr = 0x826F9B8C;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// li r24,0
	r24.s64 = 0;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r26.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x826f9bc4
	if (!ctx.cr6.gt) goto loc_826F9BC4;
loc_826F9BB4:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r6,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x826f9bb4
	if (ctx.cr6.gt) goto loc_826F9BB4;
loc_826F9BC4:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// and r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r23,r8,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// blt cr6,0x826f9c6c
	if (ctx.cr6.lt) goto loc_826F9C6C;
	// cmpwi cr6,r6,2048
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2048, ctx.xer);
	// bgt cr6,0x826f9c6c
	if (ctx.cr6.gt) goto loc_826F9C6C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x826f9c6c
	if (ctx.cr6.eq) goto loc_826F9C6C;
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,24056
	ctx.r8.s64 = ctx.r10.s64 + 24056;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f2,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x826f9d40
	goto loc_826F9D40;
loc_826F9C6C:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f0
	f30.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f0,4296(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fdiv f13,f0,f30
	ctx.f13.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,-21784(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -21784);
	// fmul f29,f13,f0
	f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x826F9C9C;
	sub_826A15C0(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x826a14e0
	ctx.lr = 0x826F9CB0;
	sub_826A14E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,3728(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// fdiv f30,f0,f30
	f30.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,-21792(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -21792);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmul f29,f30,f0
	f29.f64 = f30.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x826F9CDC;
	sub_826A15C0(ctx, base);
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x826a14e0
	ctx.lr = 0x826F9CF0;
	sub_826A14E0(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmul f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,-21800(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + -21800);
	// fmul f31,f30,f0
	f31.f64 = f30.f64 * ctx.f0.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826F9D10;
	sub_826A14E0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f0,8312(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8312);
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x826a15c0
	ctx.lr = 0x826F9D2C;
	sub_826A15C0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,3824(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_826F9D40:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f2,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r11,14720
	r31.s64 = ctx.r11.s64 + 14720;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v127,v61,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v10,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vsldoi v11,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmaddcfp128 v9,v127,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vxor128 v126,v127,v62
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// srawi r10,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r10.s64 = r26.s32 >> 2;
	// lvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v12,v10,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r27.s64 = temp.s64;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v126,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v125,v58,0
	simde_mm_store_si128((simde__m128i*)v125.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vspltw128 v124,v57,0
	simde_mm_store_si128((simde__m128i*)v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vsldoi v0,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v13,v13,v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 8));
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// ble cr6,0x826f9e74
	if (!ctx.cr6.gt) goto loc_826F9E74;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826F9DEC:
	// lvx128 v56,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vrlimi128 v55,v54,5,2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 5));
	// vrlimi128 v53,v56,5,2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 78), 5));
	// vmulfp128 v9,v13,v55
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vpermwi128 v8,v55,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xB1));
	// stvx128 v53,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x826f9dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F9DEC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x826f9e74
	if (!ctx.cr6.gt) goto loc_826F9E74;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826F9E44:
	// lvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v13,v52
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v8,v52,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xB1));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x826f9e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F9E44;
loc_826F9E74:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r5,r24,-1
	ctx.r5.s64 = r24.s64 + -1;
	// bne cr6,0x826f9e84
	if (!ctx.cr6.eq) goto loc_826F9E84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_826F9E84:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bctrl 
	ctx.lr = 0x826F9E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v11,v124,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lvx128 v10,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vmaddcfp128 v9,v126,v9,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(v125.f32)));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsldoi128 v12,v125,v10,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 4));
	// lvx128 v63,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v127,v8,v124
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v124.f32)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsldoi v13,v10,v9,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 4));
	// vrlimi128 v12,v9,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmaddcfp128 v7,v127,v7,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v0,v0,v8,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 4));
	// vmaddfp128 v10,v126,v8,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vrlimi128 v11,v8,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 1));
	// vrlimi128 v0,v7,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 228), 1));
	// vrlimi128 v13,v10,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 1));
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// ble cr6,0x826f9f74
	if (!ctx.cr6.gt) goto loc_826F9F74;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826F9F10:
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v50,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v10,v126,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v51,78
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xB1));
	// vrlimi128 v50,v49,5,1
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 147), 5));
	// vrlimi128 v12,v49,5,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 5));
	// vmulfp128 v6,v62,v50
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v7,v13,v50
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v127,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v12,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v8,v8,v12,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vpermwi128 v48,v9,228
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x1B));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x826f9f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F9F10;
loc_826F9F74:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826f9f88
	if (ctx.cr6.eq) goto loc_826F9F88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_826F9F88:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a41fc
	ctx.lr = 0x826F9F94;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82739708) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82739710;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// lwz r31,136(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r21
	r25.u64 = r21.u64;
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// stw r21,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r21.u32);
	// stw r21,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r21.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,6,0,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r24,r21
	r24.u64 = r21.u64;
	// rlwinm r20,r30,5,0,26
	r20.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r19,r10,5,0,26
	r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r21
	r26.u64 = r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r18,r31,-4
	r18.s64 = r31.s64 + -4;
	// bne cr6,0x82739a80
	if (!ctx.cr6.eq) goto loc_82739A80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82739784
	if (ctx.cr6.eq) goto loc_82739784;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,1
	r26.s64 = 1;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r31,-2(r31)
	r31.u64 = REX_LOAD_U16(r31.u32 + -2);
	// lhz r9,-2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r29,r31
	r29.s64 = r31.s16;
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// b 0x827397d0
	goto loc_827397D0;
loc_82739784:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x827397c8
	if (!ctx.cr6.eq) goto loc_827397C8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_827397B0:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x82739ab0
	if (!ctx.cr6.eq) goto loc_82739AB0;
loc_827397B8:
	// stw r21,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r21.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r21,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r21.u32);
	// b 0x826a1ce0
	return;
loc_827397C8:
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
loc_827397D0:
	// addi r9,r29,-16384
	ctx.r9.s64 = r29.s64 + -16384;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r22,r9,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x827397ec
	if (ctx.cr6.eq) goto loc_827397EC;
	// mr r27,r21
	r27.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_827397EC:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r6
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// addi r9,r31,-16384
	ctx.r9.s64 = r31.s64 + -16384;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r23,r9,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82739828
	if (ctx.cr6.eq) goto loc_82739828;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82739828:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82739880
	if (ctx.cr6.eq) goto loc_82739880;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// beq cr6,0x82739864
	if (ctx.cr6.eq) goto loc_82739864;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x827398fc
	goto loc_827398FC;
loc_82739864:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x827398fc
	goto loc_827398FC;
loc_82739880:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827398dc
	if (ctx.cr6.eq) goto loc_827398DC;
	// xor r9,r30,r10
	ctx.r9.u64 = r30.u64 ^ ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827398b0
	if (ctx.cr6.eq) goto loc_827398B0;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// blt cr6,0x827398b4
	if (ctx.cr6.lt) goto loc_827398B4;
loc_827398B0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_827398B4:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x827398fc
	goto loc_827398FC;
loc_827398DC:
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
loc_827398FC:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82739920
	if (ctx.cr6.eq) goto loc_82739920;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82739920:
	// addic. r8,r26,2
	ctx.xer.ca = r26.u32 > 4294967293;
	ctx.r8.s64 = r26.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827397b8
	if (ctx.cr0.eq) goto loc_827397B8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82739960
	if (ctx.cr6.eq) goto loc_82739960;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82739960
	if (!ctx.cr6.eq) goto loc_82739960;
	// rlwinm r8,r27,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82739954
	if (ctx.cr6.eq) goto loc_82739954;
	// stw r29,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// li r24,1
	r24.s64 = 1;
	// stw r27,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, r27.u32);
	// b 0x82739960
	goto loc_82739960;
loc_82739954:
	// stw r29,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r29.u32);
	// li r25,1
	r25.s64 = 1;
	// stw r27,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r27.u32);
loc_82739960:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x827399a0
	if (!ctx.cr6.eq) goto loc_827399A0;
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82739988
	if (ctx.cr6.eq) goto loc_82739988;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x82739998
	goto loc_82739998;
loc_82739988:
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82739998:
	// stwx r28,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r28.u32);
	// stwx r31,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r31.u32);
loc_827399A0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827399e0
	if (!ctx.cr6.eq) goto loc_827399E0;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827399c8
	if (ctx.cr6.eq) goto loc_827399C8;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x827399d8
	goto loc_827399D8;
loc_827399C8:
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_827399D8:
	// stwx r10,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_827399E0:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x82739a14
	if (ctx.cr6.eq) goto loc_82739A14;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(r24.s32, 3, ctx.xer);
	// beq cr6,0x82739a14
	if (ctx.cr6.eq) goto loc_82739A14;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// ble cr6,0x82739a04
	if (!ctx.cr6.gt) goto loc_82739A04;
loc_827399F8:
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// b 0x827397b0
	goto loc_827397B0;
loc_82739A04:
	// bge cr6,0x827399f8
	if (!ctx.cr6.lt) goto loc_827399F8;
	// lwz r10,-160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r11,-144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// b 0x827397b0
	goto loc_827397B0;
loc_82739A14:
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
	// subf r9,r29,r31
	ctx.r9.u64 = r31.u64 - r29.u64;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - r29.u64;
	// subf r30,r10,r28
	r30.u64 = r28.u64 - ctx.r10.u64;
	// subf r6,r27,r28
	ctx.r6.u64 = r28.u64 - r27.u64;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r26,r27,r10
	r26.u64 = ctx.r10.u64 - r27.u64;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r30,r30,r6
	r30.u64 = r30.u64 ^ ctx.r6.u64;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r6,r26,r6
	ctx.r6.u64 = r26.u64 ^ ctx.r6.u64;
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// srawi r7,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 31;
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// or r30,r9,r8
	r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r26,r7,r6
	r26.u64 = ctx.r7.u64 | ctx.r6.u64;
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~r30.u64;
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & r31.u64;
	// andc r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ~r26.u64;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// and r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 & r29.u64;
	// or r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 & r27.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x827397b0
	goto loc_827397B0;
loc_82739A80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82739aa8
	if (ctx.cr6.eq) goto loc_82739AA8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r8,-2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r7,-2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x827397b0
	goto loc_827397B0;
loc_82739AA8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82739AB0:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// beq cr6,0x82739ad0
	if (ctx.cr6.eq) goto loc_82739AD0;
	// li r7,-124
	ctx.r7.s64 = -124;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// b 0x82739ad8
	goto loc_82739AD8;
loc_82739AD0:
	// li r7,-120
	ctx.r7.s64 = -120;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
loc_82739AD8:
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + r19.u64;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// cmpwi cr6,r9,-60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -60, ctx.xer);
	// bge cr6,0x82739af4
	if (!ctx.cr6.lt) goto loc_82739AF4;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r10,r10,-60
	ctx.r10.s64 = ctx.r10.s64 + -60;
	// b 0x82739b04
	goto loc_82739B04;
loc_82739AF4:
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// ble cr6,0x82739b04
	if (!ctx.cr6.gt) goto loc_82739B04;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
loc_82739B04:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82739b24
	if (!ctx.cr6.lt) goto loc_82739B24;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x826a1ce0
	return;
loc_82739B24:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82739b34
	if (!ctx.cr6.gt) goto loc_82739B34;
	// subf r9,r8,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82739B34:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8274F508) {
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
	ctx.lr = 0x8274F510;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274f550
	if (ctx.cr6.eq) goto loc_8274F550;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r15,0
	r15.s64 = 0;
	// bne cr6,0x8274f554
	if (!ctx.cr6.eq) goto loc_8274F554;
loc_8274F550:
	// li r15,1
	r15.s64 = 1;
loc_8274F554:
	// lwz r11,22364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274f568
	if (!ctx.cr6.eq) goto loc_8274F568;
	// lwz r10,20912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// b 0x8274f56c
	goto loc_8274F56C;
loc_8274F568:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8274F56C:
	// lwz r8,3744(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,3748(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r8,3760(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r30.s64 = ctx.r3.s32 >> 1;
	// lwz r7,3764(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r5,r9
	r21.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r20,r4,r10
	r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r19,r6,r10
	r19.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r18,r3,r9
	r18.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r17,r8,r10
	r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r16,r11,r10
	r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8274f5e4
	if (ctx.cr6.eq) goto loc_8274F5E4;
loc_8274F5D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_8274F5E4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8274f5d8
	if (ctx.cr6.eq) goto loc_8274F5D8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8274fa54
	if (!ctx.cr6.lt) goto loc_8274FA54;
loc_8274F5FC:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mullw r24,r28,r23
	r24.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// lwz r8,232(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r6,22164(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22164);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r21
	r29.u64 = ctx.r9.u64 + r21.u64;
	// add r25,r11,r20
	r25.u64 = ctx.r11.u64 + r20.u64;
	// add r26,r11,r19
	r26.u64 = ctx.r11.u64 + r19.u64;
	// add r30,r11,r17
	r30.u64 = ctx.r11.u64 + r17.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8274f66c
	if (ctx.cr6.eq) goto loc_8274F66C;
	// lwz r8,22192(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8274f66c
	if (ctx.cr6.eq) goto loc_8274F66C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8274f88c
	if (ctx.cr6.eq) goto loc_8274F88C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt cr6,0x8274f88c
	if (ctx.cr6.gt) goto loc_8274F88C;
loc_8274F66C:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8274f684
	if (!ctx.cr6.eq) goto loc_8274F684;
	// lwz r10,3420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274f844
	if (ctx.cr6.eq) goto loc_8274F844;
loc_8274F684:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x8274f7dc
	if (ctx.cr6.eq) goto loc_8274F7DC;
	// ld r10,3600(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// bne cr6,0x8274f7dc
	if (!ctx.cr6.eq) goto loc_8274F7DC;
	// lwz r11,22364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22364);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8274f6c4
	if (!ctx.cr6.eq) goto loc_8274F6C4;
	// lwz r10,21928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21928);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8274f6c8
	if (!ctx.cr6.eq) goto loc_8274F6C8;
loc_8274F6C4:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8274F6C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274f7d4
	if (!ctx.cr6.eq) goto loc_8274F7D4;
	// lwz r30,20912(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x8274f840
	if (!ctx.cr6.lt) goto loc_8274F840;
loc_8274F6DC:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 0);
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + r25.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8274f7c4
	if (ctx.cr6.eq) goto loc_8274F7C4;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8274f7c4
	if (!ctx.cr6.lt) goto loc_8274F7C4;
loc_8274F748:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzu r3,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwu r3,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzu r3,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// blt cr6,0x8274f748
	if (ctx.cr6.lt) goto loc_8274F748;
loc_8274F7C4:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x8274f6dc
	if (ctx.cr6.lt) goto loc_8274F6DC;
	// b 0x8274f840
	goto loc_8274F840;
loc_8274F7D4:
	// li r30,0
	r30.s64 = 0;
	// b 0x8274f6dc
	goto loc_8274F6DC;
loc_8274F7DC:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8274f844
	if (!ctx.cr6.lt) goto loc_8274F844;
	// subf r28,r30,r11
	r28.u64 = ctx.r11.u64 - r30.u64;
	// subf r27,r29,r9
	r27.u64 = ctx.r9.u64 - r29.u64;
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// subf r25,r30,r25
	r25.u64 = r25.u64 - r30.u64;
loc_8274F7FC:
	// lwz r11,3144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3144);
	// add r8,r30,r28
	ctx.r8.u64 = r30.u64 + r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r6,r27,r29
	ctx.r6.u64 = r27.u64 + r29.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r5,r30,r26
	ctx.r5.u64 = r30.u64 + r26.u64;
	// add r4,r25,r30
	ctx.r4.u64 = r25.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274F828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8274f7fc
	if (ctx.cr6.lt) goto loc_8274F7FC;
loc_8274F840:
	// lwz r27,276(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8274F844:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8274f85c
	if (ctx.cr6.eq) goto loc_8274F85C;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8274F85C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8274f5fc
	if (ctx.cr6.lt) goto loc_8274F5FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2992(r31)
	REX_STORE_U32(r31.u32 + 2992, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_8274F88C:
	// lwz r9,22244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22244);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,22184(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,22200(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22200);
	// li r10,4
	ctx.r10.s64 = 4;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8274F8A8:
	// subfic r9,r27,0
	ctx.xer.ca = r27.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r27.u64;
	// rlwinm r8,r27,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// addme r9,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8274f8d8
	if (ctx.cr6.gt) goto loc_8274F8D8;
	// lwz r9,22180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8274f8a8
	goto loc_8274F8A8;
loc_8274F8D8:
	// lwz r10,22172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8274f908
	if (!ctx.cr6.lt) goto loc_8274F908;
	// lwz r8,22180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22180);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,22172(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22172);
loc_8274F8F0:
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8274f8f0
	if (ctx.cr6.lt) goto loc_8274F8F0;
loc_8274F908:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82725b68
	ctx.lr = 0x8274F92C;
	sub_82725B68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8274F930:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8274f974
	if (!ctx.cr6.eq) goto loc_8274F974;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8274f930
	if (ctx.cr6.lt) goto loc_8274F930;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_8274F974:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8274f5d8
	if (!ctx.cr6.lt) goto loc_8274F5D8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8274f99c
	if (ctx.cr6.eq) goto loc_8274F99C;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8274F99C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bge cr6,0x8274f9b8
	if (!ctx.cr6.lt) goto loc_8274F9B8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8274F9B8:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274f9c8
	if (ctx.cr6.eq) goto loc_8274F9C8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8274F9C8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274fa54
	if (ctx.cr6.eq) goto loc_8274FA54;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8274F9DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274fa20
	if (ctx.cr6.eq) goto loc_8274FA20;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,-12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8274fa44
	goto loc_8274FA44;
loc_8274FA20:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_8274FA44:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,-12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8274f9dc
	if (!ctx.cr6.eq) goto loc_8274F9DC;
loc_8274FA54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2992(r31)
	REX_STORE_U32(r31.u32 + 2992, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827715F8) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// divw r10,r4,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r10.u32);
	// lwz r6,-32(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mullw r11,r5,r3
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r9,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,36(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// stw r3,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r5,-76(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,52(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,32(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,64(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// lwz r3,-36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82771754
	if (!ctx.cr6.lt) goto loc_82771754;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
loc_82771754:
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r10,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r10.u32);
	// b 0x8277176c
	goto loc_8277176C;
loc_82771760:
	// lwz r9,-68(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r8.u32);
loc_8277176C:
	// lwz r7,-68(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r6,36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x827718b8
	if (!ctx.cr6.lt) goto loc_827718B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// b 0x8277179c
	goto loc_8277179C;
loc_82771790:
	// lwz r3,-24(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
loc_8277179C:
	// lwz r10,-24(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r9,-56(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82771834
	if (!ctx.cr6.lt) goto loc_82771834;
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stw r7,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r7.u32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// lwz r3,-52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// subfic r11,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r11.u64 = static_cast<uint64_t>(128) - ctx.r3.u64;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r9,-80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,-40(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// lwz r3,-48(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// lwz r10,-52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,-64(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lwz r4,-64(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r3.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// b 0x82771790
	goto loc_82771790;
loc_82771834:
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r8,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// b 0x8277184c
	goto loc_8277184C;
loc_82771840:
	// lwz r7,-24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
loc_8277184C:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,-24(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x827718a4
	if (!ctx.cr6.lt) goto loc_827718A4;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,-64(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lwz r4,-64(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r3.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// b 0x82771840
	goto loc_82771840;
loc_827718A4:
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// b 0x82771760
	goto loc_82771760;
loc_827718B8:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,52(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r4,32(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,64(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r8,-20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r6,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// lwz r5,28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r5,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r5.u32);
	// b 0x82771920
	goto loc_82771920;
loc_82771914:
	// lwz r4,-68(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r3.u32);
loc_82771920:
	// lwz r11,-68(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82771a68
	if (!ctx.cr6.lt) goto loc_82771A68;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// b 0x82771950
	goto loc_82771950;
loc_82771944:
	// lwz r7,-24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
loc_82771950:
	// lwz r5,-24(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r4,-72(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x827719e8
	if (!ctx.cr6.lt) goto loc_827719E8;
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// stw r11,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// subfic r6,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// stw r6,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r4,-80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,-80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lwz r7,-48(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r11,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 7;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,-64(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// b 0x82771944
	goto loc_82771944;
loc_827719E8:
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r3,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r3.u32);
	// b 0x82771a00
	goto loc_82771A00;
loc_827719F4:
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
loc_82771A00:
	// lwz r9,-24(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r8,-20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82771a54
	if (!ctx.cr6.lt) goto loc_82771A54;
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// lwz r4,-48(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// b 0x827719f4
	goto loc_827719F4;
loc_82771A54:
	// lwz r4,-48(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// b 0x82771914
	goto loc_82771914;
loc_82771A68:
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// lwz r7,28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r6,-76(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r4,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r4,-20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r9,-20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// lwz r6,28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r6,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r6.u32);
	// b 0x82771ae0
	goto loc_82771AE0;
loc_82771AD4:
	// lwz r5,-68(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r4.u32);
loc_82771AE0:
	// lwz r3,-68(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82771c28
	if (!ctx.cr6.lt) goto loc_82771C28;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// b 0x82771b10
	goto loc_82771B10;
loc_82771B04:
	// lwz r8,-24(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r7.u32);
loc_82771B10:
	// lwz r6,-24(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r5,-72(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82771ba8
	if (!ctx.cr6.lt) goto loc_82771BA8;
	// lwz r4,-8(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// clrlwi r3,r4,25
	ctx.r3.u64 = ctx.r4.u32 & 0x7F;
	// stw r3,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r3.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// lwz r8,-52(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// subfic r7,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// stw r7,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,-40(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,-80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// lwz r7,-8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// b 0x82771b04
	goto loc_82771B04;
loc_82771BA8:
	// lwz r4,-72(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r4,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// b 0x82771bc0
	goto loc_82771BC0;
loc_82771BB4:
	// lwz r3,-24(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
loc_82771BC0:
	// lwz r10,-24(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r9,-20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82771c14
	if (!ctx.cr6.lt) goto loc_82771C14;
	// lwz r8,-8(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r4,-80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// lwz r11,-64(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r7,-36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// b 0x82771bb4
	goto loc_82771BB4;
loc_82771C14:
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r4,-76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// b 0x82771ad4
	goto loc_82771AD4;
loc_82771C28:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827AF298) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v31,0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_set1_epi8(char(0x0)));
	// li r8,16
	ctx.r8.s64 = 16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x827af350
	if (!ctx.cr6.eq) goto loc_827AF350;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r12,r4,2,0,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
loc_827AF2B4:
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx v1,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v10,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v18,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v19,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v19.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v23,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v24,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v24.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v3,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v11,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v20,v18,v19
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vor v25,v23,v24
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// vmrghb v4,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v5,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v12,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v13,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v21,v31,v20
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v22,v31,v20
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v26,v31,v25
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v27,v31,v25
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r5,144
	ctx.r11.s64 = ctx.r5.s64 + 144;
	// stvx v4,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v5,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,192
	ctx.r5.s64 = ctx.r5.s64 + 192;
	// stvx v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r7,r7,-4
	ctx.xer.ca = ctx.r7.u32 > 3;
	ctx.r7.s64 = ctx.r7.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x827af2b4
	if (!ctx.cr0.eq) goto loc_827AF2B4;
	// blr 
	return;
loc_827AF350:
	// li r9,2
	ctx.r9.s64 = 2;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 + ctx.r4.u64;
	// lvsl v28,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
loc_827AF368:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r12,r5,48
	ctx.r12.s64 = ctx.r5.s64 + 48;
	// lvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v1,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vperm v8,v2,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vperm v26,v21,v22,v28
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vperm v27,v22,v23,v28
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vmrghb v5,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v6,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v8,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v24,v31,v26
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v25,v31,v26
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v27,v31,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// addic. r7,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r7.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stvx v5,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v6,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// stvx v24,r0,r12
	ea = (ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v25,r12,r8
	ea = (ctx.r12.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r12,r9
	ea = (ctx.r12.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x827af368
	if (!ctx.cr0.eq) goto loc_827AF368;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B57B0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827B57B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// vslh v11,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v9,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af298
	ctx.lr = 0x827B581C;
	sub_827AF298(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v4,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// vslh v2,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x827b5918
	if (!ctx.cr6.eq) goto loc_827B5918;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b5a10
	if (!ctx.cr6.gt) goto loc_827B5A10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827B587C:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b587c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B587C;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
loc_827B5918:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b5a10
	if (!ctx.cr6.gt) goto loc_827B5A10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827B5930:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b5930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B5930;
loc_827B5A10:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827D1488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827D1490;
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15952
	r30.s64 = ctx.r3.s64 + 15952;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827997c8
	ctx.lr = 0x827D14A4;
	sub_827997C8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r28,r31,22640
	r28.s64 = r31.s64 + 22640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,30024(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30024);
	// bl 0x827d1cd0
	ctx.lr = 0x827D14B8;
	sub_827D1CD0(ctx, base);
	// lhz r10,16004(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 16004);
	// addi r29,r30,1408
	r29.s64 = r30.s64 + 1408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8279d210
	ctx.lr = 0x827D14DC;
	sub_8279D210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d15f0
	if (!ctx.cr6.eq) goto loc_827D15F0;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cab48
	ctx.lr = 0x827D1504;
	sub_827CAB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d15f0
	if (!ctx.cr6.eq) goto loc_827D15F0;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d6118
	ctx.lr = 0x827D152C;
	sub_827D6118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d15f0
	if (!ctx.cr6.eq) goto loc_827D15F0;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ad720
	ctx.lr = 0x827D1554;
	sub_827AD720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d15f0
	if (!ctx.cr6.eq) goto loc_827D15F0;
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d15cc
	if (ctx.cr6.eq) goto loc_827D15CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x827d2a88
	ctx.lr = 0x827D1574;
	sub_827D2A88(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3748(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x827d2ba8
	ctx.lr = 0x827D15A0;
	sub_827D2BA8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3748(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x827d2ba8
	ctx.lr = 0x827D15CC;
	sub_827D2BA8(ctx, base);
loc_827D15CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d2018
	ctx.lr = 0x827D15D8;
	sub_827D2018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, ctx.r10.u32);
	// stw r11,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, ctx.r11.u32);
loc_827D15F0:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827E9E00) {
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
	ctx.lr = 0x827E9E08;
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r25,1312(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// ori r8,r10,39772
	ctx.r8.u64 = ctx.r10.u64 | 39772;
	// addi r9,r1,223
	ctx.r9.s64 = ctx.r1.s64 + 223;
	// addi r7,r1,796
	ctx.r7.s64 = ctx.r1.s64 + 796;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r6,r9,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lwzx r10,r3,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r5,r7,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r6,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r10,22492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22492);
	// li r15,0
	r15.s64 = 0;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// mr r19,r25
	r19.u64 = r25.u64;
	// lwz r11,22504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22504);
	// addi r14,r11,4
	r14.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r21,r15
	r21.u64 = r15.u64;
	// stw r15,0(r31)
	REX_STORE_U32(r31.u32 + 0, r15.u32);
	// mr r20,r15
	r20.u64 = r15.u64;
	// stw r15,4(r31)
	REX_STORE_U32(r31.u32 + 4, r15.u32);
	// mr r18,r15
	r18.u64 = r15.u64;
	// sth r15,16(r31)
	REX_STORE_U16(r31.u32 + 16, r15.u16);
	// mr r17,r15
	r17.u64 = r15.u64;
	// lhz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 52);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r5,74(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 74);
	// rlwinm r7,r9,16,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3FF;
	// lhz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 76);
	// mr r23,r15
	r23.u64 = r15.u64;
	// lhz r8,50(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 50);
	// rlwinm r24,r8,31,1,31
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r16,r10,31,1,31
	r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827ea038
	if (ctx.cr6.eq) goto loc_827EA038;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lis r26,-32106
	r26.s64 = -2104098816;
loc_827E9EC4:
	// stw r18,8(r31)
	REX_STORE_U32(r31.u32 + 8, r18.u32);
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// stw r17,12(r31)
	REX_STORE_U32(r31.u32 + 12, r17.u32);
	// sth r15,18(r31)
	REX_STORE_U16(r31.u32 + 18, r15.u16);
	// bne cr6,0x827e9fe4
	if (!ctx.cr6.eq) goto loc_827E9FE4;
	// mr r22,r15
	r22.u64 = r15.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x827e9fe4
	if (ctx.cr6.eq) goto loc_827E9FE4;
loc_827E9EE4:
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x827e9f98
	if (!ctx.cr6.eq) goto loc_827E9F98;
	// ld r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 0);
	// mr r30,r15
	r30.u64 = r15.u64;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
loc_827E9EFC:
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r30,140
	ctx.r9.s64 = r30.s64 + 140;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
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
	// lwzx r10,r6,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r10,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// lwz r8,392(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 392);
	// rlwinm r11,r28,6,18,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x3FC0;
	// addi r10,r10,45
	ctx.r10.s64 = ctx.r10.s64 + 45;
	// lwz r9,29984(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 29984);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,29980(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 29980);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lhzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r29.u32);
	// bl 0x8277dbd0
	ctx.lr = 0x827E9F64;
	sub_8277DBD0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x827e9efc
	if (ctx.cr6.lt) goto loc_827E9EFC;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r11,16,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x827e9ee4
	if (ctx.cr6.eq) goto loc_827E9EE4;
	// b 0x827e9fe4
	goto loc_827E9FE4;
loc_827E9F98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lhz r8,18(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 18);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r22,r24
	ctx.cr6.compare<uint32_t>(r22.u32, r24.u32, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// sth r4,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r4.u16);
	// blt cr6,0x827e9ee4
	if (ctx.cr6.lt) goto loc_827E9EE4;
loc_827E9FE4:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 16);
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r21,r10,r21
	r21.u64 = ctx.r10.u64 + r21.u64;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// add r20,r24,r20
	r20.u64 = r24.u64 + r20.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r4,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r4.u16);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r25,r19
	r25.u64 = r19.u64;
	// add r18,r10,r18
	r18.u64 = ctx.r10.u64 + r18.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// blt cr6,0x827e9ec4
	if (ctx.cr6.lt) goto loc_827E9EC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827EA038:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x826a1cd0
	return;
}

