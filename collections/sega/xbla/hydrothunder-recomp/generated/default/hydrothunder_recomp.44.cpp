#include "hydrothunder_funcs.44.h"

DEFINE_REX_FUNC(sub_82122280) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82122288;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82120600
	ctx.lr = 0x821222A0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821222AC;
	sub_82120600(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122518
	ctx.lr = 0x821222BC;
	sub_82122518(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82122730
	ctx.lr = 0x821222C4;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821222D4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821222E4;
	sub_82120AC0(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122340
	if (ctx.cr0.eq) goto loc_82122340;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x821222FC;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x8212230C;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122518
	ctx.lr = 0x82122318;
	sub_82122518(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82122730
	ctx.lr = 0x82122320;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82122330;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82122340;
	sub_82120AC0(ctx, base);
loc_82122340:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212BD18) {
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
	ctx.lr = 0x8212BD20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r30,r5,-28
	r30.s64 = ctx.r5.s64 + -28;
	// divw r10,r10,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// subf r9,r4,r30
	ctx.r9.u64 = r30.u64 - ctx.r4.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// divw r11,r9,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ble cr6,0x8212bdb8
	if (!ctx.cr6.gt) goto loc_8212BDB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,28
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// mulli r27,r11,56
	r27.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// add r28,r29,r4
	r28.u64 = r29.u64 + ctx.r4.u64;
	// add r5,r27,r4
	ctx.r5.u64 = r27.u64 + ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8212c0f0
	ctx.lr = 0x8212BD88;
	sub_8212C0F0(ctx, base);
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x8212c0f0
	ctx.lr = 0x8212BD98;
	sub_8212C0F0(ctx, base);
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r27,r30
	ctx.r3.u64 = r30.u64 - r27.u64;
	// bl 0x8212c0f0
	ctx.lr = 0x8212BDAC;
	sub_8212C0F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8212bdbc
	goto loc_8212BDBC;
loc_8212BDB8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8212BDBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8212c0f0
	ctx.lr = 0x8212BDC4;
	sub_8212C0F0(ctx, base);
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// bge cr6,0x8212be38
	if (!ctx.cr6.lt) goto loc_8212BE38;
loc_8212BDD0:
	// addi r30,r31,-28
	r30.s64 = r31.s64 + -28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BDE0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be38
	if (ctx.cr0.lt) goto loc_8212BE38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BDF4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be38
	if (ctx.cr0.lt) goto loc_8212BE38;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// blt cr6,0x8212bdd0
	if (ctx.cr6.lt) goto loc_8212BDD0;
	// b 0x8212be38
	goto loc_8212BE38;
loc_8212BE0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BE18;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be40
	if (ctx.cr0.lt) goto loc_8212BE40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BE2C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be40
	if (ctx.cr0.lt) goto loc_8212BE40;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
loc_8212BE38:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x8212be0c
	if (ctx.cr6.lt) goto loc_8212BE0C;
loc_8212BE40:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8212be88
	goto loc_8212BE88;
loc_8212BE4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BE58;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be84
	if (ctx.cr0.lt) goto loc_8212BE84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BE6C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212be90
	if (ctx.cr0.lt) goto loc_8212BE90;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
loc_8212BE80:
	// bl 0x8212c058
	ctx.lr = 0x8212BE84;
	sub_8212C058(ctx, base);
loc_8212BE84:
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
loc_8212BE88:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8212be4c
	if (ctx.cr6.lt) goto loc_8212BE4C;
loc_8212BE90:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// ble cr6,0x8212bee8
	if (!ctx.cr6.gt) goto loc_8212BEE8;
	// addi r29,r27,-28
	r29.s64 = r27.s64 + -28;
loc_8212BE9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BEA8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212bed4
	if (ctx.cr0.lt) goto loc_8212BED4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8212BEBC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8212bee4
	if (ctx.cr0.lt) goto loc_8212BEE4;
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212BED4;
	sub_8212C058(ctx, base);
loc_8212BED4:
	// addi r27,r27,-28
	r27.s64 = r27.s64 + -28;
	// addi r29,r29,-28
	r29.s64 = r29.s64 + -28;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x8212be9c
	if (ctx.cr6.lt) goto loc_8212BE9C;
loc_8212BEE4:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
loc_8212BEE8:
	// bne cr6,0x8212bf20
	if (!ctx.cr6.eq) goto loc_8212BF20;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// beq cr6,0x8212bf64
	if (ctx.cr6.eq) goto loc_8212BF64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// beq cr6,0x8212bf08
	if (ctx.cr6.eq) goto loc_8212BF08;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212BF08;
	sub_8212C058(ctx, base);
loc_8212BF08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// b 0x8212bf50
	goto loc_8212BF50;
loc_8212BF20:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// addi r27,r27,-28
	r27.s64 = r27.s64 + -28;
	// bne cr6,0x8212bf58
	if (!ctx.cr6.eq) goto loc_8212BF58;
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// beq cr6,0x8212bf44
	if (ctx.cr6.eq) goto loc_8212BF44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212BF44;
	sub_8212C058(ctx, base);
loc_8212BF44:
	// addi r28,r28,-28
	r28.s64 = r28.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8212BF50:
	// bl 0x8212c058
	ctx.lr = 0x8212BF54;
	sub_8212C058(ctx, base);
	// b 0x8212be88
	goto loc_8212BE88;
loc_8212BF58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8212be80
	goto loc_8212BE80;
loc_8212BF64:
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r28,4(r24)
	REX_STORE_U32(r24.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8213E590) {
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
	ctx.lr = 0x8213E598;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82162210
	ctx.lr = 0x8213E5B8;
	sub_82162210(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e604
	if (ctx.cr6.eq) goto loc_8213E604;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e604
	if (ctx.cr6.eq) goto loc_8213E604;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8213E5EC:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8213e66c
	if (!ctx.cr6.gt) goto loc_8213E66C;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e5ec
	if (!ctx.cr6.eq) goto loc_8213E5EC;
loc_8213E604:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213e640
	if (ctx.cr6.eq) goto loc_8213E640;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
loc_8213E640:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8213e6cc
	if (!ctx.cr6.eq) goto loc_8213E6CC;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x8213e708
	goto loc_8213E708;
loc_8213E66C:
	// bge cr6,0x8213e678
	if (!ctx.cr6.lt) goto loc_8213E678;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8213e604
	goto loc_8213E604;
loc_8213E678:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213e6c0
	if (ctx.cr6.eq) goto loc_8213E6C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8213E6AC;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213E6B4;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_8213E6C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// b 0x8213e784
	goto loc_8213E784;
loc_8213E6CC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8213e6dc
	if (!ctx.cr6.eq) goto loc_8213E6DC;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x8213e708
	goto loc_8213E708;
loc_8213E6DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8213e708
	if (ctx.cr6.eq) goto loc_8213E708;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8213E708:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213e77c
	if (!ctx.cr6.lt) goto loc_8213E77C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213E748:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8213e768
	if (!ctx.cr6.lt) goto loc_8213E768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8213e748
	if (ctx.cr6.lt) goto loc_8213E748;
loc_8213E768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162298
	ctx.lr = 0x8213E770;
	sub_82162298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8213e798
	ctx.lr = 0x8213E77C;
	sub_8213E798(ctx, base);
loc_8213E77C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
loc_8213E784:
	// stb r11,4(r26)
	REX_STORE_U8(r26.u32 + 4, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214FB28) {
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
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FB54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8214fcac
	if (ctx.cr0.eq) goto loc_8214FCAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FB70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x82125d00
	ctx.lr = 0x8214FB7C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214fcac
	if (!ctx.cr0.eq) goto loc_8214FCAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FB98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-11932
	ctx.r4.s64 = ctx.r10.s64 + -11932;
	// lwz r11,6180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11920
	ctx.r4.s64 = ctx.r11.s64 + -11920;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FBEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11896
	ctx.r4.s64 = ctx.r11.s64 + -11896;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11872
	ctx.r4.s64 = ctx.r11.s64 + -11872;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11848
	ctx.r4.s64 = ctx.r11.s64 + -11848;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11824
	ctx.r4.s64 = ctx.r11.s64 + -11824;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-11808
	ctx.r4.s64 = ctx.r11.s64 + -11808;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FCAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FCAC:
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

DEFINE_REX_FUNC(sub_8215A5A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// beq cr6,0x8215a5c0
	if (ctx.cr6.eq) goto loc_8215A5C0;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215a5c0
	if (ctx.cr6.eq) goto loc_8215A5C0;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8215A5C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215B370) {
	REX_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8269e1e0
	sub_8269E1E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215BD08) {
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
	// bl 0x8215b308
	ctx.lr = 0x8215BD28;
	sub_8215B308(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bd38
	if (ctx.cr0.eq) goto loc_8215BD38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215BD38;
	sub_8269CE98(ctx, base);
loc_8215BD38:
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

DEFINE_REX_FUNC(sub_8215D028) {
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
	// addi r31,r3,-8
	r31.s64 = ctx.r3.s64 + -8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,18620
	ctx.r10.s64 = ctx.r10.s64 + 18620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,18556
	ctx.r9.s64 = ctx.r9.s64 + 18556;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x822f63d0
	ctx.lr = 0x8215D070;
	sub_822F63D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d080
	if (ctx.cr0.eq) goto loc_8215D080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215D080;
	sub_8269CE98(ctx, base);
loc_8215D080:
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

DEFINE_REX_FUNC(sub_8215FB50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215fb7c
	if (!ctx.cr6.eq) goto loc_8215FB7C;
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8215FB68:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_8215FB70:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8215FB7C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215fb8c
	if (!ctx.cr6.eq) goto loc_8215FB8C;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8215fb70
	goto loc_8215FB70;
loc_8215FB8C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215fb9c
	if (!ctx.cr6.eq) goto loc_8215FB9C;
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x8215fb68
	goto loc_8215FB68;
loc_8215FB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82163CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82163CB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163cf4
	if (ctx.cr6.eq) goto loc_82163CF4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163cf0
	if (ctx.cr6.eq) goto loc_82163CF0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82163CE4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82163ce4
	if (!ctx.cr6.eq) goto loc_82163CE4;
loc_82163CF0:
	// bl 0x8269ce98
	ctx.lr = 0x82163CF4;
	sub_8269CE98(ctx, base);
loc_82163CF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82163d54
	if (ctx.cr6.eq) goto loc_82163D54;
loc_82163D28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x82163D3C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82163D44;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82163d28
	if (!ctx.cr6.eq) goto loc_82163D28;
loc_82163D54:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x82163D5C;
	sub_8269CE98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8216A908) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x8216A920;
	sub_822F6280(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82793894
	ctx.lr = 0x8216A928;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_8216C410) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216c514
	if (ctx.cr0.eq) goto loc_8216C514;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8216c448
	if (!ctx.cr6.eq) goto loc_8216C448;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8216c458
	goto loc_8216C458;
loc_8216C448:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8216c460
	if (!ctx.cr6.eq) goto loc_8216C460;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8216C458:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8216c4a8
	goto loc_8216C4A8;
loc_8216C460:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216c484
	if (!ctx.cr6.eq) goto loc_8216C484;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8216cdc8
	ctx.lr = 0x8216C474;
	sub_8216CDC8(ctx, base);
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8216c4a4
	goto loc_8216C4A4;
loc_8216C484:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8216c4a8
	if (!ctx.cr6.eq) goto loc_8216C4A8;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8216cdc8
	ctx.lr = 0x8216C498;
	sub_8216CDC8(ctx, base);
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8216C4A4:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8216C4A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8216c4bc
	if (!ctx.cr6.gt) goto loc_8216C4BC;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8216c4cc
	goto loc_8216C4CC;
loc_8216C4BC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8216c4cc
	if (!ctx.cr6.lt) goto loc_8216C4CC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8216C4CC:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C4D8;
	sub_8216CDC8(ctx, base);
	// lwz r10,276(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r9,272(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8216c4f0
	if (!ctx.cr6.lt) goto loc_8216C4F0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8216C4F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addc r10,r10,r8
	ctx.xer.ca = ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32;
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// bl 0x8216c690
	ctx.lr = 0x8216C514;
	sub_8216C690(ctx, base);
loc_8216C514:
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

DEFINE_REX_FUNC(sub_82175CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82175CA8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// sth r29,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r29.u16);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stb r29,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x82175CE4;
	sub_82154800(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r29,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x82175D0C;
	sub_82154800(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a48f8
	ctx.lr = 0x82175D14;
	sub_821A48F8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5320
	ctx.r4.s64 = ctx.r11.s64 + 5320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82175D2C;
	sub_821A4270(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5824
	ctx.r4.s64 = ctx.r11.s64 + 5824;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82175D44;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82175d54
	if (!ctx.cr0.eq) goto loc_82175D54;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82175D54:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120830
	ctx.lr = 0x82175D60;
	sub_82120830(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27684
	ctx.r4.s64 = ctx.r11.s64 + 27684;
	// bl 0x82120600
	ctx.lr = 0x82175D70;
	sub_82120600(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826a06d8
	ctx.lr = 0x82175D80;
	sub_826A06D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821208c0
	ctx.lr = 0x82175D90;
	sub_821208C0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82175D94:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82175d94
	if (!ctx.cr6.eq) goto loc_82175D94;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82175DB8;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82175DC8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6512
	ctx.r4.s64 = ctx.r11.s64 + 6512;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82175DDC;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82175dec
	if (!ctx.cr0.eq) goto loc_82175DEC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82175DEC:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,27696
	ctx.r4.s64 = ctx.r10.s64 + 27696;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r4,r10,27716
	ctx.r4.s64 = ctx.r10.s64 + 27716;
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
	ctx.lr = 0x82175E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x82175E58;
	sub_82120CC8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269ce98
	ctx.lr = 0x82175E60;
	sub_8269CE98(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,7512
	ctx.r4.s64 = ctx.r11.s64 + 7512;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82175E74;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82175e84
	if (!ctx.cr0.eq) goto loc_82175E84;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82175E84:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27736
	ctx.r4.s64 = ctx.r10.s64 + 27736;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r4,r10,27756
	ctx.r4.s64 = ctx.r10.s64 + 27756;
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
	ctx.lr = 0x82175ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r4,r10,27776
	ctx.r4.s64 = ctx.r10.s64 + 27776;
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
	ctx.lr = 0x82175F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82154908
	ctx.lr = 0x82175F10;
	sub_82154908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82188560) {
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
	// addi r11,r11,-32756
	ctx.r11.s64 = ctx.r11.s64 + -32756;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821d3be0
	ctx.lr = 0x8218858C;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218859c
	if (ctx.cr0.eq) goto loc_8218859C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8218859C;
	sub_8269CE98(ctx, base);
loc_8218859C:
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

DEFINE_REX_FUNC(sub_8218B430) {
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
	ctx.lr = 0x8218B438;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// add r23,r10,r3
	r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218b564
	if (!ctx.cr6.gt) goto loc_8218B564;
	// li r22,0
	r22.s64 = 0;
loc_8218B484:
	// lwz r11,100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 100);
	// lwz r10,104(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 104);
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218b540
	if (!ctx.cr6.eq) goto loc_8218B540;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmadds f2,f10,f12,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x8218aa80
	ctx.lr = 0x8218B4C8;
	sub_8218AA80(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// rlwinm r25,r3,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B4E8;
	sub_8218CA70(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r31
	r26.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B51C;
	sub_8218CA70(ctx, base);
	// lfd f13,0(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r26.u32 + 0);
	// lfd f0,136(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 136);
	// fsubs f12,f29,f1
	ctx.f12.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8218B540:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218b484
	if (ctx.cr6.lt) goto loc_8218B484;
loc_8218B564:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_82193DA8) {
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
	ctx.lr = 0x82193DB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r28,2
	r28.s64 = 2;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82193DFC;
	sub_82154800(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r29,1
	r29.s64 = 1;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// li r30,5
	r30.s64 = 5;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82193E28;
	sub_82154800(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stb r29,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x82193E4C;
	sub_82154800(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a48f8
	ctx.lr = 0x82193E54;
	sub_821A48F8(ctx, base);
	// stw r3,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82154908
	ctx.lr = 0x82193E60;
	sub_82154908(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821975C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821975dc
	if (!ctx.cr6.eq) goto loc_821975DC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// blr 
	return;
loc_821975DC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821979B0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821979E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821979FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82197a18
	if (ctx.cr6.eq) goto loc_82197A18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82197A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82197A18:
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

DEFINE_REX_FUNC(sub_8219D224) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D2A0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,1(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r9,2(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DA88) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// b 0x821675c8
	sub_821675C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219E000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8219E008;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,-15392(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15392);
	// bl 0x82120600
	ctx.lr = 0x8219E028;
	sub_82120600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d58c8
	ctx.lr = 0x8219E03C;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8219E04C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A09D0) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x822f6280
	ctx.lr = 0x821A09E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a09f4
	if (ctx.cr0.eq) goto loc_821A09F4;
	// bl 0x821a0a20
	ctx.lr = 0x821A09F0;
	sub_821A0A20(ctx, base);
	// b 0x821a09f8
	goto loc_821A09F8;
loc_821A09F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A09F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2810) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a2844
	if (!ctx.cr6.eq) goto loc_821A2844;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A2838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x821a2848
	if (ctx.cr0.eq) goto loc_821A2848;
loc_821A2844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A2848:
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

DEFINE_REX_FUNC(sub_821A3F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A3F80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x82125c20
	ctx.lr = 0x821A3FB8;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A3FC4;
	sub_82125C98(ctx, base);
	// lbz r11,-28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -28);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,-27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -27);
	// stb r11,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lbz r11,-26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -26);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// lbz r11,-25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -25);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x821626c0
	ctx.lr = 0x821A3FF4;
	sub_821626C0(ctx, base);
	// lwz r3,-24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A4008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A4024;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A4030;
	sub_82125C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A403C;
	sub_826A1E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A86B8) {
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
	ctx.lr = 0x821A86C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a8754
	if (!ctx.cr6.gt) goto loc_821A8754;
	// addi r30,r3,140
	r30.s64 = ctx.r3.s64 + 140;
loc_821A86E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A86F0;
	sub_822434C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821a8714
	if (!ctx.cr6.eq) goto loc_821A8714;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A8708;
	sub_822434C8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a87e8
	if (ctx.cr6.eq) goto loc_821A87E8;
loc_821A8714:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A8720;
	sub_822434C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821a8744
	if (!ctx.cr6.eq) goto loc_821A8744;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A8738;
	sub_822434C8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a87e8
	if (ctx.cr6.eq) goto loc_821A87E8;
loc_821A8744:
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a86e4
	if (ctx.cr6.lt) goto loc_821A86E4;
loc_821A8754:
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r31,r27,140
	r31.s64 = r27.s64 + 140;
	// lwz r28,144(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 144);
	// lwz r11,148(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 148);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a87c0
	if (!ctx.cr6.gt) goto loc_821A87C0;
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
	// bgt cr6,0x821a878c
	if (ctx.cr6.gt) goto loc_821A878C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821A878C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a87c0
	if (!ctx.cr6.gt) goto loc_821A87C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x821A87A0;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A87B0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821A87B8;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821A87C0:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A87D0;
	sub_822434C8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_821A87E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_821A87E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821a87e0
	goto loc_821A87E0;
}

DEFINE_REX_FUNC(sub_821B13C8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1558) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r3,132
	ctx.r4.s64 = ctx.r3.s64 + 132;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// li r5,84
	ctx.r5.s64 = 84;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B2030) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b20bc
	if (ctx.cr6.eq) goto loc_821B20BC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B2060:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821b2060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B2060;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// ld r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f10,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82190030
	ctx.lr = 0x821B20BC;
	sub_82190030(ctx, base);
loc_821B20BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// ld r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// ld r5,24(r7)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r10,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r8,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
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

DEFINE_REX_FUNC(sub_821BC140) {
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
	ctx.lr = 0x821BC154;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc164
	if (ctx.cr0.eq) goto loc_821BC164;
	// bl 0x821bc178
	ctx.lr = 0x821BC160;
	sub_821BC178(ctx, base);
	// b 0x821bc168
	goto loc_821BC168;
loc_821BC164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BDBB0) {
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
	ctx.lr = 0x821BDBC4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bdbd4
	if (ctx.cr0.eq) goto loc_821BDBD4;
	// bl 0x821bdbe8
	ctx.lr = 0x821BDBD0;
	sub_821BDBE8(ctx, base);
	// b 0x821bdbd8
	goto loc_821BDBD8;
loc_821BDBD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BDBD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BEE28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BEE30;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x821BEE48;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// addi r11,r11,-18512
	ctx.r11.s64 = ctx.r11.s64 + -18512;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821BEE68;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BEE70;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821beea0
	if (ctx.cr0.eq) goto loc_821BEEA0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x82120600
	ctx.lr = 0x821BEE88;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x821BEE9C;
	sub_821BF110(ctx, base);
	// b 0x821beea4
	goto loc_821BEEA4;
loc_821BEEA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEEA4:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821BEEB4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821beecc
	if (ctx.cr0.eq) goto loc_821BEECC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BEECC;
	sub_82120AC0(ctx, base);
loc_821BEECC:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BEED4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821beef4
	if (ctx.cr0.eq) goto loc_821BEEF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BEEEC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821beef8
	goto loc_821BEEF8;
loc_821BEEF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821BEEF8:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BEF04;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BEF0C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bef84
	if (ctx.cr0.eq) goto loc_821BEF84;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BEF34;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BEF48;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bef74
	if (ctx.cr0.eq) goto loc_821BEF74;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-4072
	ctx.r10.s64 = ctx.r10.s64 + -4072;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bef78
	goto loc_821BEF78;
loc_821BEF74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BEF78:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bef88
	goto loc_821BEF88;
loc_821BEF84:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BEF88:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BEFA0;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BEFA8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821befec
	if (ctx.cr0.eq) goto loc_821BEFEC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x821BEFC0;
	sub_8216B9A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19344
	ctx.r4.s64 = ctx.r11.s64 + -19344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BEFD8;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x821beff0
	goto loc_821BEFF0;
loc_821BEFEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BEFF0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BF008;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821CAF00) {
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
	// lbz r11,156(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821caf60
	if (!ctx.cr0.eq) goto loc_821CAF60;
	// lwz r10,140(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 140);
	// addi r11,r4,120
	ctx.r11.s64 = ctx.r4.s64 + 120;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821caf3c
	if (ctx.cr6.lt) goto loc_821CAF3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821CAF3C:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f2,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f1,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,6100(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6100);
	// bl 0x821684d0
	ctx.lr = 0x821CAF54;
	sub_821684D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821CAF60:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821D02F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-13576
	ctx.r11.s64 = ctx.r11.s64 + -13576;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821d0344
	if (ctx.cr6.eq) goto loc_821D0344;
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
	ctx.lr = 0x821D0344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D0344:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821D034C;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d035c
	if (ctx.cr0.eq) goto loc_821D035C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D035C;
	sub_8269CE98(ctx, base);
loc_821D035C:
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

DEFINE_REX_FUNC(sub_821D5590) {
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
	// bl 0x821977f8
	ctx.lr = 0x821D55B0;
	sub_821977F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d5710
	ctx.lr = 0x821D55C0;
	sub_821D5710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821D55CC;
	sub_8215EFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821D55D4;
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

DEFINE_REX_FUNC(sub_821D71B8) {
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
	ctx.lr = 0x821D71C0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32242
	r30.s64 = -2113011712;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r24,r30,10648
	r24.s64 = r30.s64 + 10648;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r15,r29
	r15.u64 = r29.u64;
	// li r27,2
	r27.s64 = 2;
	// li r26,1
	r26.s64 = 1;
	// li r28,5
	r28.s64 = 5;
	// li r25,8
	r25.s64 = 8;
	// addi r23,r3,10640
	r23.s64 = ctx.r3.s64 + 10640;
	// addi r22,r4,10632
	r22.s64 = ctx.r4.s64 + 10632;
	// addi r21,r5,10624
	r21.s64 = ctx.r5.s64 + 10624;
	// addi r20,r6,10612
	r20.s64 = ctx.r6.s64 + 10612;
	// addi r19,r7,10600
	r19.s64 = ctx.r7.s64 + 10600;
	// addi r18,r8,10588
	r18.s64 = ctx.r8.s64 + 10588;
	// addi r17,r9,10580
	r17.s64 = ctx.r9.s64 + 10580;
	// addi r16,r10,10572
	r16.s64 = ctx.r10.s64 + 10572;
	// addi r30,r11,10560
	r30.s64 = ctx.r11.s64 + 10560;
loc_821D7240:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821d7264
	if (!ctx.cr6.eq) goto loc_821D7264;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821d7268
	goto loc_821D7268;
loc_821D7264:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821D7268:
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821d7504
	if (!ctx.cr6.lt) goto loc_821D7504;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821D727C;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821D7280;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x821D728C;
	sub_82120D70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7298;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d72c4
	if (!ctx.cr0.eq) goto loc_821D72C4;
	// sth r29,208(r1)
	REX_STORE_U16(ctx.r1.u32 + 208, r29.u16);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r27,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,210(r1)
	REX_STORE_U16(ctx.r1.u32 + 210, r31.u16);
	// stw r29,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// stb r29,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D72C0;
	sub_82154800(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_821D72C4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D72D0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d7300
	if (!ctx.cr0.eq) goto loc_821D7300;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r29,288(r1)
	REX_STORE_U16(ctx.r1.u32 + 288, r29.u16);
	// stw r27,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r27.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// sth r31,290(r1)
	REX_STORE_U16(ctx.r1.u32 + 290, r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stb r29,300(r1)
	REX_STORE_U8(ctx.r1.u32 + 300, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D72FC;
	sub_82154800(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_821D7300:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D730C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d733c
	if (!ctx.cr0.eq) goto loc_821D733C;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r29,272(r1)
	REX_STORE_U16(ctx.r1.u32 + 272, r29.u16);
	// stw r27,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, r27.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// sth r31,274(r1)
	REX_STORE_U16(ctx.r1.u32 + 274, r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stb r29,284(r1)
	REX_STORE_U8(ctx.r1.u32 + 284, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D7338;
	sub_82154800(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_821D733C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7348;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d7374
	if (!ctx.cr0.eq) goto loc_821D7374;
	// sth r29,176(r1)
	REX_STORE_U16(ctx.r1.u32 + 176, r29.u16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r26,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,178(r1)
	REX_STORE_U16(ctx.r1.u32 + 178, r31.u16);
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stb r29,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D7370;
	sub_82154800(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_821D7374:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7380;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d73ac
	if (!ctx.cr0.eq) goto loc_821D73AC;
	// sth r29,240(r1)
	REX_STORE_U16(ctx.r1.u32 + 240, r29.u16);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r26,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,242(r1)
	REX_STORE_U16(ctx.r1.u32 + 242, r31.u16);
	// stw r28,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r28.u32);
	// stb r26,252(r1)
	REX_STORE_U8(ctx.r1.u32 + 252, r26.u8);
	// bl 0x82154800
	ctx.lr = 0x821D73A8;
	sub_82154800(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_821D73AC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D73B8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d73e4
	if (!ctx.cr0.eq) goto loc_821D73E4;
	// sth r29,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, r29.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, r31.u16);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stb r27,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, r27.u8);
	// bl 0x82154800
	ctx.lr = 0x821D73E0;
	sub_82154800(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_821D73E4:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D73F0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d741c
	if (!ctx.cr0.eq) goto loc_821D741C;
	// sth r29,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, r29.u16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,146(r1)
	REX_STORE_U16(ctx.r1.u32 + 146, r31.u16);
	// stw r25,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r25.u32);
	// stb r29,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D7418;
	sub_82154800(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821D741C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7428;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d7454
	if (!ctx.cr0.eq) goto loc_821D7454;
	// sth r29,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, r29.u16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r28,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,162(r1)
	REX_STORE_U16(ctx.r1.u32 + 162, r31.u16);
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r25.u32);
	// stb r26,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, r26.u8);
	// bl 0x82154800
	ctx.lr = 0x821D7450;
	sub_82154800(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821D7454:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7460;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d748c
	if (!ctx.cr0.eq) goto loc_821D748C;
	// sth r29,192(r1)
	REX_STORE_U16(ctx.r1.u32 + 192, r29.u16);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r28,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,194(r1)
	REX_STORE_U16(ctx.r1.u32 + 194, r31.u16);
	// stw r25,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r25.u32);
	// stb r27,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, r27.u8);
	// bl 0x82154800
	ctx.lr = 0x821D7488;
	sub_82154800(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821D748C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125d00
	ctx.lr = 0x821D7498;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d74ec
	if (!ctx.cr0.eq) goto loc_821D74EC;
	// sth r29,224(r1)
	REX_STORE_U16(ctx.r1.u32 + 224, r29.u16);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r27,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,226(r1)
	REX_STORE_U16(ctx.r1.u32 + 226, r31.u16);
	// stw r26,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r26.u32);
	// stb r29,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D74C0;
	sub_82154800(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// sth r29,256(r1)
	REX_STORE_U16(ctx.r1.u32 + 256, r29.u16);
	// stw r27,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, r27.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,258(r1)
	REX_STORE_U16(ctx.r1.u32 + 258, r31.u16);
	// stb r29,268(r1)
	REX_STORE_U8(ctx.r1.u32 + 268, r29.u8);
	// bl 0x82154800
	ctx.lr = 0x821D74E8;
	sub_82154800(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821D74EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821D74FC;
	sub_82120AC0(ctx, base);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// b 0x821d7240
	goto loc_821D7240;
loc_821D7504:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a48f8
	ctx.lr = 0x821D750C;
	sub_821A48F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821d7528
	if (!ctx.cr0.eq) goto loc_821D7528;
loc_821D7514:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82154908
	ctx.lr = 0x821D751C;
	sub_82154908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cd0
	return;
loc_821D7528:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821d7514
	goto loc_821D7514;
}

DEFINE_REX_FUNC(sub_821ECC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821ECC78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125bc8
	ctx.lr = 0x821ECC8C;
	sub_82125BC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17324
	ctx.r4.s64 = ctx.r11.s64 + -17324;
	// bl 0x8215f338
	ctx.lr = 0x821ECC9C;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82167240
	ctx.lr = 0x821ECCA4;
	sub_82167240(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821eccc0
	if (!ctx.cr0.eq) goto loc_821ECCC0;
loc_821ECCAC:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x821ECCB4;
	sub_8269D1B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ECCB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_821ECCC0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10860
	ctx.r4.s64 = ctx.r11.s64 + 10860;
	// bl 0x8215f338
	ctx.lr = 0x821ECCD0;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x821ECCD8;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eccac
	if (ctx.cr0.eq) goto loc_821ECCAC;
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,2
	r29.s64 = 2;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821ecd24
	if (!ctx.cr6.gt) goto loc_821ECD24;
loc_821ECCFC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x821ecd20
	if (!ctx.cr6.lt) goto loc_821ECD20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// blt cr6,0x821eccfc
	if (ctx.cr6.lt) goto loc_821ECCFC;
	// b 0x821ecd24
	goto loc_821ECD24;
loc_821ECD20:
	// li r29,4
	r29.s64 = 4;
loc_821ECD24:
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mullw r3,r29,r31
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x821e09b8
	ctx.lr = 0x821ECD3C;
	sub_821E09B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821ecd58
	if (!ctx.cr0.eq) goto loc_821ECD58;
	// li r30,0
	r30.s64 = 0;
loc_821ECD48:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821ECD50;
	sub_8269D1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x821eccb8
	goto loc_821ECCB8;
loc_821ECD58:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ECD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x821ecd88
	if (!ctx.cr6.eq) goto loc_821ECD88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x826a1e70
	ctx.lr = 0x821ECD84;
	sub_826A1E70(ctx, base);
	// b 0x821ecda8
	goto loc_821ECDA8;
loc_821ECD88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821ecda8
	if (!ctx.cr6.gt) goto loc_821ECDA8;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
loc_821ECD9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821ecd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ECD9C;
loc_821ECDA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ECDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// b 0x821ecd48
	goto loc_821ECD48;
}

DEFINE_REX_FUNC(sub_821F92F0) {
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
	// addi r11,r11,25024
	ctx.r11.s64 = ctx.r11.s64 + 25024;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821f931c
	if (ctx.cr0.eq) goto loc_821F931C;
	// bl 0x8269ce98
	ctx.lr = 0x821F931C;
	sub_8269CE98(ctx, base);
loc_821F931C:
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

DEFINE_REX_FUNC(sub_821FACF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821FAD00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FAD1C;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FAD24;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fad40
	if (!ctx.cr6.eq) goto loc_821FAD40;
loc_821FAD30:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_821FAD38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_821FAD40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FAD48;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fad30
	if (ctx.cr6.eq) goto loc_821FAD30;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// addi r11,r11,1640
	ctx.r11.s64 = ctx.r11.s64 + 1640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82120d70
	ctx.lr = 0x821FAD70;
	sub_82120D70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FAD7C;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fad9c
	if (!ctx.cr6.eq) goto loc_821FAD9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821FAD98;
	sub_82120AC0(ctx, base);
	// b 0x821fad30
	goto loc_821FAD30;
loc_821FAD9C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FADA4;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fadd0
	if (!ctx.cr6.eq) goto loc_821FADD0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,1008
	r31.s64 = ctx.r11.s64 + 1008;
loc_821FADB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821FADC8;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821fad38
	goto loc_821FAD38;
loc_821FADD0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821fadb8
	goto loc_821FADB8;
}

DEFINE_REX_FUNC(sub_82200628) {
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
	ctx.lr = 0x8220064C;
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
	ctx.lr = 0x82200664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6288(r10)
	REX_STORE_U32(ctx.r10.u32 + 6288, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82203030) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82203058;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82203084
	if (ctx.cr0.eq) goto loc_82203084;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,14064
	ctx.r10.s64 = ctx.r10.s64 + 14064;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82203088
	goto loc_82203088;
loc_82203084:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82203088:
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
	ctx.lr = 0x822030A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// lwz r3,6124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822030C8;
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

DEFINE_REX_FUNC(sub_82205ED0) {
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
	ctx.lr = 0x82205EF4;
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
	ctx.lr = 0x82205F0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6312(r10)
	REX_STORE_U32(ctx.r10.u32 + 6312, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82208000) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x82208480
	sub_82208480(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208958) {
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
	ctx.lr = 0x82208960;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,4352
	r30.s64 = ctx.r11.s64 + 4352;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822089bc
	if (!ctx.cr0.eq) goto loc_822089BC;
loc_82208988:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82208994;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822089a4
	if (!ctx.cr0.lt) goto loc_822089A4;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x822089ac
	goto loc_822089AC;
loc_822089A4:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822089AC:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82208988
	if (ctx.cr0.eq) goto loc_82208988;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_822089BC:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822089dc
	if (ctx.cr6.eq) goto loc_822089DC;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x822089D4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82208a64
	if (!ctx.cr0.lt) goto loc_82208A64;
loc_822089DC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120670
	ctx.lr = 0x822089E8;
	sub_82120670(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x822089F8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82208a70
	if (ctx.cr0.eq) goto loc_82208A70;
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
	// stb r29,44(r31)
	REX_STORE_U8(r31.u32 + 44, r29.u8);
	// stb r29,45(r31)
	REX_STORE_U8(r31.u32 + 45, r29.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq 0x82208a3c
	if (ctx.cr0.eq) goto loc_82208A3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120670
	ctx.lr = 0x82208A34;
	sub_82120670(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
loc_82208A3C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82180eb0
	ctx.lr = 0x82208A50;
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
	ctx.lr = 0x82208A64;
	sub_82120AC0(ctx, base);
loc_82208A64:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_82208A70:
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
	ctx.lr = 0x82208A88;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_822126A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822126B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822f6280
	ctx.lr = 0x822126CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822126f0
	if (ctx.cr0.eq) goto loc_822126F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822126f4
	goto loc_822126F4;
loc_822126F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822126F4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x82212700;
	sub_8216BE80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82213EC8) {
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
	// li r3,1128
	ctx.r3.s64 = 1128;
	// bl 0x822f6280
	ctx.lr = 0x82213EDC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82213eec
	if (ctx.cr0.eq) goto loc_82213EEC;
	// bl 0x82213f00
	ctx.lr = 0x82213EE8;
	sub_82213F00(ctx, base);
	// b 0x82213ef0
	goto loc_82213EF0;
loc_82213EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213EF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822186D0) {
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
	ctx.lr = 0x822186D8;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822186F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r22,r11,20320
	r22.s64 = ctx.r11.s64 + 20320;
	// addi r28,r10,1624
	r28.s64 = ctx.r10.s64 + 1624;
	// li r18,0
	r18.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r19,r18
	r19.u64 = r18.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218720;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,16420
	r27.s64 = ctx.r11.s64 + 16420;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218730;
	sub_8215F670(ctx, base);
	// lis r21,-32106
	r21.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r17,r11,16592
	r17.s64 = ctx.r11.s64 + 16592;
	// addi r16,r10,16584
	r16.s64 = ctx.r10.s64 + 16584;
	// ble 0x8221892c
	if (!ctx.cr0.gt) goto loc_8221892C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r25,3
	r25.s64 = 3;
	// addi r24,r11,-26736
	r24.s64 = ctx.r11.s64 + -26736;
	// addi r23,r10,16408
	r23.s64 = ctx.r10.s64 + 16408;
	// addi r26,r9,-17264
	r26.s64 = ctx.r9.s64 + -17264;
	// addi r20,r8,-26828
	r20.s64 = ctx.r8.s64 + -26828;
loc_8221878C:
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822187A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822187B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822188d0
	if (ctx.cr0.eq) goto loc_822188D0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x822187CC;
	sub_8215F338(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f338
	ctx.lr = 0x822187D4;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822187DC;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822187f0
	if (!ctx.cr6.eq) goto loc_822187F0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x822187f4
	goto loc_822187F4;
loc_822187F0:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_822187F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822188d0
	if (ctx.cr0.eq) goto loc_822188D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8221880C;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82218830;
	sub_8215F200(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218838;
	sub_8215F670(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8221884c
	if (!ctx.cr6.lt) goto loc_8221884C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8221884C:
	// bl 0x8215fbf8
	ctx.lr = 0x82218850;
	sub_8215FBF8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221885C;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218864;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221886C;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218874;
	sub_8215F338(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82218884;
	sub_8215F200(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221888C;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82218894;
	sub_8215EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822188A0;
	sub_8215F200(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x822188A8;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822188B0;
	sub_8215F0F0(ctx, base);
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// stb r18,8(r29)
	REX_STORE_U8(r29.u32 + 8, r18.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// bl 0x82120ac0
	ctx.lr = 0x822188CC;
	sub_82120AC0(ctx, base);
	// b 0x8221890c
	goto loc_8221890C;
loc_822188D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822188DC;
	sub_8215F200(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x822188E0;
	sub_8215F0F0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x822188EC;
	sub_8215F670(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x822188F4;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x822188FC;
	sub_8215F200(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82218904;
	sub_8215F0F0(ctx, base);
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// stb r18,8(r29)
	REX_STORE_U8(r29.u32 + 8, r18.u8);
loc_8221890C:
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8221878c
	if (ctx.cr6.lt) goto loc_8221878C;
loc_8221892C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218938;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// bl 0x8215f670
	ctx.lr = 0x82218944;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r29,r19,8
	ctx.xer.ca = r19.u32 <= 8;
	r29.u64 = static_cast<uint64_t>(8) - r19.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82218970
	if (!ctx.cr6.eq) goto loc_82218970;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	// b 0x82218994
	goto loc_82218994;
loc_82218970:
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x82218994
	goto loc_82218994;
loc_82218978:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82218980;
	sub_8215F200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82218b10
	ctx.lr = 0x82218990;
	sub_82218B10(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82218994:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x82218978
	if (ctx.cr6.lt) goto loc_82218978;
	// bl 0x8215fc78
	ctx.lr = 0x822189A4;
	sub_8215FC78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x822189B0;
	sub_8215DC10(ctx, base);
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822189CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	r29.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82218a6c
	if (!ctx.cr0.gt) goto loc_82218A6C;
loc_822189D8:
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822189F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218a4c
	if (ctx.cr0.eq) goto loc_82218A4C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218A14;
	sub_8215F338(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218A1C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82218A24;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82218a38
	if (!ctx.cr6.eq) goto loc_82218A38;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82218a3c
	goto loc_82218A3C;
loc_82218A38:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82218A3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218a4c
	if (ctx.cr0.eq) goto loc_82218A4C;
	// slw r11,r29,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r29.u32 << (r31.u8 & 0x3F));
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_82218A4C:
	// lwz r3,6192(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822189d8
	if (ctx.cr6.lt) goto loc_822189D8;
loc_82218A6C:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r18,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, r18.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8216b6a8
	ctx.lr = 0x82218A88;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// bl 0x8216bc98
	ctx.lr = 0x82218A98;
	sub_8216BC98(ctx, base);
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bge cr6,0x82218b04
	if (!ctx.cr6.lt) goto loc_82218B04;
	// stw r18,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r18.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x82218ABC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r11,-26720
	ctx.r5.s64 = ctx.r11.s64 + -26720;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x82218AD4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r11,-26700
	ctx.r5.s64 = ctx.r11.s64 + -26700;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x82218AEC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x82218AFC;
	sub_8216BC98(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,924(r15)
	REX_STORE_U32(r15.u32 + 924, ctx.r11.u32);
loc_82218B04:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82236148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82236150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e33d8
	ctx.lr = 0x82236164;
	sub_821E33D8(ctx, base);
	// addi r29,r31,448
	r29.s64 = r31.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4980
	ctx.lr = 0x82236170;
	sub_821E4980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e30b8
	ctx.lr = 0x82236178;
	sub_821E30B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4548
	ctx.lr = 0x82236180;
	sub_821E4548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236e50
	ctx.lr = 0x82236188;
	sub_82236E50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82237DA0) {
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
	ctx.lr = 0x82237DB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82237dc4
	if (ctx.cr0.eq) goto loc_82237DC4;
	// bl 0x82237dd8
	ctx.lr = 0x82237DC0;
	sub_82237DD8(ctx, base);
	// b 0x82237dc8
	goto loc_82237DC8;
loc_82237DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82237DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238F88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,3776
	ctx.r4.s64 = ctx.r3.s64 + 3776;
	// bne cr6,0x82238f98
	if (!ctx.cr6.eq) goto loc_82238F98;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82238F98:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// b 0x82146418
	sub_82146418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223B0D0) {
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
	// bl 0x82277b30
	ctx.lr = 0x8223B0F0;
	sub_82277B30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b100
	if (ctx.cr0.eq) goto loc_8223B100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8223B100;
	sub_8269CE98(ctx, base);
loc_8223B100:
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

DEFINE_REX_FUNC(sub_8223DC20) {
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
	ctx.lr = 0x8223DC28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8223dd20
	if (!ctx.cr6.lt) goto loc_8223DD20;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x8269d1d0
	ctx.lr = 0x8223DC48;
	sub_8269D1D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223dcc4
	if (!ctx.cr6.gt) goto loc_8223DCC4;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r3,308
	r31.s64 = ctx.r3.s64 + 308;
	// subfic r28,r3,-308
	ctx.xer.ca = ctx.r3.u32 <= 4294966988;
	r28.u64 = static_cast<uint64_t>(-308) - ctx.r3.u64;
	// addi r27,r11,-16904
	r27.s64 = ctx.r11.s64 + -16904;
loc_8223DC6C:
	// addic. r11,r31,-308
	ctx.xer.ca = r31.u32 > 307;
	ctx.r11.s64 = r31.s64 + -308;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223dcb8
	if (ctx.cr0.eq) goto loc_8223DCB8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r3,r31,-308
	ctx.r3.s64 = r31.s64 + -308;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223a810
	ctx.lr = 0x8223DC8C;
	sub_8223A810(ctx, base);
	// stw r27,-308(r31)
	REX_STORE_U32(r31.u32 + -308, r27.u32);
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// lfs f0,308(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,316(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 316);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8223DCB8:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r31,r31,336
	r31.s64 = r31.s64 + 336;
	// bne 0x8223dc6c
	if (!ctx.cr0.eq) goto loc_8223DC6C;
loc_8223DCC4:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8223dcfc
	if (!ctx.cr6.gt) goto loc_8223DCFC;
	// li r30,0
	r30.s64 = 0;
loc_8223DCD4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DCF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	r30.s64 = r30.s64 + 336;
	// bne 0x8223dcd4
	if (!ctx.cr0.eq) goto loc_8223DCD4;
loc_8223DCFC:
	// lbz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223dd10
	if (ctx.cr0.eq) goto loc_8223DD10;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8223DD10;
	sub_8269D1B8(ctx, base);
loc_8223DD10:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,8(r29)
	REX_STORE_U32(r29.u32 + 8, r25.u32);
	// stb r11,12(r29)
	REX_STORE_U8(r29.u32 + 12, ctx.r11.u8);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8223DD20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82244F20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13412
	ctx.r3.s64 = ctx.r11.s64 + -13412;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822455B0) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822f6280
	ctx.lr = 0x822455C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822455d4
	if (ctx.cr0.eq) goto loc_822455D4;
	// bl 0x822455e8
	ctx.lr = 0x822455D0;
	sub_822455E8(ctx, base);
	// b 0x822455d8
	goto loc_822455D8;
loc_822455D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822455D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246910) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13348
	ctx.r3.s64 = ctx.r11.s64 + -13348;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246FC8) {
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
	ctx.lr = 0x82246FDC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246fec
	if (ctx.cr0.eq) goto loc_82246FEC;
	// bl 0x82247000
	ctx.lr = 0x82246FE8;
	sub_82247000(ctx, base);
	// b 0x82246ff0
	goto loc_82246FF0;
loc_82246FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249390) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,1048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822493e0
	if (!ctx.cr6.gt) goto loc_822493E0;
	// lfs f13,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// b 0x822493e4
	goto loc_822493E4;
loc_822493E0:
	// stfs f31,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
loc_822493E4:
	// lfs f13,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x82249410
	if (ctx.cr6.gt) goto loc_82249410;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224945c
	if (!ctx.cr6.eq) goto loc_8224945C;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8224945c
	if (!ctx.cr6.gt) goto loc_8224945C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,166(r31)
	REX_STORE_U8(r31.u32 + 166, ctx.r11.u8);
	// b 0x8224945c
	goto loc_8224945C;
loc_82249410:
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82249444
	if (!ctx.cr6.gt) goto loc_82249444;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,1152(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82249444
	if (!ctx.cr6.lt) goto loc_82249444;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8224c990
	ctx.lr = 0x82249438;
	sub_8224C990(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,166(r31)
	REX_STORE_U8(r31.u32 + 166, r30.u8);
	// stb r11,167(r31)
	REX_STORE_U8(r31.u32 + 167, ctx.r11.u8);
loc_82249444:
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8224945c
	if (ctx.cr6.gt) goto loc_8224945C;
	// stb r30,166(r31)
	REX_STORE_U8(r31.u32 + 166, r30.u8);
loc_8224945C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82251288) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x82251290;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c84
	ctx.lr = 0x82251298;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f29,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f29.f64 = double(temp.f32);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lfs f27,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r11,r9,2416
	ctx.r11.s64 = ctx.r9.s64 + 2416;
	// lfs f28,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f28.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,468(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// li r9,21
	ctx.r9.s64 = 21;
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// stb r27,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, r27.u8);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ef588
	ctx.lr = 0x82251314;
	sub_822EF588(ctx, base);
	// lbz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82251748
	if (ctx.cr0.eq) goto loc_82251748;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f23,1128(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1128);
	f23.f64 = double(temp.f32);
	// lfs f22,580(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 580);
	f22.f64 = double(temp.f32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// lfs f25,228(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 228);
	f25.f64 = double(temp.f32);
	// lfs f24,172(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 172);
	f24.f64 = double(temp.f32);
	// lfs f26,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// b 0x82251350
	goto loc_82251350;
loc_82251344:
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f28.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_82251350:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f12,f24
	ctx.f12.f64 = f24.f64;
	// beq cr6,0x82251434
	if (ctx.cr6.eq) goto loc_82251434;
	// lwz r3,204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f11,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 * f26.f64));
	// fmuls f7,f10,f26
	ctx.f7.f64 = double(float(ctx.f10.f64 * f26.f64));
	// fmuls f10,f9,f26
	ctx.f10.f64 = double(float(ctx.f9.f64 * f26.f64));
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
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
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// std r5,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f0,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsel f12,f0,f11,f7
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
loc_82251434:
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lfs f7,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f11,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f28,f5
	ctx.f2.f64 = double(float(f28.f64 - ctx.f5.f64));
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// lfs f13,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f27,f0
	ctx.f4.f64 = double(float(f27.f64 - ctx.f0.f64));
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// fsubs f1,f29,f3
	ctx.f1.f64 = double(float(f29.f64 - ctx.f3.f64));
	// ld r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f21,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f21.f64 = double(temp.f32);
	// lfs f20,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f20.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f19,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f19.f64 = double(temp.f32);
	// fsubs f11,f11,f19
	ctx.f11.f64 = double(float(ctx.f11.f64 - f19.f64));
	// fsubs f21,f7,f21
	f21.f64 = double(float(ctx.f7.f64 - f21.f64));
	// fmuls f19,f11,f11
	f19.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fadds f7,f2,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fsubs f20,f6,f20
	f20.f64 = double(float(ctx.f6.f64 - f20.f64));
	// fadds f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmadds f5,f21,f21,f19
	ctx.f5.f64 = double(float(std::fma(f21.f64, f21.f64, f19.f64)));
	// fadds f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fmadds f13,f20,f20,f5
	ctx.f13.f64 = double(float(std::fma(f20.f64, f20.f64, ctx.f5.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, f25.f64);
	// ble cr6,0x82251708
	if (!ctx.cr6.gt) goto loc_82251708;
	// fcmpu cr6,f12,f22
	ctx.cr6.compare(ctx.f12.f64, f22.f64);
	// bgt cr6,0x82251650
	if (ctx.cr6.gt) goto loc_82251650;
	// fsubs f5,f3,f10
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// lfs f4,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// lfs f13,108(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// fadds f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// fmuls f11,f5,f5
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f7,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f1,f3,f3,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f11.f64)));
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f1,f1
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 / ctx.f1.f64));
	// fmuls f29,f13,f13
	f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmadds f1,f12,f12,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, f29.f64)));
	// fmuls f29,f3,f31
	f29.f64 = double(float(ctx.f3.f64 * f31.f64));
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmadds f1,f11,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmsubs f29,f7,f31,f29
	f29.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, -f29.f64)));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsqrts f5,f1
	ctx.f5.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f1,f29,f29
	ctx.f1.f64 = double(float(f29.f64 * f29.f64));
	// fdivs f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 / ctx.f5.f64));
	// fmadds f1,f3,f3,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f1.f64)));
	// fmuls f28,f12,f5
	f28.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f27,f11,f5
	f27.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmadds f12,f7,f7,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f1.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 / ctx.f12.f64));
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f7,f29,f12
	ctx.f7.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f3,f11,f2
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f1,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f29,f12,f2
	f29.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fadds f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f11,212(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f7,f29,f8
	ctx.f7.f64 = double(float(f29.f64 + ctx.f8.f64));
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f8,208(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fsubs f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f6,f10,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f8,f7,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmadds f6,f0,f0,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f6.f64)));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f8,f30,f8
	ctx.f8.f64 = double(float(f30.f64 / ctx.f8.f64));
	// fdivs f6,f30,f6
	ctx.f6.f64 = double(float(f30.f64 / ctx.f6.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f11,f28,f11
	ctx.f11.f64 = double(float(f28.f64 * ctx.f11.f64));
	// fmadds f12,f13,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f13,f13,f10,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f12,f27,f8,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f0,f27,f0,f13
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822516f8
	if (ctx.cr6.gt) goto loc_822516F8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// b 0x822516f8
	goto loc_822516F8;
loc_82251650:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f31,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f12.f64)));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f23
	ctx.cr6.compare(ctx.f10.f64, f23.f64);
	// bge cr6,0x82251708
	if (!ctx.cr6.lt) goto loc_82251708;
	// fsubs f10,f7,f28
	ctx.f10.f64 = double(float(ctx.f7.f64 - f28.f64));
	// lfs f9,108(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f6,f29
	ctx.f8.f64 = double(float(ctx.f6.f64 - f29.f64));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// fsubs f5,f11,f27
	ctx.f5.f64 = double(float(ctx.f11.f64 - f27.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f4.f64)));
	// fmadds f4,f5,f5,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f4.f64)));
	// fsqrts f4,f4
	ctx.f4.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f4,f30,f4
	ctx.f4.f64 = double(float(f30.f64 / ctx.f4.f64));
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fsubs f10,f28,f10
	ctx.f10.f64 = double(float(f28.f64 - ctx.f10.f64));
	// fsubs f9,f29,f8
	ctx.f9.f64 = double(float(f29.f64 - ctx.f8.f64));
	// fsubs f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 - ctx.f11.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f10,f12,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 - ctx.f0.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fsubs f0,f28,f13
	ctx.f0.f64 = double(float(f28.f64 - ctx.f13.f64));
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fsubs f0,f29,f12
	ctx.f0.f64 = double(float(f29.f64 - ctx.f12.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
loc_822516F8:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_82251708:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r27,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x822ef588
	ctx.lr = 0x82251730;
	sub_822EF588(ctx, base);
	// lbz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82251748
	if (ctx.cr0.eq) goto loc_82251748;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// blt cr6,0x82251344
	if (ctx.cr6.lt) goto loc_82251344;
loc_82251748:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cd0
	ctx.lr = 0x82251754;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8227D8A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227d8ec
	if (!ctx.cr6.eq) goto loc_8227D8EC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-492
	ctx.r3.s64 = ctx.r10.s64 + -492;
	// li r5,530
	ctx.r5.s64 = 530;
	// bl 0x821231d0
	ctx.lr = 0x8227D8EC;
	sub_821231D0(ctx, base);
loc_8227D8EC:
	// li r4,-32752
	ctx.r4.s64 = -32752;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D8F8;
	sub_8217F4B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r11.u32);
	// stw r10,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D95C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82285058) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82285060;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822850b0
	if (!ctx.cr6.gt) goto loc_822850B0;
	// li r30,0
	r30.s64 = 0;
loc_82285080:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228509C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82285080
	if (ctx.cr6.lt) goto loc_82285080;
loc_822850B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82286670) {
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
	// lwz r3,232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,2256
	ctx.r11.s64 = ctx.r11.s64 + 2256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x822866A0;
	sub_8269D1B8(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x8269d1b8
	ctx.lr = 0x822866A8;
	sub_8269D1B8(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x8269d1b8
	ctx.lr = 0x822866B0;
	sub_8269D1B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x822866C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822866dc
	if (ctx.cr0.eq) goto loc_822866DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822866DC;
	sub_8269CE98(ctx, base);
loc_822866DC:
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

DEFINE_REX_FUNC(sub_82289B48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82289B50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x82289ba4
	if (!ctx.cr6.eq) goto loc_82289BA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8228baf8
	ctx.lr = 0x82289BA4;
	sub_8228BAF8(ctx, base);
loc_82289BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8228AC38) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// lwz r3,6076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AC70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6076(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r9,-816
	ctx.r4.s64 = ctx.r9.s64 + -816;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8228ACA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228acb0
	if (!ctx.cr6.eq) goto loc_8228ACB0;
	// lbz r31,8(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_8228ACB0:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228add0
	if (ctx.cr0.eq) goto loc_8228ADD0;
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
	ctx.lr = 0x8228ACD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8228add0
	if (!ctx.cr6.eq) goto loc_8228ADD0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228ACF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228add0
	if (ctx.cr0.eq) goto loc_8228ADD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228add0
	if (ctx.cr0.eq) goto loc_8228ADD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AD28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228ad60
	if (ctx.cr0.eq) goto loc_8228AD60;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
	// b 0x8228add8
	goto loc_8228ADD8;
loc_8228AD60:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AD84;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AD9C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r5,r11,-844
	ctx.r5.s64 = ctx.r11.s64 + -844;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228ADB4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8228ADC4;
	sub_8216BC98(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// b 0x8228add8
	goto loc_8228ADD8;
loc_8228ADD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b258
	ctx.lr = 0x8228ADD8;
	sub_8228B258(ctx, base);
loc_8228ADD8:
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

DEFINE_REX_FUNC(sub_822958E8) {
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
	// addi r11,r11,5200
	ctx.r11.s64 = ctx.r11.s64 + 5200;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82295914
	if (ctx.cr0.eq) goto loc_82295914;
	// bl 0x8269ce98
	ctx.lr = 0x82295914;
	sub_8269CE98(ctx, base);
loc_82295914:
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

DEFINE_REX_FUNC(sub_82299FD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8229A520) {
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
	ctx.lr = 0x8229A528;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c88
	ctx.lr = 0x8229A530;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8229a554
	if (!ctx.cr6.eq) goto loc_8229A554;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8229af20
	if (ctx.cr6.eq) goto loc_8229AF20;
loc_8229A554:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f11,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// li r21,0
	r21.s64 = 0;
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// lfs f9,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f11,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmsubs f0,f13,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f7.f64)));
	// fmsubs f12,f12,f9,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmsubs f13,f8,f10,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8229af20
	if (ctx.cr6.lt) goto loc_8229AF20;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmsubs f12,f10,f12,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmsubs f13,f13,f8,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f6.f64)));
	// fmsubs f0,f0,f9,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8229af20
	if (ctx.cr6.lt) goto loc_8229AF20;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8229A66C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8229A684:
	// lfs f10,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,-8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f8,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f10,f9,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f10,f8,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8229a6d0
	if (!ctx.cr6.lt) goto loc_8229A6D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x8229af20
	if (!ctx.cr6.lt) goto loc_8229AF20;
loc_8229A6D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x8229a684
	if (ctx.cr6.lt) goto loc_8229A684;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x8229af20
	if (!ctx.cr6.lt) goto loc_8229AF20;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8229a66c
	if (ctx.cr6.lt) goto loc_8229A66C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8229af20
	if (!ctx.cr6.eq) goto loc_8229AF20;
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8229a72c
	if (!ctx.cr6.eq) goto loc_8229A72C;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// bne cr6,0x8229a72c
	if (!ctx.cr6.eq) goto loc_8229A72C;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r22,2
	r22.s64 = 2;
	// lwz r31,144(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r23,r21
	r23.u64 = r21.u64;
	// b 0x8229a734
	goto loc_8229A734;
loc_8229A72C:
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r31,148(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8229A734:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r9,r4,21,0,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0xFFE00000;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r27,r9,r10
	r27.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r25,r11,4
	r25.s64 = ctx.r11.s64 + 4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8229c868
	ctx.lr = 0x8229A758;
	sub_8229C868(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// bne 0x8229a7ac
	if (!ctx.cr0.eq) goto loc_8229A7AC;
	// lfs f0,180(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8229c4b0
	ctx.lr = 0x8229A794;
	sub_8229C4B0(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8229c868
	ctx.lr = 0x8229A7A8;
	sub_8229C868(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8229A7AC:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// add r24,r23,r22
	r24.u64 = r23.u64 + r22.u64;
	// lfs f27,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f27.f64 = double(temp.f32);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// lfs f0,104(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f27,304(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// subfic r27,r24,3
	ctx.xer.ca = r24.u32 <= 3;
	r27.u64 = static_cast<uint64_t>(3) - r24.u64;
	// stfs f27,308(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f27,312(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// subfic r8,r31,3
	ctx.xer.ca = r31.u32 <= 3;
	ctx.r8.u64 = static_cast<uint64_t>(3) - r31.u64;
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// rlwinm r31,r22,4,0,27
	r31.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r20,0(r9)
	r20.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// subf r8,r28,r8
	ctx.r8.u64 = ctx.r8.u64 - r28.u64;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lis r25,-32243
	r25.s64 = -2113077248;
	// stw r21,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, r21.u32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r18,-32241
	r18.s64 = -2112946176;
	// addi r14,r1,352
	r14.s64 = ctx.r1.s64 + 352;
	// lfs f31,15048(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r28,r7,r30
	r28.u64 = ctx.r7.u64 + r30.u64;
	// lfs f8,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r18,5344
	ctx.r8.s64 = r18.s64 + 5344;
	// li r25,1
	r25.s64 = 1;
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stw r8,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// stw r25,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r25.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ld r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// addi r16,r1,256
	r16.s64 = ctx.r1.s64 + 256;
	// std r9,8(r14)
	REX_STORE_U64(r14.u32 + 8, ctx.r9.u64);
	// addi r15,r1,272
	r15.s64 = ctx.r1.s64 + 272;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfsx f10,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// ld r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// stfs f27,192(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ld r23,32(r11)
	r23.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// stfs f27,196(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// ld r22,40(r11)
	r22.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// stfs f27,200(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// ld r19,0(r28)
	r19.u64 = REX_LOAD_U64(r28.u32 + 0);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// ld r17,8(r28)
	r17.u64 = REX_LOAD_U64(r28.u32 + 8);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stw r21,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r21.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// std r4,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// fsubs f26,f13,f10
	f26.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// std r3,8(r16)
	REX_STORE_U64(r16.u32 + 8, ctx.r3.u64);
	// fsubs f25,f12,f9
	f25.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f24,f11,f8
	f24.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r7,0(r16)
	REX_STORE_U64(r16.u32 + 0, ctx.r7.u64);
	// std r23,0(r15)
	REX_STORE_U64(r15.u32 + 0, r23.u64);
	// std r22,8(r15)
	REX_STORE_U64(r15.u32 + 8, r22.u64);
	// std r20,0(r14)
	REX_STORE_U64(r14.u32 + 0, r20.u64);
	// std r19,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r19.u64);
	// std r17,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r17.u64);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x8229a180
	ctx.lr = 0x8229A8FC;
	sub_8229A180(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8229a180
	ctx.lr = 0x8229A908;
	sub_8229A180(ctx, base);
	// fmuls f0,f24,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 * f24.f64));
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f30,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f30.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f28,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f28.f64 = double(temp.f32);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lfs f29,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f29.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfsx f13,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f26,f26,f0
	ctx.f0.f64 = double(float(std::fma(f26.f64, f26.f64, ctx.f0.f64)));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f25,f25,f0
	ctx.f0.f64 = double(float(std::fma(f25.f64, f25.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f27,f0
	ctx.f12.f64 = double(float(f27.f64 / ctx.f0.f64));
	// fmuls f0,f12,f25
	ctx.f0.f64 = double(float(ctx.f12.f64 * f25.f64));
	// fmuls f13,f12,f26
	ctx.f13.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f9,f28,f12
	ctx.f9.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmsubs f11,f13,f28,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, -ctx.f11.f64)));
	// fmsubs f10,f30,f12,f10
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fmsubs f4,f29,f0,f9
	ctx.f4.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, -ctx.f9.f64)));
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f4,f4,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f3,f27,f9
	ctx.f3.f64 = double(float(f27.f64 / ctx.f9.f64));
	// fmuls f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f3,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fmadds f10,f6,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f10,f5,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// bge cr6,0x8229aa04
	if (!ctx.cr6.lt) goto loc_8229AA04;
	// fmuls f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f11,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// b 0x8229aa0c
	goto loc_8229AA0C;
loc_8229AA04:
	// lfs f11,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
loc_8229AA0C:
	// lfs f22,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f22.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f7,f13,f22
	ctx.f7.f64 = double(float(ctx.f13.f64 * f22.f64));
	// lfs f21,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f21.f64 = double(temp.f32);
	// lfs f20,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f20.f64 = double(temp.f32);
	// fmuls f6,f21,f0
	ctx.f6.f64 = double(float(f21.f64 * ctx.f0.f64));
	// fmuls f5,f20,f12
	ctx.f5.f64 = double(float(f20.f64 * ctx.f12.f64));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f3,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f2,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f12,f21,f12,f7
	ctx.f12.f64 = double(float(std::fma(f21.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmsubs f7,f13,f20,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, -ctx.f6.f64)));
	// fmsubs f0,f22,f0,f5
	ctx.f0.f64 = double(float(std::fma(f22.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f7,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f6,f27,f13
	ctx.f6.f64 = double(float(f27.f64 / ctx.f13.f64));
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// fmadds f13,f3,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f2,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8229aad4
	if (!ctx.cr6.lt) goto loc_8229AAD4;
	// fmuls f23,f0,f8
	f23.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f13,f8
	f24.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f25,f0,f8
	f25.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f23,96(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f24,100(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x8229aae0
	goto loc_8229AAE0;
loc_8229AAD4:
	// lfs f25,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f25.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f24.f64 = double(temp.f32);
	// lfs f23,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f23.f64 = double(temp.f32);
loc_8229AAE0:
	// fmuls f0,f9,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * f25.f64));
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// fmuls f8,f24,f11
	ctx.f8.f64 = double(float(f24.f64 * ctx.f11.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f12,f23,f10
	ctx.f12.f64 = double(float(f23.f64 * ctx.f10.f64));
	// fmr f26,f31
	f26.f64 = f31.f64;
	// lfs f7,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f13,f23,f11,f0
	ctx.f13.f64 = double(float(std::fma(f23.f64, ctx.f11.f64, -ctx.f0.f64)));
	// fmsubs f0,f25,f10,f8
	ctx.f0.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, -ctx.f8.f64)));
	// fmsubs f12,f9,f24,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, f24.f64, -ctx.f12.f64)));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f8,f12,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f8,f0,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f8.f64)));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x8229abe4
	if (ctx.cr6.lt) goto loc_8229ABE4;
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fdivs f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 / ctx.f8.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f12,f9,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fmsubs f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f7.f64)));
	// fmsubs f13,f13,f11,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 / ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8229a480
	ctx.lr = 0x8229AB94;
	sub_8229A480(ctx, base);
	// fmuls f13,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64 * f28.f64));
	// lfs f0,288(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f26,f0,f1
	f26.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f0,f25,f29,f13
	ctx.f0.f64 = double(float(std::fma(f25.f64, f29.f64, ctx.f13.f64)));
	// fmadds f0,f23,f30,f0
	ctx.f0.f64 = double(float(std::fma(f23.f64, f30.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8229abb4
	if (ctx.cr6.lt) goto loc_8229ABB4;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_8229ABB4:
	// clrlwi. r21,r25,24
	r21.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x8229abc0
	if (!ctx.cr0.eq) goto loc_8229ABC0;
	// fneg f26,f26
	ctx.fpscr.disableFlushMode();
	f26.u64 = f26.u64 ^ 0x8000000000000000;
loc_8229ABC0:
	// fneg f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299ea8
	ctx.lr = 0x8229ABD8;
	sub_82299EA8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82293e30
	ctx.lr = 0x8229ABE4;
	sub_82293E30(ctx, base);
loc_8229ABE4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// beq cr6,0x8229ae14
	if (ctx.cr6.eq) goto loc_8229AE14;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// beq cr6,0x8229ad08
	if (ctx.cr6.eq) goto loc_8229AD08;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(r24.s32, 3, ctx.xer);
	// bne cr6,0x8229af20
	if (!ctx.cr6.eq) goto loc_8229AF20;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// fneg f27,f26
	ctx.fpscr.disableFlushMode();
	f27.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82299ea8
	ctx.lr = 0x8229AC4C;
	sub_82299EA8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f9,f30,f13
	ctx.f9.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f28,f13
	ctx.f8.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f30,f11,f10
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f10.f64)));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f8,f0,f29,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f8.f64)));
	// fmadds f5,f30,f0,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f5.f64)));
	// fnmsubs f13,f29,f13,f10
	ctx.f13.f64 = double(float(-std::fma(f29.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fnmsubs f10,f12,f28,f9
	ctx.f10.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -ctx.f9.f64)));
	// fnmsubs f12,f30,f12,f8
	ctx.f12.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fnmsubs f9,f11,f28,f5
	ctx.f9.f64 = double(float(-std::fma(ctx.f11.f64, f28.f64, -ctx.f5.f64)));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f11,f11,f29,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f29.f64, -ctx.f10.f64)));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f8,f6,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f11,f4,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f4,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f8,f12,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmadds f11,f6,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f0,f0,f9,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f10.f64)));
	// fnmsubs f10,f4,f9,f8
	ctx.f10.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f0,f6,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f0.f64)));
	// fmuls f12,f20,f10
	ctx.f12.f64 = double(float(f20.f64 * ctx.f10.f64));
	// fmadds f0,f21,f0,f12
	ctx.f0.f64 = double(float(std::fma(f21.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f22,f13,f0
	ctx.f0.f64 = double(float(std::fma(f22.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8229acf0
	if (!ctx.cr6.lt) goto loc_8229ACF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229ACF0:
	// stfs f27,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// clrlwi. r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229af20
	if (ctx.cr0.eq) goto loc_8229AF20;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x8229af1c
	goto loc_8229AF1C;
loc_8229AD08:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// fneg f27,f26
	ctx.fpscr.disableFlushMode();
	f27.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82299ea8
	ctx.lr = 0x8229AD58;
	sub_82299EA8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f30,f11,f10
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f10.f64)));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f8,f0,f29,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f8.f64)));
	// fmadds f5,f30,f0,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f5.f64)));
	// fnmsubs f13,f13,f29,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -ctx.f10.f64)));
	// fnmsubs f10,f12,f28,f9
	ctx.f10.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -ctx.f9.f64)));
	// fnmsubs f12,f30,f12,f8
	ctx.f12.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fnmsubs f9,f11,f28,f5
	ctx.f9.f64 = double(float(-std::fma(ctx.f11.f64, f28.f64, -ctx.f5.f64)));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f11,f11,f29,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f29.f64, -ctx.f10.f64)));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f8,f6,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f11,f4,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f4,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f11,f9,f6,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f11.f64)));
	// fmadds f0,f9,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fnmsubs f10,f9,f4,f8
	ctx.f10.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f4.f64, -ctx.f8.f64)));
	// fnmsubs f13,f7,f13,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fnmsubs f0,f6,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f0.f64)));
	// fmuls f12,f10,f20
	ctx.f12.f64 = double(float(ctx.f10.f64 * f20.f64));
	// fmadds f0,f0,f21,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f12.f64)));
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8229adfc
	if (!ctx.cr6.lt) goto loc_8229ADFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229ADFC:
	// stfs f27,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// clrlwi. r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229af20
	if (ctx.cr0.eq) goto loc_8229AF20;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x8229af1c
	goto loc_8229AF1C;
loc_8229AE14:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// fneg f27,f26
	ctx.fpscr.disableFlushMode();
	f27.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82299ea8
	ctx.lr = 0x8229AE64;
	sub_82299EA8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f30,f11,f10
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f10.f64)));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f8,f0,f29,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f8.f64)));
	// fmadds f5,f30,f0,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f5.f64)));
	// fnmsubs f13,f13,f29,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -ctx.f10.f64)));
	// fnmsubs f10,f12,f28,f9
	ctx.f10.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -ctx.f9.f64)));
	// fnmsubs f12,f30,f12,f8
	ctx.f12.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fnmsubs f9,f11,f28,f5
	ctx.f9.f64 = double(float(-std::fma(ctx.f11.f64, f28.f64, -ctx.f5.f64)));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f11,f11,f29,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f29.f64, -ctx.f10.f64)));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f8,f6,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f11,f4,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f4,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f11,f9,f6,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f11.f64)));
	// fmadds f0,f9,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fnmsubs f10,f9,f4,f8
	ctx.f10.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f4.f64, -ctx.f8.f64)));
	// fnmsubs f13,f7,f13,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fnmsubs f0,f6,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f0.f64)));
	// fmuls f12,f10,f20
	ctx.f12.f64 = double(float(ctx.f10.f64 * f20.f64));
	// fmadds f0,f0,f21,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f12.f64)));
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8229af08
	if (!ctx.cr6.lt) goto loc_8229AF08;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229AF08:
	// stfs f27,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// clrlwi. r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229af20
	if (ctx.cr0.eq) goto loc_8229AF20;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_8229AF1C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229AF20:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd4
	ctx.lr = 0x8229AF2C;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822F4420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822F4428;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,52
	r29.s64 = ctx.r3.s64 + 52;
loc_822F4438:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822f4494
	if (ctx.cr6.lt) goto loc_822F4494;
	// beq cr6,0x822f44c0
	if (ctx.cr6.eq) goto loc_822F44C0;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822f4454
	if (!ctx.cr6.gt) goto loc_822F4454;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822F4454:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
loc_822F445C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822f4480
	if (!ctx.cr6.eq) goto loc_822F4480;
	// stwcx. r10,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f445c
	if (!ctx.cr0.eq) goto loc_822F445C;
	// b 0x822f4488
	goto loc_822F4488;
loc_822F4480:
	// stwcx. r9,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F4488:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822f4438
	if (!ctx.cr6.eq) goto loc_822F4438;
loc_822F4494:
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r6,r31,60
	ctx.r6.s64 = r31.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x822f4250
	ctx.lr = 0x822F44AC;
	sub_822F4250(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f44cc
	if (!ctx.cr6.eq) goto loc_822F44CC;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_822F44C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_822F44CC:
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
loc_822F44D0:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f44d0
	if (!ctx.cr0.eq) goto loc_822F44D0;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822f4568
	if (ctx.cr6.eq) goto loc_822F4568;
loc_822F4500:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_822F4508:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_822F4528:
	// mfmsr r3
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r3.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r4,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f454c
	if (!ctx.cr6.eq) goto loc_822F454C;
	// stdcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f4528
	if (!ctx.cr0.eq) goto loc_822F4528;
	// b 0x822f4554
	goto loc_822F4554;
loc_822F454C:
	// stdcx. r4,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F4554:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f4508
	if (!ctx.cr6.eq) goto loc_822F4508;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x822f4500
	if (!ctx.cr0.eq) goto loc_822F4500;
loc_822F4568:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r9,-16
	r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f45d4
	if (ctx.cr6.eq) goto loc_822F45D4;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
loc_822F457C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f457c
	if (!ctx.cr0.eq) goto loc_822F457C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x822f45d4
	if (!ctx.cr6.lt) goto loc_822F45D4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822f45d4
	if (!ctx.cr6.gt) goto loc_822F45D4;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822f45bc
	if (!ctx.cr6.gt) goto loc_822F45BC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_822F45BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823eebb0
	ctx.lr = 0x822F45C8;
	sub_823EEBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f45d4
	if (!ctx.cr6.eq) goto loc_822F45D4;
	// bl 0x823ee280
	ctx.lr = 0x822F45D4;
	sub_823EE280(ctx, base);
loc_822F45D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82300FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82300FD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// b 0x82301004
	goto loc_82301004;
loc_82300FEC:
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82301054
	if (ctx.cr6.eq) goto loc_82301054;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82301054
	if (ctx.cr6.eq) goto loc_82301054;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
loc_82301004:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82300fec
	if (!ctx.cr0.eq) goto loc_82300FEC;
	// b 0x82301054
	goto loc_82301054;
loc_82301010:
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82301038
	if (ctx.cr6.eq) goto loc_82301038;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82301038
	if (ctx.cr6.eq) goto loc_82301038;
loc_82301028:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82301010
	if (!ctx.cr0.eq) goto loc_82301010;
loc_82301038:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r29,r31,r30
	r29.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r11,r31,r30
	REX_STORE_U8(r31.u32 + r30.u32, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed3f8
	ctx.lr = 0x82301050;
	sub_823ED3F8(ctx, base);
	// stbx r29,r31,r30
	REX_STORE_U8(r31.u32 + r30.u32, r29.u8);
loc_82301054:
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82301028
	if (!ctx.cr0.eq) goto loc_82301028;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82304BB8) {
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
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82304be4
	if (ctx.cr0.eq) goto loc_82304BE4;
	// bl 0x8269ce98
	ctx.lr = 0x82304BE4;
	sub_8269CE98(ctx, base);
loc_82304BE4:
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

DEFINE_REX_FUNC(sub_823089F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82308A00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x822f7a88
	ctx.lr = 0x82308A18;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308a48
	if (ctx.cr0.eq) goto loc_82308A48;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82308ae4
	if (ctx.cr6.eq) goto loc_82308AE4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8230bc18
	ctx.lr = 0x82308A3C;
	sub_8230BC18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82308ae4
	if (ctx.cr0.eq) goto loc_82308AE4;
	// b 0x82308ae8
	goto loc_82308AE8;
loc_82308A48:
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308a5c
	if (ctx.cr6.eq) goto loc_82308A5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308a60
	goto loc_82308A60;
loc_82308A5C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82308A60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308a7c
	if (ctx.cr6.eq) goto loc_82308A7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308a78
	if (ctx.cr6.eq) goto loc_82308A78;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308a7c
	goto loc_82308A7C;
loc_82308A78:
	// li r30,0
	r30.s64 = 0;
loc_82308A7C:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82308ae4
	if (!ctx.cr6.gt) goto loc_82308AE4;
	// li r31,0
	r31.s64 = 0;
loc_82308A94:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308acc
	if (ctx.cr6.eq) goto loc_82308ACC;
	// li r5,1
	ctx.r5.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822fdeb8
	ctx.lr = 0x82308AB4;
	sub_822FDEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308ae8
	if (!ctx.cr0.eq) goto loc_82308AE8;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_82308ACC:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82308a94
	if (ctx.cr6.lt) goto loc_82308A94;
loc_82308AE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82308AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8230FD98) {
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
	// beq cr6,0x8230fde0
	if (ctx.cr6.eq) goto loc_8230FDE0;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8230fe08
	if (!ctx.cr0.eq) goto loc_8230FE08;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230FDD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230fe0c
	if (!ctx.cr0.eq) goto loc_8230FE0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8230fe04
	goto loc_8230FE04;
loc_8230FDE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230FDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230fe0c
	if (!ctx.cr0.eq) goto loc_8230FE0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230FE04:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8230FE08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230FE0C:
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

DEFINE_REX_FUNC(sub_823132B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823132C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82312e10
	ctx.lr = 0x823132D0;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823133c4
	if (!ctx.cr0.eq) goto loc_823133C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231331c
	if (ctx.cr6.eq) goto loc_8231331C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231331c
	if (ctx.cr0.eq) goto loc_8231331C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231331c
	if (!ctx.cr6.eq) goto loc_8231331C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82312c48
	ctx.lr = 0x82313314;
	sub_82312C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823133c4
	if (!ctx.cr0.eq) goto loc_823133C4;
loc_8231331C:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82313350
	if (ctx.cr6.eq) goto loc_82313350;
loc_8231332C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x823132b8
	ctx.lr = 0x8231333C;
	sub_823132B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823133c4
	if (!ctx.cr0.eq) goto loc_823133C4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8231332c
	if (!ctx.cr6.eq) goto loc_8231332C;
loc_82313350:
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,5448
	r30.s64 = ctx.r11.s64 + 5448;
	// beq cr6,0x82313380
	if (ctx.cr6.eq) goto loc_82313380;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,99
	ctx.r6.s64 = 99;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82313380;
	sub_82330D00(ctx, base);
loc_82313380:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313398
	if (ctx.cr6.eq) goto loc_82313398;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8231339c
	goto loc_8231339C;
loc_82313398:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231339C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823133c0
	if (!ctx.cr6.eq) goto loc_823133C0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,106
	ctx.r6.s64 = 106;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823133C0;
	sub_82330D00(ctx, base);
loc_823133C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823133C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82318448) {
	REX_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82318848;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82318878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823188dc
	if (!ctx.cr0.eq) goto loc_823188DC;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x82318890;
	sub_823EF5F0(ctx, base);
	// li r11,112
	ctx.r11.s64 = 112;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r28.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,5844(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 5844);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x8232f8a8
	ctx.lr = 0x823188DC;
	sub_8232F8A8(ctx, base);
loc_823188DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8231E318) {
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
	ctx.lr = 0x8231E320;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e348
	if (ctx.cr6.eq) goto loc_8231E348;
	// bl 0x8230b9d0
	ctx.lr = 0x8231E33C;
	sub_8230B9D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
loc_8231E348:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8231e388
	if (ctx.cr6.eq) goto loc_8231E388;
loc_8231E358:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8231e368
	if (!ctx.cr6.eq) goto loc_8231E368;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8231E368:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8230a0e0
	ctx.lr = 0x8231E374;
	sub_8230A0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8231e358
	if (!ctx.cr6.eq) goto loc_8231E358;
loc_8231E388:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,6908
	r29.s64 = ctx.r11.s64 + 6908;
	// beq cr6,0x8231e3b8
	if (ctx.cr6.eq) goto loc_8231E3B8;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,630
	ctx.r6.s64 = 630;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E3B8;
	sub_82330D00(ctx, base);
loc_8231E3B8:
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e3dc
	if (ctx.cr6.eq) goto loc_8231E3DC;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,635
	ctx.r6.s64 = 635;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E3DC;
	sub_82330D00(ctx, base);
loc_8231E3DC:
	// lis r27,-32126
	r27.s64 = -2105409536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-10820(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231E3F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8231e4c8
	if (ctx.cr0.eq) goto loc_8231E4C8;
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231E424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x8231a578
	ctx.lr = 0x8231E430;
	sub_8231A578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x82318c80
	ctx.lr = 0x8231E43C;
	sub_82318C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x82318e28
	ctx.lr = 0x8231E448;
	sub_82318E28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x823190b0
	ctx.lr = 0x8231E454;
	sub_823190B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x823193b0
	ctx.lr = 0x8231E460;
	sub_823193B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x82319978
	ctx.lr = 0x8231E46C;
	sub_82319978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x8231be90
	ctx.lr = 0x8231E478;
	sub_8231BE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// bl 0x82316640
	ctx.lr = 0x8231E484;
	sub_82316640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231e4b4
	if (ctx.cr0.eq) goto loc_8231E4B4;
	// bl 0x82316640
	ctx.lr = 0x8231E490;
	sub_82316640(ctx, base);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,703
	ctx.r6.s64 = 703;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E4AC;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82316630
	ctx.lr = 0x8231E4B4;
	sub_82316630(ctx, base);
loc_8231E4B4:
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82314268
	ctx.lr = 0x8231E4C0;
	sub_82314268(ctx, base);
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// stb r26,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, r26.u8);
loc_8231E4C8:
	// lwz r3,-10820(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231E4E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e648
	if (!ctx.cr0.eq) goto loc_8231E648;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e50c
	if (ctx.cr6.eq) goto loc_8231E50C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,722
	ctx.r6.s64 = 722;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E50C;
	sub_82330D00(ctx, base);
loc_8231E50C:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e530
	if (ctx.cr6.eq) goto loc_8231E530;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,727
	ctx.r6.s64 = 727;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E530;
	sub_82330D00(ctx, base);
loc_8231E530:
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e554
	if (ctx.cr6.eq) goto loc_8231E554;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,732
	ctx.r6.s64 = 732;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E554;
	sub_82330D00(ctx, base);
loc_8231E554:
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e578
	if (ctx.cr6.eq) goto loc_8231E578;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,737
	ctx.r6.s64 = 737;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E578;
	sub_82330D00(ctx, base);
loc_8231E578:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e588
	if (ctx.cr6.eq) goto loc_8231E588;
	// bl 0x8230ecc8
	ctx.lr = 0x8231E588;
	sub_8230ECC8(ctx, base);
loc_8231E588:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231e5d4
	if (ctx.cr6.eq) goto loc_8231E5D4;
loc_8231E59C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8231e5ac
	if (!ctx.cr6.eq) goto loc_8231E5AC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8231E5AC:
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8231e5c0
	if (!ctx.cr6.eq) goto loc_8231E5C0;
	// bl 0x8231d158
	ctx.lr = 0x8231E5C0;
	sub_8231D158(ctx, base);
loc_8231E5C0:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231e59c
	if (!ctx.cr6.eq) goto loc_8231E59C;
loc_8231E5D4:
	// lwz r10,-10820(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,761
	ctx.r6.s64 = 761;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231E62C;
	sub_82330D00(ctx, base);
	// lwz r3,-10820(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,64(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231E648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231E648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8233CA70) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cafc
	if (ctx.cr6.eq) goto loc_8233CAFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x8233caa4
	if (ctx.cr6.eq) goto loc_8233CAA4;
	// bl 0x82336d78
	ctx.lr = 0x8233CAA4;
	sub_82336D78(ctx, base);
loc_8233CAA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8233cab8
	if (ctx.cr6.eq) goto loc_8233CAB8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,1184(r10)
	REX_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
loc_8233CAB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cacc
	if (ctx.cr6.eq) goto loc_8233CACC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,1188(r10)
	REX_STORE_U32(ctx.r10.u32 + 1188, ctx.r11.u32);
loc_8233CACC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823379a8
	ctx.lr = 0x8233CAD8;
	sub_823379A8(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233cafc
	if (!ctx.cr6.eq) goto loc_8233CAFC;
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cafc
	if (ctx.cr6.eq) goto loc_8233CAFC;
	// bl 0x8235eeb0
	ctx.lr = 0x8233CAFC;
	sub_8235EEB0(ctx, base);
loc_8233CAFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cb20
	if (ctx.cr6.eq) goto loc_8233CB20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233e770
	ctx.lr = 0x8233CB18;
	sub_8233E770(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8233CB20:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cb40
	if (ctx.cr6.eq) goto loc_8233CB40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233e770
	ctx.lr = 0x8233CB38;
	sub_8233E770(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8233CB40:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cb60
	if (ctx.cr6.eq) goto loc_8233CB60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233e770
	ctx.lr = 0x8233CB58;
	sub_8233E770(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8233CB60:
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

DEFINE_REX_FUNC(sub_82342478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82342488
	if (ctx.cr6.eq) goto loc_82342488;
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82342488:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82342498
	if (ctx.cr6.eq) goto loc_82342498;
	// lfs f0,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82342498:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823424a8
	if (ctx.cr6.eq) goto loc_823424A8;
	// lfs f0,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_823424A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82348AA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82348AA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82348acc
	if (!ctx.cr6.gt) goto loc_82348ACC;
	// lhz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 84);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82348c20
	if (ctx.cr6.lt) goto loc_82348C20;
loc_82348ACC:
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// blt cr6,0x82348b04
	if (ctx.cr6.lt) goto loc_82348B04;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,22004(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348af8
	if (ctx.cr6.eq) goto loc_82348AF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bctrl 
	ctx.lr = 0x82348AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82348AF8:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82348B04:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// sth r4,84(r31)
	REX_STORE_U16(r31.u32 + 84, ctx.r4.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348b28
	if (ctx.cr6.eq) goto loc_82348B28;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82348ba8
	if (ctx.cr6.eq) goto loc_82348BA8;
loc_82348B28:
	// addi r10,r4,307
	ctx.r10.s64 = ctx.r4.s64 + 307;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82348ba8
	if (!ctx.cr6.eq) goto loc_82348BA8;
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// lwz r9,1196(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82348b54
	if (!ctx.cr6.lt) goto loc_82348B54;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82348B54:
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lwz r8,1212(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1212);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r11,1012(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r5,r7,9628
	ctx.r5.s64 = ctx.r7.s64 + 9628;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// li r6,2329
	ctx.r6.s64 = 2329;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x82348B84;
	sub_82330E40(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82348ba8
	if (!ctx.cr6.eq) goto loc_82348BA8;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82348BA8:
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x82348bdc
	if (ctx.cr6.eq) goto loc_82348BDC;
loc_82348BB8:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r3,136(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// bl 0x82348aa0
	ctx.lr = 0x82348BD0;
	sub_82348AA0(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82348bb8
	if (!ctx.cr6.eq) goto loc_82348BB8;
loc_82348BDC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348bfc
	if (ctx.cr6.eq) goto loc_82348BFC;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82348c20
	if (ctx.cr6.eq) goto loc_82348C20;
loc_82348BFC:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,307
	ctx.r9.s64 = ctx.r11.s64 + 307;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// rlwinm r6,r7,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r6,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r6.u32);
loc_82348C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82352CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82352CA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823533b0
	if (ctx.cr6.eq) goto loc_823533B0;
	// addi r31,r4,-8
	r31.s64 = ctx.r4.s64 + -8;
	// bl 0x82352058
	ctx.lr = 0x82352CC0;
	sub_82352058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823533b0
	if (!ctx.cr6.eq) goto loc_823533B0;
	// lwz r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823533b0
	if (ctx.cr6.lt) goto loc_823533B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823533b0
	if (ctx.cr6.eq) goto loc_823533B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,1
	r30.s64 = 1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r29,0
	r29.s64 = 0;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352d54
	if (!ctx.cr6.eq) goto loc_82352D54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823533b0
	if (ctx.cr6.lt) goto loc_823533B0;
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82352f8c
	if (ctx.cr6.eq) goto loc_82352F8C;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x82352e48
	if (!ctx.cr6.lt) goto loc_82352E48;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82352e10
	if (!ctx.cr6.eq) goto loc_82352E10;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// slw r10,r30,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82352D54:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823533b0
	if (!ctx.cr6.lt) goto loc_823533B0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823533b0
	if (ctx.cr6.eq) goto loc_823533B0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823531d4
	if (!ctx.cr6.eq) goto loc_823531D4;
	// lwz r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352fc0
	if (!ctx.cr6.eq) goto loc_82352FC0;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r31,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, r31.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82352db0
	if (!ctx.cr6.eq) goto loc_82352DB0;
	// stw r29,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, r29.u32);
	// stw r29,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r29.u32);
loc_82352DB0:
	// lwz r10,28(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823533b0
	if (!ctx.cr6.gt) goto loc_823533B0;
	// lwz r8,24(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823533b0
	if (ctx.cr6.eq) goto loc_823533B0;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// ble cr6,0x82352e00
	if (!ctx.cr6.gt) goto loc_82352E00;
	// addi r11,r5,440
	ctx.r11.s64 = ctx.r5.s64 + 440;
loc_82352DD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82352df4
	if (ctx.cr6.lt) goto loc_82352DF4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82352e00
	if (ctx.cr6.lt) goto loc_82352E00;
loc_82352DF4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352dd8
	if (!ctx.cr6.eq) goto loc_82352DD8;
loc_82352E00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82352E10:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352e2c
	if (ctx.cr6.eq) goto loc_82352E2C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82352d54
	if (ctx.cr6.lt) goto loc_82352D54;
loc_82352E2C:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352e3c
	if (ctx.cr6.eq) goto loc_82352E3C;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82352d54
	if (ctx.cr6.lt) goto loc_82352D54;
loc_82352E3C:
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// b 0x82352d54
	goto loc_82352D54;
loc_82352E48:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352e70
	if (ctx.cr6.eq) goto loc_82352E70;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82352ec8
	if (ctx.cr6.lt) goto loc_82352EC8;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x82352ec8
	goto loc_82352EC8;
loc_82352E70:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352e90
	if (!ctx.cr6.eq) goto loc_82352E90;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352ec8
	if (ctx.cr6.eq) goto loc_82352EC8;
loc_82352E90:
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82352eb0
	if (!ctx.cr6.eq) goto loc_82352EB0;
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82352ebc
	if (ctx.cr6.eq) goto loc_82352EBC;
loc_82352EB0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x82352e90
	goto loc_82352E90;
loc_82352EBC:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82352ec8
	if (ctx.cr6.lt) goto loc_82352EC8;
	// stw r29,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r29.u32);
loc_82352EC8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82352d54
	if (ctx.cr6.eq) goto loc_82352D54;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r9,75
	ctx.r9.s64 = ctx.r9.s64 + 75;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82352f0c
	if (!ctx.cr6.eq) goto loc_82352F0C;
	// stwx r11,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352f38
	if (!ctx.cr6.eq) goto loc_82352F38;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// b 0x82352d54
	goto loc_82352D54;
loc_82352F0C:
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352f30
	if (ctx.cr6.lt) goto loc_82352F30;
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352f2c
	if (!ctx.cr6.eq) goto loc_82352F2C;
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// b 0x82352f30
	goto loc_82352F30;
loc_82352F2C:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_82352F30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352d54
	if (ctx.cr6.eq) goto loc_82352D54;
loc_82352F38:
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352d54
	if (ctx.cr6.lt) goto loc_82352D54;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352f68
	if (ctx.cr6.eq) goto loc_82352F68;
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82352f68
	if (ctx.cr6.lt) goto loc_82352F68;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
loc_82352F68:
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352d54
	if (ctx.cr6.eq) goto loc_82352D54;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352d54
	if (ctx.cr6.lt) goto loc_82352D54;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82352d54
	goto loc_82352D54;
loc_82352F8C:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x82352d54
	if (!ctx.cr6.eq) goto loc_82352D54;
	// stw r3,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwx r3,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82352FC0:
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352ff0
	if (!ctx.cr6.eq) goto loc_82352FF0;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r31,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, r31.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stwx r11,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82352FF0:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x82353068
	if (!ctx.cr6.lt) goto loc_82353068;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82353028
	if (!ctx.cr6.eq) goto loc_82353028;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x823531b0
	goto loc_823531B0;
loc_82353028:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82353048
	if (ctx.cr6.eq) goto loc_82353048;
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823531b0
	if (ctx.cr6.lt) goto loc_823531B0;
loc_82353048:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235305c
	if (ctx.cr6.eq) goto loc_8235305C;
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823531b0
	if (ctx.cr6.lt) goto loc_823531B0;
loc_8235305C:
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x823531b0
	goto loc_823531B0;
loc_82353068:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,24(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82353094
	if (ctx.cr6.eq) goto loc_82353094;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823530f0
	if (ctx.cr6.lt) goto loc_823530F0;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x823530f0
	goto loc_823530F0;
loc_82353094:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823530b4
	if (!ctx.cr6.eq) goto loc_823530B4;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823530f0
	if (ctx.cr6.eq) goto loc_823530F0;
loc_823530B4:
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823530d4
	if (!ctx.cr6.eq) goto loc_823530D4;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823530e0
	if (ctx.cr6.eq) goto loc_823530E0;
loc_823530D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x823530b4
	goto loc_823530B4;
loc_823530E0:
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823530f0
	if (ctx.cr6.lt) goto loc_823530F0;
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
loc_823530F0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823531b0
	if (ctx.cr6.eq) goto loc_823531B0;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r10,r10,75
	ctx.r10.s64 = ctx.r10.s64 + 75;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82353134
	if (!ctx.cr6.eq) goto loc_82353134;
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82353160
	if (!ctx.cr6.eq) goto loc_82353160;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// b 0x823531b0
	goto loc_823531B0;
loc_82353134:
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82353158
	if (ctx.cr6.lt) goto loc_82353158;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82353154
	if (!ctx.cr6.eq) goto loc_82353154;
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// b 0x82353158
	goto loc_82353158;
loc_82353154:
	// stw r11,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
loc_82353158:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823531b0
	if (ctx.cr6.eq) goto loc_823531B0;
loc_82353160:
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823531b0
	if (ctx.cr6.lt) goto loc_823531B0;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82353190
	if (ctx.cr6.eq) goto loc_82353190;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82353190
	if (ctx.cr6.lt) goto loc_82353190;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82353190:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823531b0
	if (ctx.cr6.eq) goto loc_823531B0;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823531b0
	if (ctx.cr6.lt) goto loc_823531B0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_823531B0:
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stwx r3,r3,r31
	REX_STORE_U32(ctx.r3.u32 + r31.u32, ctx.r3.u32);
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823531e8
	if (!ctx.cr6.eq) goto loc_823531E8;
	// stw r3,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823531D4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stwx r3,r3,r31
	REX_STORE_U32(ctx.r3.u32 + r31.u32, ctx.r3.u32);
loc_823531E8:
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82353264
	if (!ctx.cr6.lt) goto loc_82353264;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r8,36
	ctx.r11.s64 = ctx.r8.s64 + 36;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82353238
	if (!ctx.cr6.eq) goto loc_82353238;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82353238:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8235324c
	if (ctx.cr6.lt) goto loc_8235324C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8235324C:
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// stw r31,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r31.u32);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82353264:
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82353278
	if (!ctx.cr6.eq) goto loc_82353278;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x823532d4
	goto loc_823532D4;
loc_82353278:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x82353288
	if (!ctx.cr6.gt) goto loc_82353288;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x823532d4
	goto loc_823532D4;
loc_82353288:
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,16,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r9,-4096
	ctx.r8.s64 = ctx.r9.s64 + -4096;
	// rlwinm r11,r8,16,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x4;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r9,-16384
	ctx.r7.s64 = ctx.r9.s64 + -16384;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,16,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x2;
	// slw r4,r9,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r10,r4,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// subf r9,r6,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r7,r3,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823532D4:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r9,r11,75
	ctx.r9.s64 = ctx.r11.s64 + 75;
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82353320
	if (!ctx.cr6.eq) goto loc_82353320;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r31,12(r31)
	REX_STORE_U32(r31.u32 + 12, r31.u32);
	// stw r31,8(r31)
	REX_STORE_U32(r31.u32 + 8, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82353320:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82353334
	if (!ctx.cr6.eq) goto loc_82353334;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8235333c
	goto loc_8235333C;
loc_82353334:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r11,25
	ctx.xer.ca = ctx.r11.u32 <= 25;
	ctx.r11.u64 = static_cast<uint64_t>(25) - ctx.r11.u64;
loc_8235333C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// slw r9,r3,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82353384
	if (ctx.cr6.eq) goto loc_82353384;
loc_82353350:
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823533b8
	if (ctx.cr6.eq) goto loc_823533B8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82353350
	if (!ctx.cr6.eq) goto loc_82353350;
loc_82353384:
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823533b0
	if (ctx.cr6.lt) goto loc_823533B0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823533b0
	if (ctx.cr6.lt) goto loc_823533B0;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_823533B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823533B8:
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823533b0
	if (ctx.cr6.lt) goto loc_823533B0;
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r31,12(r31)
	REX_STORE_U32(r31.u32 + 12, r31.u32);
	// stw r31,8(r31)
	REX_STORE_U32(r31.u32 + 8, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82398380) {
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
	ctx.lr = 0x82398388;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r18,-32129
	r18.s64 = -2105606144;
	// li r20,0
	r20.s64 = 0;
	// stw r4,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r3,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r3.u32);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// stw r18,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r18.u32);
	// stw r11,1012(r18)
	REX_STORE_U32(r18.u32 + 1012, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r20.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r20,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r20.u32);
	// stw r20,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r20.u32);
	// stw r20,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, r20.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r20.u8);
	// bl 0x82340e38
	ctx.lr = 0x823983EC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82398410;
	sub_82340718(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82398ad8
	if (!ctx.cr6.eq) goto loc_82398AD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// addi r28,r11,20360
	r28.s64 = ctx.r11.s64 + 20360;
	// addi r27,r10,20352
	r27.s64 = ctx.r10.s64 + 20352;
	// beq cr6,0x82398594
	if (ctx.cr6.eq) goto loc_82398594;
	// lwz r11,60(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398594
	if (ctx.cr6.eq) goto loc_82398594;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x8239845C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398594
	if (ctx.cr6.eq) goto loc_82398594;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x82398474;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398594
	if (ctx.cr6.eq) goto loc_82398594;
	// lwz r3,60(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 60);
	// mr r30,r20
	r30.u64 = r20.u64;
	// bl 0x82331458
	ctx.lr = 0x82398488;
	sub_82331458(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82398494:
	// lwz r9,60(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 60);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lbzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r6,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lbzx r4,r30,r9
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + ctx.r9.u32);
	// subfe r9,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xor r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r4,r7,7,24,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x80;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r8,r7,5,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x40;
	// stbx r4,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r4.u8);
	// rlwimi r6,r7,30,28,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x8) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r5,r7,2,27,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x10) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFEF);
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r6,31,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0xC;
	// rlwinm r6,r5,1,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x30;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r5,r7,30,26,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFC0);
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stbx r4,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r4.u8);
	// rlwinm r6,r5,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r7.u8);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stbx r4,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r4.u8);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lwz r7,60(r16)
	ctx.r7.u64 = REX_LOAD_U32(r16.u32 + 60);
	// lbzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// xor r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// and r30,r9,r10
	r30.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r8,r4,7,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0x80;
	// rlwimi r10,r4,30,28,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r7,r4,5,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x40;
	// stbx r8,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r8.u8);
	// rlwimi r9,r4,2,27,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,31,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xC;
	// rlwinm r9,r9,1,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x30;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// rlwimi r8,r4,30,26,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stbx r7,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r7.u8);
	// rlwinm r4,r8,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r5.u8);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82398494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82398494;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// stw r9,392(r11)
	REX_STORE_U32(ctx.r11.u32 + 392, ctx.r9.u32);
loc_82398594:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x823985A4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a66c
	if (!ctx.cr6.eq) goto loc_8239A66C;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lwz r6,288(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r7,280(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,292(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r28,276(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 276);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r27,284(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 284);
	// rlwimi r9,r6,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r25,280(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 280);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lbz r24,288(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 288);
	// rlwimi r3,r7,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r22,292(r31)
	r22.u64 = REX_LOAD_U8(r31.u32 + 292);
	// rlwimi r30,r4,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r26,r10,16,0,15
	r26.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r26.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r6,r6,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwinm r4,r4,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r30,r30,8,0,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r9,r30,r4
	ctx.r9.u64 = r30.u64 | ctx.r4.u64;
	// rlwinm r26,r26,8,0,15
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// or r6,r5,r27
	ctx.r6.u64 = ctx.r5.u64 | r27.u64;
	// or r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 | r24.u64;
	// or r10,r26,r10
	ctx.r10.u64 = r26.u64 | ctx.r10.u64;
	// stw r6,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r6.u32);
	// or r5,r3,r25
	ctx.r5.u64 = ctx.r3.u64 | r25.u64;
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// or r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 | r22.u64;
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// ori r4,r8,1
	ctx.r4.u64 = ctx.r8.u64 | 1;
	// stw r5,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r5.u32);
	// stw r9,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r9.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82398684
	if (!ctx.cr6.lt) goto loc_82398684;
	// li r3,84
	ctx.r3.s64 = 84;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82398684:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// stw r20,188(r31)
	REX_STORE_U32(r31.u32 + 188, r20.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// beq cr6,0x823986a8
	if (ctx.cr6.eq) goto loc_823986A8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x823986b8
	goto loc_823986B8;
loc_823986A8:
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823986bc
	if (ctx.cr6.eq) goto loc_823986BC;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_823986B8:
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_823986BC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82398ad8
	if (ctx.cr6.lt) goto loc_82398AD8;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82398700
	if (ctx.cr6.eq) goto loc_82398700;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398700
	if (ctx.cr6.eq) goto loc_82398700;
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398700
	if (ctx.cr6.eq) goto loc_82398700;
	// lwz r10,32(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82398700
	if (!ctx.cr6.eq) goto loc_82398700;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82398700:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// rlwinm r11,r9,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// stb r11,260(r31)
	REX_STORE_U8(r31.u32 + 260, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398770
	if (ctx.cr6.eq) goto loc_82398770;
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// rlwinm r11,r23,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,1176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1176);
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82398770
	if (ctx.cr6.eq) goto loc_82398770;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82398758
	if (!ctx.cr6.eq) goto loc_82398758;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82398758:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x82398768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x8239a698
	if (ctx.cr6.gt) goto loc_8239A698;
loc_82398770:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lis r27,4
	r27.s64 = 262144;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// mr r24,r20
	r24.u64 = r20.u64;
	// li r14,1
	r14.s64 = 1;
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// addi r30,r11,16216
	r30.s64 = ctx.r11.s64 + 16216;
	// blt cr6,0x82398824
	if (ctx.cr6.lt) goto loc_82398824;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e7e0
	ctx.lr = 0x823987A4;
	sub_8233E7E0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r11,r29,-8
	ctx.r11.s64 = r29.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823987B4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823987b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823987B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r22,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82398824
	if (ctx.cr6.eq) goto loc_82398824;
loc_823987D8:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_823987E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82398804
	if (!ctx.cr0.eq) goto loc_82398804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823987e4
	if (!ctx.cr6.eq) goto loc_823987E4;
loc_82398804:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239881c
	if (ctx.cr6.eq) goto loc_8239881C;
	// lwz r24,0(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(r24.u32, r30.u32, ctx.xer);
	// bne cr6,0x823987d8
	if (!ctx.cr6.eq) goto loc_823987D8;
	// b 0x82398820
	goto loc_82398820;
loc_8239881C:
	// mr r28,r14
	r28.u64 = r14.u64;
loc_82398820:
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
loc_82398824:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// addi r21,r11,20300
	r21.s64 = ctx.r11.s64 + 20300;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r21.u32);
	// beq cr6,0x823988b8
	if (ctx.cr6.eq) goto loc_823988B8;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x82398848;
	sub_8233E820(ctx, base);
	// lbz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398868
	if (ctx.cr6.eq) goto loc_82398868;
loc_82398854:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8233e370
	ctx.lr = 0x8239885C;
	sub_8233E370(ctx, base);
	// lbz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398854
	if (!ctx.cr6.eq) goto loc_82398854;
loc_82398868:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82398878;
	sub_82340E38(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,64(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 64);
	// lwz r19,72(r24)
	r19.u64 = REX_LOAD_U32(r24.u32 + 72);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// lwz r10,68(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 68);
	// stw r10,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// lwz r9,76(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 76);
	// stw r9,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r9.u32);
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 80);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,80(r24)
	REX_STORE_U32(r24.u32 + 80, ctx.r8.u32);
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// stw r24,340(r31)
	REX_STORE_U32(r31.u32 + 340, r24.u32);
	// b 0x823989a8
	goto loc_823989A8;
loc_823988B8:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// mr r19,r20
	r19.u64 = r20.u64;
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x823989a8
	if (ctx.cr6.lt) goto loc_823989A8;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,348
	ctx.r6.s64 = 348;
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823988E8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82398904
	if (ctx.cr6.eq) goto loc_82398904;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r20,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r20.u32);
	// b 0x82398908
	goto loc_82398908;
loc_82398904:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82398908:
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r20,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r20.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r20,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r20.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, r20.u32);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, r20.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, r20.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x823ef2f8
	ctx.lr = 0x82398968;
	sub_823EF2F8(ctx, base);
	// lwz r6,276(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmpw cr6,r22,r6
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82398994
	if (ctx.cr6.eq) goto loc_82398994;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, r20.u32);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r20.u32);
	// lwz r8,340(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r20,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, r20.u32);
loc_82398994:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stb r14,84(r11)
	REX_STORE_U8(ctx.r11.u32 + 84, r14.u8);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x823989A8;
	sub_8233E820(ctx, base);
loc_823989A8:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398a20
	if (!ctx.cr6.eq) goto loc_82398A20;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398a20
	if (!ctx.cr6.eq) goto loc_82398A20;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82398a0c
	if (ctx.cr6.eq) goto loc_82398A0C;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82330e40
	ctx.lr = 0x823989EC;
	sub_82330E40(ctx, base);
	// stw r3,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82398a20
	if (!ctx.cr6.eq) goto loc_82398A20;
loc_823989F8:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82398A0C:
	// li r6,392
	ctx.r6.s64 = 392;
	// bl 0x82330e40
	ctx.lr = 0x82398A14;
	sub_82330E40(ctx, base);
	// stw r3,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82398b3c
	if (ctx.cr6.eq) goto loc_82398B3C;
loc_82398A20:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x82398aec
	if (!ctx.cr6.eq) goto loc_82398AEC;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 280);
	// li r6,405
	ctx.r6.s64 = 405;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82398A44;
	sub_82330E40(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,280(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 280);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82340718
	ctx.lr = 0x82398A6C;
	sub_82340718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398aac
	if (ctx.cr6.eq) goto loc_82398AAC;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,414
	ctx.r6.s64 = 414;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82398A98;
	sub_82330D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82398AAC:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82398aec
	if (ctx.cr6.eq) goto loc_82398AEC;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,419
	ctx.r6.s64 = 419;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82398AD8;
	sub_82330D00(ctx, base);
loc_82398AD8:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82398AEC:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398b50
	if (!ctx.cr6.eq) goto loc_82398B50;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,430
	ctx.r6.s64 = 430;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82398B14;
	sub_82330E40(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82398b50
	if (!ctx.cr6.eq) goto loc_82398B50;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,433
	ctx.r6.s64 = 433;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82398B3C;
	sub_82330D00(ctx, base);
loc_82398B3C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82398B50:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82398b98
	if (!ctx.cr6.eq) goto loc_82398B98;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398b98
	if (ctx.cr6.eq) goto loc_82398B98;
	// stw r19,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r19.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82398b98
	if (!ctx.cr6.eq) goto loc_82398B98;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 324);
	// stw r8,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r8.u32);
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r6,76(r7)
	REX_STORE_U32(ctx.r7.u32 + 76, ctx.r6.u32);
loc_82398B98:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm r9,r23,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x60;
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// subfc r8,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= r27.u32;
	ctx.r8.u64 = ctx.r11.u64 - r27.u64;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
	// stw r20,328(r31)
	REX_STORE_U32(r31.u32 + 328, r20.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82398bf0
	if (ctx.cr6.eq) goto loc_82398BF0;
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398bf0
	if (!ctx.cr6.eq) goto loc_82398BF0;
	// rlwinm r23,r23,0,27,24
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// stw r23,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, r23.u32);
loc_82398BF0:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82398c18
	if (ctx.cr6.eq) goto loc_82398C18;
	// lwz r10,248(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r9,r10,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82398c18
	if (!ctx.cr6.eq) goto loc_82398C18;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_82398C18:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r29,r20
	r29.u64 = r20.u64;
	// stw r23,380(r31)
	REX_STORE_U32(r31.u32 + 380, r23.u32);
	// mr r26,r20
	r26.u64 = r20.u64;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// mr r25,r20
	r25.u64 = r20.u64;
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r20.u32);
	// li r15,64
	r15.s64 = 64;
	// stw r20,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r20.u32);
	// ori r17,r10,65535
	r17.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239951c
	if (!ctx.cr6.gt) goto loc_8239951C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3744);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82398C5C:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82398cd4
	if (ctx.cr6.eq) goto loc_82398CD4;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398cd4
	if (ctx.cr6.eq) goto loc_82398CD4;
	// lwz r7,40(r16)
	ctx.r7.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82398cd4
	if (ctx.cr6.eq) goto loc_82398CD4;
	// lwz r10,32(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82398cd4
	if (!ctx.cr6.eq) goto loc_82398CD4;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82398cc4
	if (!ctx.cr6.gt) goto loc_82398CC4;
	// lwz r8,276(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 276);
loc_82398C9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8239959c
	if (!ctx.cr6.lt) goto loc_8239959C;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// beq cr6,0x82398cc4
	if (ctx.cr6.eq) goto loc_82398CC4;
	// lwz r10,40(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82398c9c
	if (ctx.cr6.lt) goto loc_82398C9C;
loc_82398CC4:
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 & ctx.r6.u64;
loc_82398CD4:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398f08
	if (ctx.cr6.eq) goto loc_82398F08;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82398f08
	if (ctx.cr6.eq) goto loc_82398F08;
	// clrlwi r28,r6,24
	r28.u64 = ctx.r6.u32 & 0xFF;
	// add r11,r29,r19
	ctx.r11.u64 = r29.u64 + r19.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82398d10
	if (ctx.cr6.eq) goto loc_82398D10;
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 324);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r8,332(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 332);
	// stwx r27,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r27.u32);
loc_82398D10:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82398d24
	if (ctx.cr6.eq) goto loc_82398D24;
	// lwz r10,80(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82398d6c
	if (!ctx.cr6.eq) goto loc_82398D6C;
loc_82398D24:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r9,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r3,r8,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r9,r6,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82398D6C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r8,328(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r10,r9,31
	ctx.r10.s64 = ctx.r9.s64 + 31;
	// lwz r7,244(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// lhz r10,62(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 62);
	// add r27,r9,r27
	r27.u64 = ctx.r9.u64 + r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stw r10,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r10.u32);
	// beq cr6,0x82398db4
	if (ctx.cr6.eq) goto loc_82398DB4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823995b0
	if (ctx.cr6.gt) goto loc_823995B0;
loc_82398DB4:
	// lwz r10,48(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// rlwinm r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82398e30
	if (ctx.cr6.eq) goto loc_82398E30;
	// lwz r10,92(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82398e24
	if (ctx.cr6.eq) goto loc_82398E24;
	// lwz r10,72(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82398e08
	if (ctx.cr6.eq) goto loc_82398E08;
	// addi r11,r11,32767
	ctx.r11.s64 = ctx.r11.s64 + 32767;
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// b 0x82398eac
	goto loc_82398EAC;
loc_82398E08:
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// b 0x82398eac
	goto loc_82398EAC;
loc_82398E24:
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// b 0x82398eac
	goto loc_82398EAC;
loc_82398E30:
	// rlwinm r11,r10,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398e7c
	if (ctx.cr6.eq) goto loc_82398E7C;
	// lhz r11,62(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 62);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82398e4c
	if (!ctx.cr6.lt) goto loc_82398E4C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82398E4C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r15,228(r31)
	REX_STORE_U32(r31.u32 + 228, r15.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r10.u32);
	// lhz r11,62(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 62);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82398e70
	if (!ctx.cr6.lt) goto loc_82398E70;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82398E70:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// b 0x82398eac
	goto loc_82398EAC;
loc_82398E7C:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398e94
	if (!ctx.cr6.eq) goto loc_82398E94;
	// rlwinm r11,r10,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398eac
	if (ctx.cr6.eq) goto loc_82398EAC;
loc_82398E94:
	// lhz r11,62(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 62);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82398eac
	if (!ctx.cr6.gt) goto loc_82398EAC;
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823995b0
	if (ctx.cr6.eq) goto loc_823995B0;
loc_82398EAC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823994f8
	if (ctx.cr6.eq) goto loc_823994F8;
	// lwz r11,92(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823994f8
	if (ctx.cr6.eq) goto loc_823994F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82398ed8
	if (!ctx.cr6.eq) goto loc_82398ED8;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// b 0x823994f8
	goto loc_823994F8;
loc_82398ED8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82398ef0
	if (!ctx.cr6.eq) goto loc_82398EF0;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// b 0x823994f8
	goto loc_823994F8;
loc_82398EF0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823994f8
	if (!ctx.cr6.eq) goto loc_823994F8;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// b 0x823994f8
	goto loc_823994F8;
loc_82398F08:
	// add r30,r29,r19
	r30.u64 = r29.u64 + r19.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// bne cr6,0x82398f1c
	if (!ctx.cr6.eq) goto loc_82398F1C;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
loc_82398F1C:
	// clrlwi r28,r6,24
	r28.u64 = ctx.r6.u32 & 0xFF;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82398f78
	if (ctx.cr6.eq) goto loc_82398F78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398f40
	if (!ctx.cr6.eq) goto loc_82398F40;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
loc_82398F40:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398f5c
	if (ctx.cr6.eq) goto loc_82398F5C;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r27.u32);
	// b 0x82398f78
	goto loc_82398F78;
loc_82398F5C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82398ad8
	if (ctx.cr6.eq) goto loc_82398AD8;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82398F78:
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823ef2f8
	ctx.lr = 0x82398F88;
	sub_823EF2F8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82398f9c
	if (ctx.cr6.eq) goto loc_82398F9C;
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239928c
	if (!ctx.cr6.eq) goto loc_8239928C;
loc_82398F9C:
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lbz r21,240(r1)
	r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 240);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r8,220(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// rlwimi r30,r11,16,16,31
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (r30.u64 & 0xFFFFFFFFFFFF0000);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// rlwimi r29,r11,16,0,15
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 176);
	// lwz r9,216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// rlwinm r27,r11,8,16,23
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// lwz r6,228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r26,r11,24,8,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lhz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 232);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// sth r27,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r27.u16);
	// rlwinm r23,r11,8,16,23
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, r26.u16);
	// rlwinm r22,r11,24,8,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lhz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 236);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stb r21,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r21.u8);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lhz r3,234(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 234);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// rlwimi r25,r10,16,0,15
	r25.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r25.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r31,254(r1)
	r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 254);
	// rlwimi r28,r10,16,16,31
	r28.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (r28.u64 & 0xFFFFFFFFFFFF0000);
	// sth r23,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r23.u16);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// rlwimi r27,r8,16,16,31
	r27.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF) | (r27.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwimi r26,r8,16,0,15
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (r26.u64 & 0xFFFFFFFF0000FFFF);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// sth r10,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// rlwimi r18,r7,16,16,31
	r18.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF) | (r18.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r17,r7,16,0,15
	r17.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (r17.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r30,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xFFFF;
	// rlwimi r24,r9,16,16,31
	r24.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (r24.u64 & 0xFFFFFFFFFFFF0000);
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// rlwinm r7,r28,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0xFFFF;
	// rlwimi r21,r6,16,16,31
	r21.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF) | (r21.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r16,r6,16,0,15
	r16.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (r16.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// extsh r15,r3
	r15.s64 = ctx.r3.s16;
	// rlwinm r6,r25,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0xFFFF0000;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r6,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// rlwimi r20,r4,16,0,15
	r20.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (r20.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r19,r9,16,0,15
	r19.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (r19.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r24,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsh r23,r31
	r23.s64 = r31.s16;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// rlwinm r9,r15,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 8) & 0xFFFFFF00;
	// sth r11,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// rlwinm r7,r4,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// lhz r11,238(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 238);
	// rlwimi r14,r5,16,16,31
	r14.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF) | (r14.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r5,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r29,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r6,r23,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r20,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r29,r27,24,16,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r19,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r27,r26,8,0,15
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r25,r18,24,16,31
	r25.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 24) & 0xFFFF;
	// rlwinm r24,r17,8,0,15
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r23,r21,24,16,31
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 24) & 0xFFFF;
	// rlwinm r20,r16,8,0,15
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFF0000;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r3,r3,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r19,r11,8,16,23
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// lbz r16,82(r1)
	r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// rlwinm r17,r11,24,8,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lhz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 252);
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// lwz r26,136(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r15,r14,24,16,31
	r15.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 24) & 0xFFFF;
	// lbz r30,244(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 244);
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// lhz r21,84(r1)
	r21.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r14,r11,24,8,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// sth r5,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r5.u16);
	// sth r14,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r14.u16);
	// rlwinm r18,r11,24,16,23
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// lwz r14,148(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// or r20,r23,r20
	r20.u64 = r23.u64 | r20.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwimi r28,r11,16,0,15
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r28.u64 & 0xFFFFFFFF0000FFFF);
	// stw r18,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r18.u32);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r18,156(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r28,r28,8,0,15
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFF0000;
	// lhz r23,90(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// or r29,r29,r27
	r29.u64 = r29.u64 | r27.u64;
	// lhz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// or r27,r25,r24
	r27.u64 = r25.u64 | r24.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// or r4,r26,r4
	ctx.r4.u64 = r26.u64 | ctx.r4.u64;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | r23.u64;
	// stw r27,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// std r18,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r18.u64);
	// or r23,r19,r17
	r23.u64 = r19.u64 | r17.u64;
	// lhz r5,86(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r31,r31,24,8,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFF;
	// sth r21,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, r21.u16);
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | r14.u64;
	// stw r4,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// or r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lhz r25,88(r1)
	r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// or r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 | r16.u64;
	// sth r23,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r23.u16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// or r25,r25,r22
	r25.u64 = r25.u64 | r22.u64;
	// sth r31,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, r31.u16);
	// lwz r21,164(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// sth r25,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, r25.u16);
	// lwz r26,124(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r22,104(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r18,152(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,128(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// or r28,r28,r18
	r28.u64 = r28.u64 | r18.u64;
	// lwz r19,116(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r16,468(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stw r28,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// lwz r17,152(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r18,160(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r30,168(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r29,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// or r18,r17,r18
	r18.u64 = r17.u64 | r18.u64;
	// lhz r17,86(r1)
	r17.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// or r11,r15,r8
	ctx.r11.u64 = r15.u64 | ctx.r8.u64;
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// or r5,r17,r5
	ctx.r5.u64 = r17.u64 | ctx.r5.u64;
	// lwz r23,460(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r31,452(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// stw r20,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r20.u32);
	// lhz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// ori r17,r10,65535
	r17.u64 = ctx.r10.u64 | 65535;
	// sth r9,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// li r15,64
	r15.s64 = 64;
	// sth r3,234(r1)
	REX_STORE_U16(ctx.r1.u32 + 234, ctx.r3.u16);
	// li r14,1
	r14.s64 = 1;
	// lhz r3,90(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// lhz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// sth r8,232(r1)
	REX_STORE_U16(ctx.r1.u32 + 232, ctx.r8.u16);
	// lhz r20,82(r1)
	r20.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// stw r18,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r18.u32);
	// or r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 | r20.u64;
	// ld r18,136(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// sth r3,238(r1)
	REX_STORE_U16(ctx.r1.u32 + 238, ctx.r3.u16);
	// li r20,0
	r20.s64 = 0;
	// sth r5,176(r1)
	REX_STORE_U16(ctx.r1.u32 + 176, ctx.r5.u16);
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r4,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lhz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// sth r6,236(r1)
	REX_STORE_U16(ctx.r1.u32 + 236, ctx.r6.u16);
	// b 0x82399298
	goto loc_82399298;
loc_8239928C:
	// lhz r9,254(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 254);
	// lhz r8,252(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 252);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
loc_82399298:
	// lbz r10,178(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 178);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823992b4
	if (ctx.cr6.eq) goto loc_823992B4;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r7,r10,31
	ctx.r7.s64 = ctx.r10.s64 + 31;
	// rlwinm r7,r7,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x823992b8
	goto loc_823992B8;
loc_823992B4:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_823992B8:
	// lhz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 176);
	// add r27,r7,r27
	r27.u64 = ctx.r7.u64 + r27.u64;
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x823992dc
	if (!ctx.cr6.eq) goto loc_823992DC;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// blt cr6,0x823995c4
	if (ctx.cr6.lt) goto loc_823995C4;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// b 0x823992e0
	goto loc_823992E0;
loc_823992DC:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_823992E0:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r8,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f13,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// sth r10,252(r1)
	REX_STORE_U16(ctx.r1.u32 + 252, ctx.r10.u16);
	// sth r9,254(r1)
	REX_STORE_U16(ctx.r1.u32 + 254, ctx.r9.u16);
	// bne cr6,0x82399310
	if (!ctx.cr6.eq) goto loc_82399310;
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f30,244(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
loc_82399310:
	// rlwinm r11,r23,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399348
	if (ctx.cr6.eq) goto loc_82399348;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399348
	if (ctx.cr6.eq) goto loc_82399348;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r10,576
	ctx.r10.s64 = 576;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r8,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
loc_82399348:
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82399358;
	sub_823EF2F8(ctx, base);
	// lhz r11,62(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 62);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398ad8
	if (ctx.cr6.eq) goto loc_82398AD8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82399390
	if (ctx.cr6.eq) goto loc_82399390;
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lhz r9,62(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 62);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82399380
	if (ctx.cr6.eq) goto loc_82399380;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r14.u8);
loc_82399380:
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82399390
	if (!ctx.cr6.gt) goto loc_82399390;
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
loc_82399390:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823993b4
	if (ctx.cr6.eq) goto loc_823993B4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwz r9,1196(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823995b0
	if (ctx.cr6.gt) goto loc_823995B0;
loc_823993B4:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823993e0
	if (ctx.cr6.eq) goto loc_823993E0;
	// rlwinm r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823993e0
	if (!ctx.cr6.eq) goto loc_823993E0;
	// stb r14,352(r31)
	REX_STORE_U8(r31.u32 + 352, r14.u8);
loc_823993E0:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399430
	if (ctx.cr6.eq) goto loc_82399430;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82399400
	if (!ctx.cr6.lt) goto loc_82399400;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82399400:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stw r15,228(r31)
	REX_STORE_U32(r31.u32 + 228, r15.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r9.u32);
	// bge cr6,0x82399424
	if (!ctx.cr6.lt) goto loc_82399424;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82399424:
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// b 0x82399460
	goto loc_82399460;
loc_82399430:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82399448
	if (!ctx.cr6.eq) goto loc_82399448;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399460
	if (ctx.cr6.eq) goto loc_82399460;
loc_82399448:
	// lhz r11,62(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 62);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82399460
	if (!ctx.cr6.gt) goto loc_82399460;
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823995b0
	if (ctx.cr6.eq) goto loc_823995B0;
loc_82399460:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823994a8
	if (ctx.cr6.eq) goto loc_823994A8;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239948c
	if (ctx.cr6.eq) goto loc_8239948C;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// rlwimi r11,r10,19,19,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// rlwimi r11,r14,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x823994a4
	goto loc_823994A4;
loc_8239948C:
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823994a8
	if (ctx.cr6.eq) goto loc_823994A8;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// rlwimi r11,r10,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// rlwimi r11,r14,13,11,11
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 13) & 0x100000) | (ctx.r11.u64 & 0xFFFFFFFFFFEFFFFF);
loc_823994A4:
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_823994A8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823994f8
	if (ctx.cr6.eq) goto loc_823994F8;
	// lwz r11,92(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823994f8
	if (ctx.cr6.eq) goto loc_823994F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823994d0
	if (!ctx.cr6.eq) goto loc_823994D0;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// b 0x823994f4
	goto loc_823994F4;
loc_823994D0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823994e4
	if (!ctx.cr6.eq) goto loc_823994E4;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// b 0x823994f4
	goto loc_823994F4;
loc_823994E4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823994f8
	if (!ctx.cr6.eq) goto loc_823994F8;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
loc_823994F4:
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_823994F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82399508
	if (ctx.cr6.eq) goto loc_82399508;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
loc_82399508:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82398c5c
	if (ctx.cr6.lt) goto loc_82398C5C;
loc_8239951C:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823999e4
	if (ctx.cr6.eq) goto loc_823999E4;
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82399560
	if (!ctx.cr6.eq) goto loc_82399560;
	// rlwinm r11,r23,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82399560
	if (!ctx.cr6.eq) goto loc_82399560;
	// rlwinm r11,r23,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399564
	if (ctx.cr6.eq) goto loc_82399564;
loc_82399560:
	// stb r14,352(r31)
	REX_STORE_U8(r31.u32 + 352, r14.u8);
loc_82399564:
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823996f0
	if (ctx.cr6.eq) goto loc_823996F0;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,988
	ctx.r6.s64 = 988;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239958C;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823995d8
	if (ctx.cr6.eq) goto loc_823995D8;
	// bl 0x823576f0
	ctx.lr = 0x82399598;
	sub_823576F0(ctx, base);
	// b 0x823995dc
	goto loc_823995DC;
loc_8239959C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_823995B0:
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_823995C4:
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_823995D8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_823995DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// bl 0x82379ef8
	ctx.lr = 0x823995EC;
	sub_82379EF8(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82399600;
	sub_823EF2F8(ctx, base);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,116(r9)
	REX_STORE_U32(ctx.r9.u32 + 116, ctx.r10.u32);
	// li r6,998
	ctx.r6.s64 = 998;
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r8,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r8.u32);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399638;
	sub_82330E40(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,264(r8)
	REX_STORE_U32(ctx.r8.u32 + 264, ctx.r9.u32);
	// lwz r7,328(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r6,72(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82399694
	if (!ctx.cr6.eq) goto loc_82399694;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82399694
	if (ctx.cr6.gt) goto loc_82399694;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x823996a4
	goto loc_823996A4;
loc_82399694:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_823996A4:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823996c0
	if (ctx.cr6.eq) goto loc_823996C0;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
loc_823996C0:
	// rlwinm r11,r23,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 348);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x823785b8
	ctx.lr = 0x823996E4;
	sub_823785B8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
loc_823996F0:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x823ef2f8
	ctx.lr = 0x82399704;
	sub_823EF2F8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// beq cr6,0x823999d4
	if (ctx.cr6.eq) goto loc_823999D4;
	// stb r14,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, r14.u8);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stb r14,261(r31)
	REX_STORE_U8(r31.u32 + 261, r14.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1045
	ctx.r6.s64 = 1045;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399758;
	sub_82330E40(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823999cc
	if (!ctx.cr6.gt) goto loc_823999CC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82399780:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399898
	if (ctx.cr6.eq) goto loc_82399898;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82399898
	if (ctx.cr6.eq) goto loc_82399898;
	// add r30,r29,r19
	r30.u64 = r29.u64 + r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823ef2f8
	ctx.lr = 0x823997AC;
	sub_823EF2F8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r30,24
	ctx.r9.s64 = r30.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r10,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823997e8
	if (ctx.cr6.eq) goto loc_823997E8;
	// lwz r10,80(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82399830
	if (!ctx.cr6.eq) goto loc_82399830;
loc_823997E8:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addze. r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82399830
	if (!ctx.cr0.gt) goto loc_82399830;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823997FC:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r6,8,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823997fc
	if (ctx.cr6.lt) goto loc_823997FC;
loc_82399830:
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(r28.s32, r22.s32, ctx.xer);
	// bge cr6,0x8239983c
	if (!ctx.cr6.lt) goto loc_8239983C;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_8239983C:
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82399890
	if (ctx.cr6.eq) goto loc_82399890;
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x82399878
	if (ctx.cr6.eq) goto loc_82399878;
	// addi r10,r10,32767
	ctx.r10.s64 = ctx.r10.s64 + 32767;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82399958
	goto loc_82399958;
loc_82399878:
	// addi r10,r10,2047
	ctx.r10.s64 = ctx.r10.s64 + 2047;
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82399958
	goto loc_82399958;
loc_82399890:
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// b 0x82399958
	goto loc_82399958;
loc_82399898:
	// add r30,r29,r19
	r30.u64 = r29.u64 + r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823ef2f8
	ctx.lr = 0x823998AC;
	sub_823EF2F8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r30,96
	ctx.r9.s64 = r30.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r10,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823998e8
	if (ctx.cr6.eq) goto loc_823998E8;
	// lwz r10,80(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82399930
	if (!ctx.cr6.eq) goto loc_82399930;
loc_823998E8:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addze. r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82399930
	if (!ctx.cr0.gt) goto loc_82399930;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823998FC:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r6,8,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823998fc
	if (ctx.cr6.lt) goto loc_823998FC;
loc_82399930:
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(r28.s32, r22.s32, ctx.xer);
	// bge cr6,0x8239993c
	if (!ctx.cr6.lt) goto loc_8239993C;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_8239993C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82399954
	if (!ctx.cr6.eq) goto loc_82399954;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// blt cr6,0x823995c4
	if (ctx.cr6.lt) goto loc_823995C4;
loc_82399954:
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_82399958:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823999b4
	if (ctx.cr6.eq) goto loc_823999B4;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823999b4
	if (ctx.cr6.eq) goto loc_823999B4;
	// lwz r9,40(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823999b4
	if (ctx.cr6.eq) goto loc_823999B4;
	// lwz r10,32(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823999b4
	if (!ctx.cr6.eq) goto loc_823999B4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823999bc
	if (!ctx.cr6.gt) goto loc_823999BC;
loc_82399990:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// beq cr6,0x823999b4
	if (ctx.cr6.eq) goto loc_823999B4;
	// lwz r9,40(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82399990
	if (ctx.cr6.lt) goto loc_82399990;
	// b 0x823999bc
	goto loc_823999BC;
loc_823999B4:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823999BC:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82399780
	if (ctx.cr6.lt) goto loc_82399780;
loc_823999CC:
	// stw r25,36(r31)
	REX_STORE_U32(r31.u32 + 36, r25.u32);
	// b 0x8239a088
	goto loc_8239A088;
loc_823999D4:
	// stb r20,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, r20.u8);
	// stb r20,261(r31)
	REX_STORE_U8(r31.u32 + 261, r20.u8);
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// b 0x8239a088
	goto loc_8239A088;
loc_823999E4:
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399ac4
	if (ctx.cr6.eq) goto loc_82399AC4;
	// rlwinm r11,r23,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399a00
	if (ctx.cr6.eq) goto loc_82399A00;
	// stb r14,360(r31)
	REX_STORE_U8(r31.u32 + 360, r14.u8);
loc_82399A00:
	// lbz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a088
	if (ctx.cr6.eq) goto loc_8239A088;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1218
	ctx.r6.s64 = 1218;
	// li r4,360
	ctx.r4.s64 = 360;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399A28;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399a38
	if (ctx.cr6.eq) goto loc_82399A38;
	// bl 0x823576f0
	ctx.lr = 0x82399A34;
	sub_823576F0(ctx, base);
	// b 0x82399a3c
	goto loc_82399A3C;
loc_82399A38:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82399A3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// bl 0x82395858
	ctx.lr = 0x82399A4C;
	sub_82395858(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82399A60;
	sub_823EF2F8(ctx, base);
	// lwz r9,356(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,116(r9)
	REX_STORE_U32(ctx.r9.u32 + 116, ctx.r10.u32);
	// li r6,1228
	ctx.r6.s64 = 1228;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 356);
	// stw r3,256(r8)
	REX_STORE_U32(ctx.r8.u32 + 256, ctx.r3.u32);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399A98;
	sub_82330E40(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r10,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// b 0x8239a088
	goto loc_8239A088;
loc_82399AC4:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399da8
	if (ctx.cr6.eq) goto loc_82399DA8;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1251
	ctx.r6.s64 = 1251;
	// li r4,292
	ctx.r4.s64 = 292;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399AEC;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399afc
	if (ctx.cr6.eq) goto loc_82399AFC;
	// bl 0x823576f0
	ctx.lr = 0x82399AF8;
	sub_823576F0(ctx, base);
	// b 0x82399b00
	goto loc_82399B00;
loc_82399AFC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82399B00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r3.u32);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// lis r30,-32124
	r30.s64 = -2105278464;
	// lbz r11,-5524(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -5524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82399b28
	if (!ctx.cr6.eq) goto loc_82399B28;
	// bl 0x82377218
	ctx.lr = 0x82399B20;
	sub_82377218(ctx, base);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// stb r14,-5524(r30)
	REX_STORE_U8(r30.u32 + -5524, r14.u8);
loc_82399B28:
	// bl 0x823784f8
	ctx.lr = 0x82399B2C;
	sub_823784F8(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82399B40;
	sub_823EF2F8(ctx, base);
	// lwz r9,364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,116(r9)
	REX_STORE_U32(ctx.r9.u32 + 116, ctx.r10.u32);
	// li r6,1267
	ctx.r6.s64 = 1267;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r8,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r8.u32);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399B78;
	sub_82330E40(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// li r11,1152
	ctx.r11.s64 = 1152;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r11,228(r8)
	REX_STORE_U32(ctx.r8.u32 + 228, ctx.r11.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82399bc0
	if (!ctx.cr6.lt) goto loc_82399BC0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82399BC0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 364);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,232(r9)
	REX_STORE_U32(ctx.r9.u32 + 232, ctx.r7.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82399be4
	if (!ctx.cr6.lt) goto loc_82399BE4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82399BE4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 364);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,280(r9)
	REX_STORE_U32(ctx.r9.u32 + 280, ctx.r7.u32);
	// lwz r6,364(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r20,288(r6)
	REX_STORE_U32(ctx.r6.u32 + 288, r20.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// stw r4,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r4.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399c30
	if (ctx.cr6.eq) goto loc_82399C30;
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// b 0x82399c48
	goto loc_82399C48;
loc_82399C30:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399c4c
	if (ctx.cr6.eq) goto loc_82399C4C;
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
loc_82399C48:
	// stw r9,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
loc_82399C4C:
	// rlwinm r11,r23,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a088
	if (!ctx.cr6.eq) goto loc_8239A088;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x82399c68
	if (ctx.cr6.gt) goto loc_82399C68;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_82399C68:
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mulli r10,r10,18732
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(18732));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1292
	ctx.r6.s64 = 1292;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x82330e40
	ctx.lr = 0x82399C88;
	sub_82330E40(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r3,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r3.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r9.u32);
	// li r6,1299
	ctx.r6.s64 = 1299;
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r10,232(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 232);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x82330e40
	ctx.lr = 0x82399CD0;
	sub_82330E40(ctx, base);
	// lwz r7,364(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r3,284(r7)
	REX_STORE_U32(ctx.r7.u32 + 284, ctx.r3.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r9,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r9.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82399d08
	if (!ctx.cr6.gt) goto loc_82399D08;
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r11,288(r10)
	REX_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
loc_82399D08:
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x823c1f10
	ctx.lr = 0x82399D10;
	sub_823C1F10(ctx, base);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82399D1C:
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x82399d2c
	if (ctx.cr6.gt) goto loc_82399D2C;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_82399D2C:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8239a088
	if (!ctx.cr6.lt) goto loc_8239A088;
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,264(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r20,18728(r7)
	REX_STORE_U8(ctx.r7.u32 + 18728, r20.u8);
	// lwz r6,364(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,264(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 264);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r20,18729(r5)
	REX_STORE_U8(ctx.r5.u32 + 18729, r20.u8);
	// lwz r4,364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,264(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,18504(r3)
	REX_STORE_U32(ctx.r3.u32 + 18504, ctx.r8.u32);
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,264(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r14,18596(r7)
	REX_STORE_U32(ctx.r7.u32 + 18596, r14.u32);
	// lwz r6,364(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,264(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 264);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,18616(r5)
	REX_STORE_U32(ctx.r5.u32 + 18616, r20.u32);
	// lwz r4,364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,264(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r10,4623
	ctx.r3.s64 = ctx.r10.s64 + 4623;
	// addi r11,r11,18732
	ctx.r11.s64 = ctx.r11.s64 + 18732;
	// rlwinm r7,r3,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r7,9280(r10)
	REX_STORE_U32(ctx.r10.u32 + 9280, ctx.r7.u32);
	// b 0x82399d1c
	goto loc_82399D1C;
loc_82399DA8:
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399e84
	if (ctx.cr6.eq) goto loc_82399E84;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1354
	ctx.r6.s64 = 1354;
	// li r4,744
	ctx.r4.s64 = 744;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399DD0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399de0
	if (ctx.cr6.eq) goto loc_82399DE0;
	// bl 0x823576f0
	ctx.lr = 0x82399DDC;
	sub_823576F0(ctx, base);
	// b 0x82399de4
	goto loc_82399DE4;
loc_82399DE0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82399DE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r3.u32);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// mulli r9,r11,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// mulli r8,r11,56
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// stw r8,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r8.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bl 0x82395fe0
	ctx.lr = 0x82399E0C;
	sub_82395FE0(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 368);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82399E20;
	sub_823EF2F8(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r3,r7,19136
	ctx.r3.s64 = ctx.r7.s64 + 19136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// li r6,1367
	ctx.r6.s64 = 1367;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r9,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r9.u32);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399E58;
	sub_82330E40(ctx, base);
	// lwz r8,368(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 368);
	// stw r3,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r3.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r10,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// b 0x8239a088
	goto loc_8239A088;
loc_82399E84:
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a088
	if (ctx.cr6.eq) goto loc_8239A088;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1388
	ctx.r6.s64 = 1388;
	// li r4,604
	ctx.r4.s64 = 604;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399EAC;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399ebc
	if (ctx.cr6.eq) goto loc_82399EBC;
	// bl 0x823576f0
	ctx.lr = 0x82399EB8;
	sub_823576F0(ctx, base);
	// b 0x82399ec0
	goto loc_82399EC0;
loc_82399EBC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82399EC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399f04
	if (ctx.cr6.eq) goto loc_82399F04;
	// bl 0x82374700
	ctx.lr = 0x82399EDC;
	sub_82374700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
loc_82399EE4:
	// bl 0x82374788
	ctx.lr = 0x82399EE8;
	sub_82374788(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399f20
	if (ctx.cr6.eq) goto loc_82399F20;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82399F04:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82399ee4
	if (!ctx.cr6.lt) goto loc_82399EE4;
	// bl 0x82374700
	ctx.lr = 0x82399F14;
	sub_82374700(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
loc_82399F20:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x823ef2f8
	ctx.lr = 0x82399F34;
	sub_823EF2F8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bl 0x82374810
	ctx.lr = 0x82399F5C;
	sub_82374810(ctx, base);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8239a698
	if (!ctx.cr6.eq) goto loc_8239A698;
	// bl 0x82374db8
	ctx.lr = 0x82399F6C;
	sub_82374DB8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82399F80;
	sub_823EF2F8(ctx, base);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,116(r9)
	REX_STORE_U32(ctx.r9.u32 + 116, ctx.r10.u32);
	// li r6,1462
	ctx.r6.s64 = 1462;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r8,372(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stw r3,256(r8)
	REX_STORE_U32(ctx.r8.u32 + 256, ctx.r3.u32);
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82399FB8;
	sub_82330E40(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// li r11,512
	ctx.r11.s64 = 512;
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r11,228(r10)
	REX_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82399ff4
	if (!ctx.cr6.lt) goto loc_82399FF4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82399FF4:
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r8,r23,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,232(r10)
	REX_STORE_U32(ctx.r10.u32 + 232, ctx.r9.u32);
	// lwz r7,376(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwz r6,372(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r5,r7,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// stw r5,600(r6)
	REX_STORE_U32(ctx.r6.u32 + 600, ctx.r5.u32);
	// bne cr6,0x8239a088
	if (!ctx.cr6.eq) goto loc_8239A088;
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1476
	ctx.r6.s64 = 1476;
	// lwz r10,232(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x82330e40
	ctx.lr = 0x8239A040;
	sub_82330E40(ctx, base);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stw r3,224(r9)
	REX_STORE_U32(ctx.r9.u32 + 224, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r9,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r9.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwz r3,372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 372);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82374868
	ctx.lr = 0x8239A07C;
	sub_82374868(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
loc_8239A088:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a098
	if (ctx.cr6.eq) goto loc_8239A098;
	// stb r20,84(r11)
	REX_STORE_U8(ctx.r11.u32 + 84, r20.u8);
loc_8239A098:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239a254
	if (!ctx.cr6.eq) goto loc_8239A254;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r26,80
	r26.s64 = 80;
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239a254
	if (!ctx.cr6.gt) goto loc_8239A254;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r24,r20
	r24.u64 = r20.u64;
	// addi r22,r11,20344
	r22.s64 = ctx.r11.s64 + 20344;
loc_8239A0D0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8239a254
	if (!ctx.cr6.lt) goto loc_8239A254;
	// mr r28,r14
	r28.u64 = r14.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8239a148
	if (ctx.cr6.eq) goto loc_8239A148;
	// lwz r10,36(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239a148
	if (ctx.cr6.eq) goto loc_8239A148;
	// lwz r9,40(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239a148
	if (ctx.cr6.eq) goto loc_8239A148;
	// lwz r11,32(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8239a148
	if (!ctx.cr6.eq) goto loc_8239A148;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239a138
	if (!ctx.cr6.gt) goto loc_8239A138;
loc_8239A118:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// beq cr6,0x8239a138
	if (ctx.cr6.eq) goto loc_8239A138;
	// lwz r8,40(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8239a118
	if (ctx.cr6.lt) goto loc_8239A118;
loc_8239A138:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r8,r28
	r28.u64 = ctx.r8.u64 & r28.u64;
loc_8239A148:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// add r30,r27,r19
	r30.u64 = r27.u64 + r19.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239a19c
	if (ctx.cr6.eq) goto loc_8239A19C;
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823ef2f8
	ctx.lr = 0x8239A174;
	sub_823EF2F8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r26,r11,96
	r26.s64 = ctx.r11.s64 + 96;
loc_8239A19C:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239a214
	if (ctx.cr6.eq) goto loc_8239A214;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a214
	if (ctx.cr6.eq) goto loc_8239A214;
	// add r29,r30,r26
	r29.u64 = r30.u64 + r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x8239A1CC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a214
	if (!ctx.cr6.eq) goto loc_8239A214;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a210
	if (!ctx.cr6.eq) goto loc_8239A210;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1576
	ctx.r6.s64 = 1576;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239A200;
	sub_82330E40(ctx, base);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
loc_8239A210:
	// stwx r29,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, r29.u32);
loc_8239A214:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8239a22c
	if (!ctx.cr6.eq) goto loc_8239A22C;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// blt cr6,0x823995c4
	if (ctx.cr6.lt) goto loc_823995C4;
loc_8239A22C:
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a244
	if (ctx.cr6.eq) goto loc_8239A244;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_8239A244:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239a0d0
	if (ctx.cr6.lt) goto loc_8239A0D0;
loc_8239A254:
	// lwz r11,460(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// rlwinm r30,r11,0,22,22
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239a2d4
	if (!ctx.cr6.eq) goto loc_8239A2D4;
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239a294
	if (ctx.cr6.eq) goto loc_8239A294;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1620
	ctx.r6.s64 = 1620;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239A288;
	sub_82330E40(ctx, base);
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
loc_8239A294:
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239a2d4
	if (ctx.cr6.eq) goto loc_8239A2D4;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1629
	ctx.r6.s64 = 1629;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239A2BC;
	sub_82330E40(ctx, base);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823989f8
	if (ctx.cr6.eq) goto loc_823989F8;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
loc_8239A2D4:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) goto loc_8239A314;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) goto loc_8239A314;
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) goto loc_8239A314;
	// lwz r9,32(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8239a314
	if (!ctx.cr6.eq) goto loc_8239A314;
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// stw r20,36(r16)
	REX_STORE_U32(r16.u32 + 36, r20.u32);
	// stw r20,40(r16)
	REX_STORE_U32(r16.u32 + 40, r20.u32);
loc_8239A314:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239a658
	if (ctx.cr6.eq) goto loc_8239A658;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a3f0
	if (ctx.cr6.eq) goto loc_8239A3F0;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x823995b0
	if (ctx.cr6.gt) goto loc_823995B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823968a0
	ctx.lr = 0x8239A344;
	sub_823968A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24008(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24008);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239a658
	if (!ctx.cr6.eq) goto loc_8239A658;
	// lwz r6,21652(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21652);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a364
	if (!ctx.cr6.eq) goto loc_8239A364;
	// li r6,32
	ctx.r6.s64 = 32;
loc_8239A364:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// bl 0x82355128
	ctx.lr = 0x8239A374;
	sub_82355128(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,24008(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24008);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239a658
	if (!ctx.cr6.gt) goto loc_8239A658;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8239A398:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,24012(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24012);
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r3,1216(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 1216);
	// stw r20,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r20.u32);
	// stw r20,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r20.u32);
	// bl 0x823785b8
	ctx.lr = 0x8239A3B8;
	sub_823785B8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,24008(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24008);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239a398
	if (ctx.cr6.lt) goto loc_8239A398;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8239A3F0:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a4d8
	if (ctx.cr6.eq) goto loc_8239A4D8;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x823995b0
	if (ctx.cr6.gt) goto loc_823995B0;
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lwz r9,356(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 356);
	// stw r20,212(r9)
	REX_STORE_U32(ctx.r9.u32 + 212, r20.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 356);
	// stw r15,312(r8)
	REX_STORE_U32(ctx.r8.u32 + 312, r15.u32);
	// lwz r7,356(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r5,32(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// bl 0x823968a0
	ctx.lr = 0x8239A434;
	sub_823968A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r6,23728(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a658
	if (!ctx.cr6.eq) goto loc_8239A658;
	// lwz r6,21648(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21648);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a454
	if (!ctx.cr6.eq) goto loc_8239A454;
	// li r6,32
	ctx.r6.s64 = 32;
loc_8239A454:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// bl 0x82355128
	ctx.lr = 0x8239A464;
	sub_82355128(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lwz r10,23728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239a658
	if (!ctx.cr6.gt) goto loc_8239A658;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// li r7,17
	ctx.r7.s64 = 17;
loc_8239A48C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,23732(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 23732);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,1216(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1216);
	// addi r8,r11,316
	ctx.r8.s64 = ctx.r11.s64 + 316;
	// stw r20,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, r20.u32);
	// stw r8,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r8.u32);
	// sth r7,316(r11)
	REX_STORE_U16(ctx.r11.u32 + 316, ctx.r7.u16);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,23728(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 23728);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8239a48c
	if (ctx.cr6.lt) goto loc_8239A48C;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8239A4D8:
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a5b4
	if (ctx.cr6.eq) goto loc_8239A5B4;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x823995b0
	if (ctx.cr6.gt) goto loc_823995B0;
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lwz r9,364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r8,212(r9)
	REX_STORE_U32(ctx.r9.u32 + 212, ctx.r8.u32);
	// lwz r7,364(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r5,32(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// bl 0x823968a0
	ctx.lr = 0x8239A518;
	sub_823968A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r6,23448(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 23448);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a658
	if (!ctx.cr6.eq) goto loc_8239A658;
	// lwz r6,21644(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21644);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a538
	if (!ctx.cr6.eq) goto loc_8239A538;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8239A538:
	// li r5,1152
	ctx.r5.s64 = 1152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// bl 0x82355128
	ctx.lr = 0x8239A548;
	sub_82355128(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,23448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239a658
	if (!ctx.cr6.gt) goto loc_8239A658;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8239A56C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,23452(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23452);
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r3,1216(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 1216);
	// stw r20,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r20.u32);
	// stw r20,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r20.u32);
	// bl 0x823c1f10
	ctx.lr = 0x8239A588;
	sub_823C1F10(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r7,23448(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 23448);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8239a56c
	if (ctx.cr6.lt) goto loc_8239A56C;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8239A5B4:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a658
	if (ctx.cr6.eq) goto loc_8239A658;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239a658
	if (!ctx.cr6.eq) goto loc_8239A658;
	// lwz r6,21656(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21656);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8239a5e0
	if (!ctx.cr6.eq) goto loc_8239A5E0;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8239A5E0:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// bl 0x82355128
	ctx.lr = 0x8239A5F0;
	sub_82355128(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,24288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239a658
	if (!ctx.cr6.gt) goto loc_8239A658;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8239A614:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,24292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24292);
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r3,1216(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 1216);
	// stw r20,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r20.u32);
	// stw r20,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r20.u32);
	// bl 0x82374868
	ctx.lr = 0x8239A634;
	sub_82374868(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,24288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24288);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239a614
	if (ctx.cr6.lt) goto loc_8239A614;
loc_8239A658:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8239A66C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20336
	ctx.r4.s64 = ctx.r11.s64 + 20336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x8239A680;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a698
	if (ctx.cr6.eq) goto loc_8239A698;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x8239A698;
	sub_82331620(ctx, base);
loc_8239A698:
	// li r3,25
	ctx.r3.s64 = 25;
loc_8239A69C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824A84E0) {
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
	ctx.lr = 0x824A84E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A8510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A852C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(r30.u32, 11, ctx.xer);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// bne cr6,0x824a854c
	if (!ctx.cr6.eq) goto loc_824A854C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824a857c
	if (!ctx.cr6.lt) goto loc_824A857C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a8570
	goto loc_824A8570;
loc_824A854C:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// bne cr6,0x824a8564
	if (!ctx.cr6.eq) goto loc_824A8564;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x824a857c
	if (!ctx.cr6.lt) goto loc_824A857C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824a8570
	goto loc_824A8570;
loc_824A8564:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// bne cr6,0x824a857c
	if (!ctx.cr6.eq) goto loc_824A857C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A8570:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a8584
	goto loc_824A8584;
loc_824A857C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824A8584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824ABF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824abff0
	if (ctx.cr6.eq) goto loc_824ABFF0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// subf r31,r4,r3
	r31.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r3,r11,-23888
	ctx.r3.s64 = ctx.r11.s64 + -23888;
loc_824ABF88:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824ABFA0:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824abfd0
	if (ctx.cr6.eq) goto loc_824ABFD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-1
	r30.s64 = -1;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_824ABFD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824abfa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ABFA0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824ac000
	if (!ctx.cr6.eq) goto loc_824AC000;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824abf88
	if (ctx.cr6.lt) goto loc_824ABF88;
loc_824ABFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824ABFF4:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824AC000:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824abff4
	goto loc_824ABFF4;
}

DEFINE_REX_FUNC(sub_824AFFE8) {
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
	ctx.lr = 0x824AFFF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x824b0024
	if (!ctx.cr6.gt) goto loc_824B0024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4500
	ctx.r5.s64 = 4500;
	// addi r6,r11,868
	ctx.r6.s64 = ctx.r11.s64 + 868;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824B001C;
	sub_82489C30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824b012c
	goto loc_824B012C;
loc_824B0024:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b0058
	if (ctx.cr6.eq) goto loc_824B0058;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824B0034:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b0034
	if (ctx.cr6.lt) goto loc_824B0034;
loc_824B0058:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b0128
	if (!ctx.cr6.gt) goto loc_824B0128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,792
	r27.s64 = ctx.r11.s64 + 792;
loc_824B0074:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b00f4
	if (ctx.cr6.eq) goto loc_824B00F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b00f4
	if (!ctx.cr6.gt) goto loc_824B00F4;
	// li r30,0
	r30.s64 = 0;
loc_824B00A0:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r10,111(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824b00dc
	if (!ctx.cr6.eq) goto loc_824B00DC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// li r5,4500
	ctx.r5.s64 = 4500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B00D8;
	sub_82489C30(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_824B00DC:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b00a0
	if (ctx.cr6.lt) goto loc_824B00A0;
loc_824B00F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aff28
	ctx.lr = 0x824B0104;
	sub_824AFF28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0124
	if (ctx.cr0.eq) goto loc_824B0124;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b0074
	if (ctx.cr6.lt) goto loc_824B0074;
	// b 0x824b0128
	goto loc_824B0128;
loc_824B0124:
	// li r25,1
	r25.s64 = 1;
loc_824B0128:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824B012C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824B9ED8) {
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
	ctx.lr = 0x824B9EE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// li r20,0
	r20.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r23,24(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r9,r9,r23
	ctx.r9.u64 = r23.u64 - ctx.r9.u64;
loc_824B9F18:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x824b9f34
	if (ctx.cr0.eq) goto loc_824B9F34;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x824b9f18
	if (!ctx.cr0.eq) goto loc_824B9F18;
loc_824B9F34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b9f40
	if (!ctx.cr6.eq) goto loc_824B9F40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824B9F40:
	// stb r20,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r20.u8);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x824b9f68
	goto loc_824B9F68;
loc_824B9F50:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x824B9F5C;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b9f70
	if (ctx.cr0.eq) goto loc_824B9F70;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_824B9F68:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824b9f50
	if (!ctx.cr0.eq) goto loc_824B9F50;
loc_824B9F70:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824b9f8c
	if (ctx.cr0.eq) goto loc_824B9F8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a08a0
	ctx.lr = 0x824B9F84;
	sub_826A08A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824b9f90
	goto loc_824B9F90;
loc_824B9F8C:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_824B9F90:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824b9fa4
	if (ctx.cr0.eq) goto loc_824B9FA4;
	// stb r20,0(r31)
	REX_STORE_U8(r31.u32 + 0, r20.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_824B9FA4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// b 0x824b9fbc
	goto loc_824B9FBC;
loc_824B9FAC:
	// bl 0x826a0820
	ctx.lr = 0x824B9FB0;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b9fc4
	if (ctx.cr0.eq) goto loc_824B9FC4;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_824B9FBC:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b9fac
	if (!ctx.cr0.eq) goto loc_824B9FAC;
loc_824B9FC4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r22,-1
	r22.s64 = -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824b9fdc
	if (ctx.cr0.eq) goto loc_824B9FDC;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x824b9fe8
	goto loc_824B9FE8;
loc_824B9FDC:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
loc_824B9FE8:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824ba030
	if (ctx.cr6.eq) goto loc_824BA030;
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// lbz r31,110(r26)
	r31.u64 = REX_LOAD_U8(r26.u32 + 110);
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bne cr6,0x824ba334
	if (!ctx.cr6.eq) goto loc_824BA334;
	// lwz r11,1100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// b 0x824ba24c
	goto loc_824BA24C;
loc_824BA030:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82478328
	ctx.lr = 0x824BA04C;
	sub_82478328(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ba268
	if (ctx.cr0.eq) goto loc_824BA268;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ba268
	if (!ctx.cr0.eq) goto loc_824BA268;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15800
	ctx.r4.s64 = ctx.r11.s64 + 15800;
	// bl 0x826a4a90
	ctx.lr = 0x824BA074;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba098
	if (!ctx.cr0.eq) goto loc_824BA098;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x824ba090
	if (!ctx.cr6.eq) goto loc_824BA090;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
loc_824BA090:
	// subfc r11,r11,r31
	ctx.xer.ca = r31.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// b 0x824ba118
	goto loc_824BA118;
loc_824BA098:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15852
	ctx.r4.s64 = ctx.r11.s64 + 15852;
	// bl 0x826a4a90
	ctx.lr = 0x824BA0A8;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba0c8
	if (!ctx.cr0.eq) goto loc_824BA0C8;
	// li r28,3
	r28.s64 = 3;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x824ba090
	if (!ctx.cr6.eq) goto loc_824BA090;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// b 0x824ba090
	goto loc_824BA090;
loc_824BA0C8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15908
	ctx.r4.s64 = ctx.r11.s64 + 15908;
	// bl 0x826a4a90
	ctx.lr = 0x824BA0D8;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ba110
	if (ctx.cr0.eq) goto loc_824BA110;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15796
	ctx.r4.s64 = ctx.r11.s64 + 15796;
	// bl 0x826a4a90
	ctx.lr = 0x824BA0F0;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ba110
	if (ctx.cr0.eq) goto loc_824BA110;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15864
	ctx.r4.s64 = ctx.r11.s64 + 15864;
	// bl 0x826a4a90
	ctx.lr = 0x824BA108;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba124
	if (!ctx.cr0.eq) goto loc_824BA124;
loc_824BA110:
	// subfc r11,r29,r31
	ctx.xer.ca = r31.u32 >= r29.u32;
	ctx.r11.u64 = r31.u64 - r29.u64;
	// li r28,4
	r28.s64 = 4;
loc_824BA118:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r30,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r30.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x824ba19c
	goto loc_824BA19C;
loc_824BA124:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3232
	ctx.r4.s64 = ctx.r11.s64 + 3232;
	// bl 0x826a4a90
	ctx.lr = 0x824BA134;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba15c
	if (!ctx.cr0.eq) goto loc_824BA15C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r29,r31
	ctx.xer.ca = r31.u32 >= r29.u32;
	ctx.r11.u64 = r31.u64 - r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// subfze. r30,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r30.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r24,r29
	r24.u64 = r29.u64;
	// bne 0x824ba19c
	if (!ctx.cr0.eq) goto loc_824BA19C;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x824ba19c
	goto loc_824BA19C;
loc_824BA15C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3220
	ctx.r4.s64 = ctx.r11.s64 + 3220;
	// bl 0x826a4a90
	ctx.lr = 0x824BA16C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba194
	if (!ctx.cr0.eq) goto loc_824BA194;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r29,r31
	ctx.xer.ca = r31.u32 >= r29.u32;
	ctx.r11.u64 = r31.u64 - r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// subfze. r30,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r30.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r24,r29
	r24.u64 = r29.u64;
	// bne 0x824ba19c
	if (!ctx.cr0.eq) goto loc_824BA19C;
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x824ba19c
	goto loc_824BA19C;
loc_824BA194:
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824BA19C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x824ba1b0
	if (ctx.cr6.eq) goto loc_824BA1B0;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ba218
	if (!ctx.cr6.eq) goto loc_824BA218;
loc_824BA1B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824ba1dc
	if (ctx.cr6.eq) goto loc_824BA1DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r6,r11,3192
	ctx.r6.s64 = ctx.r11.s64 + 3192;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824BA1D8;
	sub_82489C30(ctx, base);
	// b 0x824ba218
	goto loc_824BA218;
loc_824BA1DC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824ba218
	if (ctx.cr6.eq) goto loc_824BA218;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r11,-24040
	ctx.r11.s64 = ctx.r11.s64 + -24040;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,3132
	ctx.r6.s64 = ctx.r8.s64 + 3132;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r5,4705
	ctx.r5.s64 = 4705;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489ce8
	ctx.lr = 0x824BA218;
	sub_82489CE8(ctx, base);
loc_824BA218:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// beq cr6,0x824ba228
	if (ctx.cr6.eq) goto loc_824BA228;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824ba334
	if (ctx.cr6.eq) goto loc_824BA334;
loc_824BA228:
	// lwz r11,1100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ba334
	if (!ctx.cr6.eq) goto loc_824BA334;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824ba334
	if (!ctx.cr6.eq) goto loc_824BA334;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r6,r11,3092
	ctx.r6.s64 = ctx.r11.s64 + 3092;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_824BA24C:
	// stw r29,1100(r27)
	REX_STORE_U32(r27.u32 + 1100, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// bl 0x82489c30
	ctx.lr = 0x824BA260;
	sub_82489C30(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x824ba334
	goto loc_824BA334;
loc_824BA268:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ba434
	if (ctx.cr0.eq) goto loc_824BA434;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15800
	ctx.r4.s64 = ctx.r11.s64 + 15800;
	// bl 0x826a4a90
	ctx.lr = 0x824BA280;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba2a0
	if (!ctx.cr0.eq) goto loc_824BA2A0;
	// lwz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 72);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// subfc r11,r11,r31
	ctx.xer.ca = r31.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subfze r30,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r30.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x824ba2c8
	goto loc_824BA2C8;
loc_824BA2A0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15788
	ctx.r4.s64 = ctx.r11.s64 + 15788;
	// bl 0x826a4a90
	ctx.lr = 0x824BA2B0;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// bne 0x824ba2c4
	if (!ctx.cr0.eq) goto loc_824BA2C4;
	// li r28,4
	r28.s64 = 4;
	// b 0x824ba2d0
	goto loc_824BA2D0;
loc_824BA2C4:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_824BA2C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824ba304
	if (ctx.cr6.eq) goto loc_824BA304;
loc_824BA2D0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x824ba2e4
	if (ctx.cr6.eq) goto loc_824BA2E4;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ba304
	if (!ctx.cr6.eq) goto loc_824BA304;
loc_824BA2E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r6,r11,3192
	ctx.r6.s64 = ctx.r11.s64 + 3192;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824BA304;
	sub_82489C30(ctx, base);
loc_824BA304:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bne cr6,0x824ba334
	if (!ctx.cr6.eq) goto loc_824BA334;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r6,r11,3044
	ctx.r6.s64 = ctx.r11.s64 + 3044;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824BA334;
	sub_82489C30(ctx, base);
loc_824BA334:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// bne cr6,0x824ba400
	if (!ctx.cr6.eq) goto loc_824BA400;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ba3c0
	if (ctx.cr6.eq) goto loc_824BA3C0;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bge cr6,0x824ba3c0
	if (!ctx.cr6.lt) goto loc_824BA3C0;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824ba3c0
	if (!ctx.cr6.eq) goto loc_824BA3C0;
	// lhz r11,202(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bge cr6,0x824ba3c0
	if (!ctx.cr6.lt) goto loc_824BA3C0;
	// lwz r11,1088(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1088);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824ba390
	if (!ctx.cr6.eq) goto loc_824BA390;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,3036
	ctx.r4.s64 = ctx.r11.s64 + 3036;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,81
	ctx.r5.s64 = 81;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824786b8
	ctx.lr = 0x824BA38C;
	sub_824786B8(ctx, base);
	// stw r3,1088(r27)
	REX_STORE_U32(r27.u32 + 1088, ctx.r3.u32);
loc_824BA390:
	// lwz r11,1088(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1088);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824ba3a8
	if (!ctx.cr6.eq) goto loc_824BA3A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824ba460
	goto loc_824BA460;
loc_824BA3A8:
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// li r28,5
	r28.s64 = 5;
	// stw r20,12(r26)
	REX_STORE_U32(r26.u32 + 12, r20.u32);
	// stw r10,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r10.u32);
	// b 0x824ba438
	goto loc_824BA438;
loc_824BA3C0:
	// lwz r7,60(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 60);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824ba438
	if (ctx.cr6.lt) goto loc_824BA438;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
	// lwz r11,1100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
	// stw r29,1100(r27)
	REX_STORE_U32(r27.u32 + 1100, r29.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 104);
	// addi r6,r11,2960
	ctx.r6.s64 = ctx.r11.s64 + 2960;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824BA3FC;
	sub_82489C30(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824BA400:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x824ba42c
	if (!ctx.cr6.eq) goto loc_824BA42C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r10,r10,276
	ctx.r10.u64 = ctx.r10.u64 | 276;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lfd f13,3728(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// stfd f0,32(r26)
	REX_STORE_U64(r26.u32 + 32, ctx.f0.u64);
	// stfd f13,40(r26)
	REX_STORE_U64(r26.u32 + 40, ctx.f13.u64);
loc_824BA42C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824ba438
	if (!ctx.cr6.eq) goto loc_824BA438;
loc_824BA434:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824BA438:
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(r31.u32, 65535, ctx.xer);
	// ble cr6,0x824ba444
	if (!ctx.cr6.gt) goto loc_824BA444;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824BA444:
	// subfic r11,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r30.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// rlwimi r28,r31,8,0,23
	r28.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00) | (r28.u64 & 0xFFFFFFFF000000FF);
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r28,108(r26)
	REX_STORE_U32(r26.u32 + 108, r28.u32);
loc_824BA460:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824D7910) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x824d7300
	ctx.lr = 0x824D7934;
	sub_824D7300(ctx, base);
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

DEFINE_REX_FUNC(sub_824D7F30) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824d7f94
	if (ctx.cr6.lt) goto loc_824D7F94;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8269d1a8
	ctx.lr = 0x824D7F70;
	sub_8269D1A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824d7f88
	if (!ctx.cr0.lt) goto loc_824D7F88;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x824d7f94
	goto loc_824D7F94;
loc_824D7F88:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824D7F94:
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

DEFINE_REX_FUNC(sub_824D9680) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x824D9688;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d96b4
	if (!ctx.cr6.eq) goto loc_824D96B4;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d98f4
	if (ctx.cr6.eq) goto loc_824D98F4;
loc_824D96B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D96BC;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r18,r11,21744
	r18.s64 = ctx.r11.s64 + 21744;
	// addi r20,r10,28488
	r20.s64 = ctx.r10.s64 + 28488;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D96DC;
	sub_824EAC90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,21228
	r21.s64 = ctx.r11.s64 + 21228;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d9708
	if (ctx.cr6.eq) goto loc_824D9708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r11,17056
	ctx.r5.s64 = ctx.r11.s64 + 17056;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9708;
	sub_824EAC90(ctx, base);
loc_824D9708:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9710;
	sub_824D8700(ctx, base);
	// lwz r10,4(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 4);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d98e8
	if (!ctx.cr6.lt) goto loc_824D98E8;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f31,8388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8388);
	f31.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r4,28496
	r25.s64 = ctx.r4.s64 + 28496;
	// addi r28,r5,21240
	r28.s64 = ctx.r5.s64 + 21240;
	// addi r24,r6,23652
	r24.s64 = ctx.r6.s64 + 23652;
	// addi r23,r7,21308
	r23.s64 = ctx.r7.s64 + 21308;
	// addi r22,r8,21732
	r22.s64 = ctx.r8.s64 + 21732;
	// addi r27,r9,21356
	r27.s64 = ctx.r9.s64 + 21356;
	// addi r26,r10,21316
	r26.s64 = ctx.r10.s64 + 21316;
	// addi r29,r11,32040
	r29.s64 = ctx.r11.s64 + 32040;
loc_824D9774:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d98c8
	if (ctx.cr6.eq) goto loc_824D98C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9788;
	sub_824D7948(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9798;
	sub_824EAC90(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D97AC;
	sub_824EAC90(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824eac90
	ctx.lr = 0x824D97F4;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824d9844
	if (ctx.cr6.eq) goto loc_824D9844;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824eac90
	ctx.lr = 0x824D9844;
	sub_824EAC90(ctx, base);
loc_824D9844:
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x824d9860
	if (ctx.cr6.eq) goto loc_824D9860;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9860;
	sub_824EAC90(ctx, base);
loc_824D9860:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9874;
	sub_824EAC90(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d98c4
	if (ctx.cr6.eq) goto loc_824D98C4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D988C;
	sub_824EAC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D98B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7a18
	ctx.lr = 0x824D98C0;
	sub_824D7A18(ctx, base);
	// b 0x824d98c8
	goto loc_824D98C8;
loc_824D98C4:
	// bl 0x824d86b0
	ctx.lr = 0x824D98C8;
	sub_824D86B0(ctx, base);
loc_824D98C8:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9774
	if (ctx.cr6.lt) goto loc_824D9774;
loc_824D98E8:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D98F4;
	sub_824D79A8(ctx, base);
loc_824D98F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824E7848) {
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
	ctx.lr = 0x824E7850;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r14,r11,0,3,3
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7888
	if (!ctx.cr0.eq) goto loc_824E7888;
	// bl 0x826b40a0
	ctx.lr = 0x824E7888;
	sub_826B40A0(ctx, base);
loc_824E7888:
	// lwz r24,0(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r20,r31,4
	r20.s64 = r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r21,0
	r21.s64 = 0;
	// mr r15,r24
	r15.u64 = r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e78ac
	if (!ctx.cr6.eq) goto loc_824E78AC;
	// mr r29,r21
	r29.u64 = r21.u64;
	// b 0x824e78bc
	goto loc_824E78BC;
loc_824E78AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	r29.s64 = 1;
	// beq cr6,0x824e78bc
	if (ctx.cr6.eq) goto loc_824E78BC;
	// rlwinm r29,r24,10,31,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 10) & 0x1;
loc_824E78BC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r22,r11,512
	r22.u64 = ctx.r11.u64 | 512;
	// ori r18,r10,33
	r18.u64 = ctx.r10.u64 | 33;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x824e790c
	if (ctx.cr6.eq) goto loc_824E790C;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e78e4
	if (!ctx.cr0.eq) goto loc_824E78E4;
	// bl 0x826b40a0
	ctx.lr = 0x824E78E4;
	sub_826B40A0(ctx, base);
loc_824E78E4:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(r17.u32, r22.u32, ctx.xer);
	// bge cr6,0x824e78f0
	if (!ctx.cr6.lt) goto loc_824E78F0;
	// bl 0x826b40a0
	ctx.lr = 0x824E78F0;
	sub_826B40A0(ctx, base);
loc_824E78F0:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r16,0(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	r24.u64 = ctx.r11.u64 | r18.u64;
	// b 0x824e7910
	goto loc_824E7910;
loc_824E790C:
	// lwz r16,80(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E7910:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r25,r21
	r25.u64 = r21.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r28,r21
	r28.u64 = r21.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// beq 0x824e79a4
	if (ctx.cr0.eq) goto loc_824E79A4;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824E7930:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x824e793c
	if (ctx.cr6.lt) goto loc_824E793C;
	// bl 0x826b40a0
	ctx.lr = 0x824E793C;
	sub_826B40A0(ctx, base);
loc_824E793C:
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r21,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, r21.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e798c
	if (!ctx.cr6.eq) goto loc_824E798C;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(r17.u32, r22.u32, ctx.xer);
	// bgt cr6,0x824e7970
	if (ctx.cr6.gt) goto loc_824E7970;
	// bl 0x826b40a0
	ctx.lr = 0x824E7970;
	sub_826B40A0(ctx, base);
loc_824E7970:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7980
	if (!ctx.cr0.eq) goto loc_824E7980;
	// bl 0x826b40a0
	ctx.lr = 0x824E7980;
	sub_826B40A0(ctx, base);
loc_824E7980:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// stwx r11,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r11.u32);
loc_824E798C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7930
	if (!ctx.cr0.eq) goto loc_824E7930;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E79A4:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x824e79d4
	if (ctx.cr6.lt) goto loc_824E79D4;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(r17.u32, r22.u32, ctx.xer);
	// bge cr6,0x824e79c0
	if (!ctx.cr6.lt) goto loc_824E79C0;
	// bl 0x826b40a0
	ctx.lr = 0x824E79C0;
	sub_826B40A0(ctx, base);
loc_824E79C0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r31,r30,21
	r31.u64 = r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x824e79d8
	goto loc_824E79D8;
loc_824E79D4:
	// clrlwi r31,r15,21
	r31.u64 = r15.u32 & 0x7FF;
loc_824E79D8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r19,4
	ctx.r9.s64 = r19.s64 + 4;
	// rlwinm. r27,r26,0,14,14
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x824e79fc
	if (ctx.cr0.eq) goto loc_824E79FC;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x824e7a00
	goto loc_824E7A00;
loc_824E79FC:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_824E7A00:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r10,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r10.u32);
	// bne cr6,0x824e7a68
	if (!ctx.cr6.eq) goto loc_824E7A68;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e7a1c
	if (ctx.cr6.eq) goto loc_824E7A1C;
	// bl 0x826b40a0
	ctx.lr = 0x824E7A1C;
	sub_826B40A0(ctx, base);
loc_824E7A1C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e7a30
	if (ctx.cr6.lt) goto loc_824E7A30;
	// bl 0x826b40a0
	ctx.lr = 0x824E7A30;
	sub_826B40A0(ctx, base);
loc_824E7A30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E7A40;
	sub_824E6318(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r31,r10,16,0,15
	r31.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r9,12816
	ctx.r10.u64 = ctx.r9.u64 | 12816;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824e7bbc
	goto loc_824E7BBC;
loc_824E7A68:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x824e7abc
	if (!ctx.cr6.eq) goto loc_824E7ABC;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e7a84
	if (ctx.cr6.eq) goto loc_824E7A84;
	// bl 0x826b40a0
	ctx.lr = 0x824E7A84;
	sub_826B40A0(ctx, base);
loc_824E7A84:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e7a90
	if (ctx.cr6.eq) goto loc_824E7A90;
	// bl 0x826b40a0
	ctx.lr = 0x824E7A90;
	sub_826B40A0(ctx, base);
loc_824E7A90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E7AA0;
	sub_824E6318(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E7AB8;
	sub_824E6438(ctx, base);
	// b 0x824e7bbc
	goto loc_824E7BBC;
loc_824E7ABC:
	// rlwinm r29,r30,0,8,15
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x824e7ad0
	if (ctx.cr6.eq) goto loc_824E7AD0;
	// bl 0x826b40a0
	ctx.lr = 0x824E7AD0;
	sub_826B40A0(ctx, base);
loc_824E7AD0:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(r17.u32, r22.u32, ctx.xer);
	// bge cr6,0x824e7adc
	if (!ctx.cr6.lt) goto loc_824E7ADC;
	// bl 0x826b40a0
	ctx.lr = 0x824E7ADC;
	sub_826B40A0(ctx, base);
loc_824E7ADC:
	// lis r28,228
	r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x824e7b04
	if (ctx.cr6.eq) goto loc_824E7B04;
	// oris r24,r24,15
	r24.u64 = r24.u64 | 983040;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x824e7b04
	if (!ctx.cr6.eq) goto loc_824E7B04;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	r24.u64 = ctx.r11.u64 | r18.u64;
loc_824E7B04:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e7b10
	if (ctx.cr0.eq) goto loc_824E7B10;
	// lis r30,96
	r30.s64 = 6291456;
loc_824E7B10:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E7B20;
	sub_824E6318(ctx, base);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E7B3C;
	sub_824E6438(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e7b78
	if (ctx.cr6.eq) goto loc_824E7B78;
	// andis. r11,r31,2816
	ctx.r11.u64 = r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e7b54
	if (ctx.cr0.eq) goto loc_824E7B54;
	// bl 0x826b40a0
	ctx.lr = 0x824E7B54;
	sub_826B40A0(ctx, base);
loc_824E7B54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e7b60
	if (ctx.cr6.eq) goto loc_824E7B60;
	// bl 0x826b40a0
	ctx.lr = 0x824E7B60;
	sub_826B40A0(ctx, base);
loc_824E7B60:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E7B78;
	sub_824E6438(ctx, base);
loc_824E7B78:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x824e7b9c
	if (ctx.cr6.eq) goto loc_824E7B9C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e6688
	ctx.lr = 0x824E7B98;
	sub_824E6688(ctx, base);
	// b 0x824e7bbc
	goto loc_824E7BBC;
loc_824E7B9C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x824e7bbc
	if (ctx.cr6.eq) goto loc_824E7BBC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e6868
	ctx.lr = 0x824E7BBC;
	sub_824E6868(ctx, base);
loc_824E7BBC:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r20,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82503AB8) {
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
	// bl 0x82503a60
	ctx.lr = 0x82503AD0;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503ae0
	if (!ctx.cr0.eq) goto loc_82503AE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82503b00
	goto loc_82503B00;
loc_82503AE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x82503afc
	if (ctx.cr6.lt) goto loc_82503AFC;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x82503b00
	if (!ctx.cr6.gt) goto loc_82503B00;
loc_82503AFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82503B00:
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

DEFINE_REX_FUNC(sub_825057C0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82505804
	if (!ctx.cr0.eq) goto loc_82505804;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82505810
	goto loc_82505810;
loc_82505804:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_82505810:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82504ef8
	ctx.lr = 0x82505818;
	sub_82504EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825040b8
	ctx.lr = 0x82505824;
	sub_825040B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8250AD88) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824ff930
	ctx.lr = 0x8250ADB4;
	sub_824FF930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8250ADD4;
	sub_8250AD28(ctx, base);
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

DEFINE_REX_FUNC(sub_8250E208) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250E210;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x8250E230;
	sub_8257C0C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250E250;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8250ac70
	ctx.lr = 0x8250E270;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250E27C;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8250e2d4
	if (ctx.cr6.eq) goto loc_8250E2D4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8250E2D4;
	sub_8250B4D8(ctx, base);
loc_8250E2D4:
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8251DFB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8251dfcc
	if (ctx.cr6.lt) goto loc_8251DFCC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8251dfd0
	if (!ctx.cr6.gt) goto loc_8251DFD0;
loc_8251DFCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251DFD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251dfe0
	if (!ctx.cr0.eq) goto loc_8251DFE0;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8251DFE0:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8251dff4
	if (ctx.cr6.lt) goto loc_8251DFF4;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8251dff8
	if (!ctx.cr6.gt) goto loc_8251DFF8;
loc_8251DFF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251DFF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251e018
	if (ctx.cr0.eq) goto loc_8251E018;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x8251e010
	if (!ctx.cr6.eq) goto loc_8251E010;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8251E010:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8251E018:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x8251e02c
	if (ctx.cr6.lt) goto loc_8251E02C;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8251e030
	if (!ctx.cr6.gt) goto loc_8251E030;
loc_8251E02C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251E030:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251e048
	if (ctx.cr0.eq) goto loc_8251E048;
	// addi r11,r10,-84
	ctx.r11.s64 = ctx.r10.s64 + -84;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8251E048:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251FF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251FF70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251f290
	ctx.lr = 0x8251FF88;
	sub_8251F290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251ffa0
	if (!ctx.cr6.eq) goto loc_8251FFA0;
	// li r4,3570
	ctx.r4.s64 = 3570;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824e4368
	ctx.lr = 0x8251FFA0;
	sub_824E4368(ctx, base);
loc_8251FFA0:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8251e878
	ctx.lr = 0x8251FFB4;
	sub_8251E878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825234A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825234A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825234d4
	if (ctx.cr6.lt) goto loc_825234D4;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825234d8
	if (!ctx.cr6.gt) goto loc_825234D8;
loc_825234D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825234D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825235c4
	if (ctx.cr0.eq) goto loc_825235C4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825234f4
	if (ctx.cr6.lt) goto loc_825234F4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825234f8
	if (!ctx.cr6.gt) goto loc_825234F8;
loc_825234F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825234F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825235c4
	if (ctx.cr0.eq) goto loc_825235C4;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82523560
	if (!ctx.cr0.eq) goto loc_82523560;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523560
	if (ctx.cr6.eq) goto loc_82523560;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82523560
	if (!ctx.cr0.eq) goto loc_82523560;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82523554
	if (ctx.cr6.lt) goto loc_82523554;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82523558
	if (!ctx.cr6.gt) goto loc_82523558;
loc_82523554:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82523558:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825235c4
	if (!ctx.cr0.eq) goto loc_825235C4;
loc_82523560:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x826a1e70
	ctx.lr = 0x82523570;
	sub_826A1E70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825230e0
	ctx.lr = 0x8252357C;
	sub_825230E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82501ee0
	ctx.lr = 0x82523588;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825235c4
	if (ctx.cr0.eq) goto loc_825235C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82502168
	ctx.lr = 0x8252359C;
	sub_82502168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82501ee0
	ctx.lr = 0x825235A8;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825235c4
	if (ctx.cr0.eq) goto loc_825235C4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82522900
	ctx.lr = 0x825235C0;
	sub_82522900(ctx, base);
	// b 0x825235c8
	goto loc_825235C8;
loc_825235C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825235C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82530AE0) {
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
	ctx.lr = 0x82530AE8;
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82530B18;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82530b3c
	if (ctx.cr6.eq) goto loc_82530B3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530B38;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530B3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530B44;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82530b68
	if (ctx.cr6.eq) goto loc_82530B68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530B64;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530B68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530B70;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82530BA0;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825384C8) {
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
	ctx.lr = 0x825384D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825385cc
	if (!ctx.cr0.eq) goto loc_825385CC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825385cc
	if (ctx.cr0.eq) goto loc_825385CC;
loc_825384F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14208
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14208, ctx.xer);
	// bne cr6,0x825385b4
	if (!ctx.cr6.eq) goto loc_825385B4;
	// li r10,55
	ctx.r10.s64 = 55;
	// li r29,0
	r29.s64 = 0;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82538514:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825385b4
	if (!ctx.cr6.lt) goto loc_825385B4;
	// lwz r26,0(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r31,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c0b40
	ctx.lr = 0x8253853C;
	sub_825C0B40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,656(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 656);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x82538580
	if (!ctx.cr0.eq) goto loc_82538580;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538580
	if (ctx.cr0.eq) goto loc_82538580;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253858c
	if (!ctx.cr6.gt) goto loc_8253858C;
loc_82538580:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x82538588;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253858C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
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
	// b 0x82538514
	goto loc_82538514;
loc_825385B4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825385cc
	if (!ctx.cr0.eq) goto loc_825385CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825384f0
	if (!ctx.cr6.eq) goto loc_825384F0;
loc_825385CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8254F918) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8254f934
	if (ctx.cr6.lt) goto loc_8254F934;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8254f938
	if (!ctx.cr6.gt) goto loc_8254F938;
loc_8254F934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254F938:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254f954
	if (!ctx.cr0.eq) goto loc_8254F954;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8254f954
	if (ctx.cr6.eq) goto loc_8254F954;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254f958
	if (!ctx.cr6.eq) goto loc_8254F958;
loc_8254F954:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254F958:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8254FC58) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r30,r11,27
	r30.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// lwz r11,148(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254fcb0
	if (!ctx.cr0.eq) goto loc_8254FCB0;
	// li r31,0
	r31.s64 = 0;
	// b 0x8254fcc4
	goto loc_8254FCC4;
loc_8254FCB0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r11,30
	r31.u64 = ctx.r11.u32 & 0x3;
loc_8254FCC4:
	// bl 0x8254fa20
	ctx.lr = 0x8254FCC8;
	sub_8254FA20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825b8348
	ctx.lr = 0x8254FCD4;
	sub_825B8348(ctx, base);
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

DEFINE_REX_FUNC(sub_82552308) {
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
	ctx.lr = 0x82552310;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255291c
	if (!ctx.cr0.eq) goto loc_8255291C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255291c
	if (ctx.cr0.eq) goto loc_8255291C;
	// clrlwi r22,r6,24
	r22.u64 = ctx.r6.u32 & 0xFF;
	// li r23,1
	r23.s64 = 1;
loc_8255233C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82552350
	if (ctx.cr6.eq) goto loc_82552350;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552900
	if (ctx.cr0.eq) goto loc_82552900;
loc_82552350:
	// lwz r25,32(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82552358:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82552654
	if (ctx.cr6.eq) goto loc_82552654;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82552378
	if (ctx.cr6.eq) goto loc_82552378;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255238c
	if (ctx.cr0.eq) goto loc_8255238C;
loc_82552378:
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8255238c
	if (!ctx.cr6.eq) goto loc_8255238C;
	// lwz r5,32(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
loc_8255238C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825523a8
	if (!ctx.cr0.eq) goto loc_825523A8;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r10,28(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255264c
	if (!ctx.cr6.eq) goto loc_8255264C;
loc_825523A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503da0
	ctx.lr = 0x825523B4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825523C0;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r6,119
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 119, ctx.xer);
	// bne cr6,0x82552434
	if (!ctx.cr6.eq) goto loc_82552434;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825523E8;
	sub_824F71B8(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r3,r25
	ctx.r7.u64 = ctx.r3.u64 + r25.u64;
	// lwz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82552424
	if (ctx.cr6.eq) goto loc_82552424;
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82552408:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// beq cr6,0x82552424
	if (ctx.cr6.eq) goto loc_82552424;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82552408
	if (ctx.cr6.lt) goto loc_82552408;
loc_82552424:
	// lwz r11,-4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// b 0x8255264c
	goto loc_8255264C;
loc_82552434:
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r27,44
	ctx.r11.s64 = r27.s64 + 44;
	// rlwinm r7,r8,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7;
loc_82552448:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82552484
	if (!ctx.cr6.lt) goto loc_82552484;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x8255246c
	if (ctx.cr6.eq) goto loc_8255246C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82552448
	goto loc_82552448;
loc_8255246C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82552484
	if (ctx.cr6.eq) goto loc_82552484;
	// addi r11,r9,11
	ctx.r11.s64 = ctx.r9.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r30.u32);
	// b 0x8255264c
	goto loc_8255264C;
loc_82552484:
	// cmplwi cr6,r6,97
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 97, ctx.xer);
	// beq cr6,0x825524a0
	if (ctx.cr6.eq) goto loc_825524A0;
	// cmplwi cr6,r6,99
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 99, ctx.xer);
	// beq cr6,0x825524a0
	if (ctx.cr6.eq) goto loc_825524A0;
	// cmplwi cr6,r6,100
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825524a4
	if (!ctx.cr6.eq) goto loc_825524A4;
loc_825524A0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_825524A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255252c
	if (ctx.cr0.eq) goto loc_8255252C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825524C4;
	sub_824F71B8(ctx, base);
	// addi r11,r25,-24
	ctx.r11.s64 = r25.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255264c
	if (ctx.cr6.eq) goto loc_8255264C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825524F0;
	sub_824F71B8(ctx, base);
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255264c
	if (ctx.cr6.eq) goto loc_8255264C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8255250C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x825525b4
	if (ctx.cr6.eq) goto loc_825525B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8255250c
	if (ctx.cr6.lt) goto loc_8255250C;
	// b 0x8255264c
	goto loc_8255264C;
loc_8255252C:
	// cmplwi cr6,r6,96
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 96, ctx.xer);
	// bne cr6,0x825525c4
	if (!ctx.cr6.eq) goto loc_825525C4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255254C;
	sub_824F71B8(ctx, base);
	// addi r11,r25,-20
	ctx.r11.s64 = r25.s64 + -20;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255264c
	if (ctx.cr6.eq) goto loc_8255264C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82552578;
	sub_824F71B8(ctx, base);
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255264c
	if (ctx.cr6.eq) goto loc_8255264C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82552594:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x825525b4
	if (ctx.cr6.eq) goto loc_825525B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82552594
	if (ctx.cr6.lt) goto loc_82552594;
	// b 0x8255264c
	goto loc_8255264C;
loc_825525B4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// b 0x8255264c
	goto loc_8255264C;
loc_825525C4:
	// cmplwi cr6,r6,86
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 86, ctx.xer);
	// beq cr6,0x825525f8
	if (ctx.cr6.eq) goto loc_825525F8;
	// cmplwi cr6,r6,87
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 87, ctx.xer);
	// beq cr6,0x825525f8
	if (ctx.cr6.eq) goto loc_825525F8;
	// cmplwi cr6,r6,89
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 89, ctx.xer);
	// beq cr6,0x825525f8
	if (ctx.cr6.eq) goto loc_825525F8;
	// cmplwi cr6,r6,90
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 90, ctx.xer);
	// beq cr6,0x825525f8
	if (ctx.cr6.eq) goto loc_825525F8;
	// cmplwi cr6,r6,84
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 84, ctx.xer);
	// beq cr6,0x825525f8
	if (ctx.cr6.eq) goto loc_825525F8;
	// cmplwi cr6,r6,85
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825525fc
	if (!ctx.cr6.eq) goto loc_825525FC;
loc_825525F8:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_825525FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255264c
	if (ctx.cr0.eq) goto loc_8255264C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255261C;
	sub_824F71B8(ctx, base);
	// addi r11,r25,-16
	ctx.r11.s64 = r25.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255264c
	if (ctx.cr0.eq) goto loc_8255264C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255264c
	if (!ctx.cr6.eq) goto loc_8255264C;
	// rlwimi r10,r23,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8255264C:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x82552358
	goto loc_82552358;
loc_82552654:
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8255265C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825526b4
	if (ctx.cr6.eq) goto loc_825526B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825526a0
	if (ctx.cr6.eq) goto loc_825526A0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// beq cr6,0x825526a0
	if (ctx.cr6.eq) goto loc_825526A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x825526a0
	if (ctx.cr6.eq) goto loc_825526A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254a430
	ctx.lr = 0x825526A0;
	sub_8254A430(ctx, base);
loc_825526A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8255265c
	if (!ctx.cr6.eq) goto loc_8255265C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8255265c
	goto loc_8255265C;
loc_825526B4:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_825526B8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825527f4
	if (ctx.cr6.eq) goto loc_825527F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825527e0
	if (ctx.cr6.eq) goto loc_825527E0;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,44(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// beq cr6,0x825527e0
	if (ctx.cr6.eq) goto loc_825527E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x825527e0
	if (!ctx.cr6.eq) goto loc_825527E0;
	// lwz r11,52(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,28(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 28);
	// b 0x82552740
	goto loc_82552740;
loc_82552700:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// beq cr6,0x82552748
	if (ctx.cr6.eq) goto loc_82552748;
	// lwz r10,48(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r6,r10,13
	ctx.r6.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r23,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82552748
	if (ctx.cr0.eq) goto loc_82552748;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
loc_82552740:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82552700
	if (!ctx.cr6.eq) goto loc_82552700;
loc_82552748:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
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
	// beq cr6,0x825527e0
	if (ctx.cr6.eq) goto loc_825527E0;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825527e0
	if (ctx.cr6.eq) goto loc_825527E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,40(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// andi. r30,r11,25
	r30.u64 = ctx.r11.u64 & 25;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r6,r11,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82549360
	ctx.lr = 0x82552790;
	sub_82549360(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825527a8
	goto loc_825527A8;
loc_825527A0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825527A8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825527a0
	if (!ctx.cr6.eq) goto loc_825527A0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r9,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825527E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825526b8
	if (!ctx.cr6.eq) goto loc_825526B8;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x825526b8
	goto loc_825526B8;
loc_825527F4:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_825527F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825528a8
	if (ctx.cr6.eq) goto loc_825528A8;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825528a0
	if (ctx.cr6.eq) goto loc_825528A0;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255287c
	if (ctx.cr0.eq) goto loc_8255287C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8255287c
	if (ctx.cr6.eq) goto loc_8255287C;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255287c
	if (ctx.cr0.eq) goto loc_8255287C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 28);
	// bl 0x8250b3d0
	ctx.lr = 0x82552848;
	sub_8250B3D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82552924
	if (ctx.cr0.eq) goto loc_82552924;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8255286c
	if (ctx.cr6.eq) goto loc_8255286C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82552870
	if (!ctx.cr6.eq) goto loc_82552870;
loc_8255286C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82552870:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552924
	if (ctx.cr0.eq) goto loc_82552924;
	// rlwinm r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
loc_8255287C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825528a0
	if (ctx.cr0.eq) goto loc_825528A0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503da0
	ctx.lr = 0x82552894;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825528A0;
	sub_8250AD28(ctx, base);
loc_825528A0:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825527f8
	goto loc_825527F8;
loc_825528A8:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x82552900
	if (!ctx.cr6.eq) goto loc_82552900;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825528CC;
	sub_824F71B8(ctx, base);
	// addi r10,r3,-20
	ctx.r10.s64 = ctx.r3.s64 + -20;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// lwzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// beq cr6,0x825528e8
	if (ctx.cr6.eq) goto loc_825528E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82552900
	if (ctx.cr0.eq) goto loc_82552900;
loc_825528E8:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, ctx.xer);
	// bne cr6,0x82552900
	if (!ctx.cr6.eq) goto loc_82552900;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stwx r11,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r11.u32);
loc_82552900:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255291c
	if (!ctx.cr0.eq) goto loc_8255291C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255233c
	if (!ctx.cr6.eq) goto loc_8255233C;
loc_8255291C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_82552924:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x82552930;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82589C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82589C10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,1
	r29.s64 = 1;
	// li r28,0
	r28.s64 = 0;
loc_82589C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82589c4c
	if (!ctx.cr6.eq) goto loc_82589C4C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82589e18
	if (!ctx.cr0.eq) goto loc_82589E18;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589e18
	if (ctx.cr0.eq) goto loc_82589E18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82587298
	ctx.lr = 0x82589C48;
	sub_82587298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82589C4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82589d78
	if (ctx.cr6.eq) goto loc_82589D78;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82589d20
	if (ctx.cr6.eq) goto loc_82589D20;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82589e24
	if (!ctx.cr6.eq) goto loc_82589E24;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r30,20
	ctx.r11.s64 = r30.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82589e80
	if (ctx.cr6.eq) goto loc_82589E80;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82589e94
	if (ctx.cr6.eq) goto loc_82589E94;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82589e10
	if (!ctx.cr6.gt) goto loc_82589E10;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r29,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r29.u8);
	// bne 0x82589cec
	if (!ctx.cr0.eq) goto loc_82589CEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589cec
	if (ctx.cr0.eq) goto loc_82589CEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82589cf8
	if (!ctx.cr6.gt) goto loc_82589CF8;
loc_82589CEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82584728
	ctx.lr = 0x82589CF4;
	sub_82584728(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82589CF8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// mulli r9,r10,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82589D1C;
	sub_826A1E70(ctx, base);
	// b 0x82589e10
	goto loc_82589E10;
loc_82589D20:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82589ea8
	if (!ctx.cr6.eq) goto loc_82589EA8;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82589ebc
	if (!ctx.cr6.eq) goto loc_82589EBC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82589d54
	if (!ctx.cr6.eq) goto loc_82589D54;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82589D54:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82589d68
	if (!ctx.cr6.eq) goto loc_82589D68;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82589D68:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r30,48(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82589c24
	goto loc_82589C24;
loc_82589D78:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82589e0c
	if (ctx.cr6.eq) goto loc_82589E0C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r28,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// bne 0x82589ddc
	if (!ctx.cr0.eq) goto loc_82589DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589ddc
	if (ctx.cr0.eq) goto loc_82589DDC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82589de8
	if (!ctx.cr6.gt) goto loc_82589DE8;
loc_82589DDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82584728
	ctx.lr = 0x82589DE4;
	sub_82584728(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82589DE8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// mulli r9,r10,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82589E0C;
	sub_826A1E70(ctx, base);
loc_82589E0C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_82589E10:
	// stb r29,32(r31)
	REX_STORE_U8(r31.u32 + 32, r29.u8);
	// b 0x82589c24
	goto loc_82589C24;
loc_82589E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82589E1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_82589E24:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82589e40
	if (ctx.cr6.eq) goto loc_82589E40;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589E40;
	sub_824E4368(ctx, base);
loc_82589E40:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82589e6c
	if (ctx.cr6.eq) goto loc_82589E6C;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82589e6c
	if (ctx.cr6.eq) goto loc_82589E6C;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82589e1c
	goto loc_82589E1C;
loc_82589E6C:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589E80;
	sub_824E4368(ctx, base);
loc_82589E80:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589E94;
	sub_824E4368(ctx, base);
loc_82589E94:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589EA8;
	sub_824E4368(ctx, base);
loc_82589EA8:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589EBC;
	sub_824E4368(ctx, base);
loc_82589EBC:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589ED0;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825AC0B0) {
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
	ctx.lr = 0x825AC0D0;
	sub_825A60D8(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r8,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r8.u16);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r7,0,16,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r6.u64 & 0x3F0000);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r7,0,9,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r6.u64 & 0x800000);
	// oris r7,r6,64
	ctx.r7.u64 = ctx.r6.u64 | 4194304;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
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
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825ac160
	if (ctx.cr0.eq) goto loc_825AC160;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC160:
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,4
	ctx.r6.s64 = 4;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r12,-21846
	ctx.r12.s64 = -21846;
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
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
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
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r7,0,16,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r6.u64 & 0x3F0000);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r7,0,9,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r6.u64 & 0x800000);
	// oris r7,r6,64
	ctx.r7.u64 = ctx.r6.u64 | 4194304;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// ori r7,r7,8738
	ctx.r7.u64 = ctx.r7.u64 | 8738;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825ac21c
	if (ctx.cr0.eq) goto loc_825AC21C;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC21C:
	// li r7,6
	ctx.r7.s64 = 6;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
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
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
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
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,10,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF) | (ctx.r7.u64 & 0xC00000);
	// rlwinm r8,r7,0,10,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825ac2a8
	if (ctx.cr0.eq) goto loc_825AC2A8;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC2A8:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825ac300
	if (ctx.cr0.eq) goto loc_825AC300;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AC300:
	// li r8,7
	ctx.r8.s64 = 7;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r10,16,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825BA3A0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x825BA3A8;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r27,12(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r28,r11,27
	r28.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// and. r10,r28,r24
	ctx.r10.u64 = r28.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r26,r11,30
	r26.u64 = ctx.r11.u32 & 0x3;
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_825BA3F4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825ba6fc
	if (ctx.cr6.eq) goto loc_825BA6FC;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x825ba62c
	if (ctx.cr6.eq) goto loc_825BA62C;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x825ba564
	if (ctx.cr6.eq) goto loc_825BA564;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x825ba7e4
	if (!ctx.cr6.eq) goto loc_825BA7E4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x825ba7e4
	if (!ctx.cr6.eq) goto loc_825BA7E4;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ba440
	if (ctx.cr6.eq) goto loc_825BA440;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825ba444
	if (!ctx.cr6.eq) goto loc_825BA444;
loc_825BA440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA444:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x825ba7e4
	if (ctx.cr6.eq) goto loc_825BA7E4;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,28(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,40(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// rlwinm r11,r9,27,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3FFF;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r8,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// beq 0x825ba4b4
	if (ctx.cr0.eq) goto loc_825BA4B4;
	// rlwinm. r10,r28,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba4b4
	if (ctx.cr0.eq) goto loc_825BA4B4;
loc_825BA4AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ba4dc
	goto loc_825BA4DC;
loc_825BA4B4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba4c4
	if (ctx.cr0.eq) goto loc_825BA4C4;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba4ac
	if (!ctx.cr0.eq) goto loc_825BA4AC;
loc_825BA4C4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba4d8
	if (ctx.cr0.eq) goto loc_825BA4D8;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825ba4dc
	if (!ctx.cr0.eq) goto loc_825BA4DC;
loc_825BA4D8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825BA4DC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825ba504
	if (ctx.cr6.eq) goto loc_825BA504;
	// lwz r10,28(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r7,76(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
loc_825BA504:
	// rlwinm. r10,r9,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// rlwinm. r10,r9,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r26,r8,27,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq 0x825ba530
	if (ctx.cr0.eq) goto loc_825BA530;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba530
	if (ctx.cr0.eq) goto loc_825BA530;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825BA530:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba544
	if (ctx.cr0.eq) goto loc_825BA544;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_825BA544:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba558
	if (ctx.cr0.eq) goto loc_825BA558;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba558
	if (ctx.cr0.eq) goto loc_825BA558;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_825BA558:
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// b 0x825ba7dc
	goto loc_825BA7DC;
loc_825BA564:
	// addi r11,r26,11
	ctx.r11.s64 = r26.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba598
	if (ctx.cr0.eq) goto loc_825BA598;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba598
	if (ctx.cr0.eq) goto loc_825BA598;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ba5b0
	goto loc_825BA5B0;
loc_825BA598:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba5ac
	if (ctx.cr0.eq) goto loc_825BA5AC;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825ba5b0
	if (!ctx.cr0.eq) goto loc_825BA5B0;
loc_825BA5AC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825BA5B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825ba5e0
	if (ctx.cr6.eq) goto loc_825BA5E0;
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,28(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,76(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
loc_825BA5E0:
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r26,r9,27,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq 0x825ba5fc
	if (ctx.cr0.eq) goto loc_825BA5FC;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba5fc
	if (ctx.cr0.eq) goto loc_825BA5FC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825BA5FC:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba610
	if (ctx.cr0.eq) goto loc_825BA610;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_825BA610:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba624
	if (ctx.cr0.eq) goto loc_825BA624;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba624
	if (ctx.cr0.eq) goto loc_825BA624;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_825BA624:
	// lwz r27,12(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x825ba7d8
	goto loc_825BA7D8;
loc_825BA62C:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// lwz r31,48(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r30,52(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x825ba7e4
	if (!ctx.cr6.eq) goto loc_825BA7E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r26,1,0,30
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8570
	ctx.lr = 0x825BA668;
	sub_825B8570(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// beq cr6,0x825ba678
	if (ctx.cr6.eq) goto loc_825BA678;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_825BA678:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r8,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba6a0
	if (ctx.cr0.eq) goto loc_825BA6A0;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba6a0
	if (ctx.cr0.eq) goto loc_825BA6A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ba6b8
	goto loc_825BA6B8;
loc_825BA6A0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba6b4
	if (ctx.cr0.eq) goto loc_825BA6B4;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825ba6b8
	if (!ctx.cr0.eq) goto loc_825BA6B8;
loc_825BA6B4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825BA6B8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825ba6e8
	if (ctx.cr6.eq) goto loc_825BA6E8;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,28(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,76(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
loc_825BA6E8:
	// rlwinm r10,r8,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// lwz r27,12(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// srw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// b 0x825ba798
	goto loc_825BA798;
loc_825BA6FC:
	// lwz r31,44(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 44);
	// lwz r4,48(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7010
	ctx.lr = 0x825BA70C;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba73c
	if (ctx.cr0.eq) goto loc_825BA73C;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba73c
	if (ctx.cr0.eq) goto loc_825BA73C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ba754
	goto loc_825BA754;
loc_825BA73C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba750
	if (ctx.cr0.eq) goto loc_825BA750;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825ba754
	if (!ctx.cr0.eq) goto loc_825BA754;
loc_825BA750:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825BA754:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba7e4
	if (ctx.cr0.eq) goto loc_825BA7E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825ba784
	if (ctx.cr6.eq) goto loc_825BA784;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,76(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba7e4
	if (!ctx.cr0.eq) goto loc_825BA7E4;
loc_825BA784:
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm. r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
loc_825BA798:
	// clrlwi r26,r10,30
	r26.u64 = ctx.r10.u32 & 0x3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq 0x825ba7b0
	if (ctx.cr0.eq) goto loc_825BA7B0;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba7b0
	if (ctx.cr0.eq) goto loc_825BA7B0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825BA7B0:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba7c4
	if (ctx.cr0.eq) goto loc_825BA7C4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_825BA7C4:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba7d8
	if (ctx.cr0.eq) goto loc_825BA7D8;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ba7d8
	if (ctx.cr0.eq) goto loc_825BA7D8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_825BA7D8:
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_825BA7DC:
	// and. r11,r28,r24
	ctx.r11.u64 = r28.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba3f4
	if (ctx.cr0.eq) goto loc_825BA3F4;
loc_825BA7E4:
	// stw r27,0(r23)
	REX_STORE_U32(r23.u32 + 0, r27.u32);
	// stw r26,0(r22)
	REX_STORE_U32(r22.u32 + 0, r26.u32);
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825D50C0) {
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
	ctx.lr = 0x825D50C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d5104
	if (!ctx.cr6.eq) goto loc_825D5104;
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
	// li r7,3546
	ctx.r7.s64 = 3546;
	// bl 0x824ea978
	ctx.lr = 0x825D5104;
	sub_824EA978(ctx, base);
loc_825D5104:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825D5110;
	sub_825A57A8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d5154
	if (ctx.cr6.eq) goto loc_825D5154;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d5154
	if (ctx.cr6.eq) goto loc_825D5154;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D512C;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,69
	ctx.r6.s64 = 69;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// bctrl 
	ctx.lr = 0x825D5154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5154:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D7FF8) {
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
	ctx.lr = 0x825D8000;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825d807c
	if (ctx.cr6.lt) goto loc_825D807C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_825D8028:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1456(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825D803C;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825d805c
	if (ctx.cr0.eq) goto loc_825D805C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825D8058;
	sub_825D7A48(ctx, base);
	// b 0x825d8060
	goto loc_825D8060;
loc_825D805C:
	// li r30,0
	r30.s64 = 0;
loc_825D8060:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r30,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r30.u32);
	r28.u32 = ea;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d8028
	if (!ctx.cr6.gt) goto loc_825D8028;
loc_825D807C:
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// b 0x825d80a4
	goto loc_825D80A4;
loc_825D8084:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825D809C;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825D80A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d8084
	if (!ctx.cr6.eq) goto loc_825D8084;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x825f74b8
	ctx.lr = 0x825D80B8;
	sub_825F74B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b33a0
	ctx.lr = 0x825D80D0;
	sub_825B33A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r30,-1
	r28.s64 = r30.s64 + -1;
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825d814c
	if (ctx.cr6.lt) goto loc_825D814C;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
loc_825D80F4:
	// lwz r27,0(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d8130
	if (ctx.cr6.eq) goto loc_825D8130;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_825D8108:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e9278
	ctx.lr = 0x825D8110;
	sub_825E9278(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d8108
	if (!ctx.cr6.eq) goto loc_825D8108;
loc_825D8130:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d80f4
	if (!ctx.cr6.gt) goto loc_825D80F4;
loc_825D814C:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825E6808) {
	REX_FUNC_PROLOGUE();
	// lwz r11,908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,900(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E69D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// lfs f13,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E7860) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r8,28928(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 28928);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x825e6d18
	sub_825E6D18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E91E8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x825e7980
	ctx.lr = 0x825E9208;
	sub_825E7980(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1392(r10)
	REX_STORE_U8(ctx.r10.u32 + 1392, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_825EC558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825EC560;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825ec584
	if (!ctx.cr6.gt) goto loc_825EC584;
loc_825EC57C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825ec65c
	goto loc_825EC65C;
loc_825EC584:
	// bge cr6,0x825ec590
	if (!ctx.cr6.lt) goto loc_825EC590;
loc_825EC588:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825ec65c
	goto loc_825EC65C;
loc_825EC590:
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// clrlwi r31,r3,24
	r31.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC5C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825ec5e0
	if (ctx.cr6.eq) goto loc_825EC5E0;
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x825ec65c
	goto loc_825EC65C;
loc_825EC5E0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825ec5fc
	if (!ctx.cr6.gt) goto loc_825EC5FC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x825ec604
	goto loc_825EC604;
loc_825EC5FC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_825EC604:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825ec620
	if (!ctx.cr6.gt) goto loc_825EC620;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x825ec624
	goto loc_825EC624;
loc_825EC620:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_825EC624:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x825ec57c
	if (ctx.cr6.gt) goto loc_825EC57C;
	// blt cr6,0x825ec588
	if (ctx.cr6.lt) goto loc_825EC588;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825ec57c
	if (ctx.cr6.gt) goto loc_825EC57C;
	// blt cr6,0x825ec588
	if (ctx.cr6.lt) goto loc_825EC588;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825ec57c
	if (ctx.cr6.gt) goto loc_825EC57C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x825ec65c
	if (ctx.cr6.lt) goto loc_825EC65C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EC65C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F4930) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x825f4984
	if (ctx.cr6.gt) goto loc_825F4984;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,19280
	ctx.r12.s64 = ctx.r12.s64 + 19280;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32161
	ctx.r12.s64 = -2107703296;
	// nop 
	// addi r12,r12,18788
	ctx.r12.s64 = ctx.r12.s64 + 18788;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825F497C;
	case 1:
		goto loc_825F4964;
	case 2:
		goto loc_825F496C;
	case 3:
		goto loc_825F496C;
	case 4:
		goto loc_825F4964;
	case 5:
		goto loc_825F4964;
	case 6:
		goto loc_825F497C;
	case 7:
		goto loc_825F497C;
	case 8:
		goto loc_825F4974;
	case 9:
		goto loc_825F4984;
	case 10:
		goto loc_825F4984;
	case 11:
		goto loc_825F4984;
	case 12:
		goto loc_825F4964;
	case 13:
		goto loc_825F4964;
	case 14:
		goto loc_825F496C;
	case 15:
		goto loc_825F496C;
	case 16:
		goto loc_825F4984;
	case 17:
		goto loc_825F4984;
	case 18:
		goto loc_825F4984;
	case 19:
		goto loc_825F4984;
	case 20:
		goto loc_825F4984;
	case 21:
		goto loc_825F4984;
	case 22:
		goto loc_825F497C;
	case 23:
		goto loc_825F4974;
	case 24:
		goto loc_825F4964;
	case 25:
		goto loc_825F4984;
	case 26:
		goto loc_825F4984;
	case 27:
		goto loc_825F4984;
	case 28:
		goto loc_825F497C;
	case 29:
		goto loc_825F4974;
	case 30:
		goto loc_825F4964;
	case 31:
		goto loc_825F4984;
	case 32:
		goto loc_825F4984;
	case 33:
		goto loc_825F4984;
	case 34:
		goto loc_825F497C;
	case 35:
		goto loc_825F4974;
	case 36:
		goto loc_825F4964;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825F4964:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_825F496C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_825F4974:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_825F497C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825F4984:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F70B0) {
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
	// bl 0x825f6950
	ctx.lr = 0x825F70D0;
	sub_825F6950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f70ec
	if (ctx.cr0.lt) goto loc_825F70EC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x825f59b0
	ctx.lr = 0x825F70EC;
	sub_825F59B0(ctx, base);
loc_825F70EC:
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

DEFINE_REX_FUNC(sub_825F7580) {
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
	ctx.lr = 0x825F7588;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,8(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825F75A0:
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825f75a0
	if (ctx.cr6.lt) goto loc_825F75A0;
	// li r20,3
	r20.s64 = 3;
	// divwu. r31,r10,r20
	r31.u64 = uint32_t(r20.u32 ? ctx.r10.u32 / r20.u32 : 0);
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825f764c
	if (ctx.cr0.eq) goto loc_825F764C;
loc_825F75BC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7644
	if (!ctx.cr6.lt) goto loc_825F7644;
	// rlwinm r24,r31,2,0,29
	r24.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
	// add r29,r24,r22
	r29.u64 = r24.u64 + r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
loc_825F75D4:
	// lwz r23,0(r29)
	r23.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x825f761c
	if (ctx.cr6.lt) goto loc_825F761C;
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r25,r29,r24
	r25.u64 = r29.u64 + r24.u64;
loc_825F75EC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
	// bctrl 
	ctx.lr = 0x825F75FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825f761c
	if (!ctx.cr0.gt) goto loc_825F761C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r25,r24,r25
	r25.u64 = r25.u64 - r24.u64;
	// subf. r27,r31,r27
	r27.u64 = r27.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// subf r28,r24,r28
	r28.u64 = r28.u64 - r24.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// bge 0x825f75ec
	if (!ctx.cr0.lt) goto loc_825F75EC;
loc_825F761C:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// stwx r23,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, r23.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825f75d4
	if (ctx.cr6.lt) goto loc_825F75D4;
loc_825F7644:
	// divwu. r31,r31,r20
	r31.u64 = uint32_t(r20.u32 ? r31.u32 / r20.u32 : 0);
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825f75bc
	if (!ctx.cr0.eq) goto loc_825F75BC;
loc_825F764C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825FA6A0) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825fa700
	if (!ctx.cr6.eq) goto loc_825FA700;
	// lwz r31,236(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 236);
	// b 0x825fa6ec
	goto loc_825FA6EC;
loc_825FA6CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FA6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fa6f8
	if (ctx.cr0.eq) goto loc_825FA6F8;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r31,236(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
loc_825FA6EC:
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825fa6cc
	if (!ctx.cr6.eq) goto loc_825FA6CC;
loc_825FA6F8:
	// stw r31,180(r30)
	REX_STORE_U32(r30.u32 + 180, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825FA700:
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

DEFINE_REX_FUNC(sub_825FBC58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FBC60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FBC7C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fbc9c
	if (ctx.cr0.eq) goto loc_825FBC9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb418
	ctx.lr = 0x825FBC98;
	sub_825FB418(ctx, base);
	// b 0x825fbca0
	goto loc_825FBCA0;
loc_825FBC9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBCA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD7E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,17732
	ctx.r3.s64 = ctx.r11.s64 + 17732;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FD8E8) {
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
	ctx.lr = 0x825FD90C;
	sub_825FCD38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
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

DEFINE_REX_FUNC(sub_82607A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607A38;
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
	ctx.lr = 0x82607A58;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607a7c
	if (ctx.cr0.eq) goto loc_82607A7C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f95e0
	ctx.lr = 0x82607A78;
	sub_825F95E0(ctx, base);
	// b 0x82607a80
	goto loc_82607A80;
loc_82607A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A7E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8260a810
	if (ctx.cr6.eq) goto loc_8260A810;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x8260a810
	if (ctx.cr6.eq) goto loc_8260A810;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x8260a810
	if (ctx.cr6.eq) goto loc_8260A810;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8260a814
	if (!ctx.cr6.eq) goto loc_8260A814;
loc_8260A810:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260A814:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260AF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260AF30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8260AF4C;
	sub_823F02B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8260af64
	if (!ctx.cr0.eq) goto loc_8260AF64;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8260aff0
	goto loc_8260AFF0;
loc_8260AF64:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823f02b8
	ctx.lr = 0x8260AF70;
	sub_823F02B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260af94
	if (!ctx.cr6.eq) goto loc_8260AF94;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8260afdc
	goto loc_8260AFDC;
loc_8260AF94:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8260ae10
	ctx.lr = 0x8260AFA8;
	sub_8260AE10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8260afc4
	if (ctx.cr0.lt) goto loc_8260AFC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x8260afd4
	goto loc_8260AFD4;
loc_8260AFC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8260AFD4;
	sub_823F0350(ctx, base);
loc_8260AFD4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8260b000
	if (!ctx.cr6.lt) goto loc_8260B000;
loc_8260AFDC:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8260AFE8;
	sub_823F0350(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8260b000
	if (!ctx.cr6.lt) goto loc_8260B000;
loc_8260AFF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8260B000:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E830) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8260F280) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8260f2bc
	if (!ctx.cr6.lt) goto loc_8260F2BC;
	// bl 0x82793a84
	ctx.lr = 0x8260F2B0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8260f2bc
	if (ctx.cr6.eq) goto loc_8260F2BC;
	// li r30,1
	r30.s64 = 1;
loc_8260F2BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260f2d0
	if (ctx.cr6.eq) goto loc_8260F2D0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8260f33c
	if (ctx.cr6.eq) goto loc_8260F33C;
loc_8260F2D0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgt cr6,0x8260f32c
	if (ctx.cr6.gt) goto loc_8260F32C;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8260b5b8
	ctx.lr = 0x8260F2F8;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260f33c
	if (ctx.cr0.eq) goto loc_8260F33C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8260f33c
	goto loc_8260F33C;
loc_8260F32C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x823ecbd8
	ctx.lr = 0x8260F338;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_8260F33C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260f354
	if (ctx.cr6.eq) goto loc_8260F354;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8260f358
	goto loc_8260F358;
loc_8260F354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260F358:
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

DEFINE_REX_FUNC(sub_82613EB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82613EC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,484(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r5,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82613ef8
	if (!ctx.cr6.gt) goto loc_82613EF8;
	// lwz r4,212(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// bl 0x826134b8
	ctx.lr = 0x82613EF0;
	sub_826134B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82614084
	if (ctx.cr0.lt) goto loc_82614084;
loc_82613EF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// bl 0x82610918
	ctx.lr = 0x82613F04;
	sub_82610918(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82613f40
	if (!ctx.cr6.gt) goto loc_82613F40;
loc_82613F18:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// bl 0x82610918
	ctx.lr = 0x82613F24;
	sub_82610918(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82613f30
	if (ctx.cr6.lt) goto loc_82613F30;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82613F30:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82613f18
	if (ctx.cr6.lt) goto loc_82613F18;
loc_82613F40:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r28,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? r28.u32 / ctx.r9.u32 : 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82613f64
	if (ctx.cr6.lt) goto loc_82613F64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82613F64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8261409c
	if (ctx.cr6.eq) goto loc_8261409C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82613fbc
	if (ctx.cr6.gt) goto loc_82613FBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,488(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826130e8
	ctx.lr = 0x82613F84;
	sub_826130E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x82614024
	if (ctx.cr6.eq) goto loc_82614024;
	// lwz r10,488(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 488);
	// subf r4,r3,r30
	ctx.r4.u64 = r30.u64 - ctx.r3.u64;
	// lwz r9,484(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x826130e8
	ctx.lr = 0x82613FB8;
	sub_826130E8(ctx, base);
	// b 0x82614024
	goto loc_82614024;
loc_82613FBC:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82614024
	if (!ctx.cr6.gt) goto loc_82614024;
loc_82613FCC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,488(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612fe0
	ctx.lr = 0x82613FE0;
	sub_82612FE0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x82614014
	if (ctx.cr6.eq) goto loc_82614014;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// subf r5,r3,r30
	ctx.r5.u64 = r30.u64 - ctx.r3.u64;
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82612fe0
	ctx.lr = 0x82614014;
	sub_82612FE0(ctx, base);
loc_82614014:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82613fcc
	if (ctx.cr6.lt) goto loc_82613FCC;
loc_82614024:
	// lwz r5,488(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r10,r5,r30
	ctx.r10.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82614058
	if (!ctx.cr6.gt) goto loc_82614058;
	// subf r29,r5,r11
	r29.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82613958
	ctx.lr = 0x82614048;
	sub_82613958(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8261405c
	goto loc_8261405C;
loc_82614058:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8261405C:
	// bl 0x82613958
	ctx.lr = 0x82614060;
	sub_82613958(ctx, base);
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
	// b 0x8261409c
	goto loc_8261409C;
loc_82614084:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261409C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261409C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82625FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82625FC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262603c
	if (ctx.cr6.eq) goto loc_8262603C;
	// bl 0x82625df8
	ctx.lr = 0x82625FDC;
	sub_82625DF8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r29,668(r30)
	REX_STORE_U32(r30.u32 + 668, r29.u32);
	// beq cr6,0x82626030
	if (ctx.cr6.eq) goto loc_82626030;
	// lwz r31,336(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stw r29,128(r30)
	REX_STORE_U32(r30.u32 + 128, r29.u32);
	// b 0x82626024
	goto loc_82626024;
loc_82625FF8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82626010
	if (ctx.cr6.eq) goto loc_82626010;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82626014
	goto loc_82626014;
loc_82626010:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82626014:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82626024:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82625ff8
	if (!ctx.cr6.eq) goto loc_82625FF8;
	// b 0x82626038
	goto loc_82626038;
loc_82626030:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
loc_82626038:
	// stw r29,120(r30)
	REX_STORE_U32(r30.u32 + 120, r29.u32);
loc_8262603C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826279D0) {
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
	ctx.lr = 0x826279D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// beq cr6,0x82627a04
	if (ctx.cr6.eq) goto loc_82627A04;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627A04:
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r31,0
	r31.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,20576
	r25.s64 = ctx.r11.s64 + 20576;
	// bne cr6,0x82627a2c
	if (!ctx.cr6.eq) goto loc_82627A2C;
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// b 0x82627a68
	goto loc_82627A68;
loc_82627A2C:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82627a44
	if (!ctx.cr6.eq) goto loc_82627A44;
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// b 0x82627a68
	goto loc_82627A68;
loc_82627A44:
	// bl 0x82793a84
	ctx.lr = 0x82627A48;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x8260b5b8
	ctx.lr = 0x82627A60;
	sub_8260B5B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
loc_82627A68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82627a7c
	if (!ctx.cr6.eq) goto loc_82627A7C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82627b6c
	goto loc_82627B6C;
loc_82627A7C:
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82627A8C;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82627a9c
	if (ctx.cr6.eq) goto loc_82627A9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
loc_82627A9C:
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826277b8
	ctx.lr = 0x82627AAC;
	sub_826277B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82627ac4
	if (ctx.cr0.eq) goto loc_82627AC4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x82643cd0
	ctx.lr = 0x82627AC0;
	sub_82643CD0(ctx, base);
	// b 0x82627af4
	goto loc_82627AF4;
loc_82627AC4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82627afc
	if (ctx.cr6.eq) goto loc_82627AFC;
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r11,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627AF4;
	sub_82628898(ctx, base);
loc_82627AF4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82627b6c
	goto loc_82627B6C;
loc_82627AFC:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8260b5b8
	ctx.lr = 0x82627B14;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82627b28
	if (!ctx.cr0.eq) goto loc_82627B28;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82627b64
	goto loc_82627B64;
loc_82627B28:
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r11,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627B54;
	sub_82628898(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82627b6c
	if (!ctx.cr0.lt) goto loc_82627B6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627B64;
	sub_8264C3D0(ctx, base);
loc_82627B64:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627B6C;
	sub_8264C3D0(ctx, base);
loc_82627B6C:
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(r27.s32, -2, ctx.xer);
	// beq cr6,0x82627b88
	if (ctx.cr6.eq) goto loc_82627B88;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627B88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82636468) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82636E20) {
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
	ctx.lr = 0x82636E28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lhz r10,34(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,176(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// divwu r7,r7,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// lwz r27,740(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// mr r25,r30
	r25.u64 = r30.u64;
	// divwu r29,r7,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82636ea4
	if (!ctx.cr6.eq) goto loc_82636EA4;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e1550
	ctx.lr = 0x82636E84;
	sub_826E1550(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82636ea4
	if (!ctx.cr6.lt) goto loc_82636EA4;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r11,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r8.u16);
loc_82636EA4:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82636edc
	if (ctx.cr6.eq) goto loc_82636EDC;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82636EB8:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r7,492(r10)
	REX_STORE_U32(ctx.r10.u32 + 492, ctx.r7.u32);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82636eb8
	if (ctx.cr6.lt) goto loc_82636EB8;
loc_82636EDC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82637124
	if (!ctx.cr6.eq) goto loc_82637124;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x82636f08
	if (ctx.cr6.lt) goto loc_82636F08;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82636F08:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82636f14
	if (ctx.cr6.lt) goto loc_82636F14;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82636F14:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82636f24
	if (!ctx.cr6.gt) goto loc_82636F24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82636F24:
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82636f40
	if (ctx.cr6.eq) goto loc_82636F40;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r27,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r27.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82636f60
	goto loc_82636F60;
loc_82636F40:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82636f5c
	if (ctx.cr6.eq) goto loc_82636F5C;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x82636f60
	goto loc_82636F60;
loc_82636F5C:
	// lwz r27,256(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 256);
loc_82636F60:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82636f78
	if (!ctx.cr6.eq) goto loc_82636F78;
	// sth r30,0(r24)
	REX_STORE_U16(r24.u32 + 0, r30.u16);
	// b 0x82637284
	goto loc_82637284;
loc_82636F78:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82636fec
	if (ctx.cr6.eq) goto loc_82636FEC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r4.s64 = r27.s32 >> 1;
loc_82636FA0:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r6,388(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 324);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82636fa0
	if (ctx.cr6.lt) goto loc_82636FA0;
loc_82636FEC:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82637018
	if (ctx.cr6.eq) goto loc_82637018;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x82637010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826372a8
	if (ctx.cr6.lt) goto loc_826372A8;
loc_82637018:
	// lhz r29,34(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r26,34(r31)
	REX_STORE_U16(r31.u32 + 34, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82637038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826372a4
	if (ctx.cr6.lt) goto loc_826372A4;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// sth r29,34(r31)
	REX_STORE_U16(r31.u32 + 34, r29.u16);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// sth r11,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r11.u16);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82637284
	if (ctx.cr6.lt) goto loc_82637284;
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r29.s64 = ctx.r11.s32 >> 1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// blt 0x82637114
	if (ctx.cr0.lt) goto loc_82637114;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82637114
	if (!ctx.cr6.lt) goto loc_82637114;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82637284
	if (ctx.cr6.eq) goto loc_82637284;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
loc_826370B8:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 324);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r7,r29
	ctx.r3.u64 = r29.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x826370FC;
	sub_823EF2F8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826370b8
	if (ctx.cr6.lt) goto loc_826370B8;
	// b 0x82637284
	goto loc_82637284;
loc_82637114:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_82637124:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rlwinm r7,r29,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82637228
	if (ctx.cr6.eq) goto loc_82637228;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82637140:
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82637158
	if (ctx.cr6.lt) goto loc_82637158;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82637158:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x82637164
	if (ctx.cr6.lt) goto loc_82637164;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82637164:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r27
	REX_STORE_U16(ctx.r9.u32 + r27.u32, ctx.r10.u16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x8263719c
	if (ctx.cr6.lt) goto loc_8263719C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8263719C:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x826371bc
	if (!ctx.cr6.lt) goto loc_826371BC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826371b4
	if (!ctx.cr6.lt) goto loc_826371B4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x826371c0
	goto loc_826371C0;
loc_826371B4:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x826371c0
	goto loc_826371C0;
loc_826371BC:
	// li r9,32767
	ctx.r9.s64 = 32767;
loc_826371C0:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// lwzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826371e4
	if (!ctx.cr6.lt) goto loc_826371E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82637210
	goto loc_82637210;
loc_826371E4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x826371f4
	if (ctx.cr6.lt) goto loc_826371F4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826371F4:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x8263720c
	if (!ctx.cr6.lt) goto loc_8263720C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82637210
	if (ctx.cr6.lt) goto loc_82637210;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82637210
	goto loc_82637210;
loc_8263720C:
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82637210:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82637140
	if (ctx.cr6.lt) goto loc_82637140;
loc_82637228:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82637254
	if (ctx.cr6.eq) goto loc_82637254;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x8263724C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826372a8
	if (ctx.cr6.lt) goto loc_826372A8;
loc_82637254:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r25,r30
	r25.u64 = r30.u64;
	// sth r11,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r11.u16);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82637284
	if (ctx.cr6.eq) goto loc_82637284;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82637274:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82637274
	if (ctx.cr6.lt) goto loc_82637274;
loc_82637284:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826372a8
	if (!ctx.cr6.eq) goto loc_826372A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_826372A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_826372A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8264FA80) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8264f6f0
	ctx.lr = 0x8264FAA8;
	sub_8264F6F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264fac0
	if (ctx.cr0.lt) goto loc_8264FAC0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826a1e70
	ctx.lr = 0x8264FAC0;
	sub_826A1E70(ctx, base);
loc_8264FAC0:
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

DEFINE_REX_FUNC(sub_826510D8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,169
	ctx.r11.s64 = 169;
	// lwz r3,400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8265d760
	ctx.lr = 0x8265110C;
	sub_8265D760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265114c
	if (ctx.cr0.lt) goto loc_8265114C;
	// lbz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82651138
	if (ctx.cr6.eq) goto loc_82651138;
	// rlwinm. r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82651130
	if (!ctx.cr0.gt) goto loc_82651130;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82651134
	if (!ctx.cr6.gt) goto loc_82651134;
loc_82651130:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82651134:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82651138:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82651148
	if (ctx.cr6.eq) goto loc_82651148;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82651148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265114C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

DEFINE_REX_FUNC(sub_82656078) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x826560dc
	if (!ctx.cr6.lt) goto loc_826560DC;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20998
	ctx.r11.u64 = ctx.r11.u64 | 20998;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826560b4
	if (!ctx.cr6.eq) goto loc_826560B4;
	// lis r6,-32761
	ctx.r6.s64 = -2147024896;
	// ori r6,r6,1245
	ctx.r6.u64 = ctx.r6.u64 | 1245;
loc_826560B4:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265a150
	ctx.lr = 0x826560D0;
	sub_8265A150(ctx, base);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826562f0
	if (ctx.cr0.eq) goto loc_826562F0;
loc_826560DC:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82656234
	if (ctx.cr0.eq) goto loc_82656234;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82656234
	if (!ctx.cr6.lt) goto loc_82656234;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x82654388
	ctx.lr = 0x82656104;
	sub_82654388(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82656150
	if (ctx.cr6.eq) goto loc_82656150;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// bl 0x8264c870
	ctx.lr = 0x8265613C;
	sub_8264C870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82656150
	if (!ctx.cr0.eq) goto loc_82656150;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_82656150:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826561dc
	if (!ctx.cr6.eq) goto loc_826561DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652980
	ctx.lr = 0x82656188;
	sub_82652980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826561dc
	if (ctx.cr0.lt) goto loc_826561DC;
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 408);
	// addi r30,r31,408
	r30.s64 = r31.s64 + 408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826561b8
	if (!ctx.cr6.eq) goto loc_826561B8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1199
	ctx.r6.s64 = 1199;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82660f48
	ctx.lr = 0x826561B8;
	sub_82660F48(ctx, base);
loc_826561B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826561d0
	if (ctx.cr6.lt) goto loc_826561D0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826609f0
	ctx.lr = 0x826561D0;
	sub_826609F0(ctx, base);
loc_826561D0:
	// li r3,260
	ctx.r3.s64 = 260;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8265d850
	ctx.lr = 0x826561DC;
	sub_8265D850(ctx, base);
loc_826561DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82656204
	if (ctx.cr6.eq) goto loc_82656204;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82656204
	if (ctx.cr6.eq) goto loc_82656204;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265623c
	if (!ctx.cr6.eq) goto loc_8265623C;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265623c
	if (ctx.cr0.eq) goto loc_8265623C;
loc_82656204:
	// ld r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 48);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x826a1e70
	ctx.lr = 0x8265621C;
	sub_826A1E70(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654278
	ctx.lr = 0x82656230;
	sub_82654278(ctx, base);
	// b 0x8265623c
	goto loc_8265623C;
loc_82656234:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_8265623C:
	// lwz r10,740(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826563bc
	if (ctx.cr0.eq) goto loc_826563BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r10.u32);
	// beq cr6,0x826563a8
	if (ctx.cr6.eq) goto loc_826563A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82656364
	if (ctx.cr6.eq) goto loc_82656364;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r11,r31,528
	ctx.r11.s64 = r31.s64 + 528;
	// beq cr6,0x82656318
	if (ctx.cr6.eq) goto loc_82656318;
	// lwz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826563bc
	if (!ctx.cr6.eq) goto loc_826563BC;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r10.u32);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264dc88
	ctx.lr = 0x826562A8;
	sub_8264DC88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82656308
	if (ctx.cr0.eq) goto loc_82656308;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82656308
	if (ctx.cr6.eq) goto loc_82656308;
loc_826562B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x826562C0;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826562d0
	if (ctx.cr0.lt) goto loc_826562D0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_826562D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826562f0
	if (ctx.cr6.eq) goto loc_826562F0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a150
	ctx.lr = 0x826562F0;
	sub_8265A150(ctx, base);
loc_826562F0:
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
loc_82656308:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
loc_82656310:
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x826562f0
	goto loc_826562F0;
loc_82656318:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826563bc
	if (!ctx.cr6.eq) goto loc_826563BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e168
	ctx.lr = 0x82656348;
	sub_8264E168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82656358
	if (ctx.cr0.eq) goto loc_82656358;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x826562b8
	if (!ctx.cr6.eq) goto loc_826562B8;
loc_82656358:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-26576
	ctx.r11.s64 = ctx.r11.s64 + -26576;
	// b 0x82656310
	goto loc_82656310;
loc_82656364:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e0c8
	ctx.lr = 0x8265638C;
	sub_8264E0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265639c
	if (ctx.cr0.eq) goto loc_8265639C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x826562b8
	if (!ctx.cr6.eq) goto loc_826562B8;
loc_8265639C:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-23160
	ctx.r11.s64 = ctx.r11.s64 + -23160;
	// b 0x82656310
	goto loc_82656310;
loc_826563A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659168
	ctx.lr = 0x826563B0;
	sub_82659168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826562d0
	if (!ctx.cr0.eq) goto loc_826562D0;
	// b 0x826562f0
	goto loc_826562F0;
loc_826563BC:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826563e4
	if (ctx.cr0.eq) goto loc_826563E4;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265a750
	ctx.lr = 0x826563D8;
	sub_8265A750(ctx, base);
loc_826563D8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826562d0
	if (ctx.cr0.lt) goto loc_826562D0;
	// b 0x826562f0
	goto loc_826562F0;
loc_826563E4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826562f0
	if (ctx.cr0.eq) goto loc_826562F0;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x826563FC;
	sub_826558C0(ctx, base);
	// b 0x826563d8
	goto loc_826563D8;
}

DEFINE_REX_FUNC(sub_8266C348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8266C350;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-8
	r31.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x8266C36C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,16(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x827938b4
	ctx.lr = 0x8266C378;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266b160
	ctx.lr = 0x8266C38C;
	sub_8266B160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8266F830) {
	REX_FUNC_PROLOGUE();
	// lbz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8266f878
	if (ctx.cr6.eq) goto loc_8266F878;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8266f870
	if (ctx.cr6.eq) goto loc_8266F870;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8266f868
	if (ctx.cr6.eq) goto loc_8266F868;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8266f860
	if (ctx.cr6.eq) goto loc_8266F860;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// blr 
	return;
loc_8266F860:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82667718
	sub_82667718(ctx, base);
	return;
loc_8266F868:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82667718
	sub_82667718(ctx, base);
	return;
loc_8266F870:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266c950
	sub_8266C950(ctx, base);
	return;
loc_8266F878:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266c520
	sub_8266C520(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82670900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,292(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// stw r4,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r4.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
loc_8267091C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8267091c
	if (!ctx.cr0.eq) goto loc_8267091C;
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// li r5,10000
	ctx.r5.s64 = 10000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// stw r10,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// b 0x82671018
	sub_82671018(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82671E88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82671E8C:
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
	// bne 0x82671e8c
	if (!ctx.cr0.eq) goto loc_82671E8C;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82671ed0
	if (ctx.cr6.eq) goto loc_82671ED0;
loc_82671EB4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r5
	ea = ctx.r5.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r5
	ea = ctx.r5.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671eb4
	if (!ctx.cr0.eq) goto loc_82671EB4;
loc_82671ED0:
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_82671ED4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671ed4
	if (!ctx.cr0.eq) goto loc_82671ED4;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// rlwinm. r4,r7,0,23,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// beq 0x82671f24
	if (ctx.cr0.eq) goto loc_82671F24;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
loc_82671F24:
	// rlwinm. r9,r7,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82671f38
	if (ctx.cr0.eq) goto loc_82671F38;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
loc_82671F38:
	// rlwinm. r9,r7,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82671f4c
	if (ctx.cr0.eq) goto loc_82671F4C;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
loc_82671F4C:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82671f8c
	if (ctx.cr6.eq) goto loc_82671F8C;
	// addi r10,r5,244
	ctx.r10.s64 = ctx.r5.s64 + 244;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,248(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 248);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,248(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 248);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,248(r5)
	REX_STORE_U32(ctx.r5.u32 + 248, ctx.r11.u32);
	// blr 
	return;
loc_82671F8C:
	// addi r10,r6,244
	ctx.r10.s64 = ctx.r6.s64 + 244;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,248(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 248);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,248(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 248);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,248(r6)
	REX_STORE_U32(ctx.r6.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82679118) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8267912c
	if (!ctx.cr6.lt) goto loc_8267912C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82679158
	goto loc_82679158;
loc_8267912C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x82679148
	if (!ctx.cr6.lt) goto loc_82679148;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x82679154
	goto loc_82679154;
loc_82679148:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_82679154:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82679158:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r9,900(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 900);
	// lwz r11,896(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 896);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267ACB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267ACC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82686968
	ctx.lr = 0x8267ACD0;
	sub_82686968(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,896
	r30.s64 = r31.s64 + 896;
loc_8267ACD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x82686658
	ctx.lr = 0x8267ACE4;
	sub_82686658(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8267ad00
	if (!ctx.cr6.eq) goto loc_8267AD00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x826866d0
	ctx.lr = 0x8267ACF8;
	sub_826866D0(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm r29,r11,14,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_8267AD00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82678c00
	ctx.lr = 0x8267AD08;
	sub_82678C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267acd8
	if (!ctx.cr0.eq) goto loc_8267ACD8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8267ad20
	if (ctx.cr6.eq) goto loc_8267AD20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82679718
	ctx.lr = 0x8267AD20;
	sub_82679718(ctx, base);
loc_8267AD20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8267D208) {
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
	ctx.lr = 0x8267D210;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r27,r3,1024
	r27.s64 = ctx.r3.s64 + 1024;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r11,1024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1024);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8267d294
	if (ctx.cr6.eq) goto loc_8267D294;
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
loc_8267D24C:
	// subf r10,r11,r27
	ctx.r10.u64 = r27.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lhz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 324);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8267d294
	if (!ctx.cr0.lt) goto loc_8267D294;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b400
	ctx.lr = 0x8267D284;
	sub_8267B400(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8267d24c
	if (!ctx.cr6.eq) goto loc_8267D24C;
loc_8267D294:
	// lhz r11,1006(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1006);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267d2e4
	if (ctx.cr0.eq) goto loc_8267D2E4;
	// lhz r4,1080(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 1080);
	// clrlwi r29,r22,16
	r29.u64 = r22.u32 & 0xFFFF;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8267d2e4
	if (ctx.cr6.lt) goto loc_8267D2E4;
	// addi r28,r31,968
	r28.s64 = r31.s64 + 968;
loc_8267D2C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82686b48
	ctx.lr = 0x8267D2C8;
	sub_82686B48(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x8267d2c0
	if (!ctx.cr6.lt) goto loc_8267D2C0;
loc_8267D2E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8267d4bc
	if (ctx.cr6.eq) goto loc_8267D4BC;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// lhz r10,1082(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1082);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8267d318
	if (!ctx.cr6.lt) goto loc_8267D318;
	// sth r11,1082(r31)
	REX_STORE_U16(r31.u32 + 1082, ctx.r11.u16);
	// li r28,1
	r28.s64 = 1;
	// b 0x8267d31c
	goto loc_8267D31C;
loc_8267D318:
	// li r28,0
	r28.s64 = 0;
loc_8267D31C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8267d3cc
	if (!ctx.cr6.eq) goto loc_8267D3CC;
	// li r29,0
	r29.s64 = 0;
loc_8267D32C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8267d360
	if (ctx.cr6.eq) goto loc_8267D360;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,968
	ctx.r3.s64 = r31.s64 + 968;
	// bl 0x82686aa0
	ctx.lr = 0x8267D340;
	sub_82686AA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267d360
	if (ctx.cr0.eq) goto loc_8267D360;
	// lwz r11,1204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1204);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1204(r31)
	REX_STORE_U32(r31.u32 + 1204, ctx.r11.u32);
	// bl 0x82684280
	ctx.lr = 0x8267D35C;
	sub_82684280(ctx, base);
loc_8267D35C:
	// li r25,1
	r25.s64 = 1;
loc_8267D360:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r30,r29,-8
	r30.s64 = r29.s64 + -8;
	// bne cr6,0x8267d370
	if (!ctx.cr6.eq) goto loc_8267D370;
	// li r30,0
	r30.s64 = 0;
loc_8267D370:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8267d450
	if (ctx.cr6.eq) goto loc_8267D450;
	// lhz r11,332(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 332);
	// lhz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267d450
	if (!ctx.cr6.eq) goto loc_8267D450;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// lbz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + 8);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// and r29,r9,r11
	r29.u64 = ctx.r9.u64 & ctx.r11.u64;
	// beq 0x8267d41c
	if (ctx.cr0.eq) goto loc_8267D41C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b400
	ctx.lr = 0x8267D3C8;
	sub_8267B400(ctx, base);
	// b 0x8267d438
	goto loc_8267D438;
loc_8267D3CC:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267d32c
	if (ctx.cr0.eq) goto loc_8267D32C;
	// lhz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 324);
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267d32c
	if (!ctx.cr6.eq) goto loc_8267D32C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// subf r10,r11,r27
	ctx.r10.u64 = r27.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8267d360
	if (ctx.cr6.eq) goto loc_8267D360;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lhz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U16(r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b2c8
	ctx.lr = 0x8267D418;
	sub_8267B2C8(ctx, base);
	// b 0x8267d35c
	goto loc_8267D35C;
loc_8267D41C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8267d43c
	if (ctx.cr6.eq) goto loc_8267D43C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lhz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U16(r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b2c8
	ctx.lr = 0x8267D438;
	sub_8267B2C8(ctx, base);
loc_8267D438:
	// li r25,1
	r25.s64 = 1;
loc_8267D43C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8267d4a8
	if (ctx.cr6.eq) goto loc_8267D4A8;
	// addi r30,r29,-8
	r30.s64 = r29.s64 + -8;
	// b 0x8267d4a8
	goto loc_8267D4A8;
loc_8267D450:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lbz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267d474
	if (ctx.cr0.eq) goto loc_8267D474;
	// addi r3,r31,968
	ctx.r3.s64 = r31.s64 + 968;
	// lhz r4,2(r26)
	ctx.r4.u64 = REX_LOAD_U16(r26.u32 + 2);
	// bl 0x82686b48
	ctx.lr = 0x8267D470;
	sub_82686B48(ctx, base);
	// b 0x8267d4a8
	goto loc_8267D4A8;
loc_8267D474:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8267d4a8
	if (ctx.cr6.eq) goto loc_8267D4A8;
	// addi r3,r31,968
	ctx.r3.s64 = r31.s64 + 968;
	// lhz r4,2(r26)
	ctx.r4.u64 = REX_LOAD_U16(r26.u32 + 2);
	// bl 0x82686aa0
	ctx.lr = 0x8267D488;
	sub_82686AA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267d4a8
	if (ctx.cr0.eq) goto loc_8267D4A8;
	// lwz r11,1204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1204);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1204(r31)
	REX_STORE_U32(r31.u32 + 1204, ctx.r11.u32);
	// bl 0x82684280
	ctx.lr = 0x8267D4A4;
	sub_82684280(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_8267D4A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82678ba8
	ctx.lr = 0x8267D4B0;
	sub_82678BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267d370
	if (!ctx.cr0.eq) goto loc_8267D370;
	// b 0x8267d4d8
	goto loc_8267D4D8;
loc_8267D4BC:
	// lhz r11,1082(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1082);
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x8267d4d8
	if (!ctx.cr6.lt) goto loc_8267D4D8;
	// sth r22,1082(r31)
	REX_STORE_U16(r31.u32 + 1082, r22.u16);
loc_8267D4D8:
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d4f0
	if (!ctx.cr0.eq) goto loc_8267D4F0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a9c0
	ctx.lr = 0x8267D4F0;
	sub_8267A9C0(ctx, base);
loc_8267D4F0:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8267d520
	if (ctx.cr6.eq) goto loc_8267D520;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82684020
	ctx.lr = 0x8267D51C;
	sub_82684020(ctx, base);
	// stw r24,472(r31)
	REX_STORE_U32(r31.u32 + 472, r24.u32);
loc_8267D520:
	// sth r22,1080(r31)
	REX_STORE_U16(r31.u32 + 1080, r22.u16);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82692638) {
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
	// bne cr6,0x82692660
	if (!ctx.cr6.eq) goto loc_82692660;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82692768
	goto loc_82692768;
loc_82692660:
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r11,-5960(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -5960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5952(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692764
	if (ctx.cr6.eq) goto loc_82692764;
	// lwz r11,-5960(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -5960);
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826926DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826926ec
	if (!ctx.cr0.eq) goto loc_826926EC;
loc_826926E4:
	// li r3,6000
	ctx.r3.s64 = 6000;
	// b 0x82692768
	goto loc_82692768;
loc_826926EC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// ori r10,r10,64206
	ctx.r10.u64 = ctx.r10.u64 | 64206;
	// stb r9,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82693778
	ctx.lr = 0x8269270C;
	sub_82693778(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82692720
	if (ctx.cr0.eq) goto loc_82692720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82692578
	ctx.lr = 0x8269271C;
	sub_82692578(ctx, base);
	// b 0x826926e4
	goto loc_826926E4;
loc_82692720:
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// addi r30,r10,-6000
	r30.s64 = ctx.r10.s64 + -6000;
	// ori r11,r11,51712
	ctx.r11.u64 = ctx.r11.u64 | 51712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r31,0(r30)
	REX_STORE_U64(r30.u32 + 0, r31.u64);
	// std r31,8(r30)
	REX_STORE_U64(r30.u32 + 8, r31.u64);
	// std r31,16(r30)
	REX_STORE_U64(r30.u32 + 16, r31.u64);
	// std r31,24(r30)
	REX_STORE_U64(r30.u32 + 24, r31.u64);
	// std r31,32(r30)
	REX_STORE_U64(r30.u32 + 32, r31.u64);
	// std r11,-6000(r10)
	REX_STORE_U64(ctx.r10.u32 + -6000, ctx.r11.u64);
	// bl 0x823ecc18
	ctx.lr = 0x82692754;
	sub_823ECC18(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// b 0x82692768
	goto loc_82692768;
loc_82692764:
	// li r3,6001
	ctx.r3.s64 = 6001;
loc_82692768:
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

DEFINE_REX_FUNC(sub_82699FB8) {
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
	ctx.lr = 0x82699FC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r29,24(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,20(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r28,24(r30)
	REX_STORE_U32(r30.u32 + 24, r28.u32);
	// sync 
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82793b74
	ctx.lr = 0x82699FEC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8269a048
	if (ctx.cr6.eq) goto loc_8269A048;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8269A004:
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
	// bne 0x8269a004
	if (!ctx.cr0.eq) goto loc_8269A004;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827942e4
	ctx.lr = 0x8269A034;
	__imp__KeInsertQueueApc(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269a070
	if (!ctx.cr0.eq) goto loc_8269A070;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82699cb8
	ctx.lr = 0x8269A044;
	sub_82699CB8(ctx, base);
	// b 0x8269a070
	goto loc_8269A070;
loc_8269A048:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8269a06c
	if (ctx.cr6.eq) goto loc_8269A06C;
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793e24
	ctx.lr = 0x8269A064;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793974
	ctx.lr = 0x8269A06C;
	__imp__ObDereferenceObject(ctx, base);
loc_8269A06C:
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
loc_8269A070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8269D6A0) {
	REX_FUNC_PROLOGUE();
	// b 0x8269ce98
	sub_8269CE98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269DABC) {
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
	// lwz r30,148(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x8269daf4
	goto loc_8269DAF4;
loc_8269DAF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x8269DAFC;
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

DEFINE_REX_FUNC(sub_8269ECC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r11,31540
	ctx.r29.s64 = ctx.r11.s64 + 31540;
	// b 0x8269ed10
	goto loc_8269ED10;
loc_8269ED10:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8269e220
	ctx.lr = 0x8269ED24;
	sub_8269E220(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r27,164(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,31540
	ctx.r29.s64 = ctx.r10.s64 + 31540;
	// addi r10,r11,31544
	ctx.r10.s64 = ctx.r11.s64 + 31544;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A1B58) {
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
	ctx.lr = 0x826A1B70;
	sub_826A3A68(ctx, base);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
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

DEFINE_REX_FUNC(__restgprlr_25) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(__savefpr_21) {
	REX_FUNC_PROLOGUE();
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
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3874) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x826a389c
	if (ctx.cr6.eq) goto loc_826A389C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x826a96a8
	ctx.lr = 0x826A389C;
	sub_826A96A8(ctx, base);
loc_826A389C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_95) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A59C0) {
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
	ctx.lr = 0x826A59C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826a5a14
	if (!ctx.cr6.eq) goto loc_826A5A14;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a5a14
	if (ctx.cr6.eq) goto loc_826A5A14;
loc_826A59F8:
	// bl 0x826a33d0
	ctx.lr = 0x826A59FC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A5A08;
	sub_8269CB20(ctx, base);
loc_826A5A08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A5A0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826A5A14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826a59f8
	if (ctx.cr6.eq) goto loc_826A59F8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826a59f8
	if (ctx.cr6.eq) goto loc_826A59F8;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826a5a08
	if (ctx.cr6.gt) goto loc_826A5A08;
loc_826A5A2C:
	// rlwinm. r28,r5,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x826a5a9c
	if (ctx.cr0.eq) goto loc_826A5A9C;
	// clrlwi. r27,r5,31
	r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne 0x826a5a44
	if (!ctx.cr0.eq) goto loc_826A5A44;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
loc_826A5A44:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x826A5A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a5a94
	if (ctx.cr0.eq) goto loc_826A5A94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826a5a80
	if (!ctx.cr6.lt) goto loc_826A5A80;
	// subf r24,r30,r31
	r24.u64 = r31.u64 - r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826a5a84
	if (!ctx.cr6.eq) goto loc_826A5A84;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// b 0x826a5a88
	goto loc_826A5A88;
loc_826A5A80:
	// add r29,r31,r30
	r29.u64 = r31.u64 + r30.u64;
loc_826A5A84:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_826A5A88:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// ble cr6,0x826a5a2c
	if (!ctx.cr6.gt) goto loc_826A5A2C;
	// b 0x826a5a08
	goto loc_826A5A08;
loc_826A5A94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826a5a0c
	goto loc_826A5A0C;
loc_826A5A9C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a5a08
	if (ctx.cr6.eq) goto loc_826A5A08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x826A5AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & r29.u64;
	// b 0x826a5a0c
	goto loc_826A5A0C;
}

DEFINE_REX_FUNC(sub_826AE080) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826AE088;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826ae0a0
	if (!ctx.cr6.eq) goto loc_826AE0A0;
	// bl 0x826af230
	ctx.lr = 0x826AE0A0;
	sub_826AF230(ctx, base);
loc_826AE0A0:
	// lwz r31,20(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826ae0b0
	if (!ctx.cr6.eq) goto loc_826AE0B0;
	// bl 0x826af230
	ctx.lr = 0x826AE0B0;
	sub_826AF230(ctx, base);
loc_826AE0B0:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ae0c0
	if (!ctx.cr6.eq) goto loc_826AE0C0;
	// bl 0x826af230
	ctx.lr = 0x826AE0C0;
	sub_826AF230(ctx, base);
loc_826AE0C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826ae0f4
	if (ctx.cr6.eq) goto loc_826AE0F4;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826AE0D4:
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826ae10c
	if (ctx.cr6.eq) goto loc_826AE10C;
	// blt cr6,0x826ae11c
	if (ctx.cr6.lt) goto loc_826AE11C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x826ae0d4
	if (ctx.cr6.lt) goto loc_826AE0D4;
loc_826AE0F4:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826AE100:
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_826AE104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_826AE10C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826ae104
	goto loc_826AE104;
loc_826AE11C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ae12c
	if (!ctx.cr6.eq) goto loc_826AE12C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826ae104
	goto loc_826AE104;
loc_826AE12C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x826ae100
	goto loc_826AE100;
}

DEFINE_REX_FUNC(sub_826B40A0) {
	REX_FUNC_PROLOGUE();
	// b 0x82794344
	__imp__DbgBreakPoint(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B4250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,16976
	ctx.r9.s64 = ctx.r9.s64 + 16976;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x826b42b4
	if (ctx.cr6.eq) goto loc_826B42B4;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x826b4294
	if (!ctx.cr6.gt) goto loc_826B4294;
	// li r11,15
	ctx.r11.s64 = 15;
loc_826B4294:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b42b8
	if (ctx.cr6.eq) goto loc_826B42B8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x826B42B0;
	sub_826A22F8(ctx, base);
	// b 0x826b42b8
	goto loc_826B42B8;
loc_826B42B4:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_826B42B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793c54
	ctx.lr = 0x826B42C0;
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B7D68) {
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
	ctx.lr = 0x826B7D70;
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r22,0
	r22.s64 = 0;
	// stw r22,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B7DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r3,r23
	r25.u64 = ctx.r3.u64 + r23.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,540(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 540);
	// addi r28,r30,540
	r28.s64 = r30.s64 + 540;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826b7e5c
	if (ctx.cr6.eq) goto loc_826B7E5C;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x826b7de8
	if (!ctx.cr6.lt) goto loc_826B7DE8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_826B7DE8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x826befc0
	ctx.lr = 0x826B7E08;
	sub_826BEFC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826B7E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x826b7e5c
	if (ctx.cr6.lt) goto loc_826B7E5C;
	// ld r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 104);
	// std r11,128(r30)
	REX_STORE_U64(r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	REX_STORE_U64(r23.u32 + 0, ctx.r11.u64);
loc_826B7E5C:
	// li r24,1
	r24.s64 = 1;
loc_826B7E60:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x826b7f94
	if (!ctx.cr6.eq) goto loc_826B7F94;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826b7f94
	if (ctx.cr6.eq) goto loc_826B7F94;
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b7f94
	if (!ctx.cr6.eq) goto loc_826B7F94;
loc_826B7E7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b7efc
	if (!ctx.cr6.eq) goto loc_826B7EFC;
	// lwz r11,512(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b7ea8
	if (!ctx.cr6.eq) goto loc_826B7EA8;
	// lwz r11,508(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826bf468
	ctx.lr = 0x826B7EA4;
	sub_826BF468(ctx, base);
	// b 0x826b7ec0
	goto loc_826B7EC0;
loc_826B7EA8:
	// lwz r11,500(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 500);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826b7ec4
	if (!ctx.cr6.eq) goto loc_826B7EC4;
	// stw r24,500(r30)
	REX_STORE_U32(r30.u32 + 500, r24.u32);
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// bl 0x826beaf8
	ctx.lr = 0x826B7EC0;
	sub_826BEAF8(ctx, base);
loc_826B7EC0:
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_826B7EC4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x826bf0d0
	ctx.lr = 0x826B7ED8;
	sub_826BF0D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b7ef0
	if (!ctx.cr6.eq) goto loc_826B7EF0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b7e7c
	goto loc_826B7E7C;
loc_826B7EF0:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(r29.s32, 33, ctx.xer);
	// bne cr6,0x826b7efc
	if (!ctx.cr6.eq) goto loc_826B7EFC;
	// stw r24,544(r30)
	REX_STORE_U32(r30.u32 + 544, r24.u32);
loc_826B7EFC:
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826b7f94
	if (ctx.cr6.eq) goto loc_826B7F94;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x826b7f18
	if (!ctx.cr6.lt) goto loc_826B7F18;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_826B7F18:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x826befc0
	ctx.lr = 0x826B7F38;
	sub_826BEFC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826B7F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x826b7f8c
	if (ctx.cr6.lt) goto loc_826B7F8C;
	// ld r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 104);
	// std r11,128(r30)
	REX_STORE_U64(r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	REX_STORE_U64(r23.u32 + 0, ctx.r11.u64);
loc_826B7F8C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b7e60
	goto loc_826B7E60;
loc_826B7F94:
	// addi r11,r29,-33
	ctx.r11.s64 = r29.s64 + -33;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & r29.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// blt cr6,0x826b8010
	if (ctx.cr6.lt) goto loc_826B8010;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8010
	if (ctx.cr6.eq) goto loc_826B8010;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B7FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 72);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B8010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8010:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b802c
	goto loc_826B802C;
loc_826B802C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826D18F8) {
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
	ctx.lr = 0x826D1900;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r23
	r30.u64 = r23.u64;
	// beq cr6,0x826d1b4c
	if (ctx.cr6.eq) goto loc_826D1B4C;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826d1b4c
	if (ctx.cr6.eq) goto loc_826D1B4C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d1b4c
	if (ctx.cr6.eq) goto loc_826D1B4C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d1b4c
	if (ctx.cr6.eq) goto loc_826D1B4C;
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826d1958
	if (ctx.cr6.eq) goto loc_826D1958;
	// lis r30,-32764
	r30.s64 = -2147221504;
	// ori r30,r30,10
	r30.u64 = r30.u64 | 10;
	// b 0x826d1b54
	goto loc_826D1B54;
loc_826D1958:
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// stw r23,0(r26)
	REX_STORE_U32(r26.u32 + 0, r23.u32);
	// lwz r11,72(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 72);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826d1b60
	if (ctx.cr6.eq) goto loc_826D1B60;
	// lwz r11,820(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 820);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d197c
	if (!ctx.cr6.eq) goto loc_826D197C;
	// stw r23,696(r31)
	REX_STORE_U32(r31.u32 + 696, r23.u32);
loc_826D197C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// lis r10,-32764
	ctx.r10.s64 = -2147221504;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// ori r25,r9,4
	r25.u64 = ctx.r9.u64 | 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1a5c
	if (ctx.cr6.eq) goto loc_826D1A5C;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d19bc
	if (ctx.cr6.eq) goto loc_826D19BC;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d19bc
	if (ctx.cr6.eq) goto loc_826D19BC;
	// bl 0x826385e8
	ctx.lr = 0x826D19BC;
	sub_826385E8(ctx, base);
loc_826D19BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261e208
	ctx.lr = 0x826D19C4;
	sub_8261E208(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x826d1a00
	if (!ctx.cr6.eq) goto loc_826D1A00;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r28,r11,16960
	r28.u64 = ctx.r11.u64 | 16960;
loc_826D19D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261df08
	ctx.lr = 0x826D19E0;
	sub_8261DF08(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bgt cr6,0x826d1a08
	if (ctx.cr6.gt) goto loc_826D1A08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261e208
	ctx.lr = 0x826D19F4;
	sub_8261E208(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x826d19d8
	if (ctx.cr6.eq) goto loc_826D19D8;
loc_826D1A00:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x826d1a50
	if (!ctx.cr6.eq) goto loc_826D1A50;
loc_826D1A08:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1a30
	if (ctx.cr6.eq) goto loc_826D1A30;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d1a30
	if (!ctx.cr6.eq) goto loc_826D1A30;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826d1b60
	goto loc_826D1B60;
loc_826D1A30:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// b 0x826d1b60
	goto loc_826D1B60;
loc_826D1A50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826d1b54
	if (ctx.cr6.lt) goto loc_826D1B54;
	// stw r23,696(r31)
	REX_STORE_U32(r31.u32 + 696, r23.u32);
loc_826D1A5C:
	// sth r23,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r23.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cd388
	ctx.lr = 0x826D1A70;
	sub_826CD388(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r8,452(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 452);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826d1a9c
	if (ctx.cr6.eq) goto loc_826D1A9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cdcc8
	ctx.lr = 0x826D1A98;
	sub_826CDCC8(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_826D1A9C:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x826d1ab4
	if (!ctx.cr6.eq) goto loc_826D1AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261df08
	ctx.lr = 0x826D1AAC;
	sub_8261DF08(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826d1b60
	goto loc_826D1B60;
loc_826D1AB4:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x826d1b08
	if (!ctx.cr6.eq) goto loc_826D1B08;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,696(r31)
	REX_STORE_U32(r31.u32 + 696, ctx.r11.u32);
	// stw r10,72(r24)
	REX_STORE_U32(r24.u32 + 72, ctx.r10.u32);
	// lwz r9,704(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826d1b60
	if (ctx.cr6.eq) goto loc_826D1B60;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826d1b60
	if (ctx.cr6.eq) goto loc_826D1B60;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e56d8
	ctx.lr = 0x826D1AE8;
	sub_826E56D8(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r6.u32);
	// b 0x826d1b60
	goto loc_826D1B60;
loc_826D1B08:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x826d1b38
	if (!ctx.cr6.eq) goto loc_826D1B38;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1a30
	if (ctx.cr6.eq) goto loc_826D1A30;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d1a30
	if (!ctx.cr6.eq) goto loc_826D1A30;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826d1b60
	goto loc_826D1B60;
loc_826D1B38:
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,72(r24)
	REX_STORE_U32(r24.u32 + 72, ctx.r11.u32);
	// bge cr6,0x826d1b60
	if (!ctx.cr6.lt) goto loc_826D1B60;
	// b 0x826d1b54
	goto loc_826D1B54;
loc_826D1B4C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
loc_826D1B54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d1bc8
	if (ctx.cr6.eq) goto loc_826D1BC8;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
loc_826D1B60:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d1b7c
	if (!ctx.cr6.eq) goto loc_826D1B7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d1bac
	if (ctx.cr6.eq) goto loc_826D1BAC;
loc_826D1B7C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1bac
	if (ctx.cr6.eq) goto loc_826D1BAC;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826d1bac
	if (!ctx.cr6.eq) goto loc_826D1BAC;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r8.u32);
loc_826D1BAC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x826d1bcc
	if (ctx.cr6.eq) goto loc_826D1BCC;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_826D1BC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826D1BCC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826E2058) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_826E2088:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826e20a8
	if (!ctx.cr6.eq) goto loc_826E20A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826e2088
	if (ctx.cr6.lt) goto loc_826E2088;
	// blr 
	return;
loc_826E20A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E4530) {
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
	ctx.lr = 0x826E4538;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e4750
	if (ctx.cr6.eq) goto loc_826E4750;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826e4750
	if (ctx.cr6.eq) goto loc_826E4750;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826e4750
	if (ctx.cr6.eq) goto loc_826E4750;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x826e4750
	if (ctx.cr6.lt) goto loc_826E4750;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x826e4750
	if (ctx.cr6.gt) goto loc_826E4750;
	// mullw r22,r5,r5
	r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826E4594;
	sub_826A2E60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x826e45d0
	if (!ctx.cr6.gt) goto loc_826E45D0;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_826E45AC:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// beq cr6,0x826e45c0
	if (ctx.cr6.eq) goto loc_826E45C0;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
loc_826E45C0:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stwx r10,r8,r26
	REX_STORE_U32(ctx.r8.u32 + r26.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826e45ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E45AC;
loc_826E45D0:
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x826e461c
	if (!ctx.cr6.gt) goto loc_826E461C;
loc_826E45E0:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// bl 0x826e43c8
	ctx.lr = 0x826E4600;
	sub_826E43C8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e4744
	if (ctx.cr6.lt) goto loc_826E4744;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x826e45e0
	if (ctx.cr6.lt) goto loc_826E45E0;
loc_826E461C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826e465c
	if (!ctx.cr6.gt) goto loc_826E465C;
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_826E4638:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826e464c
	if (ctx.cr6.lt) goto loc_826E464C;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x826e4650
	goto loc_826E4650;
loc_826E464C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_826E4650:
	// rlwinm r11,r11,0,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC00000;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826e4638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4638;
loc_826E465C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// lfs f0,6156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x826e4704
	if (ctx.cr6.lt) goto loc_826E4704;
	// addi r9,r22,-3
	ctx.r9.s64 = r22.s64 + -3;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
loc_826E4678:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x826e4678
	if (ctx.cr6.lt) goto loc_826E4678;
loc_826E4704:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x826e4744
	if (!ctx.cr6.lt) goto loc_826E4744;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826E4720:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826e4720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4720;
loc_826E4744:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_826E4750:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826F7E58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,30080
	ctx.r5.s64 = ctx.r11.s64 + 30080;
loc_826F7E68:
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826F7E70:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826f7e90
	if (!ctx.cr6.eq) goto loc_826F7E90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x826f7e70
	if (ctx.cr6.lt) goto loc_826F7E70;
loc_826F7E90:
	// stbx r11,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
loc_826F7EA4:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826f7ec4
	if (!ctx.cr6.eq) goto loc_826F7EC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x826f7ea4
	if (ctx.cr6.lt) goto loc_826F7EA4;
loc_826F7EC4:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// blt cr6,0x826f7e68
	if (ctx.cr6.lt) goto loc_826F7E68;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FC578) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc5ac
	if (!ctx.cr6.eq) goto loc_826FC5AC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826FC5AC:
	// lwz r11,22260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22260);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826fc5d4
	if (!ctx.cr6.eq) goto loc_826FC5D4;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826FC5D4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// ori r8,r11,39848
	ctx.r8.u64 = ctx.r11.u64 | 39848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x826a1e70
	ctx.lr = 0x826FC604;
	sub_826A1E70(ctx, base);
	// lwz r6,22112(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,22280(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22280);
	// lwz r4,22284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 22284);
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82716ae0
	ctx.lr = 0x826FC62C;
	sub_82716AE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82703B88) {
	REX_FUNC_PROLOGUE();
	// lwz r10,15332(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15332);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-3
	ctx.r9.s64 = -3;
	// stw r11,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,3400(r3)
	REX_STORE_U32(ctx.r3.u32 + 3400, ctx.r9.u32);
	// stw r11,3404(r3)
	REX_STORE_U32(ctx.r3.u32 + 3404, ctx.r11.u32);
	// stw r11,3420(r3)
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r11.u32);
	// beq cr6,0x82703bc0
	if (ctx.cr6.eq) goto loc_82703BC0;
	// stw r11,14820(r3)
	REX_STORE_U32(ctx.r3.u32 + 14820, ctx.r11.u32);
	// stw r11,3408(r3)
	REX_STORE_U32(ctx.r3.u32 + 3408, ctx.r11.u32);
	// stw r11,3424(r3)
	REX_STORE_U32(ctx.r3.u32 + 3424, ctx.r11.u32);
	// stw r11,22360(r3)
	REX_STORE_U32(ctx.r3.u32 + 22360, ctx.r11.u32);
	// blr 
	return;
loc_82703BC0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3408(r3)
	REX_STORE_U32(ctx.r3.u32 + 3408, ctx.r11.u32);
	// stw r11,3424(r3)
	REX_STORE_U32(ctx.r3.u32 + 3424, ctx.r11.u32);
	// stw r10,14820(r3)
	REX_STORE_U32(ctx.r3.u32 + 14820, ctx.r10.u32);
	// stw r11,22360(r3)
	REX_STORE_U32(ctx.r3.u32 + 22360, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8270DA78) {
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
	ctx.lr = 0x8270DA80;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r26,r24
	r26.u64 = r24.u64;
	// bl 0x8270be30
	ctx.lr = 0x8270DA98;
	sub_8270BE30(ctx, base);
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270dacc
	if (!ctx.cr6.eq) goto loc_8270DACC;
	// lwz r11,22512(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270dacc
	if (ctx.cr6.eq) goto loc_8270DACC;
	// lwz r11,22636(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270dacc
	if (!ctx.cr6.eq) goto loc_8270DACC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82767078
	ctx.lr = 0x8270DAC4;
	sub_82767078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270f434
	if (!ctx.cr6.eq) goto loc_8270F434;
loc_8270DACC:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8270dd60
	if (!ctx.cr6.eq) goto loc_8270DD60;
	// lwz r11,21760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270dd14
	if (ctx.cr6.eq) goto loc_8270DD14;
	// lwz r11,22088(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270dc64
	if (ctx.cr6.eq) goto loc_8270DC64;
	// lwz r11,22476(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270dc64
	if (!ctx.cr6.eq) goto loc_8270DC64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r25,1
	r25.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270db74
	if (!ctx.cr6.lt) goto loc_8270DB74;
loc_8270DB1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270db74
	if (ctx.cr6.eq) goto loc_8270DB74;
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
	// bge 0x8270db64
	if (!ctx.cr0.lt) goto loc_8270DB64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DB64;
	sub_82725E38(ctx, base);
loc_8270DB64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270db1c
	if (ctx.cr6.gt) goto loc_8270DB1C;
loc_8270DB74:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270dbac
	if (!ctx.cr0.lt) goto loc_8270DBAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DBAC;
	sub_82725E38(ctx, base);
loc_8270DBAC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r29,21764(r27)
	REX_STORE_U32(r27.u32 + 21764, r29.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270dc24
	if (!ctx.cr6.lt) goto loc_8270DC24;
loc_8270DBCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270dc24
	if (ctx.cr6.eq) goto loc_8270DC24;
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
	// bge 0x8270dc14
	if (!ctx.cr0.lt) goto loc_8270DC14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DC14;
	sub_82725E38(ctx, base);
loc_8270DC14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270dbcc
	if (ctx.cr6.gt) goto loc_8270DBCC;
loc_8270DC24:
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
	// bge 0x8270dc5c
	if (!ctx.cr0.lt) goto loc_8270DC5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DC5C;
	sub_82725E38(ctx, base);
loc_8270DC5C:
	// stw r30,21768(r27)
	REX_STORE_U32(r27.u32 + 21768, r30.u32);
	// b 0x8270dd14
	goto loc_8270DD14;
loc_8270DC64:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270dcd8
	if (!ctx.cr6.lt) goto loc_8270DCD8;
loc_8270DC80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270dcd8
	if (ctx.cr6.eq) goto loc_8270DCD8;
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
	// bge 0x8270dcc8
	if (!ctx.cr0.lt) goto loc_8270DCC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DCC8;
	sub_82725E38(ctx, base);
loc_8270DCC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270dc80
	if (ctx.cr6.gt) goto loc_8270DC80;
loc_8270DCD8:
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
	// bge 0x8270dd10
	if (!ctx.cr0.lt) goto loc_8270DD10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DD10;
	sub_82725E38(ctx, base);
loc_8270DD10:
	// stw r30,22092(r27)
	REX_STORE_U32(r27.u32 + 22092, r30.u32);
loc_8270DD14:
	// lwz r11,22300(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270dd30
	if (ctx.cr6.eq) goto loc_8270DD30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8270b8a8
	ctx.lr = 0x8270DD30;
	sub_8270B8A8(ctx, base);
loc_8270DD30:
	// lwz r11,14804(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// stw r24,22456(r27)
	REX_STORE_U32(r27.u32 + 22456, r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270dd48
	if (!ctx.cr6.gt) goto loc_8270DD48;
	// lwz r11,21908(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21908);
	// stw r11,21900(r27)
	REX_STORE_U32(r27.u32 + 21900, ctx.r11.u32);
loc_8270DD48:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826fc738
	ctx.lr = 0x8270DD58;
	sub_826FC738(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
loc_8270DD60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270dd80
	if (ctx.cr6.eq) goto loc_8270DD80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8270dd80
	if (ctx.cr6.eq) goto loc_8270DD80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8270dd80
	if (ctx.cr6.eq) goto loc_8270DD80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270f430
	if (!ctx.cr6.eq) goto loc_8270F430;
loc_8270DD80:
	// lwz r11,21776(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270de08
	if (ctx.cr6.eq) goto loc_8270DE08;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270dde4
	if (!ctx.cr6.lt) goto loc_8270DDE4;
loc_8270DDA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270dde4
	if (ctx.cr6.eq) goto loc_8270DDE4;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8270ddd4
	if (!ctx.cr0.lt) goto loc_8270DDD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DDD4;
	sub_82725E38(ctx, base);
loc_8270DDD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270dda4
	if (ctx.cr6.gt) goto loc_8270DDA4;
loc_8270DDE4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8270de08
	if (!ctx.cr0.lt) goto loc_8270DE08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DE08;
	sub_82725E38(ctx, base);
loc_8270DE08:
	// lwz r11,21760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21760);
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e044
	if (ctx.cr6.eq) goto loc_8270E044;
	// lwz r11,22088(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270df94
	if (ctx.cr6.eq) goto loc_8270DF94;
	// lwz r11,22476(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270df94
	if (!ctx.cr6.eq) goto loc_8270DF94;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270dea4
	if (!ctx.cr6.lt) goto loc_8270DEA4;
loc_8270DE4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270dea4
	if (ctx.cr6.eq) goto loc_8270DEA4;
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
	// bge 0x8270de94
	if (!ctx.cr0.lt) goto loc_8270DE94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DE94;
	sub_82725E38(ctx, base);
loc_8270DE94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270de4c
	if (ctx.cr6.gt) goto loc_8270DE4C;
loc_8270DEA4:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270dedc
	if (!ctx.cr0.lt) goto loc_8270DEDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DEDC;
	sub_82725E38(ctx, base);
loc_8270DEDC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r29,21764(r27)
	REX_STORE_U32(r27.u32 + 21764, r29.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270df54
	if (!ctx.cr6.lt) goto loc_8270DF54;
loc_8270DEFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270df54
	if (ctx.cr6.eq) goto loc_8270DF54;
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
	// bge 0x8270df44
	if (!ctx.cr0.lt) goto loc_8270DF44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DF44;
	sub_82725E38(ctx, base);
loc_8270DF44:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270defc
	if (ctx.cr6.gt) goto loc_8270DEFC;
loc_8270DF54:
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
	// bge 0x8270df8c
	if (!ctx.cr0.lt) goto loc_8270DF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DF8C;
	sub_82725E38(ctx, base);
loc_8270DF8C:
	// stw r30,21768(r27)
	REX_STORE_U32(r27.u32 + 21768, r30.u32);
	// b 0x8270e044
	goto loc_8270E044;
loc_8270DF94:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270e008
	if (!ctx.cr6.lt) goto loc_8270E008;
loc_8270DFB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e008
	if (ctx.cr6.eq) goto loc_8270E008;
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
	// bge 0x8270dff8
	if (!ctx.cr0.lt) goto loc_8270DFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DFF8;
	sub_82725E38(ctx, base);
loc_8270DFF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270dfb0
	if (ctx.cr6.gt) goto loc_8270DFB0;
loc_8270E008:
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
	// bge 0x8270e040
	if (!ctx.cr0.lt) goto loc_8270E040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E040;
	sub_82725E38(ctx, base);
loc_8270E040:
	// stw r30,22092(r27)
	REX_STORE_U32(r27.u32 + 22092, r30.u32);
loc_8270E044:
	// lwz r11,22300(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e060
	if (ctx.cr6.eq) goto loc_8270E060;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8270b8a8
	ctx.lr = 0x8270E060;
	sub_8270B8A8(ctx, base);
loc_8270E060:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e0d4
	if (!ctx.cr6.lt) goto loc_8270E0D4;
loc_8270E07C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e0d4
	if (ctx.cr6.eq) goto loc_8270E0D4;
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
	// bge 0x8270e0c4
	if (!ctx.cr0.lt) goto loc_8270E0C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E0C4;
	sub_82725E38(ctx, base);
loc_8270E0C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e07c
	if (ctx.cr6.gt) goto loc_8270E07C;
loc_8270E0D4:
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
	// bge 0x8270e10c
	if (!ctx.cr0.lt) goto loc_8270E10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E10C;
	sub_82725E38(ctx, base);
loc_8270E10C:
	// lwz r11,22088(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22088);
	// stw r30,3928(r27)
	REX_STORE_U32(r27.u32 + 3928, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e1cc
	if (ctx.cr6.eq) goto loc_8270E1CC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e190
	if (!ctx.cr6.lt) goto loc_8270E190;
loc_8270E138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e190
	if (ctx.cr6.eq) goto loc_8270E190;
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
	// bge 0x8270e180
	if (!ctx.cr0.lt) goto loc_8270E180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E180;
	sub_82725E38(ctx, base);
loc_8270E180:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e138
	if (ctx.cr6.gt) goto loc_8270E138;
loc_8270E190:
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
	// bge 0x8270e1c8
	if (!ctx.cr0.lt) goto loc_8270E1C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E1C8;
	sub_82725E38(ctx, base);
loc_8270E1C8:
	// stw r30,21900(r27)
	REX_STORE_U32(r27.u32 + 21900, r30.u32);
loc_8270E1CC:
	// lwz r11,3468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e288
	if (ctx.cr6.eq) goto loc_8270E288;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e24c
	if (!ctx.cr6.lt) goto loc_8270E24C;
loc_8270E1F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e24c
	if (ctx.cr6.eq) goto loc_8270E24C;
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
	// bge 0x8270e23c
	if (!ctx.cr0.lt) goto loc_8270E23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E23C;
	sub_82725E38(ctx, base);
loc_8270E23C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e1f4
	if (ctx.cr6.gt) goto loc_8270E1F4;
loc_8270E24C:
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
	// bge 0x8270e284
	if (!ctx.cr0.lt) goto loc_8270E284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E284;
	sub_82725E38(ctx, base);
loc_8270E284:
	// stw r30,3472(r27)
	REX_STORE_U32(r27.u32 + 3472, r30.u32);
loc_8270E288:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270e498
	if (!ctx.cr6.eq) goto loc_8270E498;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8270e308
	if (!ctx.cr6.lt) goto loc_8270E308;
loc_8270E2B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e308
	if (ctx.cr6.eq) goto loc_8270E308;
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
	// bge 0x8270e2f8
	if (!ctx.cr0.lt) goto loc_8270E2F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E2F8;
	sub_82725E38(ctx, base);
loc_8270E2F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e2b0
	if (ctx.cr6.gt) goto loc_8270E2B0;
loc_8270E308:
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
	// bge 0x8270e340
	if (!ctx.cr0.lt) goto loc_8270E340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E340;
	sub_82725E38(ctx, base);
loc_8270E340:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x8270e44c
	if (!ctx.cr6.eq) goto loc_8270E44C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8270e3bc
	if (!ctx.cr6.lt) goto loc_8270E3BC;
loc_8270E364:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e3bc
	if (ctx.cr6.eq) goto loc_8270E3BC;
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
	// bge 0x8270e3ac
	if (!ctx.cr0.lt) goto loc_8270E3AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E3AC;
	sub_82725E38(ctx, base);
loc_8270E3AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e364
	if (ctx.cr6.gt) goto loc_8270E364;
loc_8270E3BC:
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
	// bge 0x8270e3f4
	if (!ctx.cr0.lt) goto loc_8270E3F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E3F4;
	sub_82725E38(ctx, base);
loc_8270E3F4:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// bge cr6,0x8270f430
	if (!ctx.cr6.lt) goto loc_8270F430;
	// addi r11,r30,112
	ctx.r11.s64 = r30.s64 + 112;
	// lwz r10,14804(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// addi r7,r9,26208
	ctx.r7.s64 = ctx.r9.s64 + 26208;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r3,r5,26264
	ctx.r3.s64 = ctx.r5.s64 + 26264;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r4,26648
	ctx.r11.s64 = ctx.r4.s64 + 26648;
	// stw r9,3416(r27)
	REX_STORE_U32(r27.u32 + 3416, ctx.r9.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3412(r27)
	REX_STORE_U32(r27.u32 + 3412, ctx.r8.u32);
	// lwz r6,-4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stw r6,14808(r27)
	REX_STORE_U32(r27.u32 + 14808, ctx.r6.u32);
	// b 0x8270e490
	goto loc_8270E490;
loc_8270E44C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,14804(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,26152
	ctx.r8.s64 = ctx.r11.s64 + 26152;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r5,r7,26180
	ctx.r5.s64 = ctx.r7.s64 + 26180;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r6,26648
	ctx.r11.s64 = ctx.r6.s64 + 26648;
	// stw r4,3416(r27)
	REX_STORE_U32(r27.u32 + 3416, ctx.r4.u32);
	// lwzx r3,r9,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,3412(r27)
	REX_STORE_U32(r27.u32 + 3412, ctx.r3.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,14808(r27)
	REX_STORE_U32(r27.u32 + 14808, ctx.r10.u32);
loc_8270E490:
	// bne cr6,0x8270e498
	if (!ctx.cr6.eq) goto loc_8270E498;
	// stw r25,14804(r27)
	REX_STORE_U32(r27.u32 + 14804, r25.u32);
loc_8270E498:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8270e50c
	if (!ctx.cr6.lt) goto loc_8270E50C;
loc_8270E4B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e50c
	if (ctx.cr6.eq) goto loc_8270E50C;
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
	// bge 0x8270e4fc
	if (!ctx.cr0.lt) goto loc_8270E4FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E4FC;
	sub_82725E38(ctx, base);
loc_8270E4FC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e4b4
	if (ctx.cr6.gt) goto loc_8270E4B4;
loc_8270E50C:
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
	// bge 0x8270e544
	if (!ctx.cr0.lt) goto loc_8270E544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E544;
	sub_82725E38(ctx, base);
loc_8270E544:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r30,3976(r27)
	REX_STORE_U32(r27.u32 + 3976, r30.u32);
	// bgt cr6,0x8270e604
	if (ctx.cr6.gt) goto loc_8270E604;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e5c4
	if (!ctx.cr6.lt) goto loc_8270E5C4;
loc_8270E56C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e5c4
	if (ctx.cr6.eq) goto loc_8270E5C4;
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
	// bge 0x8270e5b4
	if (!ctx.cr0.lt) goto loc_8270E5B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E5B4;
	sub_82725E38(ctx, base);
loc_8270E5B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e56c
	if (ctx.cr6.gt) goto loc_8270E56C;
loc_8270E5C4:
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
	// bge 0x8270e5fc
	if (!ctx.cr0.lt) goto loc_8270E5FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E5FC;
	sub_82725E38(ctx, base);
loc_8270E5FC:
	// stw r30,252(r27)
	REX_STORE_U32(r27.u32 + 252, r30.u32);
	// b 0x8270e608
	goto loc_8270E608;
loc_8270E604:
	// stw r24,252(r27)
	REX_STORE_U32(r27.u32 + 252, r24.u32);
loc_8270E608:
	// lwz r11,3464(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e6c4
	if (ctx.cr6.eq) goto loc_8270E6C4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e688
	if (!ctx.cr6.lt) goto loc_8270E688;
loc_8270E630:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e688
	if (ctx.cr6.eq) goto loc_8270E688;
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
	// bge 0x8270e678
	if (!ctx.cr0.lt) goto loc_8270E678;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E678;
	sub_82725E38(ctx, base);
loc_8270E678:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e630
	if (ctx.cr6.gt) goto loc_8270E630;
loc_8270E688:
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
	// bge 0x8270e6c0
	if (!ctx.cr0.lt) goto loc_8270E6C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E6C0;
	sub_82725E38(ctx, base);
loc_8270E6C0:
	// stw r30,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r30.u32);
loc_8270E6C4:
	// lwz r11,3456(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270e704
	if (!ctx.cr6.eq) goto loc_8270E704;
	// lwz r11,3976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3976);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8270e6e8
	if (ctx.cr6.gt) goto loc_8270E6E8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r25,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r25.u32);
	// b 0x8270e708
	goto loc_8270E708;
loc_8270E6E8:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r24,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r24.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,26320
	ctx.r11.s64 = ctx.r9.s64 + 26320;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,-4(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x8270e708
	goto loc_8270E708;
loc_8270E704:
	// lwz r28,3976(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 3976);
loc_8270E708:
	// lwz r11,2996(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2996);
	// stw r28,248(r27)
	REX_STORE_U32(r27.u32 + 248, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r24.u32);
	// beq cr6,0x8270e750
	if (ctx.cr6.eq) goto loc_8270E750;
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270e750
	if (ctx.cr6.eq) goto loc_8270E750;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(r28.s32, 9, ctx.xer);
	// blt cr6,0x8270e738
	if (ctx.cr6.lt) goto loc_8270E738;
	// stw r25,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r25.u32);
	// b 0x8270e750
	goto loc_8270E750;
loc_8270E738:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e748
	if (ctx.cr6.eq) goto loc_8270E748;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8270e750
	if (!ctx.cr6.eq) goto loc_8270E750;
loc_8270E748:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, ctx.r11.u32);
loc_8270E750:
	// lwz r11,21796(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e80c
	if (ctx.cr6.eq) goto loc_8270E80C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270e7d0
	if (!ctx.cr6.lt) goto loc_8270E7D0;
loc_8270E778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e7d0
	if (ctx.cr6.eq) goto loc_8270E7D0;
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
	// bge 0x8270e7c0
	if (!ctx.cr0.lt) goto loc_8270E7C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E7C0;
	sub_82725E38(ctx, base);
loc_8270E7C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e778
	if (ctx.cr6.gt) goto loc_8270E778;
loc_8270E7D0:
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
	// bge 0x8270e808
	if (!ctx.cr0.lt) goto loc_8270E808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E808;
	sub_82725E38(ctx, base);
loc_8270E808:
	// stw r30,21800(r27)
	REX_STORE_U32(r27.u32 + 21800, r30.u32);
loc_8270E80C:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e820
	if (ctx.cr6.eq) goto loc_8270E820;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8270eab0
	if (!ctx.cr6.eq) goto loc_8270EAB0;
loc_8270E820:
	// lwz r11,22512(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22512);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e848
	if (ctx.cr6.eq) goto loc_8270E848;
	// bl 0x82718bb8
	ctx.lr = 0x8270E838;
	sub_82718BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8270e854
	if (ctx.cr6.eq) goto loc_8270E854;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
loc_8270E848:
	// bl 0x82706ca8
	ctx.lr = 0x8270E84C;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270f434
	if (!ctx.cr6.eq) goto loc_8270F434;
loc_8270E854:
	// lwz r11,20932(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e8a4
	if (ctx.cr6.eq) goto loc_8270E8A4;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270e8a4
	if (!ctx.cr6.gt) goto loc_8270E8A4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8270E874:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,4,28,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,144(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8270e874
	if (ctx.cr6.lt) goto loc_8270E874;
loc_8270E8A4:
	// lwz r11,2992(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2992);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8270eaac
	if (ctx.cr6.eq) goto loc_8270EAAC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e928
	if (!ctx.cr6.lt) goto loc_8270E928;
loc_8270E8D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e928
	if (ctx.cr6.eq) goto loc_8270E928;
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
	// bge 0x8270e918
	if (!ctx.cr0.lt) goto loc_8270E918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E918;
	sub_82725E38(ctx, base);
loc_8270E918:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e8d0
	if (ctx.cr6.gt) goto loc_8270E8D0;
loc_8270E928:
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
	// bge 0x8270e960
	if (!ctx.cr0.lt) goto loc_8270E960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E960;
	sub_82725E38(ctx, base);
loc_8270E960:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8270e970
	if (!ctx.cr6.eq) goto loc_8270E970;
	// stw r24,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r24.u32);
	// b 0x8270eaac
	goto loc_8270EAAC;
loc_8270E970:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270e9e4
	if (!ctx.cr6.lt) goto loc_8270E9E4;
loc_8270E98C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270e9e4
	if (ctx.cr6.eq) goto loc_8270E9E4;
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
	// bge 0x8270e9d4
	if (!ctx.cr0.lt) goto loc_8270E9D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270E9D4;
	sub_82725E38(ctx, base);
loc_8270E9D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270e98c
	if (ctx.cr6.gt) goto loc_8270E98C;
loc_8270E9E4:
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
	// bge 0x8270ea1c
	if (!ctx.cr0.lt) goto loc_8270EA1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EA1C;
	sub_82725E38(ctx, base);
loc_8270EA1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8270ea2c
	if (!ctx.cr6.eq) goto loc_8270EA2C;
	// stw r25,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r25.u32);
	// b 0x8270eaac
	goto loc_8270EAAC;
loc_8270EA2C:
	// lwz r11,22512(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22512);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270ea54
	if (ctx.cr6.eq) goto loc_8270EA54;
	// bl 0x82718bb8
	ctx.lr = 0x8270EA44;
	sub_82718BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8270ea60
	if (ctx.cr6.eq) goto loc_8270EA60;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
loc_8270EA54:
	// bl 0x82706ca8
	ctx.lr = 0x8270EA58;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270f434
	if (!ctx.cr6.eq) goto loc_8270F434;
loc_8270EA60:
	// lwz r11,21868(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270eaac
	if (ctx.cr6.eq) goto loc_8270EAAC;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270eaac
	if (!ctx.cr6.gt) goto loc_8270EAAC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8270EA80:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,12,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8270ea80
	if (ctx.cr6.lt) goto loc_8270EA80;
loc_8270EAAC:
	// stw r24,22456(r27)
	REX_STORE_U32(r27.u32 + 22456, r24.u32);
loc_8270EAB0:
	// lwz r11,2992(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2992);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8270eae4
	if (ctx.cr6.eq) goto loc_8270EAE4;
	// lwz r11,1900(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r24,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r24.u16);
	// lwz r10,1900(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r24,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r24.u16);
	// lwz r9,1904(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r24,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, r24.u16);
	// lwz r8,1904(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r24,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, r24.u16);
	// b 0x8270eb08
	goto loc_8270EB08;
loc_8270EAE4:
	// lwz r10,1900(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r9,1900(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lwz r8,1904(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r11,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r11.u16);
	// lwz r7,1904(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
loc_8270EB08:
	// lwz r10,3452(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3452);
	// addi r11,r27,4016
	ctx.r11.s64 = r27.s64 + 4016;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8270eb1c
	if (!ctx.cr6.eq) goto loc_8270EB1C;
	// addi r11,r27,5296
	ctx.r11.s64 = r27.s64 + 5296;
loc_8270EB1C:
	// stw r11,6576(r27)
	REX_STORE_U32(r27.u32 + 6576, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,6592
	ctx.r11.s64 = r27.s64 + 6592;
	// bne cr6,0x8270eb30
	if (!ctx.cr6.eq) goto loc_8270EB30;
	// addi r11,r27,10688
	ctx.r11.s64 = r27.s64 + 10688;
loc_8270EB30:
	// stw r11,14784(r27)
	REX_STORE_U32(r27.u32 + 14784, ctx.r11.u32);
	// stw r28,248(r27)
	REX_STORE_U32(r27.u32 + 248, r28.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270f430
	if (!ctx.cr6.eq) goto loc_8270F430;
	// stw r28,248(r27)
	REX_STORE_U32(r27.u32 + 248, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8270f430
	if (!ctx.cr6.gt) goto loc_8270F430;
	// cmpwi cr6,r28,31
	ctx.cr6.compare<int32_t>(r28.s32, 31, ctx.xer);
	// bgt cr6,0x8270f430
	if (ctx.cr6.gt) goto loc_8270F430;
	// lwz r11,3976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3976);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8270eb78
	if (ctx.cr6.gt) goto loc_8270EB78;
	// addi r11,r27,2864
	ctx.r11.s64 = r27.s64 + 2864;
	// addi r10,r27,2824
	ctx.r10.s64 = r27.s64 + 2824;
	// stw r11,2928(r27)
	REX_STORE_U32(r27.u32 + 2928, ctx.r11.u32);
	// stw r10,2940(r27)
	REX_STORE_U32(r27.u32 + 2940, ctx.r10.u32);
loc_8270EB78:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270f040
	if (ctx.cr6.eq) goto loc_8270F040;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8270ede4
	if (ctx.cr6.eq) goto loc_8270EDE4;
	// lwz r11,21792(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270edb4
	if (ctx.cr6.eq) goto loc_8270EDB4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ec08
	if (!ctx.cr6.lt) goto loc_8270EC08;
loc_8270EBB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ec08
	if (ctx.cr6.eq) goto loc_8270EC08;
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
	// bge 0x8270ebf8
	if (!ctx.cr0.lt) goto loc_8270EBF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EBF8;
	sub_82725E38(ctx, base);
loc_8270EBF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ebb0
	if (ctx.cr6.gt) goto loc_8270EBB0;
loc_8270EC08:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270ec40
	if (!ctx.cr0.lt) goto loc_8270EC40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EC40;
	sub_82725E38(ctx, base);
loc_8270EC40:
	// mr r26,r28
	r26.u64 = r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8270ecfc
	if (ctx.cr6.eq) goto loc_8270ECFC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ecc0
	if (!ctx.cr6.lt) goto loc_8270ECC0;
loc_8270EC68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ecc0
	if (ctx.cr6.eq) goto loc_8270ECC0;
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
	// bge 0x8270ecb0
	if (!ctx.cr0.lt) goto loc_8270ECB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ECB0;
	sub_82725E38(ctx, base);
loc_8270ECB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ec68
	if (ctx.cr6.gt) goto loc_8270EC68;
loc_8270ECC0:
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
	// bge 0x8270ecf8
	if (!ctx.cr0.lt) goto loc_8270ECF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ECF8;
	sub_82725E38(ctx, base);
loc_8270ECF8:
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
loc_8270ECFC:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x8270edb4
	if (!ctx.cr6.eq) goto loc_8270EDB4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ed78
	if (!ctx.cr6.lt) goto loc_8270ED78;
loc_8270ED20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ed78
	if (ctx.cr6.eq) goto loc_8270ED78;
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
	// bge 0x8270ed68
	if (!ctx.cr0.lt) goto loc_8270ED68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ED68;
	sub_82725E38(ctx, base);
loc_8270ED68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ed20
	if (ctx.cr6.gt) goto loc_8270ED20;
loc_8270ED78:
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
	// bge 0x8270edb0
	if (!ctx.cr0.lt) goto loc_8270EDB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EDB0;
	sub_82725E38(ctx, base);
loc_8270EDB0:
	// addi r26,r30,2
	r26.s64 = r30.s64 + 2;
loc_8270EDB4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8271ab38
	ctx.lr = 0x8270EDC0;
	sub_8271AB38(ctx, base);
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// lwz r10,404(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 404);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270edd8
	if (!ctx.cr6.eq) goto loc_8270EDD8;
	// stw r10,22456(r27)
	REX_STORE_U32(r27.u32 + 22456, ctx.r10.u32);
	// b 0x8270ede4
	goto loc_8270EDE4;
loc_8270EDD8:
	// lwz r9,22456(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 22456);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8270f430
	if (ctx.cr6.lt) goto loc_8270F430;
loc_8270EDE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270f040
	if (ctx.cr6.eq) goto loc_8270F040;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8270f040
	if (ctx.cr6.eq) goto loc_8270F040;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8270cbf8
	ctx.lr = 0x8270EDFC;
	sub_8270CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270f434
	if (!ctx.cr6.eq) goto loc_8270F434;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ee78
	if (!ctx.cr6.lt) goto loc_8270EE78;
loc_8270EE20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ee78
	if (ctx.cr6.eq) goto loc_8270EE78;
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
	// bge 0x8270ee68
	if (!ctx.cr0.lt) goto loc_8270EE68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EE68;
	sub_82725E38(ctx, base);
loc_8270EE68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ee20
	if (ctx.cr6.gt) goto loc_8270EE20;
loc_8270EE78:
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
	// bge 0x8270eeb0
	if (!ctx.cr0.lt) goto loc_8270EEB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EEB0;
	sub_82725E38(ctx, base);
loc_8270EEB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, r30.u32);
	// beq cr6,0x8270ef74
	if (ctx.cr6.eq) goto loc_8270EF74;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ef30
	if (!ctx.cr6.lt) goto loc_8270EF30;
loc_8270EED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ef30
	if (ctx.cr6.eq) goto loc_8270EF30;
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
	// bge 0x8270ef20
	if (!ctx.cr0.lt) goto loc_8270EF20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EF20;
	sub_82725E38(ctx, base);
loc_8270EF20:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270eed8
	if (ctx.cr6.gt) goto loc_8270EED8;
loc_8270EF30:
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
	// bge 0x8270ef68
	if (!ctx.cr0.lt) goto loc_8270EF68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EF68;
	sub_82725E38(ctx, base);
loc_8270EF68:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r11.u32);
loc_8270EF74:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2960(r27)
	REX_STORE_U32(r27.u32 + 2960, ctx.r11.u32);
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
	// stw r11,2956(r27)
	REX_STORE_U32(r27.u32 + 2956, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f000
	if (!ctx.cr6.lt) goto loc_8270F000;
loc_8270EFA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f000
	if (ctx.cr6.eq) goto loc_8270F000;
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
	// bge 0x8270eff0
	if (!ctx.cr0.lt) goto loc_8270EFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270EFF0;
	sub_82725E38(ctx, base);
loc_8270EFF0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270efa8
	if (ctx.cr6.gt) goto loc_8270EFA8;
loc_8270F000:
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
	// bge 0x8270f038
	if (!ctx.cr0.lt) goto loc_8270F038;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F038;
	sub_82725E38(ctx, base);
loc_8270F038:
	// stw r30,2112(r27)
	REX_STORE_U32(r27.u32 + 2112, r30.u32);
	// b 0x8270f420
	goto loc_8270F420;
loc_8270F040:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,15496(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 15496);
	// bl 0x827052e8
	ctx.lr = 0x8270F04C;
	sub_827052E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270f434
	if (!ctx.cr6.eq) goto loc_8270F434;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270f430
	if (!ctx.cr6.eq) goto loc_8270F430;
	// stw r24,400(r27)
	REX_STORE_U32(r27.u32 + 400, r24.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f0d8
	if (!ctx.cr6.lt) goto loc_8270F0D8;
loc_8270F080:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f0d8
	if (ctx.cr6.eq) goto loc_8270F0D8;
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
	// bge 0x8270f0c8
	if (!ctx.cr0.lt) goto loc_8270F0C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F0C8;
	sub_82725E38(ctx, base);
loc_8270F0C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f080
	if (ctx.cr6.gt) goto loc_8270F080;
loc_8270F0D8:
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
	// bge 0x8270f110
	if (!ctx.cr0.lt) goto loc_8270F110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F110;
	sub_82725E38(ctx, base);
loc_8270F110:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, r30.u32);
	// beq cr6,0x8270f1d4
	if (ctx.cr6.eq) goto loc_8270F1D4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f190
	if (!ctx.cr6.lt) goto loc_8270F190;
loc_8270F138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f190
	if (ctx.cr6.eq) goto loc_8270F190;
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
	// bge 0x8270f180
	if (!ctx.cr0.lt) goto loc_8270F180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F180;
	sub_82725E38(ctx, base);
loc_8270F180:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f138
	if (ctx.cr6.gt) goto loc_8270F138;
loc_8270F190:
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
	// bge 0x8270f1c8
	if (!ctx.cr0.lt) goto loc_8270F1C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F1C8;
	sub_82725E38(ctx, base);
loc_8270F1C8:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r11.u32);
loc_8270F1D4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f248
	if (!ctx.cr6.lt) goto loc_8270F248;
loc_8270F1F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f248
	if (ctx.cr6.eq) goto loc_8270F248;
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
	// bge 0x8270f238
	if (!ctx.cr0.lt) goto loc_8270F238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F238;
	sub_82725E38(ctx, base);
loc_8270F238:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f1f0
	if (ctx.cr6.gt) goto loc_8270F1F0;
loc_8270F248:
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
	// bge 0x8270f280
	if (!ctx.cr0.lt) goto loc_8270F280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F280;
	sub_82725E38(ctx, base);
loc_8270F280:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x8270f344
	if (ctx.cr6.eq) goto loc_8270F344;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f300
	if (!ctx.cr6.lt) goto loc_8270F300;
loc_8270F2A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f300
	if (ctx.cr6.eq) goto loc_8270F300;
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
	// bge 0x8270f2f0
	if (!ctx.cr0.lt) goto loc_8270F2F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F2F0;
	sub_82725E38(ctx, base);
loc_8270F2F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f2a8
	if (ctx.cr6.gt) goto loc_8270F2A8;
loc_8270F300:
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
	// bge 0x8270f338
	if (!ctx.cr0.lt) goto loc_8270F338;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F338;
	sub_82725E38(ctx, base);
loc_8270F338:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_8270F344:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f3c4
	if (!ctx.cr6.lt) goto loc_8270F3C4;
loc_8270F36C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f3c4
	if (ctx.cr6.eq) goto loc_8270F3C4;
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
	// bge 0x8270f3b4
	if (!ctx.cr0.lt) goto loc_8270F3B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F3B4;
	sub_82725E38(ctx, base);
loc_8270F3B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f36c
	if (ctx.cr6.gt) goto loc_8270F36C;
loc_8270F3C4:
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
	// bge 0x8270f3fc
	if (!ctx.cr0.lt) goto loc_8270F3FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F3FC;
	sub_82725E38(ctx, base);
loc_8270F3FC:
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,2112(r27)
	REX_STORE_U32(r27.u32 + 2112, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270f41c
	if (ctx.cr6.eq) goto loc_8270F41C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827078c8
	ctx.lr = 0x8270F418;
	sub_827078C8(ctx, base);
	// b 0x8270f420
	goto loc_8270F420;
loc_8270F41C:
	// bl 0x82749960
	ctx.lr = 0x8270F420;
	sub_82749960(ctx, base);
loc_8270F420:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8270dd48
	if (ctx.cr6.eq) goto loc_8270DD48;
loc_8270F430:
	// li r3,4
	ctx.r3.s64 = 4;
loc_8270F434:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827BA390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x827BA398;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v60,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v1,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v10
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v26,v29,v9
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v28,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827ba540
	if (!ctx.cr6.eq) goto loc_827BA540;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	r28.s64 = ctx.r1.s64 + 416;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v9,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v30,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v29,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v28,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v26,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v25,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v24,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v23,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v22,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827ba544
	goto loc_827BA544;
loc_827BA540:
	// blt cr6,0x827ba5ac
	if (ctx.cr6.lt) goto loc_827BA5AC;
loc_827BA544:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827ba5ac
	if (!ctx.cr6.gt) goto loc_827BA5AC;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r27,r9,r4
	r27.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r31,-48
	ctx.r10.s64 = r31.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827BA578:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r6,1
	r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// sth r6,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827ba578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA578;
loc_827BA5AC:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b9620
	ctx.lr = 0x827BA5C0;
	sub_827B9620(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827E9A00) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,144
	ctx.r8.s64 = 144;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r2,r5,r6
	ctx.r2.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,240
	ctx.r10.s64 = 240;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v12,r2,r6
	ea = (ctx.r2.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,288
	ctx.r11.s64 = 288;
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v14,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvx128 v15,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v17,r2,r11
	ea = (ctx.r2.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v18,r2,r12
	ea = (ctx.r2.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

