#include "hydrothunder_funcs.34.h"

DEFINE_REX_FUNC(sub_82121DD0) {
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
	ctx.lr = 0x82121DD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82121e04
	if (!ctx.cr6.lt) goto loc_82121E04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26956
	ctx.r3.s64 = ctx.r11.s64 + -26956;
	// bl 0x822f6058
	ctx.lr = 0x82121E04;
	sub_822F6058(ctx, base);
loc_82121E04:
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82121e14
	if (!ctx.cr6.lt) goto loc_82121E14;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82121E14:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82121e30
	if (ctx.cr6.gt) goto loc_82121E30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26932
	ctx.r3.s64 = ctx.r11.s64 + -26932;
	// bl 0x822f6020
	ctx.lr = 0x82121E30;
	sub_822F6020(ctx, base);
loc_82121E30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82121ebc
	if (ctx.cr6.eq) goto loc_82121EBC;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ea0
	ctx.lr = 0x82121E4C;
	sub_82120EA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82121ebc
	if (ctx.cr0.eq) goto loc_82121EBC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121e68
	if (ctx.cr6.lt) goto loc_82121E68;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82121e6c
	goto loc_82121E6C;
loc_82121E68:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82121E6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121e80
	if (ctx.cr6.lt) goto loc_82121E80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82121e84
	goto loc_82121E84;
loc_82121E80:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82121E84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82121E98;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121eb0
	if (ctx.cr6.lt) goto loc_82121EB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82121eb4
	goto loc_82121EB4;
loc_82121EB0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82121EB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r10.u8);
loc_82121EBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8212DEC0) {
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
	ctx.lr = 0x8212DEC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r30,5(r31)
	REX_STORE_U8(r31.u32 + 5, r30.u8);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stb r30,6(r31)
	REX_STORE_U8(r31.u32 + 6, r30.u8);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8212DF08;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8212DF14;
	sub_8269D1B8(ctx, base);
	// li r29,8
	r29.s64 = 8;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8212DF40;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8212DF4C;
	sub_8269D1B8(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// addi r27,r31,44
	r27.s64 = r31.s64 + 44;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_8212DF64:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82125bc8
	ctx.lr = 0x8212DF70;
	sub_82125BC8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// bge 0x8212df64
	if (!ctx.cr0.lt) goto loc_8212DF64;
	// addi r27,r31,68
	r27.s64 = r31.s64 + 68;
	// li r28,1
	r28.s64 = 1;
loc_8212DF84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212e1f8
	ctx.lr = 0x8212DF8C;
	sub_8212E1F8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// bge 0x8212df84
	if (!ctx.cr0.lt) goto loc_8212DF84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// std r30,104(r31)
	REX_STORE_U64(r31.u32 + 104, r30.u64);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// std r30,112(r31)
	REX_STORE_U64(r31.u32 + 112, r30.u64);
	// addi r11,r31,120
	ctx.r11.s64 = r31.s64 + 120;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8212DFC8;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8212DFD4;
	sub_8269D1B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,120(r31)
	REX_STORE_U32(r31.u32 + 120, r28.u32);
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8212DFF8;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8212E004;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
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
	// lwz r3,6044(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// lwz r3,6044(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8213D738) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8213d748
	if (ctx.cr6.lt) goto loc_8213D748;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8213D748:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8213EA90) {
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
	ctx.lr = 0x8213EA98;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r25,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r25.u16);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// std r25,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r25.u64);
	// beq cr6,0x8213ebf0
	if (ctx.cr6.eq) goto loc_8213EBF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r11,-17324
	r30.s64 = ctx.r11.s64 + -17324;
	// addi r27,r10,-17336
	r27.s64 = ctx.r10.s64 + -17336;
	// addi r29,r9,-17344
	r29.s64 = ctx.r9.s64 + -17344;
	// addi r28,r8,-17360
	r28.s64 = ctx.r8.s64 + -17360;
loc_8213EAE0:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EAFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ebf0
	if (ctx.cr0.eq) goto loc_8213EBF0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f670
	ctx.lr = 0x8213EB10;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213EB14;
	sub_8215FA30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x8213EB1C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213ebe4
	if (!ctx.cr0.eq) goto loc_8213EBE4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f670
	ctx.lr = 0x8213EB30;
	sub_8215F670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x8213EB38;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ebe4
	if (ctx.cr0.eq) goto loc_8213EBE4;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r9,r26,12
	ctx.r9.s64 = r26.s64 + 12;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213eb70
	goto loc_8213EB70;
loc_8213EB54:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8213eb68
	if (!ctx.cr6.lt) goto loc_8213EB68;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213eb70
	goto loc_8213EB70;
loc_8213EB68:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213EB70:
	// lbz r8,25(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213eb54
	if (ctx.cr0.eq) goto loc_8213EB54;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213eba0
	if (ctx.cr6.eq) goto loc_8213EBA0;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8213eba0
	if (ctx.cr6.lt) goto loc_8213EBA0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x8213eba8
	goto loc_8213EBA8;
loc_8213EBA0:
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8213EBA8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213ebe4
	if (ctx.cr6.eq) goto loc_8213EBE4;
	// lwz r24,16(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r23,0(r24)
	r23.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x8213EBCC;
	sub_8215F670(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213EBE4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213eae0
	if (!ctx.cr6.eq) goto loc_8213EAE0;
loc_8213EBF0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213edb0
	if (ctx.cr6.eq) goto loc_8213EDB0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EC14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x822f6280
	ctx.lr = 0x8213EC24;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213edc0
	if (ctx.cr0.eq) goto loc_8213EDC0;
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// b 0x8213ecb4
	goto loc_8213ECB4;
loc_8213EC44:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// ble cr6,0x8213eca4
	if (!ctx.cr6.gt) goto loc_8213ECA4;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x8213EC60;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ed08
	if (ctx.cr0.eq) goto loc_8213ED08;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// beq 0x8213ec80
	if (ctx.cr0.eq) goto loc_8213EC80;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8213EC80:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213ecfc
	if (ctx.cr6.lt) goto loc_8213ECFC;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_8213ECA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213f658
	ctx.lr = 0x8213ECAC;
	sub_8213F658(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8213ECB4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213ec44
	if (!ctx.cr6.eq) goto loc_8213EC44;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x8213ed80
	if (ctx.cr6.eq) goto loc_8213ED80;
	// addi r29,r26,12
	r29.s64 = r26.s64 + 12;
loc_8213ECCC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,25(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213ed34
	if (!ctx.cr0.eq) goto loc_8213ED34;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8213ECE8:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8213ed20
	if (!ctx.cr6.lt) goto loc_8213ED20;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213ed28
	goto loc_8213ED28;
loc_8213ECFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8213ED08;
	sub_822F6020(ctx, base);
loc_8213ED08:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8213ED20;
	sub_82120018(ctx, base);
loc_8213ED20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213ED28:
	// lbz r8,25(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213ece8
	if (ctx.cr0.eq) goto loc_8213ECE8;
loc_8213ED34:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213ed5c
	if (ctx.cr6.eq) goto loc_8213ED5C;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8213ed5c
	if (ctx.cr6.lt) goto loc_8213ED5C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// b 0x8213ed64
	goto loc_8213ED64;
loc_8213ED5C:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8213ED64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213f1d8
	ctx.lr = 0x8213ED74;
	sub_8213F1D8(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x8213eccc
	if (!ctx.cr6.eq) goto loc_8213ECCC;
loc_8213ED80:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8213eda8
	if (ctx.cr6.eq) goto loc_8213EDA8;
loc_8213ED94:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8213ED9C;
	sub_8269CE98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x8213ed94
	if (!ctx.cr6.eq) goto loc_8213ED94;
loc_8213EDA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213EDB0;
	sub_8269CE98(ctx, base);
loc_8213EDB0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f0f0
	ctx.lr = 0x8213EDB8;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf4
	return;
loc_8213EDC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8213EDD8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82158D90) {
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
	ctx.lr = 0x82158D98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82158e48
	if (ctx.cr6.eq) goto loc_82158E48;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82158e48
	if (ctx.cr6.eq) goto loc_82158E48;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r26.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_82158DC0:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82158698
	ctx.lr = 0x82158DD8;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158e08
	if (ctx.cr0.eq) goto loc_82158E08;
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
	ctx.lr = 0x82158E00;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82158e3c
	goto loc_82158E3C;
loc_82158E08:
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x82158e24
	goto loc_82158E24;
loc_82158E14:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwzu r5,-4(r29)
	ea = -4 + r29.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
loc_82158E24:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82158698
	ctx.lr = 0x82158E30;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158e14
	if (!ctx.cr0.eq) goto loc_82158E14;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82158E3C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x82158dc0
	if (!ctx.cr6.eq) goto loc_82158DC0;
loc_82158E48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8215DDC0) {
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
	ctx.lr = 0x8215DDC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x8215de04
	goto loc_8215DE04;
loc_8215DDE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8215DDEC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215ddfc
	if (!ctx.cr0.lt) goto loc_8215DDFC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8215de04
	goto loc_8215DE04;
loc_8215DDFC:
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8215DE04:
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215dde0
	if (ctx.cr0.eq) goto loc_8215DDE0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215de34
	if (ctx.cr6.eq) goto loc_8215DE34;
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8215DE2C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215dec4
	if (!ctx.cr0.lt) goto loc_8215DEC4;
loc_8215DE34:
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
	// bl 0x82120670
	ctx.lr = 0x8215DE4C;
	sub_82120670(ctx, base);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8215efb0
	ctx.lr = 0x8215DE5C;
	sub_8215EFB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215ebd8
	ctx.lr = 0x8215DE64;
	sub_8215EBD8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addic. r31,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	r31.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8215de8c
	if (ctx.cr0.eq) goto loc_8215DE8C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120670
	ctx.lr = 0x8215DE7C;
	sub_82120670(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215efb0
	ctx.lr = 0x8215DE8C;
	sub_8215EFB0(ctx, base);
loc_8215DE8C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215e730
	ctx.lr = 0x8215DEA0;
	sub_8215E730(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f0f0
	ctx.lr = 0x8215DEAC;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8215DEBC;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8215DEC4;
	sub_8215F0F0(ctx, base);
loc_8215DEC4:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82167B18) {
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
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82167b44
	if (ctx.cr0.eq) goto loc_82167B44;
	// bl 0x8269ce98
	ctx.lr = 0x82167B44;
	sub_8269CE98(ctx, base);
loc_82167B44:
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

DEFINE_REX_FUNC(sub_82169A90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82169ab0
	if (!ctx.cr0.eq) goto loc_82169AB0;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82169AB0:
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
	// bne cr6,0x82169ad0
	if (!ctx.cr6.eq) goto loc_82169AD0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82169aec
	goto loc_82169AEC;
loc_82169AD0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82169ae8
	if (!ctx.cr6.eq) goto loc_82169AE8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82169aec
	goto loc_82169AEC;
loc_82169AE8:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82169AEC:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CDC8) {
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
	// blt cr6,0x8216cdf8
	if (ctx.cr6.lt) goto loc_8216CDF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216ce10
	if (ctx.cr6.lt) goto loc_8216CE10;
loc_8216CDF8:
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
	ctx.lr = 0x8216CE10;
	sub_821231D0(ctx, base);
loc_8216CE10:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r10,r31,304
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(304));
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

DEFINE_REX_FUNC(sub_821703B0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821703e0
	if (!ctx.cr6.eq) goto loc_821703E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821703ec
	goto loc_821703EC;
loc_821703E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821703EC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8216fe78
	ctx.lr = 0x821703F8;
	sub_8216FE78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217040c
	if (!ctx.cr6.eq) goto loc_8217040C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82170418
	goto loc_82170418;
loc_8217040C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82170418:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8216fe78
	ctx.lr = 0x82170424;
	sub_8216FE78(ctx, base);
	// li r5,1096
	ctx.r5.s64 = 1096;
	// addi r4,r31,792
	ctx.r4.s64 = r31.s64 + 792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x82170434;
	sub_821613D8(ctx, base);
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

DEFINE_REX_FUNC(sub_82174558) {
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
	ctx.lr = 0x82174560;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c98
	ctx.lr = 0x82174568;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f10,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r26,r11,16592
	r26.s64 = ctx.r11.s64 + 16592;
	// lfs f5,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lfs f13,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f12,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f0,232(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f31,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f31.f64 = double(temp.f32);
	// fdivs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// lfs f5,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f27,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	f27.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fnmsubs f8,f8,f13,f27
	ctx.f8.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -f27.f64)));
	// lfs f6,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm. r8,r8,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * f28.f64));
	// lfs f4,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// lfs f3,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fdivs f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fmuls f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fnmsubs f0,f9,f13,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f0.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f24,f0,f31
	f24.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmadds f25,f4,f3,f13
	f25.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f13.f64)));
	// beq 0x82174660
	if (ctx.cr0.eq) goto loc_82174660;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82174660
	if (!ctx.cr0.eq) goto loc_82174660;
	// fdivs f0,f1,f26
	ctx.f0.f64 = double(float(ctx.f1.f64 / f26.f64));
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r28,r11,-15712
	r28.s64 = ctx.r11.s64 + -15712;
	// addi r6,r10,1052
	ctx.r6.s64 = ctx.r10.s64 + 1052;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 - f25.f64));
	// bl 0x82175130
	ctx.lr = 0x82174648;
	sub_82175130(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8217465c
	if (ctx.cr6.lt) goto loc_8217465C;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82174660
	goto loc_82174660;
loc_8217465C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82174660:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,1040
	r31.s64 = ctx.r11.s64 + 1040;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82174e70
	ctx.lr = 0x82174680;
	sub_82174E70(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f29,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f29.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stfs f29,0(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmr f30,f29
	f30.f64 = f29.f64;
	// stfs f29,4(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// beq cr6,0x82174730
	if (ctx.cr6.eq) goto loc_82174730;
loc_821746B0:
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r4,65520
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65520, ctx.xer);
	// blt cr6,0x82174704
	if (ctx.cr6.lt) goto loc_82174704;
	// cmplwi cr6,r4,65534
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65534, ctx.xer);
	// bne cr6,0x8217471c
	if (!ctx.cr6.eq) goto loc_8217471C;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r26,256
	ctx.r9.s64 = r26.s64 + 256;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + f27.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmr f30,f29
	f30.f64 = f29.f64;
	// b 0x8217471c
	goto loc_8217471C;
loc_82174704:
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82162650
	ctx.lr = 0x8217470C;
	sub_82162650(ctx, base);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8217471C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821746b0
	if (!ctx.cr6.eq) goto loc_821746B0;
loc_82174730:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r26,256
	ctx.r11.s64 = r26.s64 + 256;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// fmadds f13,f24,f31,f12
	ctx.f13.f64 = double(float(std::fma(f24.f64, f31.f64, ctx.f12.f64)));
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f12,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f30
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ce4
	ctx.lr = 0x82174794;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8218EEE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// bne cr6,0x8218ef00
	if (!ctx.cr6.eq) goto loc_8218EF00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218eefc
	if (!ctx.cr6.eq) goto loc_8218EEFC;
	// b 0x8218f278
	sub_8218F278(ctx, base);
	return;
loc_8218EEFC:
	// b 0x8218f4e8
	sub_8218F4E8(ctx, base);
	return;
loc_8218EF00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218ef0c
	if (!ctx.cr6.eq) goto loc_8218EF0C;
	// b 0x8218f768
	sub_8218F768(ctx, base);
	return;
loc_8218EF0C:
	// b 0x8218fae8
	sub_8218FAE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82190158) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// bne cr6,0x82190178
	if (!ctx.cr6.eq) goto loc_82190178;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82190174
	if (!ctx.cr6.eq) goto loc_82190174;
	// b 0x821904c0
	sub_821904C0(ctx, base);
	return;
loc_82190174:
	// b 0x82190770
	sub_82190770(ctx, base);
	return;
loc_82190178:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82190184
	if (!ctx.cr6.eq) goto loc_82190184;
	// b 0x82190a38
	sub_82190A38(ctx, base);
	return;
loc_82190184:
	// b 0x82190e00
	sub_82190E00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821912A0) {
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
	ctx.lr = 0x821912A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stb r5,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r27,4(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r24,8(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r26,1
	r26.s64 = 1;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,-32064
	ctx.r8.s64 = ctx.r8.s64 + -32064;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r25,r31,25
	r25.s64 = r31.s64 + 25;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stb r26,25(r31)
	REX_STORE_U8(r31.u32 + 25, r26.u8);
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r4,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r24,40(r31)
	REX_STORE_U32(r31.u32 + 40, r24.u32);
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r6,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82191370;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x821913a0
	if (ctx.cr0.eq) goto loc_821913A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-32104
	ctx.r4.s64 = ctx.r11.s64 + -32104;
	// bl 0x82120600
	ctx.lr = 0x82191388;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// bl 0x82191600
	ctx.lr = 0x8219139C;
	sub_82191600(ctx, base);
	// b 0x821913a4
	goto loc_821913A4;
loc_821913A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821913A4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821913B8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821913d4
	if (ctx.cr0.eq) goto loc_821913D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821913D4;
	sub_82120AC0(ctx, base);
loc_821913D4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821913DC;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219140c
	if (ctx.cr0.eq) goto loc_8219140C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32084
	ctx.r4.s64 = ctx.r11.s64 + -32084;
	// bl 0x82120600
	ctx.lr = 0x821913F4;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x82191408;
	sub_82191600(ctx, base);
	// b 0x82191410
	goto loc_82191410;
loc_8219140C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82191410:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82191424;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219143c
	if (ctx.cr0.eq) goto loc_8219143C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8219143C;
	sub_82120AC0(ctx, base);
loc_8219143C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8219BEA8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mulli r11,r4,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8219bec8
	if (ctx.cr6.lt) goto loc_8219BEC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8219BEC8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D798) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8219D7A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// lbz r10,41(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 41);
	// lbz r9,42(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 42);
	// lbz r8,43(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 43);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// stb r10,45(r31)
	REX_STORE_U8(r31.u32 + 45, ctx.r10.u8);
	// stb r9,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r9.u8);
	// stb r8,47(r31)
	REX_STORE_U8(r31.u32 + 47, ctx.r8.u8);
	// lbz r29,33(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 33);
	// bl 0x8215f2d0
	ctx.lr = 0x8219D7E0;
	sub_8215F2D0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D7F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A0530) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,-7264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821911f8
	ctx.lr = 0x821A0564;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r11,-28576
	ctx.r11.s64 = ctx.r11.s64 + -28576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_821A38C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,-20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A38F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A4740) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3b48
	sub_821A3B48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4E50) {
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
	// bl 0x821a4ea0
	ctx.lr = 0x821A4E70;
	sub_821A4EA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a4e80
	if (ctx.cr0.eq) goto loc_821A4E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A4E80;
	sub_8269CE98(ctx, base);
loc_821A4E80:
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

DEFINE_REX_FUNC(sub_821A6E78) {
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
	ctx.lr = 0x821A6E80;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82120600
	ctx.lr = 0x821A6E94;
	sub_82120600(ctx, base);
	// addi r28,r29,124
	r28.s64 = r29.s64 + 124;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x821A6EA8;
	sub_821501A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821A6EC0;
	sub_82120AC0(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 128);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a6f7c
	if (!ctx.cr6.eq) goto loc_821A6F7C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x821A6ED8;
	sub_82120600(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// bl 0x8213b430
	ctx.lr = 0x821A6EE8;
	sub_8213B430(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821A6EFC;
	sub_82120AC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120600
	ctx.lr = 0x821A6F08;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r4,r11,-18676
	ctx.r4.s64 = ctx.r11.s64 + -18676;
	// bl 0x8215f338
	ctx.lr = 0x821A6F18;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-18664
	ctx.r4.s64 = ctx.r11.s64 + -18664;
	// bl 0x8215f338
	ctx.lr = 0x821A6F24;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x8215f338
	ctx.lr = 0x821A6F30;
	sub_8215F338(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8214fcc8
	ctx.lr = 0x821A6F40;
	sub_8214FCC8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a6d78
	ctx.lr = 0x821A6F50;
	sub_821A6D78(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821A6F64;
	sub_82120AC0(ctx, base);
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A6F7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120600
	ctx.lr = 0x821A6F88;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8214fcc8
	ctx.lr = 0x821A6F94;
	sub_8214FCC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821A6FAC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821ADD50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15240
	ctx.r3.s64 = ctx.r11.s64 + -15240;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE0E8) {
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
	ctx.lr = 0x821AE0F0;
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
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
	// addi r28,r10,-8128
	r28.s64 = ctx.r10.s64 + -8128;
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
	// beq cr6,0x821ae1d8
	if (ctx.cr6.eq) goto loc_821AE1D8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821AE1B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ae1d4
	if (ctx.cr0.eq) goto loc_821AE1D4;
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
loc_821AE1D4:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821AE1D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B5D10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B6130) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82191520
	ctx.lr = 0x821B614C;
	sub_82191520(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// bl 0x821357c8
	ctx.lr = 0x821B6154;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,300(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 300);
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// bl 0x821357c8
	ctx.lr = 0x821B6164;
	sub_821357C8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b618c
	if (ctx.cr6.eq) goto loc_821B618C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-21440
	ctx.r4.s64 = ctx.r11.s64 + -21440;
	// addi r3,r10,-21392
	ctx.r3.s64 = ctx.r10.s64 + -21392;
	// li r5,79
	ctx.r5.s64 = 79;
	// bl 0x821231d0
	ctx.lr = 0x821B618C;
	sub_821231D0(ctx, base);
loc_821B618C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B619C;
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

DEFINE_REX_FUNC(sub_821B9490) {
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
	ctx.lr = 0x821B9498;
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x82178268
	ctx.lr = 0x821B94B4;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-18396
	ctx.r10.s64 = ctx.r10.s64 + -18396;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f0,700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r9,r7,-19620
	ctx.r9.s64 = ctx.r7.s64 + -19620;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r10,r6,-19568
	ctx.r10.s64 = ctx.r6.s64 + -19568;
	// lfs f13,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// addi r20,r31,160
	r20.s64 = r31.s64 + 160;
	// addi r18,r31,112
	r18.s64 = r31.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r28,r31,136
	r28.s64 = r31.s64 + 136;
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
	// addi r24,r31,144
	r24.s64 = r31.s64 + 144;
	// addi r23,r31,148
	r23.s64 = r31.s64 + 148;
	// addi r22,r31,152
	r22.s64 = r31.s64 + 152;
	// addi r21,r31,156
	r21.s64 = r31.s64 + 156;
	// bl 0x821b9340
	ctx.lr = 0x821B9530;
	sub_821B9340(ctx, base);
	// stw r19,280(r31)
	REX_STORE_U32(r31.u32 + 280, r19.u32);
	// stw r19,284(r31)
	REX_STORE_U32(r31.u32 + 284, r19.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9550;
	sub_822F6280(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r26,r11,-17544
	r26.s64 = ctx.r11.s64 + -17544;
	// addi r25,r10,10360
	r25.s64 = ctx.r10.s64 + 10360;
	// beq 0x821b959c
	if (ctx.cr0.eq) goto loc_821B959C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-19988
	ctx.r4.s64 = ctx.r11.s64 + -19988;
	// bl 0x82120600
	ctx.lr = 0x821B9578;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x821B958C;
	sub_82197628(ctx, base);
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r26,52(r29)
	REX_STORE_U32(r29.u32 + 52, r26.u32);
	// b 0x821b95a0
	goto loc_821B95A0;
loc_821B959C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821B95A0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B95B4;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B95C4;
	sub_821B92D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b95e0
	if (ctx.cr0.eq) goto loc_821B95E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B95E0;
	sub_82120AC0(ctx, base);
loc_821B95E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B95F8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9634
	if (ctx.cr0.eq) goto loc_821B9634;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19980
	ctx.r4.s64 = ctx.r11.s64 + -19980;
	// bl 0x82120600
	ctx.lr = 0x821B9610;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82197628
	ctx.lr = 0x821B9624;
	sub_82197628(ctx, base);
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r26,52(r29)
	REX_STORE_U32(r29.u32 + 52, r26.u32);
	// b 0x821b9638
	goto loc_821B9638;
loc_821B9634:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821B9638:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9648;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9658;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9674
	if (ctx.cr0.eq) goto loc_821B9674;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B9674;
	sub_82120AC0(ctx, base);
loc_821B9674:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B968C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b96bc
	if (ctx.cr0.eq) goto loc_821B96BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-19972
	ctx.r4.s64 = ctx.r11.s64 + -19972;
	// bl 0x82120600
	ctx.lr = 0x821B96A4;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B96B8;
	sub_82196BA8(ctx, base);
	// b 0x821b96c0
	goto loc_821B96C0;
loc_821B96BC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B96C0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B96D0;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B96E0;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b96fc
	if (ctx.cr0.eq) goto loc_821B96FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B96FC;
	sub_82120AC0(ctx, base);
loc_821B96FC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9714;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9744
	if (ctx.cr0.eq) goto loc_821B9744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-19956
	ctx.r4.s64 = ctx.r11.s64 + -19956;
	// bl 0x82120600
	ctx.lr = 0x821B972C;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821B9740;
	sub_82196BA8(ctx, base);
	// b 0x821b9748
	goto loc_821B9748;
loc_821B9744:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9748:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9758;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9768;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9784
	if (ctx.cr0.eq) goto loc_821B9784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B9784;
	sub_82120AC0(ctx, base);
loc_821B9784:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B979C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b97cc
	if (ctx.cr0.eq) goto loc_821B97CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,-19940
	ctx.r4.s64 = ctx.r11.s64 + -19940;
	// bl 0x82120600
	ctx.lr = 0x821B97B4;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B97C8;
	sub_82196BA8(ctx, base);
	// b 0x821b97d0
	goto loc_821B97D0;
loc_821B97CC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B97D0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B97E0;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B97F0;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b980c
	if (ctx.cr0.eq) goto loc_821B980C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B980C;
	sub_82120AC0(ctx, base);
loc_821B980C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9824;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9854
	if (ctx.cr0.eq) goto loc_821B9854;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-19920
	ctx.r4.s64 = ctx.r11.s64 + -19920;
	// bl 0x82120600
	ctx.lr = 0x821B983C;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B9850;
	sub_82196BA8(ctx, base);
	// b 0x821b9858
	goto loc_821B9858;
loc_821B9854:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9858:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9868;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9878;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9894
	if (ctx.cr0.eq) goto loc_821B9894;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9894;
	sub_82120AC0(ctx, base);
loc_821B9894:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B98AC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b98dc
	if (ctx.cr0.eq) goto loc_821B98DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-19900
	ctx.r4.s64 = ctx.r11.s64 + -19900;
	// bl 0x82120600
	ctx.lr = 0x821B98C4;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82191600
	ctx.lr = 0x821B98D8;
	sub_82191600(ctx, base);
	// b 0x821b98e0
	goto loc_821B98E0;
loc_821B98DC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B98E0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B98F0;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9900;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b991c
	if (ctx.cr0.eq) goto loc_821B991C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821B991C;
	sub_82120AC0(ctx, base);
loc_821B991C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9934;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9964
	if (ctx.cr0.eq) goto loc_821B9964;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-19876
	ctx.r4.s64 = ctx.r11.s64 + -19876;
	// bl 0x82120600
	ctx.lr = 0x821B994C;
	sub_82120600(ctx, base);
	// addi r5,r31,161
	ctx.r5.s64 = r31.s64 + 161;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x8219d708
	ctx.lr = 0x821B9960;
	sub_8219D708(ctx, base);
	// b 0x821b9968
	goto loc_821B9968;
loc_821B9964:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9968:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9978;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9988;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b99a4
	if (ctx.cr0.eq) goto loc_821B99A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821B99A4;
	sub_82120AC0(ctx, base);
loc_821B99A4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B99BC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b99ec
	if (ctx.cr0.eq) goto loc_821B99EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,-19860
	ctx.r4.s64 = ctx.r11.s64 + -19860;
	// bl 0x82120600
	ctx.lr = 0x821B99D4;
	sub_82120600(ctx, base);
	// addi r5,r31,165
	ctx.r5.s64 = r31.s64 + 165;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x8219d708
	ctx.lr = 0x821B99E8;
	sub_8219D708(ctx, base);
	// b 0x821b99f0
	goto loc_821B99F0;
loc_821B99EC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B99F0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9A00;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9A10;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9a2c
	if (ctx.cr0.eq) goto loc_821B9A2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9A2C;
	sub_82120AC0(ctx, base);
loc_821B9A2C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9A44;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9a74
	if (ctx.cr0.eq) goto loc_821B9A74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-19844
	ctx.r4.s64 = ctx.r11.s64 + -19844;
	// bl 0x82120600
	ctx.lr = 0x821B9A5C;
	sub_82120600(ctx, base);
	// addi r5,r31,169
	ctx.r5.s64 = r31.s64 + 169;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x8219d708
	ctx.lr = 0x821B9A70;
	sub_8219D708(ctx, base);
	// b 0x821b9a78
	goto loc_821B9A78;
loc_821B9A74:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9A78:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9A88;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9A98;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9ab4
	if (ctx.cr0.eq) goto loc_821B9AB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9AB4;
	sub_82120AC0(ctx, base);
loc_821B9AB4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9ACC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9afc
	if (ctx.cr0.eq) goto loc_821B9AFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-19824
	ctx.r4.s64 = ctx.r11.s64 + -19824;
	// bl 0x82120600
	ctx.lr = 0x821B9AE4;
	sub_82120600(ctx, base);
	// addi r5,r31,173
	ctx.r5.s64 = r31.s64 + 173;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x8219d708
	ctx.lr = 0x821B9AF8;
	sub_8219D708(ctx, base);
	// b 0x821b9b00
	goto loc_821B9B00;
loc_821B9AFC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9B00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9B10;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9B20;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9b3c
	if (ctx.cr0.eq) goto loc_821B9B3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9B3C;
	sub_82120AC0(ctx, base);
loc_821B9B3C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9B54;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9b84
	if (ctx.cr0.eq) goto loc_821B9B84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19804
	ctx.r4.s64 = ctx.r11.s64 + -19804;
	// bl 0x82120600
	ctx.lr = 0x821B9B6C;
	sub_82120600(ctx, base);
	// addi r5,r31,177
	ctx.r5.s64 = r31.s64 + 177;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x8219d708
	ctx.lr = 0x821B9B80;
	sub_8219D708(ctx, base);
	// b 0x821b9b88
	goto loc_821B9B88;
loc_821B9B84:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9B88:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9B98;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9BA8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9bc4
	if (ctx.cr0.eq) goto loc_821B9BC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9BC4;
	sub_82120AC0(ctx, base);
loc_821B9BC4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9BDC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9c0c
	if (ctx.cr0.eq) goto loc_821B9C0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,-19788
	ctx.r4.s64 = ctx.r11.s64 + -19788;
	// bl 0x82120600
	ctx.lr = 0x821B9BF4;
	sub_82120600(ctx, base);
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x821B9C08;
	sub_82196BA8(ctx, base);
	// b 0x821b9c10
	goto loc_821B9C10;
loc_821B9C0C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9C10:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9C20;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9C30;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9c4c
	if (ctx.cr0.eq) goto loc_821B9C4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9C4C;
	sub_82120AC0(ctx, base);
loc_821B9C4C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9C64;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9c94
	if (ctx.cr0.eq) goto loc_821B9C94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82120600
	ctx.lr = 0x821B9C7C;
	sub_82120600(ctx, base);
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82191600
	ctx.lr = 0x821B9C90;
	sub_82191600(ctx, base);
	// b 0x821b9c98
	goto loc_821B9C98;
loc_821B9C94:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9C98:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9CA8;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9CB8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9cd4
	if (ctx.cr0.eq) goto loc_821B9CD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9CD4;
	sub_82120AC0(ctx, base);
loc_821B9CD4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9CEC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9d1c
	if (ctx.cr0.eq) goto loc_821B9D1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x82120600
	ctx.lr = 0x821B9D04;
	sub_82120600(ctx, base);
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x821B9D18;
	sub_82196BA8(ctx, base);
	// b 0x821b9d20
	goto loc_821B9D20;
loc_821B9D1C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9D20:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9D30;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9D40;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9d5c
	if (ctx.cr0.eq) goto loc_821B9D5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,18,16
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9D5C;
	sub_82120AC0(ctx, base);
loc_821B9D5C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9D74;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9da4
	if (ctx.cr0.eq) goto loc_821B9DA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-19752
	ctx.r4.s64 = ctx.r11.s64 + -19752;
	// bl 0x82120600
	ctx.lr = 0x821B9D8C;
	sub_82120600(ctx, base);
	// addi r5,r31,196
	ctx.r5.s64 = r31.s64 + 196;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
	// bl 0x82196ba8
	ctx.lr = 0x821B9DA0;
	sub_82196BA8(ctx, base);
	// b 0x821b9da8
	goto loc_821B9DA8;
loc_821B9DA4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9DA8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9DB8;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9DC8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9de4
	if (ctx.cr0.eq) goto loc_821B9DE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,17,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9DE4;
	sub_82120AC0(ctx, base);
loc_821B9DE4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9DFC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9e44
	if (ctx.cr0.eq) goto loc_821B9E44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-19736
	ctx.r4.s64 = ctx.r11.s64 + -19736;
	// bl 0x82120600
	ctx.lr = 0x821B9E14;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// oris r30,r30,1
	r30.u64 = r30.u64 | 65536;
	// lwz r4,-15392(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15392);
	// bl 0x82120600
	ctx.lr = 0x821B9E28;
	sub_82120600(ctx, base);
	// addi r6,r31,200
	ctx.r6.s64 = r31.s64 + 200;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,2
	r30.u64 = r30.u64 | 131072;
	// bl 0x821d58c8
	ctx.lr = 0x821B9E40;
	sub_821D58C8(ctx, base);
	// b 0x821b9e48
	goto loc_821B9E48;
loc_821B9E44:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9E48:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9E58;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9E68;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9e84
	if (ctx.cr0.eq) goto loc_821B9E84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,15,13
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9E84;
	sub_82120AC0(ctx, base);
loc_821B9E84:
	// rlwinm. r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9ea0
	if (ctx.cr0.eq) goto loc_821B9EA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,16,14
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9EA0;
	sub_82120AC0(ctx, base);
loc_821B9EA0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9EB8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9ee8
	if (ctx.cr0.eq) goto loc_821B9EE8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82120600
	ctx.lr = 0x821B9ED0;
	sub_82120600(ctx, base);
	// addi r5,r31,228
	ctx.r5.s64 = r31.s64 + 228;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,4
	r30.u64 = r30.u64 | 262144;
	// bl 0x82191600
	ctx.lr = 0x821B9EE4;
	sub_82191600(ctx, base);
	// b 0x821b9eec
	goto loc_821B9EEC;
loc_821B9EE8:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9EEC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9EFC;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9F0C;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9f28
	if (ctx.cr0.eq) goto loc_821B9F28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,14,12
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9F28;
	sub_82120AC0(ctx, base);
loc_821B9F28:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9F40;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b9f88
	if (ctx.cr0.eq) goto loc_821B9F88;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-19716
	ctx.r4.s64 = ctx.r11.s64 + -19716;
	// bl 0x82120600
	ctx.lr = 0x821B9F58;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// oris r30,r30,8
	r30.u64 = r30.u64 | 524288;
	// lwz r4,-15312(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15312);
	// bl 0x82120600
	ctx.lr = 0x821B9F6C;
	sub_82120600(ctx, base);
	// addi r6,r31,232
	ctx.r6.s64 = r31.s64 + 232;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,16
	r30.u64 = r30.u64 | 1048576;
	// bl 0x821d58c8
	ctx.lr = 0x821B9F84;
	sub_821D58C8(ctx, base);
	// b 0x821b9f8c
	goto loc_821B9F8C;
loc_821B9F88:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821B9F8C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B9F9C;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821B9FAC;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9fc8
	if (ctx.cr0.eq) goto loc_821B9FC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r30,r30,0,12,10
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9FC8;
	sub_82120AC0(ctx, base);
loc_821B9FC8:
	// rlwinm. r11,r30,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b9fe4
	if (ctx.cr0.eq) goto loc_821B9FE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// rlwinm r30,r30,0,13,11
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B9FE4;
	sub_82120AC0(ctx, base);
loc_821B9FE4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B9FFC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ba02c
	if (ctx.cr0.eq) goto loc_821BA02C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-19688
	ctx.r4.s64 = ctx.r11.s64 + -19688;
	// bl 0x82120600
	ctx.lr = 0x821BA014;
	sub_82120600(ctx, base);
	// addi r5,r31,260
	ctx.r5.s64 = r31.s64 + 260;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,32
	r30.u64 = r30.u64 | 2097152;
	// bl 0x8219d708
	ctx.lr = 0x821BA028;
	sub_8219D708(ctx, base);
	// b 0x821ba030
	goto loc_821BA030;
loc_821BA02C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821BA030:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BA040;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821BA050;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba06c
	if (ctx.cr0.eq) goto loc_821BA06C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// rlwinm r30,r30,0,11,9
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821BA06C;
	sub_82120AC0(ctx, base);
loc_821BA06C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA084;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ba0b4
	if (ctx.cr0.eq) goto loc_821BA0B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x82120600
	ctx.lr = 0x821BA09C;
	sub_82120600(ctx, base);
	// addi r5,r31,264
	ctx.r5.s64 = r31.s64 + 264;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
	// bl 0x82191600
	ctx.lr = 0x821BA0B0;
	sub_82191600(ctx, base);
	// b 0x821ba0b8
	goto loc_821BA0B8;
loc_821BA0B4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821BA0B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BA0C8;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821BA0D8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba0f4
	if (ctx.cr0.eq) goto loc_821BA0F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// rlwinm r30,r30,0,10,8
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821BA0F4;
	sub_82120AC0(ctx, base);
loc_821BA0F4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA10C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ba13c
	if (ctx.cr0.eq) goto loc_821BA13C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,-19672
	ctx.r4.s64 = ctx.r11.s64 + -19672;
	// bl 0x82120600
	ctx.lr = 0x821BA124;
	sub_82120600(ctx, base);
	// addi r5,r31,268
	ctx.r5.s64 = r31.s64 + 268;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,128
	r30.u64 = r30.u64 | 8388608;
	// bl 0x82196ba8
	ctx.lr = 0x821BA138;
	sub_82196BA8(ctx, base);
	// b 0x821ba140
	goto loc_821BA140;
loc_821BA13C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821BA140:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BA150;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821BA160;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba17c
	if (ctx.cr0.eq) goto loc_821BA17C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// rlwinm r30,r30,0,9,7
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821BA17C;
	sub_82120AC0(ctx, base);
loc_821BA17C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA194;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ba1c4
	if (ctx.cr0.eq) goto loc_821BA1C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,-19656
	ctx.r4.s64 = ctx.r11.s64 + -19656;
	// bl 0x82120600
	ctx.lr = 0x821BA1AC;
	sub_82120600(ctx, base);
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,256
	r30.u64 = r30.u64 | 16777216;
	// bl 0x82196ba8
	ctx.lr = 0x821BA1C0;
	sub_82196BA8(ctx, base);
	// b 0x821ba1c8
	goto loc_821BA1C8;
loc_821BA1C4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821BA1C8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BA1D8;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821BA1E8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba204
	if (ctx.cr0.eq) goto loc_821BA204;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// rlwinm r30,r30,0,8,6
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821BA204;
	sub_82120AC0(ctx, base);
loc_821BA204:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-22448
	ctx.r11.s64 = ctx.r11.s64 + -22448;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA21C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ba24c
	if (ctx.cr0.eq) goto loc_821BA24C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r11,-19636
	ctx.r4.s64 = ctx.r11.s64 + -19636;
	// bl 0x82120600
	ctx.lr = 0x821BA234;
	sub_82120600(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = r31.s64 + 276;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,512
	r30.u64 = r30.u64 | 33554432;
	// bl 0x82191600
	ctx.lr = 0x821BA248;
	sub_82191600(ctx, base);
	// b 0x821ba250
	goto loc_821BA250;
loc_821BA24C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821BA250:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BA260;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821BA270;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r30,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba288
	if (ctx.cr0.eq) goto loc_821BA288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82120ac0
	ctx.lr = 0x821BA288;
	sub_82120AC0(ctx, base);
loc_821BA288:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821BA290;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba2a8
	if (ctx.cr0.eq) goto loc_821BA2A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821BA2A0;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ba2ac
	goto loc_821BA2AC;
loc_821BA2A8:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA2AC:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821BA2BC;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821BA2C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba2e0
	if (ctx.cr0.eq) goto loc_821BA2E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x821BA2D8;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ba2e4
	goto loc_821BA2E4;
loc_821BA2E0:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA2E4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821BA2F0;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821BA2F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba324
	if (ctx.cr0.eq) goto loc_821BA324;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821BA31C;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ba328
	goto loc_821BA328;
loc_821BA324:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA328:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821BA334;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BA33C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba35c
	if (ctx.cr0.eq) goto loc_821BA35C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BA354;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ba360
	goto loc_821BA360;
loc_821BA35C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA360:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821BA36C;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821BA374;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba390
	if (ctx.cr0.eq) goto loc_821BA390;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821BA388;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ba394
	goto loc_821BA394;
loc_821BA390:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA394:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821BA3A0;
	sub_821D3988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// addi r11,r11,-20208
	ctx.r11.s64 = ctx.r11.s64 + -20208;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,120(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x822f6280
	ctx.lr = 0x821BA3BC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba3e8
	if (ctx.cr0.eq) goto loc_821BA3E8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821ba3ec
	goto loc_821BA3EC;
loc_821BA3E8:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821BA3EC:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,124(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA40C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba434
	if (ctx.cr0.eq) goto loc_821BA434;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821ba438
	goto loc_821BA438;
loc_821BA434:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821BA438:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,116(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA458;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba484
	if (ctx.cr0.eq) goto loc_821BA484;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
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
	// b 0x821ba488
	goto loc_821BA488;
loc_821BA484:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821BA488:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821a1ff8
	ctx.lr = 0x821BA498;
	sub_821A1FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ba6d0
	ctx.lr = 0x821BA4A0;
	sub_821BA6D0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// addi r11,r11,-22840
	ctx.r11.s64 = ctx.r11.s64 + -22840;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BA4B8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ba4e0
	if (ctx.cr0.eq) goto loc_821BA4E0;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
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
	// b 0x821ba4e4
	goto loc_821BA4E4;
loc_821BA4E0:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_821BA4E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-23204
	ctx.r5.s64 = ctx.r11.s64 + -23204;
	// bl 0x8216be80
	ctx.lr = 0x821BA4F4;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_822322D0) {
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
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x822f6280
	ctx.lr = 0x822322E8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82232348
	if (ctx.cr0.eq) goto loc_82232348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7728
	ctx.lr = 0x822322F8;
	sub_821C7728(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,-14552
	ctx.r11.s64 = ctx.r11.s64 + -14552;
	// addi r10,r10,-19976
	ctx.r10.s64 = ctx.r10.s64 + -19976;
	// addi r9,r9,-19936
	ctx.r9.s64 = ctx.r9.s64 + -19936;
	// stw r11,752(r31)
	REX_STORE_U32(r31.u32 + 752, ctx.r11.u32);
	// addi r8,r8,-19924
	ctx.r8.s64 = ctx.r8.s64 + -19924;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,752
	ctx.r11.s64 = r31.s64 + 752;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r8,752(r31)
	REX_STORE_U32(r31.u32 + 752, ctx.r8.u32);
	// stw r11,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r11.u32);
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 724);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82232340
	if (ctx.cr6.eq) goto loc_82232340;
	// stw r11,708(r10)
	REX_STORE_U32(ctx.r10.u32 + 708, ctx.r11.u32);
loc_82232340:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8223234c
	goto loc_8223234C;
loc_82232348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223234C:
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

DEFINE_REX_FUNC(sub_82236C70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236c9c
	if (ctx.cr6.eq) goto loc_82236C9C;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// b 0x82236ca4
	goto loc_82236CA4;
loc_82236C9C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
loc_82236CA4:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x82191578
	ctx.lr = 0x82236CB4;
	sub_82191578(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82236d88
	if (!ctx.cr6.gt) goto loc_82236D88;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 776);
	// addi r11,r31,756
	ctx.r11.s64 = r31.s64 + 756;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lwz r10,6100(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6100);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// blt cr6,0x82236ce8
	if (ctx.cr6.lt) goto loc_82236CE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82236CE8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82236d84
	if (!ctx.cr0.eq) goto loc_82236D84;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822fbfc0
	ctx.lr = 0x82236D54;
	sub_822FBFC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// bl 0x822fbeb0
	ctx.lr = 0x82236D68;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82236d7c
	if (!ctx.cr0.eq) goto loc_82236D7C;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x82236D7C;
	sub_82300070(ctx, base);
loc_82236D7C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbe20
	ctx.lr = 0x82236D84;
	sub_822FBE20(ctx, base);
loc_82236D84:
	// stfs f31,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 864, temp.u32);
loc_82236D88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82240FF0) {
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
	ctx.lr = 0x82240FF8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82241000;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r25,0
	r25.s64 = 0;
	// ble 0x8224126c
	if (!ctx.cr0.gt) goto loc_8224126C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f30,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	f30.f64 = double(temp.f32);
	// lfs f29,684(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 684);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
loc_8224104C:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82241260
	if (!ctx.cr0.eq) goto loc_82241260;
	// lwz r11,6284(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r27,744(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 744);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3856);
	// mulli r10,r3,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(304));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82241214
	if (!ctx.cr0.eq) goto loc_82241214;
	// lbz r11,113(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 113);
	// li r28,17
	r28.s64 = 17;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822410c0
	if (ctx.cr0.eq) goto loc_822410C0;
	// li r28,23
	r28.s64 = 23;
loc_822410C0:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822410d0
	if (!ctx.cr6.gt) goto loc_822410D0;
	// ori r28,r28,32
	r28.u64 = r28.u64 | 32;
loc_822410D0:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822410e0
	if (!ctx.cr6.gt) goto loc_822410E0;
	// ori r28,r28,64
	r28.u64 = r28.u64 | 64;
loc_822410E0:
	// lfs f0,3900(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3900);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8224110c
	if (!ctx.cr6.gt) goto loc_8224110C;
	// lwz r3,6152(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224110c
	if (ctx.cr0.eq) goto loc_8224110C;
	// ori r28,r28,1024
	r28.u64 = r28.u64 | 1024;
loc_8224110C:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8224111c
	if (!ctx.cr6.gt) goto loc_8224111C;
	// ori r28,r28,2048
	r28.u64 = r28.u64 | 2048;
loc_8224111C:
	// lwz r10,3880(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3880);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,116(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82241170
	if (ctx.cr6.lt) goto loc_82241170;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82241170:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82241190
	if (ctx.cr6.lt) goto loc_82241190;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82241190:
	// lfs f0,3900(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3900);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// blt cr6,0x822411e0
	if (ctx.cr6.lt) goto loc_822411E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822411E0:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822411f8
	if (ctx.cr6.lt) goto loc_822411F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822411F8:
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a1a8
	ctx.lr = 0x82241210;
	sub_8227A1A8(ctx, base);
	// b 0x82241260
	goto loc_82241260;
loc_82241214:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x82241260
	if (ctx.cr6.lt) goto loc_82241260;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82241260
	if (!ctx.cr6.lt) goto loc_82241260;
	// lbz r11,113(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 113);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82241260
	if (ctx.cr6.lt) goto loc_82241260;
	// lwz r11,3880(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3880);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8227aa28
	ctx.lr = 0x82241260;
	sub_8227AA28(ctx, base);
loc_82241260:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// blt cr6,0x8224104c
	if (ctx.cr6.lt) goto loc_8224104C;
loc_8224126C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82241278;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82256558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82256560;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256660
	if (!ctx.cr0.eq) goto loc_82256660;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225659C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822889d8
	ctx.lr = 0x822565A4;
	sub_822889D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288bb8
	ctx.lr = 0x822565AC;
	sub_82288BB8(ctx, base);
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822565C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x822565e4
	if (ctx.cr6.lt) goto loc_822565E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,-4520
	ctx.r3.s64 = ctx.r10.s64 + -4520;
	// li r5,166
	ctx.r5.s64 = 166;
	// bl 0x821231d0
	ctx.lr = 0x822565E4;
	sub_821231D0(ctx, base);
loc_822565E4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r10,r31,392
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(392));
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256660
	if (ctx.cr0.eq) goto loc_82256660;
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
	ctx.lr = 0x8225661C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82256660
	if (!ctx.cr6.eq) goto loc_82256660;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82288f68
	ctx.lr = 0x8225662C;
	sub_82288F68(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82256630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82288e20
	ctx.lr = 0x82256638;
	sub_82288E20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256668
	if (!ctx.cr0.eq) goto loc_82256668;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82256630
	if (ctx.cr6.lt) goto loc_82256630;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82256650:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256660
	if (ctx.cr0.eq) goto loc_82256660;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,134(r30)
	REX_STORE_U8(r30.u32 + 134, ctx.r11.u8);
loc_82256660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82256668:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82256650
	goto loc_82256650;
}

DEFINE_REX_FUNC(sub_822608D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822608E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x822608FC;
	sub_821B2D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82260908;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x82260914;
	sub_82120600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x8226091C;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82260928;
	sub_82120600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x82260930;
	sub_821B2D80(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822609b0
	if (ctx.cr0.eq) goto loc_822609B0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227d2e0
	ctx.lr = 0x8226096C;
	sub_8227D2E0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x8226097C;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822609b0
	if (ctx.cr0.eq) goto loc_822609B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226099C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227d810
	ctx.lr = 0x822609B0;
	sub_8227D810(ctx, base);
loc_822609B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822609C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x822609D0;
	sub_82120AC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82266880) {
	REX_FUNC_PROLOGUE();
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r10,r10,29788
	ctx.r10.u64 = ctx.r10.u64 | 29788;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822668c0
	if (!ctx.cr6.lt) goto loc_822668C0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_822668C0:
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82269A70) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8226AA70) {
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
	ctx.lr = 0x8226AA78;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f10,220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r11,292
	ctx.r5.s64 = ctx.r11.s64 + 292;
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f9,224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f9,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82136970
	ctx.lr = 0x8226AB04;
	sub_82136970(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
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
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ab60
	if (ctx.cr6.eq) goto loc_8226AB60;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8226ab70
	ctx.lr = 0x8226AB60;
	sub_8226AB70(ctx, base);
loc_8226AB60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82272270) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82272278;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,648(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,652(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// addi r30,r3,648
	r30.s64 = ctx.r3.s64 + 648;
	// lwz r10,664(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 664);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822722c4
	if (ctx.cr0.eq) goto loc_822722C4;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// divwu r8,r9,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,664(r3)
	REX_STORE_U32(ctx.r3.u32 + 664, ctx.r11.u32);
loc_822722C4:
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 664);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82272398
	if (ctx.cr6.eq) goto loc_82272398;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-4200
	r28.s64 = ctx.r11.s64 + -4200;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8215f338
	ctx.lr = 0x822722EC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822722F0;
	sub_8215F990(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// li r29,0
	r29.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r29,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,664(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 664);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x8227231C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82272320;
	sub_8215F990(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-4260
	ctx.r4.s64 = ctx.r10.s64 + -4260;
	// stb r9,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r9.u8);
	// bl 0x82120600
	ctx.lr = 0x82272344;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82272350;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r29.u32);
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
	ctx.lr = 0x82272374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82272384;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-29396
	ctx.r3.s64 = ctx.r11.s64 + -29396;
	// bl 0x8226afb8
	ctx.lr = 0x82272390;
	sub_8226AFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82273090
	ctx.lr = 0x82272398;
	sub_82273090(ctx, base);
loc_82272398:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8227C700) {
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r31,0
	r31.s64 = 0;
	// stw r9,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r31,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lfd f0,136(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 136);
	// addi r3,r8,31476
	ctx.r3.s64 = ctx.r8.s64 + 31476;
	// stfd f0,160(r11)
	REX_STORE_U64(ctx.r11.u32 + 160, ctx.f0.u64);
	// bl 0x8216bc98
	ctx.lr = 0x8227C748;
	sub_8216BC98(ctx, base);
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-26396
	ctx.r5.s64 = ctx.r11.s64 + -26396;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8216b6a8
	ctx.lr = 0x8227C764;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r11,-5100
	ctx.r5.s64 = ctx.r11.s64 + -5100;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8216b6a8
	ctx.lr = 0x8227C77C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,31500
	r30.s64 = ctx.r11.s64 + 31500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216bc98
	ctx.lr = 0x8227C790;
	sub_8216BC98(ctx, base);
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r11,-1388
	ctx.r5.s64 = ctx.r11.s64 + -1388;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8227C7AC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r11,-1368
	ctx.r5.s64 = ctx.r11.s64 + -1368;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8227C7C4;
	sub_8216B6A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8216bc98
	ctx.lr = 0x8227C7D0;
	sub_8216BC98(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

DEFINE_REX_FUNC(sub_82282C48) {
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
	ctx.lr = 0x82282C50;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c98
	ctx.lr = 0x82282C58;
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// ld r8,24(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r4,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// lwz r31,468(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// mr r24,r28
	r24.u64 = r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// ble cr6,0x822830b8
	if (!ctx.cr6.gt) goto loc_822830B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f29,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f29.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// addi r27,r31,64
	r27.s64 = r31.s64 + 64;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r29,r31,432
	r29.s64 = r31.s64 + 432;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r25,r31,368
	r25.s64 = r31.s64 + 368;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f26,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f26.f64 = double(temp.f32);
	// lfs f27,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f27.f64 = double(temp.f32);
	// b 0x82282cdc
	goto loc_82282CDC;
loc_82282CD8:
	// lwz r23,604(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
loc_82282CDC:
	// addi r26,r30,56
	r26.s64 = r30.s64 + 56;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82283740
	ctx.lr = 0x82282CEC;
	sub_82283740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823fbd18
	ctx.lr = 0x82282CFC;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x82283740
	ctx.lr = 0x82282D20;
	sub_82283740(ctx, base);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x823fbd18
	ctx.lr = 0x82282D30;
	sub_823FBD18(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r26,8(r3)
	r26.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, r28.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r28,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r28,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, r28.u32);
	// ld r22,0(r9)
	r22.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r23,r1,224
	r23.s64 = ctx.r1.s64 + 224;
	// ld r19,0(r8)
	r19.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r21,r1,240
	r21.s64 = ctx.r1.s64 + 240;
	// ld r16,0(r7)
	r16.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r20,r1,144
	r20.s64 = ctx.r1.s64 + 144;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// li r18,2
	r18.s64 = 2;
	// ld r14,0(r5)
	r14.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r17,r1,144
	r17.s64 = ctx.r1.s64 + 144;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r15,r1,112
	r15.s64 = ctx.r1.s64 + 112;
	// ld r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r28,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, r28.u32);
	// stw r28,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, r28.u32);
	// std r22,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r22.u64);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// std r19,0(r23)
	REX_STORE_U64(r23.u32 + 0, r19.u64);
	// std r8,8(r23)
	REX_STORE_U64(r23.u32 + 8, ctx.r8.u64);
	// std r16,0(r21)
	REX_STORE_U64(r21.u32 + 0, r16.u64);
	// std r7,8(r21)
	REX_STORE_U64(r21.u32 + 8, ctx.r7.u64);
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r18,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, r18.u32);
	// std r14,0(r20)
	REX_STORE_U64(r20.u32 + 0, r14.u64);
	// std r5,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r5.u64);
	// lwz r9,472(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r9,448(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 448);
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// lwz r11,472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r11,452(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// stw r17,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, r17.u32);
	// lwz r3,6168(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6168);
	// std r6,0(r15)
	REX_STORE_U64(r15.u32 + 0, ctx.r6.u64);
	// std r26,8(r15)
	REX_STORE_U64(r15.u32 + 8, r26.u64);
	// bl 0x821495c8
	ctx.lr = 0x82282E00;
	sub_821495C8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82282e18
	if (ctx.cr6.gt) goto loc_82282E18;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82282E18:
	// lfs f11,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi. r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,336
	ctx.r11.s64 = r31.s64 + 336;
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,320
	ctx.r11.s64 = r31.s64 + 320;
	// lfs f12,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f13,f9,f13,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmsubs f12,f12,f11,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f4.f64)));
	// fmsubs f0,f0,f10,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// beq 0x82282e9c
	if (ctx.cr0.eq) goto loc_82282E9C;
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
loc_82282E9C:
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmadds f0,f29,f13,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f6,f12,f30,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f0.f64)));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, f31.f64);
	// bge cr6,0x82282ec8
	if (!ctx.cr6.lt) goto loc_82282EC8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224c4d0
	ctx.lr = 0x82282EB8;
	sub_8224C4D0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82282ec8
	if (!ctx.cr6.gt) goto loc_82282EC8;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x82282eec
	goto loc_82282EEC;
loc_82282EC8:
	// fcmpu cr6,f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, f31.f64);
	// ble cr6,0x82282ee8
	if (!ctx.cr6.gt) goto loc_82282EE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224c4d0
	ctx.lr = 0x82282ED8;
	sub_8224C4D0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82282ee8
	if (!ctx.cr6.lt) goto loc_82282EE8;
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// b 0x82282ef8
	goto loc_82282EF8;
loc_82282EE8:
	// fmr f1,f6
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f6.f64;
loc_82282EEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82283330
	ctx.lr = 0x82282EF4;
	sub_82283330(ctx, base);
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
loc_82282EF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82282f08
	if (!ctx.cr6.eq) goto loc_82282F08;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
loc_82282F08:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224c4d0
	ctx.lr = 0x82282F10;
	sub_8224C4D0(ctx, base);
	// lwa r11,60(r30)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r30.u32 + 60));
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f10,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(f30.f64, f27.f64);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f28,f12
	ctx.f0.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmuls f13,f29,f12
	ctx.f13.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 * ctx.f12.f64));
	// ble cr6,0x82282f88
	if (!ctx.cr6.gt) goto loc_82282F88;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// b 0x82283050
	goto loc_82283050;
loc_82282F88:
	// fmuls f11,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f3,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r31,448
	ctx.r11.s64 = r31.s64 + 448;
	// lfs f4,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// lfs f25,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f25.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fadds f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fadds f11,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f9,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f25,f3
	ctx.f10.f64 = double(float(f25.f64 - ctx.f3.f64));
	// lfs f1,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,608(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 612);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,616(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 616);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f9,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f2,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f24,f10,f0
	f24.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f25,f13,f3
	f25.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmsubs f13,f13,f4,f24
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, -f24.f64)));
	// fmsubs f0,f3,f0,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fmsubs f12,f12,f10,f25
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -f25.f64)));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,456(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,448(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
loc_82283050:
	// lwz r11,264(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 264);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stbx r26,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, r26.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224c4d0
	ctx.lr = 0x82283064;
	sub_8224C4D0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 264);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 - ctx.f0.f64));
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
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f26
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f26.f64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82282cd8
	if (ctx.cr6.lt) goto loc_82282CD8;
loc_822830B8:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce4
	ctx.lr = 0x822830C4;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822AAC60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822AAC68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aad84
	if (ctx.cr6.eq) goto loc_822AAD84;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822aad84
	if (ctx.cr0.eq) goto loc_822AAD84;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822aad5c
	if (!ctx.cr6.eq) goto loc_822AAD5C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822aacac
	if (!ctx.cr0.eq) goto loc_822AACAC;
	// li r29,1
	r29.s64 = 1;
loc_822AACAC:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822aad5c
	if (!ctx.cr6.lt) goto loc_822AAD5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822aaccc
	if (ctx.cr6.eq) goto loc_822AACCC;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822AACC4;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822aacd0
	goto loc_822AACD0;
loc_822AACCC:
	// li r30,0
	r30.s64 = 0;
loc_822AACD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822aad08
	if (!ctx.cr6.gt) goto loc_822AAD08;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822AACE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aacfc
	if (ctx.cr6.eq) goto loc_822AACFC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822AACFC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822aace8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AACE8;
loc_822AAD08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aad4c
	if (ctx.cr6.eq) goto loc_822AAD4C;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822aad44
	if (ctx.cr0.eq) goto loc_822AAD44;
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
	ctx.lr = 0x822AAD44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AAD44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822AAD4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822AAD5C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aad78
	if (ctx.cr0.eq) goto loc_822AAD78;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822AAD78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822AAD84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B8F00) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x822B8F08;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822b9030
	if (!ctx.cr6.eq) goto loc_822B9030;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822b8f64
	if (!ctx.cr0.eq) goto loc_822B8F64;
	// li r28,1
	r28.s64 = 1;
loc_822B8F64:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x822b9030
	if (!ctx.cr6.lt) goto loc_822B9030;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822b8f84
	if (ctx.cr6.eq) goto loc_822B8F84;
	// mulli r3,r28,192
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(192));
	// bl 0x822c1a70
	ctx.lr = 0x822B8F7C;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822b8f88
	goto loc_822B8F88;
loc_822B8F84:
	// li r29,0
	r29.s64 = 0;
loc_822B8F88:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822b8fdc
	if (!ctx.cr6.gt) goto loc_822B8FDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_822B8FA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8fcc
	if (ctx.cr6.eq) goto loc_822B8FCC;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B8FC0:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x822b8fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B8FC0;
loc_822B8FCC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bne 0x822b8fa0
	if (!ctx.cr0.eq) goto loc_822B8FA0;
loc_822B8FDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9020
	if (ctx.cr6.eq) goto loc_822B9020;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822b9018
	if (ctx.cr0.eq) goto loc_822B9018;
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
	ctx.lr = 0x822B9018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822B9020:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822B9030:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r9,r30,192
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(192));
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r26,100(r30)
	REX_STORE_U32(r30.u32 + 100, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822b8a28
	ctx.lr = 0x822B9078;
	sub_822B8A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822C1808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822C1810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x822C1820;
	sub_823ECC50(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r11,5944
	r31.s64 = ctx.r11.s64 + 5944;
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// mulli r9,r30,1000
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1000));
	// rotldi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// ld r11,5944(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 5944);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divd r9,r9,r11
	ctx.r9.s64 = (ctx.r11.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r9.s64 / ctx.r11.s64 : 0;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// rotlwi r29,r9,0
	r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// bl 0x823ef900
	ctx.lr = 0x822C185C;
	sub_823EF900(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpwi cr6,r11,-100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -100, ctx.xer);
	// blt cr6,0x822c187c
	if (ctx.cr6.lt) goto loc_822C187C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x822c18b0
	if (!ctx.cr6.gt) goto loc_822C18B0;
loc_822C187C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// mulld r11,r11,r10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// divd r11,r11,r8
	ctx.r11.s64 = (ctx.r8.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r11.s64 / ctx.r8.s64 : 0;
	// subf r9,r9,r30
	ctx.r9.u64 = r30.u64 - ctx.r9.u64;
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// bgt cr6,0x822c18a0
	if (ctx.cr6.gt) goto loc_822C18A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C18A0:
	// ld r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 24);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
loc_822C18B0:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// std r30,16(r31)
	REX_STORE_U64(r31.u32 + 16, r30.u64);
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// mulld r9,r30,r11
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * ctx.r11.u64);
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r10
	ctx.r9.s64 = (ctx.r10.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r10.s64 == -1)) ? ctx.r9.s64 / ctx.r10.s64 : 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C33A8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3498) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// stw r4,12204(r3)
	REX_STORE_U32(ctx.r3.u32 + 12204, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10372(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10372);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822c34d0
	if (ctx.cr6.eq) goto loc_822C34D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822c34d0
	if (ctx.cr6.eq) goto loc_822C34D0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822c34d0
	if (ctx.cr6.eq) goto loc_822C34D0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822C34D0:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10372(r3)
	REX_STORE_U32(ctx.r3.u32 + 10372, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C91B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CBAF8) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CD870) {
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
	// lwz r3,19896(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19896);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd8b0
	if (ctx.cr6.eq) goto loc_822CD8B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD8A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, ctx.r11.u32);
loc_822CD8B0:
	// stw r30,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822cd8d0
	if (ctx.cr6.eq) goto loc_822CD8D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CD8D0:
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

DEFINE_REX_FUNC(sub_822CF688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822CF690;
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r30,r11,310
	r30.u64 = ctx.r11.u64 | 310;
	// bne cr6,0x822cf758
	if (!ctx.cr6.eq) goto loc_822CF758;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,1102
	ctx.r11.s64 = ctx.r1.s64 + 1102;
	// bne cr6,0x822cf71c
	if (!ctx.cr6.eq) goto loc_822CF71C;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,127
	ctx.r9.s64 = 127;
loc_822CF6CC:
	// divwu r8,r10,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r8,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r8.u16);
	// divwu r7,r10,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// sth r8,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,-1020(r11)
	REX_STORE_U16(ctx.r11.u32 + -1020, ctx.r8.u16);
	// sth r8,-508(r11)
	REX_STORE_U16(ctx.r11.u32 + -508, ctx.r8.u16);
	// sthu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822cf6cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CF6CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d93b0
	ctx.lr = 0x822CF714;
	sub_822D93B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x822cf760
	goto loc_822CF760;
loc_822CF71C:
	// li r9,256
	ctx.r9.s64 = 256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822CF724:
	// li r9,255
	ctx.r9.s64 = 255;
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822cf724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CF724;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d9318
	ctx.lr = 0x822CF754;
	sub_822D9318(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_822CF758:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bne cr6,0x822cf76c
	if (!ctx.cr6.eq) goto loc_822CF76C;
loc_822CF760:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d95e8
	ctx.lr = 0x822CF768;
	sub_822D95E8(ctx, base);
	// b 0x822cf774
	goto loc_822CF774;
loc_822CF76C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d94f0
	ctx.lr = 0x822CF774;
	sub_822D94F0(ctx, base);
loc_822CF774:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D6818) {
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
	ctx.lr = 0x822D6820;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r3.u32);
	// bne 0x822d6a54
	if (!ctx.cr0.eq) goto loc_822D6A54;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d6940
	if (!ctx.cr6.eq) goto loc_822D6940;
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d6a38
	if (!ctx.cr6.gt) goto loc_822D6A38;
	// addi r29,r27,88
	r29.s64 = r27.s64 + 88;
loc_822D685C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -60);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6928
	if (!ctx.cr6.eq) goto loc_822D6928;
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6928
	if (!ctx.cr6.eq) goto loc_822D6928;
	// addi r30,r25,21772
	r30.s64 = r25.s64 + 21772;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x822d6928
	if (ctx.cr6.eq) goto loc_822D6928;
	// b 0x822d691c
	goto loc_822D691C;
loc_822D68C4:
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x822d6918
	if (!ctx.cr6.eq) goto loc_822D6918;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// bl 0x822daf40
	ctx.lr = 0x822D68F4;
	sub_822DAF40(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x822D6900;
	sub_823F0350(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x822D6914;
	sub_823F0350(ctx, base);
	// b 0x822d691c
	goto loc_822D691C;
loc_822D6918:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_822D691C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d68c4
	if (!ctx.cr6.eq) goto loc_822D68C4;
loc_822D6928:
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d685c
	if (ctx.cr6.lt) goto loc_822D685C;
	// b 0x822d6a38
	goto loc_822D6A38;
loc_822D6940:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822d6a38
	if (!ctx.cr6.eq) goto loc_822D6A38;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d6988
	if (ctx.cr6.eq) goto loc_822D6988;
	// lwz r10,88(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
loc_822D6988:
	// lwz r29,88(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 88);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6a18
	if (!ctx.cr6.eq) goto loc_822D6A18;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6a18
	if (!ctx.cr6.eq) goto loc_822D6A18;
	// addi r30,r25,21772
	r30.s64 = r25.s64 + 21772;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x822d6a18
	if (ctx.cr6.eq) goto loc_822D6A18;
	// b 0x822d6a0c
	goto loc_822D6A0C;
loc_822D69B4:
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x822d6a08
	if (!ctx.cr6.eq) goto loc_822D6A08;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// bl 0x822daf40
	ctx.lr = 0x822D69E4;
	sub_822DAF40(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x822D69F0;
	sub_823F0350(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x822D6A04;
	sub_823F0350(ctx, base);
	// b 0x822d6a0c
	goto loc_822D6A0C;
loc_822D6A08:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_822D6A0C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d69b4
	if (!ctx.cr6.eq) goto loc_822D69B4;
loc_822D6A18:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822d6a38
	if (!ctx.cr6.eq) goto loc_822D6A38;
	// lbz r11,10943(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 10943);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,10943(r25)
	REX_STORE_U8(r25.u32 + 10943, ctx.r11.u8);
loc_822D6A38:
	// lis r11,30840
	ctx.r11.s64 = 2021130240;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// ori r11,r11,30840
	ctx.r11.u64 = ctx.r11.u64 | 30840;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x822D6A50;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6A54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822E7488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E7490;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// clrlwi r29,r5,24
	r29.u64 = ctx.r5.u32 & 0xFF;
loc_822E74A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e74c0
	if (ctx.cr0.eq) goto loc_822E74C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7710
	ctx.lr = 0x822E74C0;
	sub_822E7710(ctx, base);
loc_822E74C0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x822e74a4
	if (ctx.cr6.lt) goto loc_822E74A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x822E74E8;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82178c38
	ctx.lr = 0x822E74FC;
	sub_82178C38(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EAE08) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x822EAE10;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
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
	ctx.lr = 0x822EAE34;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,15048
	ctx.r9.s64 = ctx.r11.s64 + 15048;
	// addi r10,r10,14432
	ctx.r10.s64 = ctx.r10.s64 + 14432;
	// li r21,1
	r21.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// stb r21,120(r31)
	REX_STORE_U8(r31.u32 + 120, r21.u8);
	// addi r25,r31,148
	r25.s64 = r31.s64 + 148;
	// lfs f31,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,124(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f30,132(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r28,r31,120
	r28.s64 = r31.s64 + 120;
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r26,r31,124
	r26.s64 = r31.s64 + 124;
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x822EAE90;
	sub_82120AC0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r31,188
	ctx.r11.s64 = r31.s64 + 188;
	// stb r24,176(r31)
	REX_STORE_U8(r31.u32 + 176, r24.u8);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r23,r31,176
	r23.s64 = r31.s64 + 176;
	// lfs f0,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r31,180
	r22.s64 = r31.s64 + 180;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stw r24,196(r31)
	REX_STORE_U32(r31.u32 + 196, r24.u32);
	// stw r24,200(r31)
	REX_STORE_U32(r31.u32 + 200, r24.u32);
	// stw r24,204(r31)
	REX_STORE_U32(r31.u32 + 204, r24.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x822EAED4;
	sub_8269D1D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x822EAEE0;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r27,196(r31)
	REX_STORE_U32(r31.u32 + 196, r27.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stfs f30,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f30,216(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stb r24,212(r31)
	REX_STORE_U8(r31.u32 + 212, r24.u8);
	// stb r24,213(r31)
	REX_STORE_U8(r31.u32 + 213, r24.u8);
	// bl 0x822f6280
	ctx.lr = 0x822EAF04;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822eaf34
	if (ctx.cr0.eq) goto loc_822EAF34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-29284
	ctx.r4.s64 = ctx.r11.s64 + -29284;
	// bl 0x82120600
	ctx.lr = 0x822EAF1C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// bl 0x82191600
	ctx.lr = 0x822EAF30;
	sub_82191600(ctx, base);
	// b 0x822eaf38
	goto loc_822EAF38;
loc_822EAF34:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822EAF38:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822EAF4C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eaf68
	if (ctx.cr0.eq) goto loc_822EAF68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822EAF68;
	sub_82120AC0(ctx, base);
loc_822EAF68:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x822EAF70;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822eafa0
	if (ctx.cr0.eq) goto loc_822EAFA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x822EAF88;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821d13f8
	ctx.lr = 0x822EAF9C;
	sub_821D13F8(ctx, base);
	// b 0x822eafa4
	goto loc_822EAFA4;
loc_822EAFA0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822EAFA4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822EAFB4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eafd0
	if (ctx.cr0.eq) goto loc_822EAFD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822EAFD0;
	sub_82120AC0(ctx, base);
loc_822EAFD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x822EAFE0;
	sub_82120600(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822EAFF0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822EB000;
	sub_82120AC0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822EB008;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822eb044
	if (ctx.cr0.eq) goto loc_822EB044;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x82120600
	ctx.lr = 0x822EB020;
	sub_82120600(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r6,r11,14320
	ctx.r6.s64 = ctx.r11.s64 + 14320;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x821e9d10
	ctx.lr = 0x822EB03C;
	sub_821E9D10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822eb048
	goto loc_822EB048;
loc_822EB044:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822EB048:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822EB05C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eb078
	if (ctx.cr0.eq) goto loc_822EB078;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x822EB078;
	sub_82120AC0(ctx, base);
loc_822EB078:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822EB080;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822eb0b0
	if (ctx.cr0.eq) goto loc_822EB0B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,14348
	ctx.r4.s64 = ctx.r11.s64 + 14348;
	// bl 0x82120600
	ctx.lr = 0x822EB098;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x822EB0AC;
	sub_82191600(ctx, base);
	// b 0x822eb0b4
	goto loc_822EB0B4;
loc_822EB0B0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822EB0B4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822EB0C4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eb0e0
	if (ctx.cr0.eq) goto loc_822EB0E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x822EB0E0;
	sub_82120AC0(ctx, base);
loc_822EB0E0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822EB0E8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822eb118
	if (ctx.cr0.eq) goto loc_822EB118;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,14364
	ctx.r4.s64 = ctx.r11.s64 + 14364;
	// bl 0x82120600
	ctx.lr = 0x822EB100;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x822EB114;
	sub_82196BA8(ctx, base);
	// b 0x822eb11c
	goto loc_822EB11C;
loc_822EB118:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822EB11C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822EB12C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eb144
	if (ctx.cr0.eq) goto loc_822EB144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x822EB144;
	sub_82120AC0(ctx, base);
loc_822EB144:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822EB14C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb16c
	if (ctx.cr0.eq) goto loc_822EB16C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822EB164;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822eb170
	goto loc_822EB170;
loc_822EB16C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822EB170:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822EB180;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x822EB188;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822eb1ec
	if (ctx.cr0.eq) goto loc_822EB1EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r21,4(r30)
	REX_STORE_U32(r30.u32 + 4, r21.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r24,8(r30)
	REX_STORE_U32(r30.u32 + 8, r24.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822EB1B0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb1dc
	if (ctx.cr0.eq) goto loc_822EB1DC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-18704
	ctx.r10.s64 = ctx.r10.s64 + -18704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822eb1e0
	goto loc_822EB1E0;
loc_822EB1DC:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822EB1E0:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822eb1f0
	goto loc_822EB1F0;
loc_822EB1EC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822EB1F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822EB1F8;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x822EB200;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb218
	if (ctx.cr0.eq) goto loc_822EB218;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822eb998
	ctx.lr = 0x822EB210;
	sub_822EB998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822eb21c
	goto loc_822EB21C;
loc_822EB218:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822EB21C:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822EB228;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EB230;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb260
	if (ctx.cr0.eq) goto loc_822EB260;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17920
	ctx.r4.s64 = ctx.r10.s64 + -17920;
	// addi r6,r11,3008
	ctx.r6.s64 = ctx.r11.s64 + 3008;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822eba40
	ctx.lr = 0x822EB258;
	sub_822EBA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822eb264
	goto loc_822EB264;
loc_822EB260:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB264:
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
	ctx.lr = 0x822EB27C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EB284;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb2b4
	if (ctx.cr0.eq) goto loc_822EB2B4;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17912
	ctx.r4.s64 = ctx.r10.s64 + -17912;
	// addi r6,r11,-21056
	ctx.r6.s64 = ctx.r11.s64 + -21056;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822eba40
	ctx.lr = 0x822EB2AC;
	sub_822EBA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822eb2b8
	goto loc_822EB2B8;
loc_822EB2B4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB2B8:
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
	ctx.lr = 0x822EB2D0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EB2D8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb308
	if (ctx.cr0.eq) goto loc_822EB308;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,14380
	ctx.r4.s64 = ctx.r10.s64 + 14380;
	// addi r6,r11,-18792
	ctx.r6.s64 = ctx.r11.s64 + -18792;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822eba40
	ctx.lr = 0x822EB300;
	sub_822EBA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822eb30c
	goto loc_822EB30C;
loc_822EB308:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB30C:
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
	ctx.lr = 0x822EB324;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EB32C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb35c
	if (ctx.cr0.eq) goto loc_822EB35C;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,14392
	ctx.r4.s64 = ctx.r10.s64 + 14392;
	// addi r6,r11,-18768
	ctx.r6.s64 = ctx.r11.s64 + -18768;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822eba40
	ctx.lr = 0x822EB354;
	sub_822EBA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822eb360
	goto loc_822EB360;
loc_822EB35C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB360:
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
	ctx.lr = 0x822EB378;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EB380;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb3b0
	if (ctx.cr0.eq) goto loc_822EB3B0;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,14404
	ctx.r4.s64 = ctx.r10.s64 + 14404;
	// addi r6,r11,-18752
	ctx.r6.s64 = ctx.r11.s64 + -18752;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822eba40
	ctx.lr = 0x822EB3A8;
	sub_822EBA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822eb3b4
	goto loc_822EB3B4;
loc_822EB3B0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB3B4:
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
	ctx.lr = 0x822EB3CC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822EB3D4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822eb40c
	if (ctx.cr0.eq) goto loc_822EB40C;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14416
	ctx.r4.s64 = ctx.r11.s64 + 14416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EB3F8;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x822eb410
	goto loc_822EB410;
loc_822EB40C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822EB410:
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
	ctx.lr = 0x822EB428;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EB430;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb45c
	if (ctx.cr0.eq) goto loc_822EB45C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-19032
	ctx.r10.s64 = ctx.r10.s64 + -19032;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822eb460
	goto loc_822EB460;
loc_822EB45C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822EB460:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x822EB470;
	sub_8216BE80(ctx, base);
	// lwz r30,184(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x822EB47C;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EB484;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eb4b0
	if (ctx.cr0.eq) goto loc_822EB4B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-18192
	ctx.r10.s64 = ctx.r10.s64 + -18192;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822eb4b4
	goto loc_822EB4B4;
loc_822EB4B0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822EB4B4:
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r24,33(r30)
	REX_STORE_U8(r30.u32 + 33, r24.u8);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82313EB0) {
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
	ctx.lr = 0x82313EB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r25,r30
	r25.u64 = r30.u64;
	// bne cr6,0x82313edc
	if (!ctx.cr6.eq) goto loc_82313EDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82313fbc
	goto loc_82313FBC;
loc_82313EDC:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,68(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 68);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r26,16
	r26.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82313EF0:
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82313f00
	if (ctx.cr0.eq) goto loc_82313F00;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82313F00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82313ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82313EF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82313F18;
	sub_826A1E70(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r29,88
	r31.s64 = r29.s64 + 88;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82313F40:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// slw r27,r26,r30
	r27.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82313f6c
	if (!ctx.cr0.eq) goto loc_82313F6C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82313f60
	if (!ctx.cr6.eq) goto loc_82313F60;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82313f6c
	if (ctx.cr6.eq) goto loc_82313F6C;
loc_82313F60:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,-68(r31)
	REX_STORE_U32(r31.u32 + -68, ctx.r11.u32);
	// b 0x82313f8c
	goto loc_82313F8C;
loc_82313F6C:
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x823ef2f8
	ctx.lr = 0x82313F7C;
	sub_823EF2F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82313F8C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82313f40
	if (ctx.cr6.lt) goto loc_82313F40;
	// lwz r3,324(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313fb8
	if (ctx.cr6.eq) goto loc_82313FB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82330280
	ctx.lr = 0x82313FB0;
	sub_82330280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313fbc
	if (!ctx.cr0.eq) goto loc_82313FBC;
loc_82313FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82313FBC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82319C18) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319c40
	if (ctx.cr6.eq) goto loc_82319C40;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823150e0
	ctx.lr = 0x82319C3C;
	sub_823150E0(ctx, base);
	// b 0x82319c44
	goto loc_82319C44;
loc_82319C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319C44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231C620) {
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
	ctx.lr = 0x8231C628;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231c668
	if (!ctx.cr0.eq) goto loc_8231C668;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82340e38
	ctx.lr = 0x8231C664;
	sub_82340E38(ctx, base);
	// b 0x8231c900
	goto loc_8231C900;
loc_8231C668:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,84
	ctx.r7.s64 = r31.s64 + 84;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8231c3d0
	ctx.lr = 0x8231C680;
	sub_8231C3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c900
	if (!ctx.cr0.eq) goto loc_8231C900;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8231C69C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r27,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	r27.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8231c6e0
	if (!ctx.cr0.eq) goto loc_8231C6E0;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231c6d8
	if (ctx.cr6.eq) goto loc_8231C6D8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231C6D8;
	sub_82330D00(ctx, base);
loc_8231C6D8:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231c900
	goto loc_8231C900;
loc_8231C6E0:
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8231c740
	if (ctx.cr6.eq) goto loc_8231C740;
	// blt cr6,0x8231c78c
	if (ctx.cr6.lt) goto loc_8231C78C;
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231c78c
	if (!ctx.cr6.gt) goto loc_8231C78C;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8231c740
	if (!ctx.cr6.gt) goto loc_8231C740;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_8231C714:
	// lbzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8231c78c
	if (!ctx.cr6.lt) goto loc_8231C78C;
	// bne 0x8231c714
	if (!ctx.cr0.eq) goto loc_8231C714;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231c714
	if (ctx.cr6.lt) goto loc_8231C714;
loc_8231C740:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317938
	ctx.lr = 0x8231C750;
	sub_82317938(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8231c7c0
	if (ctx.cr0.eq) goto loc_8231C7C0;
loc_8231C758:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231c784
	if (ctx.cr6.eq) goto loc_8231C784;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231C784;
	sub_82330D00(ctx, base);
loc_8231C784:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8231c900
	goto loc_8231C900;
loc_8231C78C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231c7b8
	if (ctx.cr6.eq) goto loc_8231C7B8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231C7B8;
	sub_82330D00(ctx, base);
loc_8231C7B8:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8231c900
	goto loc_8231C900;
loc_8231C7C0:
	// lis r11,28016
	ctx.r11.s64 = 1836056576;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// ori r11,r11,28019
	ctx.r11.u64 = ctx.r11.u64 | 28019;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231c808
	if (ctx.cr6.eq) goto loc_8231C808;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231c800
	if (ctx.cr6.eq) goto loc_8231C800;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231C800;
	sub_82330D00(ctx, base);
loc_8231C800:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231c900
	goto loc_8231C900;
loc_8231C808:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C820;
	sub_82340718(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8231c758
	if (!ctx.cr0.eq) goto loc_8231C758;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c8f8
	if (ctx.cr6.eq) goto loc_8231C8F8;
loc_8231C838:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C850;
	sub_82340718(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8231c908
	if (!ctx.cr0.eq) goto loc_8231C908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C870;
	sub_82340718(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8231c908
	if (!ctx.cr0.eq) goto loc_8231C908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C890;
	sub_82340718(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8231c908
	if (!ctx.cr0.eq) goto loc_8231C908;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231C8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231c78c
	if (ctx.cr0.eq) goto loc_8231C78C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8231c78c
	if (!ctx.cr6.lt) goto loc_8231C78C;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231c838
	if (ctx.cr6.lt) goto loc_8231C838;
loc_8231C8F8:
	// stw r30,24(r25)
	REX_STORE_U32(r25.u32 + 24, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C900:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cfc
	return;
loc_8231C908:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231c934
	if (ctx.cr6.eq) goto loc_8231C934;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231C934;
	sub_82330D00(ctx, base);
loc_8231C934:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8231c900
	goto loc_8231C900;
}

DEFINE_REX_FUNC(sub_82333150) {
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
	ctx.lr = 0x82333158;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82333160;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32126
	r23.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,15880(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 15880);
	// bl 0x8233e7e0
	ctx.lr = 0x82333178;
	sub_8233E7E0(ctx, base);
	// addi r24,r27,21924
	r24.s64 = r27.s64 + 21924;
	// lwz r31,21924(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 21924);
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// beq cr6,0x82333330
	if (ctx.cr6.eq) goto loc_82333330;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,3992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3992);
	f31.f64 = double(temp.f32);
	// lfs f30,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	f30.f64 = double(temp.f32);
	// lfs f28,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f28.f64 = double(temp.f32);
	// lfs f29,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f29.f64 = double(temp.f32);
loc_823331AC:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r25,0(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,64(r31)
	REX_STORE_U32(r31.u32 + 64, r26.u32);
	// bne cr6,0x823331d0
	if (!ctx.cr6.eq) goto loc_823331D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f00
	ctx.lr = 0x823331D0;
	sub_82357F00(ctx, base);
loc_823331D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823332e0
	if (ctx.cr6.eq) goto loc_823332E0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r31,36
	r29.s64 = r31.s64 + 36;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82333324
	if (ctx.cr6.eq) goto loc_82333324;
loc_823331EC:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8233322c
	if (!ctx.cr6.eq) goto loc_8233322C;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8233322c
	if (ctx.cr6.lt) goto loc_8233322C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82333228
	if (!ctx.cr6.gt) goto loc_82333228;
	// stfs f29,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// b 0x8233322c
	goto loc_8233322C;
loc_82333228:
	// stfs f28,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
loc_8233322C:
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823332d0
	if (ctx.cr6.eq) goto loc_823332D0;
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// blt cr6,0x823332c0
	if (ctx.cr6.lt) goto loc_823332C0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82333280
	if (!ctx.cr6.lt) goto loc_82333280;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,128(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x82333280
	if (!ctx.cr6.gt) goto loc_82333280;
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_82333280:
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823332c4
	if (!ctx.cr6.gt) goto loc_823332C4;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f6,128(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x823332c4
	if (!ctx.cr6.lt) goto loc_823332C4;
loc_823332C0:
	// stfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_823332C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234bbc8
	ctx.lr = 0x823332D0;
	sub_8234BBC8(ctx, base);
loc_823332D0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x823331ec
	if (!ctx.cr6.eq) goto loc_823331EC;
	// b 0x82333324
	goto loc_82333324;
loc_823332E0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r27,21936
	ctx.r11.s64 = r27.s64 + 21936;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r6,21936(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 21936);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r31.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_82333324:
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// bne cr6,0x823331ac
	if (!ctx.cr6.eq) goto loc_823331AC;
loc_82333330:
	// lwz r3,15880(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 15880);
	// bl 0x8233e820
	ctx.lr = 0x82333338;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82333348;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8234B480) {
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
	ctx.lr = 0x8234B488;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234b4c4
	if (ctx.cr6.eq) goto loc_8234B4C4;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b4b8
	if (ctx.cr6.eq) goto loc_8234B4B8;
	// lwz r11,160(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b4c4
	if (!ctx.cr6.eq) goto loc_8234B4C4;
loc_8234B4B8:
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234B4C4:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b688
	if (ctx.cr6.eq) goto loc_8234B688;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r26,104(r30)
	REX_STORE_U32(r30.u32 + 104, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b4ec
	if (ctx.cr6.eq) goto loc_8234B4EC;
	// lwz r11,21816(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
loc_8234B4EC:
	// lwz r9,84(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 84);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r12,-588
	ctx.r12.s64 = -588;
	// addi r11,r30,220
	ctx.r11.s64 = r30.s64 + 220;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234B510:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8234b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234B510;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r26,136(r30)
	REX_STORE_U32(r30.u32 + 136, r26.u32);
	// stw r26,152(r30)
	REX_STORE_U32(r30.u32 + 152, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,156(r30)
	REX_STORE_U32(r30.u32 + 156, r26.u32);
	// stw r26,160(r30)
	REX_STORE_U32(r30.u32 + 160, r26.u32);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,164(r30)
	REX_STORE_U32(r30.u32 + 164, r26.u32);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 168, temp.u32);
	// beq cr6,0x8234b558
	if (ctx.cr6.eq) goto loc_8234B558;
	// lwz r10,20888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20888);
	// stw r10,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// lwz r9,20892(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20892);
	// stw r9,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r9.u32);
	// b 0x8234b560
	goto loc_8234B560;
loc_8234B558:
	// stw r26,144(r30)
	REX_STORE_U32(r30.u32 + 144, r26.u32);
	// stw r26,148(r30)
	REX_STORE_U32(r30.u32 + 148, r26.u32);
loc_8234B560:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,84(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 84);
	// stfs f0,292(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 292, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stfs f0,336(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 336, temp.u32);
	// stfs f0,296(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f0,288(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 288, temp.u32);
	// stw r8,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r8.u32);
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,364(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 364, temp.u32);
	// lfs f12,108(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,328(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 328, temp.u32);
	// lfs f11,112(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,332(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 332, temp.u32);
	// stfs f13,324(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 324, temp.u32);
	// lfs f10,116(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,340(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 340, temp.u32);
	// lfs f9,120(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,344(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 344, temp.u32);
	// lfs f8,124(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,348(r30)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + 348, temp.u32);
	// stfs f13,352(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 352, temp.u32);
	// stfs f13,356(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 356, temp.u32);
	// stfs f0,360(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 360, temp.u32);
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 128);
	// stw r7,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r7.u32);
	// lwz r6,132(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 132);
	// stfs f0,408(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 408, temp.u32);
	// stfs f0,412(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 412, temp.u32);
	// stw r6,400(r30)
	REX_STORE_U32(r30.u32 + 400, ctx.r6.u32);
	// beq cr6,0x8234b688
	if (ctx.cr6.eq) goto loc_8234B688;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8234B5E4:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// bl 0x8235c3b8
	ctx.lr = 0x8234B5F8;
	sub_8235C3B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8234b5e4
	if (ctx.cr6.lt) goto loc_8234B5E4;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,25000(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b624
	if (ctx.cr6.eq) goto loc_8234B624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// bl 0x8235c3b8
	ctx.lr = 0x8234B624;
	sub_8235C3B8(ctx, base);
loc_8234B624:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8234b63c
	if (!ctx.cr6.eq) goto loc_8234B63C;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8234B63C:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234b688
	if (ctx.cr6.eq) goto loc_8234B688;
loc_8234B648:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b664
	if (ctx.cr6.eq) goto loc_8234B664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235c3b8
	ctx.lr = 0x8234B664;
	sub_8235C3B8(ctx, base);
loc_8234B664:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8234b678
	if (!ctx.cr6.eq) goto loc_8234B678;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8234B678:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234b648
	if (!ctx.cr6.eq) goto loc_8234B648;
loc_8234B688:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234b7c0
	if (!ctx.cr6.gt) goto loc_8234B7C0;
	// addi r31,r30,76
	r31.s64 = r30.s64 + 76;
	// addi r27,r29,176
	r27.s64 = r29.s64 + 176;
loc_8234B6A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b7cc
	if (ctx.cr6.eq) goto loc_8234B7CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234B6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234b6d8
	if (ctx.cr6.eq) goto loc_8234B6D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
	// b 0x8234b6f8
	goto loc_8234B6F8;
loc_8234B6D8:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8234b6ec
	if (!ctx.cr6.gt) goto loc_8234B6EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x8234b6f0
	goto loc_8234B6F0;
loc_8234B6EC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8234B6F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_8234B6F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r26.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r8,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,52(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 52);
	// stw r7,56(r6)
	REX_STORE_U32(ctx.r6.u32 + 56, ctx.r7.u32);
	// lwz r5,56(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r5,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r5.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,44(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 44);
	// stw r9,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,76(r7)
	REX_STORE_U32(ctx.r7.u32 + 76, r26.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r4,36(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// ori r3,r4,8192
	ctx.r3.u64 = ctx.r4.u64 | 8192;
	// stw r3,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r3.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234B77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234b7c4
	if (!ctx.cr6.eq) goto loc_8234B7C4;
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,64(r29)
	REX_STORE_U32(r29.u32 + 64, ctx.r9.u32);
	// beq cr6,0x8234b7a8
	if (ctx.cr6.eq) goto loc_8234B7A8;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_8234B7A8:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234b6a0
	if (ctx.cr6.lt) goto loc_8234B6A0;
loc_8234B7C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234B7C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234B7CC:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82360C50) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-360
	ctx.r3.s64 = ctx.r3.s64 + -360;
	// b 0x82360c58
	sub_82360C58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823611E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823611F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r29,0
	r29.s64 = 0;
	// li r9,19
	ctx.r9.s64 = 19;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// stw r29,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82361230;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361534
	if (!ctx.cr6.eq) goto loc_82361534;
	// addi r11,r30,264
	ctx.r11.s64 = r30.s64 + 264;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82361530
	if (ctx.cr6.lt) goto loc_82361530;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bgt cr6,0x82361530
	if (ctx.cr6.gt) goto loc_82361530;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236126C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361534
	if (!ctx.cr6.eq) goto loc_82361534;
	// stw r29,188(r30)
	REX_STORE_U32(r30.u32 + 188, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361290
	if (ctx.cr6.eq) goto loc_82361290;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,204(r30)
	REX_STORE_U32(r30.u32 + 204, ctx.r10.u32);
loc_82361290:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r7,36
	ctx.r7.s64 = 36;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,260(r9)
	REX_STORE_U32(ctx.r9.u32 + 260, ctx.r8.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r5,264(r6)
	REX_STORE_U32(ctx.r6.u32 + 264, ctx.r5.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x823613e4
	if (ctx.cr6.eq) goto loc_823613E4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x823613e4
	if (ctx.cr6.gt) goto loc_823613E4;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4848
	ctx.r12.s64 = ctx.r12.s64 + 4848;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82361358;
	case 1:
		goto loc_82361320;
	case 2:
		goto loc_82361328;
	case 3:
		goto loc_82361330;
	case 4:
		goto loc_82361338;
	case 5:
		goto loc_82361338;
	case 6:
		goto loc_82361358;
	case 7:
		goto loc_82361358;
	case 8:
		goto loc_82361358;
	case 9:
		goto loc_82361358;
	case 10:
		goto loc_82361358;
	case 11:
		goto loc_82361358;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82361320:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8236133c
	goto loc_8236133C;
loc_82361328:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8236133c
	goto loc_8236133C;
loc_82361330:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8236133c
	goto loc_8236133C;
loc_82361338:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8236133C:
	// rldicl r9,r9,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 3) & 0x7FFFFFFFF;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// rldicr r9,r9,0,60
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 ? ctx.r9.u64 / ctx.r6.u64 : 0;
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// b 0x823613d4
	goto loc_823613D4;
loc_82361358:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4976
	ctx.r12.s64 = ctx.r12.s64 + 4976;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823613D0;
	case 1:
		goto loc_823613E4;
	case 2:
		goto loc_823613E4;
	case 3:
		goto loc_823613E4;
	case 4:
		goto loc_823613E4;
	case 5:
		goto loc_823613E4;
	case 6:
		goto loc_823613A0;
	case 7:
		goto loc_823613B0;
	case 8:
		goto loc_823613C0;
	case 9:
		goto loc_823613E0;
	case 10:
		goto loc_823613E0;
	case 11:
		goto loc_823613E0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823613A0:
	// mulli r10,r9,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14));
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x823613d4
	goto loc_823613D4;
loc_823613B0:
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x823613d4
	goto loc_823613D4;
loc_823613C0:
	// mulli r10,r9,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x823613d4
	goto loc_823613D4;
loc_823613D0:
	// stw r29,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, r29.u32);
loc_823613D4:
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
loc_823613E0:
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_823613E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82361520
	if (ctx.cr6.gt) goto loc_82361520;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5136
	ctx.r12.s64 = ctx.r12.s64 + 5136;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82361490;
	case 1:
		goto loc_82361440;
	case 2:
		goto loc_82361454;
	case 3:
		goto loc_82361468;
	case 4:
		goto loc_8236147C;
	case 5:
		goto loc_8236147C;
	case 6:
		goto loc_82361490;
	case 7:
		goto loc_82361490;
	case 8:
		goto loc_82361490;
	case 9:
		goto loc_82361490;
	case 10:
		goto loc_82361490;
	case 11:
		goto loc_82361490;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82361440:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r8.u32);
	// b 0x82361514
	goto loc_82361514;
loc_82361454:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r8.u32);
	// b 0x82361514
	goto loc_82361514;
loc_82361468:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r8.u32);
	// b 0x82361514
	goto loc_82361514;
loc_8236147C:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r8.u32);
	// b 0x82361514
	goto loc_82361514;
loc_82361490:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5288
	ctx.r12.s64 = ctx.r12.s64 + 5288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82361510;
	case 1:
		goto loc_82361520;
	case 2:
		goto loc_82361520;
	case 3:
		goto loc_82361520;
	case 4:
		goto loc_82361520;
	case 5:
		goto loc_82361520;
	case 6:
		goto loc_823614D8;
	case 7:
		goto loc_823614E4;
	case 8:
		goto loc_823614EC;
	case 9:
		goto loc_823614F8;
	case 10:
		goto loc_823614F8;
	case 11:
		goto loc_823614F8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823614D8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// b 0x82361514
	goto loc_82361514;
loc_823614E4:
	// stw r7,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r7.u32);
	// b 0x82361514
	goto loc_82361514;
loc_823614EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// b 0x82361514
	goto loc_82361514;
loc_823614F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82361510:
	// stw r29,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, r29.u32);
loc_82361514:
	// lwz r11,276(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r9,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r9.u32);
loc_82361520:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82361530:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82361534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8237DC80) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8237dc90
	if (!ctx.cr6.eq) goto loc_8237DC90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237DC90:
	// b 0x8237daf0
	sub_8237DAF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237F5E0) {
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
	// lwz r11,11668(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11668);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237f638
	if (ctx.cr6.eq) goto loc_8237F638;
	// bge cr6,0x8237f614
	if (!ctx.cr6.lt) goto loc_8237F614;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8237d730
	ctx.lr = 0x8237F614;
	sub_8237D730(ctx, base);
loc_8237F614:
	// lwz r11,11668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11668);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x8237f638
	if (!ctx.cr6.lt) goto loc_8237F638;
loc_8237F620:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237f1a0
	ctx.lr = 0x8237F62C;
	sub_8237F1A0(ctx, base);
	// lwz r11,11668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11668);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x8237f620
	if (ctx.cr6.lt) goto loc_8237F620;
loc_8237F638:
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

DEFINE_REX_FUNC(sub_82384B90) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82384ba0
	if (!ctx.cr6.eq) goto loc_82384BA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82384BA0:
	// b 0x823846f8
	sub_823846F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82384C40) {
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
	ctx.lr = 0x82384C48;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// li r18,0
	r18.s64 = 0;
	// lwz r21,260(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r22,4348(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4348);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82384dac
	if (ctx.cr6.eq) goto loc_82384DAC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82384dac
	if (ctx.cr6.gt) goto loc_82384DAC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19612
	ctx.r12.s64 = ctx.r12.s64 + 19612;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82384D0C;
	case 1:
		goto loc_82384CCC;
	case 2:
		goto loc_82384CD4;
	case 3:
		goto loc_82384CDC;
	case 4:
		goto loc_82384CE4;
	case 5:
		goto loc_82384CE4;
	case 6:
		goto loc_82384D0C;
	case 7:
		goto loc_82384D0C;
	case 8:
		goto loc_82384D0C;
	case 9:
		goto loc_82384D0C;
	case 10:
		goto loc_82384D0C;
	case 11:
		goto loc_82384D0C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82384CCC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82384ce8
	goto loc_82384CE8;
loc_82384CD4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82384ce8
	goto loc_82384CE8;
loc_82384CDC:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82384ce8
	goto loc_82384CE8;
loc_82384CE4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82384CE8:
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
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384D0C:
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19748
	ctx.r12.s64 = ctx.r12.s64 + 19748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82384D9C;
	case 1:
		goto loc_82384DAC;
	case 2:
		goto loc_82384DAC;
	case 3:
		goto loc_82384DAC;
	case 4:
		goto loc_82384DAC;
	case 5:
		goto loc_82384DAC;
	case 6:
		goto loc_82384D54;
	case 7:
		goto loc_82384D68;
	case 8:
		goto loc_82384D80;
	case 9:
		goto loc_82384D94;
	case 10:
		goto loc_82384D94;
	case 11:
		goto loc_82384D94;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82384D54:
	// mulli r11,r20,14
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384D68:
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
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384D80:
	// mulli r11,r20,28
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384D94:
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384D9C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// divwu r26,r18,r21
	r26.u64 = uint32_t(r21.u32 ? r18.u32 / r21.u32 : 0);
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82384db0
	goto loc_82384DB0;
loc_82384DAC:
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82384DB0:
	// lbz r11,2164(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384fd0
	if (ctx.cr6.eq) goto loc_82384FD0;
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
	// beq cr6,0x82384fd0
	if (ctx.cr6.eq) goto loc_82384FD0;
	// lwz r28,1252(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 1252);
	// mr r29,r18
	r29.u64 = r18.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82384fcc
	if (ctx.cr6.eq) goto loc_82384FCC;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,14
	r23.s64 = 14;
	// li r24,28
	r24.s64 = 28;
loc_82384DF0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// bne cr6,0x82384e1c
	if (!ctx.cr6.eq) goto loc_82384E1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82384430
	ctx.lr = 0x82384E08;
	sub_82384430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384fe0
	if (!ctx.cr6.eq) goto loc_82384FE0;
	// lwz r11,1256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1256);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x82384e20
	goto loc_82384E20;
loc_82384E1C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82384E20:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// ble cr6,0x82384e30
	if (!ctx.cr6.gt) goto loc_82384E30;
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
loc_82384E30:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82384E3C;
	sub_8233E7E0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82384e84
	if (ctx.cr6.eq) goto loc_82384E84;
	// lwz r3,15996(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 15996);
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
	ctx.lr = 0x82384E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384fe8
	if (!ctx.cr6.eq) goto loc_82384FE8;
	// lwz r11,1264(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1264(r27)
	REX_STORE_U32(r27.u32 + 1264, ctx.r11.u32);
loc_82384E84:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82384fac
	if (ctx.cr6.gt) goto loc_82384FAC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20140
	ctx.r12.s64 = ctx.r12.s64 + 20140;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82384F10;
	case 1:
		goto loc_82384EDC;
	case 2:
		goto loc_82384EE4;
	case 3:
		goto loc_82384EEC;
	case 4:
		goto loc_82384EF4;
	case 5:
		goto loc_82384EF4;
	case 6:
		goto loc_82384F10;
	case 7:
		goto loc_82384F10;
	case 8:
		goto loc_82384F10;
	case 9:
		goto loc_82384F10;
	case 10:
		goto loc_82384F10;
	case 11:
		goto loc_82384F10;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82384EDC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82384ef8
	goto loc_82384EF8;
loc_82384EE4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82384ef8
	goto loc_82384EF8;
loc_82384EEC:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82384ef8
	goto loc_82384EF8;
loc_82384EF4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82384EF8:
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
	// b 0x82384fa8
	goto loc_82384FA8;
loc_82384F10:
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20264
	ctx.r12.s64 = ctx.r12.s64 + 20264;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82384FA4;
	case 1:
		goto loc_82384FAC;
	case 2:
		goto loc_82384FAC;
	case 3:
		goto loc_82384FAC;
	case 4:
		goto loc_82384FAC;
	case 5:
		goto loc_82384FAC;
	case 6:
		goto loc_82384F58;
	case 7:
		goto loc_82384F6C;
	case 8:
		goto loc_82384F88;
	case 9:
		goto loc_82384F9C;
	case 10:
		goto loc_82384F9C;
	case 11:
		goto loc_82384F9C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82384F58:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// divwu r9,r10,r23
	ctx.r9.u64 = uint32_t(r23.u32 ? ctx.r10.u32 / r23.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82384fa8
	goto loc_82384FA8;
loc_82384F6C:
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
	// b 0x82384fa8
	goto loc_82384FA8;
loc_82384F88:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82384fa8
	goto loc_82384FA8;
loc_82384F9C:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82384fac
	goto loc_82384FAC;
loc_82384FA4:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82384FA8:
	// mullw r30,r11,r21
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
loc_82384FAC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x82384FB4;
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
	// blt cr6,0x82384df0
	if (ctx.cr6.lt) goto loc_82384DF0;
loc_82384FCC:
	// stw r28,1252(r27)
	REX_STORE_U32(r27.u32 + 1252, r28.u32);
loc_82384FD0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x82384fdc
	if (ctx.cr6.eq) goto loc_82384FDC;
	// stw r20,0(r17)
	REX_STORE_U32(r17.u32 + 0, r20.u32);
loc_82384FDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82384FE0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_82384FE8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x82384FF0;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_823A32A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a32b0
	if (!ctx.cr6.eq) goto loc_823A32B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A32B0:
	// b 0x823a2ce8
	sub_823A2CE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A3FC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a3fe4
	if (!ctx.cr6.eq) goto loc_823A3FE4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A3FE4:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r31,228(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r30,220(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x823a3370
	ctx.lr = 0x823A4008;
	sub_823A3370(ctx, base);
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

DEFINE_REX_FUNC(sub_823A9400) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a9414
	if (!ctx.cr6.eq) goto loc_823A9414;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A9414:
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,1012(r7)
	REX_STORE_U32(ctx.r7.u32 + 1012, ctx.r8.u32);
	// lwz r6,400(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r10,896(r11)
	REX_STORE_U32(ctx.r11.u32 + 896, ctx.r10.u32);
	// stw r10,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r10.u32);
	// lwz r5,400(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r9,900(r11)
	REX_STORE_U32(ctx.r11.u32 + 900, ctx.r9.u32);
	// stw r9,52(r5)
	REX_STORE_U32(ctx.r5.u32 + 52, ctx.r9.u32);
	// lwz r4,400(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r9,904(r11)
	REX_STORE_U32(ctx.r11.u32 + 904, ctx.r9.u32);
	// stw r9,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AB148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f1,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823AB440) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f4,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// lfs f13,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x823ab484
	if (ctx.cr6.eq) goto loc_823AB484;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x823ab494
	goto loc_823AB494;
loc_823AB484:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab594
	if (ctx.cr6.eq) goto loc_823AB594;
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_823AB494:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ab4e4
	if (!ctx.cr6.eq) goto loc_823AB4E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fsubs f13,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lfs f8,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f8.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// bctrl 
	ctx.lr = 0x823AB4D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AB4E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// bgt cr6,0x823ab500
	if (ctx.cr6.gt) goto loc_823AB500;
	// lfs f13,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x823ab510
	goto loc_823AB510;
loc_823AB500:
	// fsubs f13,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_823AB510:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823ab560
	if (!ctx.cr6.eq) goto loc_823AB560;
	// rlwinm r11,r10,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab560
	if (!ctx.cr6.eq) goto loc_823AB560;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lfs f8,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// bctrl 
	ctx.lr = 0x823AB550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AB560:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f8,f2
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64;
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB584;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AB594:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BC190) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,8392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8392);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// bl 0x826a16a0
	ctx.lr = 0x823BC1F0;
	sub_826A16A0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfd f1,8312(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x823BC200;
	sub_826A16A0(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fdivs f4,f31,f5
	ctx.f4.f64 = double(float(f31.f64 / ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// slw r30,r8,r7
	r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bl 0x823badc8
	ctx.lr = 0x823BC228;
	sub_823BADC8(ctx, base);
	// lis r4,-32129
	ctx.r4.s64 = -2105606144;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r3,32356
	ctx.r5.s64 = ctx.r3.s64 + 32356;
	// li r6,169
	ctx.r6.s64 = 169;
	// lwz r11,1012(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1012);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823BC24C;
	sub_82330E40(ctx, base);
	// stw r3,1084(r31)
	REX_STORE_U32(r31.u32 + 1084, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823bc260
	if (!ctx.cr6.eq) goto loc_823BC260;
	// li r3,4501
	ctx.r3.s64 = 4501;
	// b 0x823bc270
	goto loc_823BC270;
loc_823BC260:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,1212(r31)
	REX_STORE_U32(r31.u32 + 1212, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1216(r31)
	REX_STORE_U32(r31.u32 + 1216, ctx.r11.u32);
loc_823BC270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_823C3828) {
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
	ctx.lr = 0x823C3830;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r26,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r26.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823c3864
	if (ctx.cr6.eq) goto loc_823C3864;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// rlwinm r8,r11,1,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// addi r9,r10,-25680
	ctx.r9.s64 = ctx.r10.s64 + -25680;
	// b 0x823c3870
	goto loc_823C3870;
loc_823C3864:
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-23080
	ctx.r9.s64 = ctx.r10.s64 + -23080;
loc_823C3870:
	// lwzx r25,r8,r9
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r10,r25,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r10,76(r5)
	REX_STORE_U32(ctx.r5.u32 + 76, ctx.r10.u32);
	// bne cr6,0x823c38a0
	if (!ctx.cr6.eq) goto loc_823C38A0;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c38a0
	if (ctx.cr6.eq) goto loc_823C38A0;
	// li r24,2
	r24.s64 = 2;
loc_823C38A0:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 20) & 0x7;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,26664
	ctx.r9.s64 = ctx.r9.s64 + 26664;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r23,4
	r23.s64 = 4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r9
	r29.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_823C38C8:
	// clrlwi r28,r25,29
	r28.u64 = r25.u32 & 0x7;
	// rlwinm r25,r25,29,3,31
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823c3920
	if (ctx.cr6.eq) goto loc_823C3920;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c390c
	if (!ctx.cr6.gt) goto loc_823C390C;
loc_823C38E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C38F4;
	sub_823C16C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c38e8
	if (ctx.cr6.lt) goto loc_823C38E8;
loc_823C390C:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// b 0x823c3948
	goto loc_823C3948;
loc_823C3920:
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c3948
	if (ctx.cr6.eq) goto loc_823C3948;
loc_823C3930:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c3930
	if (ctx.cr6.lt) goto loc_823C3930;
loc_823C3948:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x823c38c8
	if (!ctx.cr0.eq) goto loc_823C38C8;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x823c397c
	if (!ctx.cr0.gt) goto loc_823C397C;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c397c
	if (ctx.cr6.eq) goto loc_823C397C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C3974:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c3974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C3974;
loc_823C397C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823CD590) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd5f4
	if (ctx.cr6.eq) goto loc_823CD5F4;
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd5ec
	if (ctx.cr6.eq) goto loc_823CD5EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD5D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cd5ec
	if (ctx.cr6.eq) goto loc_823CD5EC;
	// std r30,8(r31)
	REX_STORE_U64(r31.u32 + 8, r30.u64);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823e1128
	ctx.lr = 0x823CD5E4;
	sub_823E1128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823cd5f8
	goto loc_823CD5F8;
loc_823CD5EC:
	// li r3,-128
	ctx.r3.s64 = -128;
	// b 0x823cd5f8
	goto loc_823CD5F8;
loc_823CD5F4:
	// li r3,-129
	ctx.r3.s64 = -129;
loc_823CD5F8:
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

DEFINE_REX_FUNC(sub_823CE3C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823CE3D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x823ce484
	if (ctx.cr6.gt) goto loc_823CE484;
	// bge cr6,0x823ce3f8
	if (!ctx.cr6.lt) goto loc_823CE3F8;
	// li r3,-129
	ctx.r3.s64 = -129;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823CE3F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r31,472
	r30.s64 = r31.s64 + 472;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x823ce44c
	if (ctx.cr6.eq) goto loc_823CE44C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823CE420:
	// bl 0x823e21a8
	ctx.lr = 0x823CE424;
	sub_823E21A8(ctx, base);
	// cmpwi cr6,r3,-139
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -139, ctx.xer);
	// bne cr6,0x823ce438
	if (!ctx.cr6.eq) goto loc_823CE438;
loc_823CE42C:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823CE438:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ce454
	if (ctx.cr6.eq) goto loc_823CE454;
	// li r3,-137
	ctx.r3.s64 = -137;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823CE44C:
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// b 0x823ce420
	goto loc_823CE420;
loc_823CE454:
	// addi r5,r31,576
	ctx.r5.s64 = r31.s64 + 576;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e18c0
	ctx.lr = 0x823CE464;
	sub_823E18C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ce42c
	if (!ctx.cr6.eq) goto loc_823CE42C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
loc_823CE484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823D18A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d18bc
	if (ctx.cr6.eq) goto loc_823D18BC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D18BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D24F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d2508
	if (!ctx.cr6.eq) goto loc_823D2508;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823D2508:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d2528
	if (!ctx.cr6.eq) goto loc_823D2528;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823d252c
	if (ctx.cr6.eq) goto loc_823D252C;
loc_823D2528:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D252C:
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D50A8) {
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
	ctx.lr = 0x823D50B0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// bne cr6,0x823d50fc
	if (!ctx.cr6.eq) goto loc_823D50FC;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f0,40(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x823d519c
	if (ctx.cr6.eq) goto loc_823D519C;
loc_823D50FC:
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11208(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11208);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * ctx.f0.f64));
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 / f30.f64));
	// bl 0x8269ff50
	ctx.lr = 0x823D5124;
	sub_8269FF50(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,40(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-21956(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -21956);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8300(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,3704(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,5912(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 5912);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fnmsubs f5,f8,f13,f12
	ctx.f5.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fmadds f4,f7,f8,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmsubs f3,f6,f0,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fdivs f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f4.f64));
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_823D519C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823d52e0
	if (ctx.cr6.lt) goto loc_823D52E0;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r29,r28
	ctx.r8.u64 = r28.u64 - r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D51C8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fnmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f4,f10,f9,f11
	ctx.f4.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f11.f64)));
	// fmuls f3,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f2,f7,f10,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f3.f64)));
	// fmadds f1,f5,f13,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfsx f9,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f8,f4,f9
	ctx.f7.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f4.f64, -ctx.f9.f64)));
	// fnmsubs f6,f0,f12,f7
	ctx.f6.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f7.f64)));
	// lfs f4,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f2,f10,f0,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f1,f4,f5,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f8,f6,f9
	ctx.f7.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f6.f64, -ctx.f9.f64)));
	// fnmsubs f6,f0,f12,f7
	ctx.f6.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f7.f64)));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f2,f10,f0,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f1,f4,f5,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f6,f0
	ctx.f8.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f6.f64, -ctx.f0.f64)));
	// fnmsubs f7,f13,f12,f8
	ctx.f7.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f8.f64)));
	// lfs f5,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f3,f10,f13,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f2,f5,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bdnz 0x823d51c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D51C8;
loc_823D52E0:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d5348
	if (!ctx.cr6.lt) goto loc_823D5348;
	// subf r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D52FC:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f10,f9,f11
	ctx.f5.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f11.f64)));
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f3,f7,f10,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f2,f13,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bdnz 0x823d52fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D52FC;
loc_823D5348:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823d5484
	if (ctx.cr6.lt) goto loc_823D5484;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D536C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f11,f13,f0
	ctx.f9.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f0.f64)));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f3,f7,f6,f9
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f9.f64)));
	// fmadds f2,f5,f7,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// fmadds f1,f4,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f5,f7,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f4,f12,f3,f13
	ctx.f4.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f13.f64)));
	// fnmsubs f2,f0,f9,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f4.f64)));
	// lfs f8,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f10,f0,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// fmadds f1,f8,f2,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f4,f12,f2,f13
	ctx.f4.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f13.f64)));
	// fnmsubs f2,f0,f8,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f4.f64)));
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f10,f0,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmadds f1,f7,f2,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f8,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f7,f2,f6
	ctx.f5.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f2.f64, -ctx.f6.f64)));
	// fnmsubs f3,f0,f10,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f2,f9,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f1,f8,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfsu f1,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bdnz 0x823d536c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D536C;
loc_823D5484:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d54e8
	if (!ctx.cr6.lt) goto loc_823D54E8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D54A0:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f0,f12,f13
	ctx.f11.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f13.f64)));
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f10,f9,f11
	ctx.f5.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f11.f64)));
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f3,f7,f10,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f2,f0,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bdnz 0x823d54a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D54A0;
loc_823D54E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F01D8) {
	REX_FUNC_PROLOGUE();
	// b 0x82130e88
	sub_82130E88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F0250) {
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
	// bl 0x823f4df8
	ctx.lr = 0x823F0260;
	sub_823F4DF8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823f02a0
	if (ctx.cr6.lt) goto loc_823F02A0;
	// beq cr6,0x823f0294
	if (ctx.cr6.eq) goto loc_823F0294;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x823f0288
	if (ctx.cr6.eq) goto loc_823F0288;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x823f0288
	if (ctx.cr6.eq) goto loc_823F0288;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823f02a4
	goto loc_823F02A4;
loc_823F0288:
	// lis r3,-32290
	ctx.r3.s64 = -2116157440;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x823f02a4
	goto loc_823F02A4;
loc_823F0294:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823f02a4
	goto loc_823F02A4;
loc_823F02A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F02A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4BF0) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,20
	ppc_trap(ctx, base, 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5090) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f50b4
	if (ctx.cr6.eq) goto loc_823F50B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823f50c4
	goto loc_823F50C4;
loc_823F50B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_823F50C4:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f50d8
	if (!ctx.cr6.eq) goto loc_823F50D8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_823F50D8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F70A8) {
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
	ctx.lr = 0x823F70B0;
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
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bgt cr6,0x823f70d4
	if (ctx.cr6.gt) goto loc_823F70D4;
	// lwz r11,2444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2444);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x823f71c0
	goto loc_823F71C0;
loc_823F70D4:
	// add r27,r30,r29
	r27.u64 = r30.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r27,-6
	r28.s64 = r27.s64 + -6;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823F70EC;
	sub_826A1E70(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F70FC;
	sub_826A2E60(ctx, base);
	// lwz r11,2444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2444);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r29,r11,-10
	r29.s64 = ctx.r11.s64 + -10;
loc_823F7108:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x823f7120
	goto loc_823F7120;
loc_823F7110:
	// lwz r11,2444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2444(r31)
	REX_STORE_U32(r31.u32 + 2444, ctx.r11.u32);
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_823F7120:
	// cmplwi cr6,r11,232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 232, ctx.xer);
	// bne cr6,0x823f7110
	if (!ctx.cr6.eq) goto loc_823F7110;
	// lwz r9,2444(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2444);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bge cr6,0x823f71ac
	if (!ctx.cr6.lt) goto loc_823F71AC;
	// lbz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r7,r6,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f7198
	if (ctx.cr0.lt) goto loc_823F7198;
	// lwz r8,2156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2156);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823f7198
	if (!ctx.cr6.lt) goto loc_823F7198;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823f717c
	if (ctx.cr6.lt) goto loc_823F717C;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_823F717C:
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r8,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_823F7198:
	// lwz r11,2444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2444);
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,2444(r31)
	REX_STORE_U32(r31.u32 + 2444, ctx.r11.u32);
	// b 0x823f7108
	goto loc_823F7108;
loc_823F71AC:
	// addi r3,r27,-6
	ctx.r3.s64 = r27.s64 + -6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x826a1e70
	ctx.lr = 0x823F71BC;
	sub_826A1E70(ctx, base);
	// addi r11,r29,10
	ctx.r11.s64 = r29.s64 + 10;
loc_823F71C0:
	// stw r11,2444(r31)
	REX_STORE_U32(r31.u32 + 2444, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823FF0B8) {
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
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x823ff148
	if (!ctx.cr6.eq) goto loc_823FF148;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823FF0D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ff0d8
	if (!ctx.cr6.eq) goto loc_823FF0D8;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x823ff148
	if (!ctx.cr6.gt) goto loc_823FF148;
	// addi r31,r11,-3
	r31.s64 = ctx.r11.s64 + -3;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f180
	ctx.lr = 0x823FF11C;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ff140
	if (ctx.cr0.eq) goto loc_823FF140;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,17252
	ctx.r4.s64 = ctx.r11.s64 + 17252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f180
	ctx.lr = 0x823FF138;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ff148
	if (!ctx.cr0.eq) goto loc_823FF148;
loc_823FF140:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ff14c
	goto loc_823FF14C;
loc_823FF148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823FF14C:
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

DEFINE_REX_FUNC(sub_82400CD8) {
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
	// bl 0x82400c48
	ctx.lr = 0x82400CF8;
	sub_82400C48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82400d0c
	if (ctx.cr0.eq) goto loc_82400D0C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82400D0C;
	sub_823F0350(ctx, base);
loc_82400D0C:
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

DEFINE_REX_FUNC(sub_82404B58) {
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
	ctx.lr = 0x82404B60;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// bge cr6,0x82404c30
	if (!ctx.cr6.lt) goto loc_82404C30;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82404B7C:
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// bge cr6,0x82404c1c
	if (!ctx.cr6.lt) goto loc_82404C1C;
	// subf r10,r4,r28
	ctx.r10.u64 = r28.u64 - ctx.r4.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82404BA4:
	// lwzx r31,r29,r11
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwzx r25,r11,r7
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r6,r31,8
	ctx.r6.u64 = r31.u32 & 0xFFFFFF;
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r31,0,16,23
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// clrlwi r31,r25,8
	r31.u64 = r25.u32 & 0xFFFFFF;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r31,r31,0,24,15
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r9,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// clrlwi r31,r24,8
	r31.u64 = r24.u32 & 0xFFFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r6,r25,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFF00;
	// rlwinm r31,r31,0,24,15
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r24,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 131072;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r6,r9,0,14,21
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFC03FF);
	// rlwinm r9,r6,30,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFFFFF;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82404ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82404BA4;
loc_82404C1C:
	// add r4,r27,r4
	ctx.r4.u64 = r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// blt cr6,0x82404b7c
	if (ctx.cr6.lt) goto loc_82404B7C;
loc_82404C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8240B9E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x8240B9F0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x8240B9F8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// beq cr6,0x8240ba24
	if (ctx.cr6.eq) goto loc_8240BA24;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240BA20;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240BA24:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240ba40
	if (ctx.cr6.eq) goto loc_8240BA40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240BA3C;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240BA40:
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
	// bne 0x8240bab0
	if (!ctx.cr0.eq) goto loc_8240BAB0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240bab8
	goto loc_8240BAB8;
loc_8240BAB0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240BAB8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240bad0
	if (ctx.cr6.eq) goto loc_8240BAD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240BAD0;
	sub_82409A88(ctx, base);
loc_8240BAD0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240be64
	if (!ctx.cr6.gt) goto loc_8240BE64;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f4,10980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10980);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,15196(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15196);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfs f13,20208(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,17280(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,20256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,20252(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20252);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_8240BB44:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
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
	// lfsx f2,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f27,f8,f2
	f27.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f26,f7,f2
	f26.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f27
	ctx.f1.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f1,f26
	ctx.f1.s64 = std::isnan(f26.f64) ? int64_t(0x80000000U) : (f26.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f26.f64));
	// stfd f1,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8240bd7c
	if (ctx.cr6.eq) goto loc_8240BD7C;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f31,120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f2,f8,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, f30.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f2,f31
	ctx.f2.f64 = double(f31.s64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f1,f8,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfs f1,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f7,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f2,f7,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
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
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmul f9,f9,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f8,f9,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
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
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_8240BD7C:
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8240bd8c
	if (ctx.cr6.lt) goto loc_8240BD8C;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8240BD8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240bda4
	if (!ctx.cr6.gt) goto loc_8240BDA4;
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// blt cr6,0x8240bda8
	if (ctx.cr6.lt) goto loc_8240BDA8;
	// li r3,1023
	ctx.r3.s64 = 1023;
	// b 0x8240bda8
	goto loc_8240BDA8;
loc_8240BDA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240BDA8:
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8240bdb8
	if (ctx.cr6.lt) goto loc_8240BDB8;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8240BDB8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240bdd0
	if (!ctx.cr6.gt) goto loc_8240BDD0;
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// blt cr6,0x8240bdd4
	if (ctx.cr6.lt) goto loc_8240BDD4;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// b 0x8240bdd4
	goto loc_8240BDD4;
loc_8240BDD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240BDD4:
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8240bde4
	if (ctx.cr6.lt) goto loc_8240BDE4;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8240BDE4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240bdfc
	if (!ctx.cr6.gt) goto loc_8240BDFC;
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// blt cr6,0x8240be00
	if (ctx.cr6.lt) goto loc_8240BE00;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// b 0x8240be00
	goto loc_8240BE00;
loc_8240BDFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240BE00:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x8240be10
	if (ctx.cr6.lt) goto loc_8240BE10;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8240BE10:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240be28
	if (!ctx.cr6.gt) goto loc_8240BE28;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8240be2c
	if (ctx.cr6.lt) goto loc_8240BE2C;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x8240be2c
	goto loc_8240BE2C;
loc_8240BE28:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240BE2C:
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stwux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240bb44
	if (ctx.cr6.lt) goto loc_8240BB44;
loc_8240BE64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x8240BE70;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82437A80) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82437ab0
	if (!ctx.cr6.eq) goto loc_82437AB0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82437ab0
	if (!ctx.cr6.eq) goto loc_82437AB0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82437b3c
	goto loc_82437B3C;
loc_82437AB0:
	// not. r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,1
	r31.s64 = 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// beq 0x82437ad4
	if (ctx.cr0.eq) goto loc_82437AD4;
loc_82437AC4:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437ac4
	if (!ctx.cr6.eq) goto loc_82437AC4;
loc_82437AD4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82437afc
	if (ctx.cr6.eq) goto loc_82437AFC;
	// lwz r31,0(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82437aec
	if (!ctx.cr6.eq) goto loc_82437AEC;
	// li r31,1
	r31.s64 = 1;
loc_82437AEC:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82437af8
	if (!ctx.cr6.gt) goto loc_82437AF8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82437AF8:
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82437AFC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82437b38
	if (ctx.cr6.eq) goto loc_82437B38;
	// b 0x82437b30
	goto loc_82437B30;
loc_82437B08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82437b38
	if (ctx.cr6.eq) goto loc_82437B38;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82437668
	ctx.lr = 0x82437B1C;
	sub_82437668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82437b3c
	if (ctx.cr0.lt) goto loc_82437B3C;
	// lwz r7,36(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82437B30:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82437b08
	if (!ctx.cr6.eq) goto loc_82437B08;
loc_82437B38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82437B3C:
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

DEFINE_REX_FUNC(sub_8243B9F0) {
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
	ctx.lr = 0x8243B9F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8243BA18;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne 0x8243ba30
	if (!ctx.cr0.eq) goto loc_8243BA30;
loc_8243BA24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8243bc14
	goto loc_8243BC14;
loc_8243BA30:
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243ba4c
	if (ctx.cr0.eq) goto loc_8243BA4C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9b20
	ctx.lr = 0x8243BA48;
	sub_822C9B20(ctx, base);
	// b 0x8243ba54
	goto loc_8243BA54;
loc_8243BA4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8243BA54;
	sub_826A1E70(ctx, base);
loc_8243BA54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bge cr6,0x8243ba74
	if (!ctx.cr6.lt) goto loc_8243BA74;
loc_8243BA68:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8243bc14
	goto loc_8243BC14;
loc_8243BA74:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8243BA84;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// beq 0x8243ba24
	if (ctx.cr0.eq) goto loc_8243BA24;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8243BAA4;
	sub_826A2E60(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8243ba68
	if (ctx.cr6.gt) goto loc_8243BA68;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8243bb7c
	if (!ctx.cr6.gt) goto loc_8243BB7C;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,12
	r29.s64 = ctx.r11.s64 + 12;
loc_8243BAF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8243ba68
	if (ctx.cr6.gt) goto loc_8243BA68;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,-12
	ctx.r4.s64 = r29.s64 + -12;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243b1f8
	ctx.lr = 0x8243BB1C;
	sub_8243B1F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// beq 0x8243ba24
	if (ctx.cr0.eq) goto loc_8243BA24;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8243bb48
	if (ctx.cr0.eq) goto loc_8243BB48;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8243BB48:
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lhz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// blt cr6,0x8243baf0
	if (ctx.cr6.lt) goto loc_8243BAF0;
loc_8243BB7C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8243BB88;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// beq 0x8243ba24
	if (ctx.cr0.eq) goto loc_8243BA24;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8243bc10
	if (!ctx.cr6.gt) goto loc_8243BC10;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8243BBB0:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x824375c8
	ctx.lr = 0x8243BBC4;
	sub_824375C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lhz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8243bbe0
	if (ctx.cr0.eq) goto loc_8243BBE0;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8243BBE0:
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// lhz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// blt cr6,0x8243bbb0
	if (ctx.cr6.lt) goto loc_8243BBB0;
loc_8243BC10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243BC14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82446430) {
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
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,72(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,76(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824466d0
	if (!ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,36(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824464f8
	if (ctx.cr6.eq) goto loc_824464F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824464F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82446504
	goto loc_82446504;
loc_824464F8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82446504:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446530
	if (ctx.cr6.eq) goto loc_82446530;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244652C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244653c
	goto loc_8244653C;
loc_82446530:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244653C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446568
	if (ctx.cr6.eq) goto loc_82446568;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82446574
	goto loc_82446574;
loc_82446568:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82446574:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824465a0
	if (ctx.cr6.eq) goto loc_824465A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244659C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824465ac
	goto loc_824465AC;
loc_824465A0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824465AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824465d8
	if (ctx.cr6.eq) goto loc_824465D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824465D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824465e4
	goto loc_824465E4;
loc_824465D8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824465E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446610
	if (ctx.cr6.eq) goto loc_82446610;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244660C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244661c
	goto loc_8244661C;
loc_82446610:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244661C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446648
	if (ctx.cr6.eq) goto loc_82446648;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82446654
	goto loc_82446654;
loc_82446648:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82446654:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446680
	if (ctx.cr6.eq) goto loc_82446680;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244667C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244668c
	goto loc_8244668C;
loc_82446680:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244668C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824466d0
	if (ctx.cr6.eq) goto loc_824466D0;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824466b8
	if (ctx.cr6.eq) goto loc_824466B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824466B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824466c4
	goto loc_824466C4;
loc_824466B8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824466C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x824466d4
	if (!ctx.cr6.eq) goto loc_824466D4;
loc_824466D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824466D4:
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

DEFINE_REX_FUNC(sub_8245A418) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8245A420;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,15236
	ctx.r4.s64 = ctx.r11.s64 + 15236;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A440;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245a478
	if (ctx.cr0.lt) goto loc_8245A478;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245A450;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245a478
	if (ctx.cr0.lt) goto loc_8245A478;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,15216
	ctx.r4.s64 = ctx.r11.s64 + 15216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A470;
	sub_824555B8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8245A478:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8245E6A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r5,r11,25704
	ctx.r5.s64 = ctx.r11.s64 + 25704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,20600
	ctx.r4.s64 = ctx.r10.s64 + 20600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E6D8;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824748e0
	ctx.lr = 0x8245E6E0;
	sub_824748E0(ctx, base);
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

DEFINE_REX_FUNC(sub_8245EEF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r10,240(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82460B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82460B60;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82460ba8
	if (ctx.cr6.eq) goto loc_82460BA8;
loc_82460BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82460ce4
	goto loc_82460CE4;
loc_82460BA8:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
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
	// bne 0x82460ba0
	if (!ctx.cr0.eq) goto loc_82460BA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r11,23608
	ctx.r5.s64 = ctx.r11.s64 + 23608;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245f158
	ctx.lr = 0x82460C00;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82460ce4
	if (!ctx.cr0.eq) goto loc_82460CE4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82460C10;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82460c20
	if (ctx.cr0.eq) goto loc_82460C20;
	// bl 0x824773d0
	ctx.lr = 0x82460C1C;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82460C20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82460c34
	if (!ctx.cr6.eq) goto loc_82460C34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82460ce4
	goto loc_82460CE4;
loc_82460C34:
	// lis r4,28880
	ctx.r4.s64 = 1892679680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82460C50;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge 0x82460c70
	if (!ctx.cr0.lt) goto loc_82460C70;
loc_82460C5C:
	// bl 0x82130e88
	ctx.lr = 0x82460C60;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82460C68;
	sub_82477B20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82460ce4
	goto loc_82460CE4;
loc_82460C70:
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82460C78;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82460c88
	if (!ctx.cr0.lt) goto loc_82460C88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82460c5c
	goto loc_82460C5C;
loc_82460C88:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82460CA0;
	sub_826A1E70(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 260);
	// bl 0x82477e80
	ctx.lr = 0x82460CCC;
	sub_82477E80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82460CD8;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82460CE0;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82460CE4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8246CB48) {
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
	ctx.lr = 0x8246CB50;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8246cb98
	if (ctx.cr6.eq) goto loc_8246CB98;
loc_8246CB6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246cb98
	if (ctx.cr6.eq) goto loc_8246CB98;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8246cd04
	if (ctx.cr6.eq) goto loc_8246CD04;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8246cba0
	if (!ctx.cr6.eq) goto loc_8246CBA0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// b 0x8246cb6c
	goto loc_8246CB6C;
loc_8246CB98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8246ce58
	goto loc_8246CE58;
loc_8246CBA0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8246cbb4
	if (ctx.cr6.eq) goto loc_8246CBB4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8246ce58
	goto loc_8246CE58;
loc_8246CBB4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// blt cr6,0x8246cc10
	if (ctx.cr6.lt) goto loc_8246CC10;
	// beq cr6,0x8246cc08
	if (ctx.cr6.eq) goto loc_8246CC08;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8246cbf0
	if (ctx.cr6.lt) goto loc_8246CBF0;
	// bne cr6,0x8246cc14
	if (!ctx.cr6.eq) goto loc_8246CC14;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8246cc14
	goto loc_8246CC14;
loc_8246CBF0:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x8246cc14
	goto loc_8246CC14;
loc_8246CC08:
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// b 0x8246cc14
	goto loc_8246CC14;
loc_8246CC10:
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_8246CC14:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bgt cr6,0x8246cce8
	if (ctx.cr6.gt) goto loc_8246CCE8;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,26232
	ctx.r12.s64 = ctx.r12.s64 + 26232;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32185
	ctx.r12.s64 = -2109276160;
	// nop 
	// addi r12,r12,-13240
	ctx.r12.s64 = ctx.r12.s64 + -13240;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8246CC48;
	case 1:
		goto loc_8246CCE8;
	case 2:
		goto loc_8246CC50;
	case 3:
		goto loc_8246CC50;
	case 4:
		goto loc_8246CC50;
	case 5:
		goto loc_8246CC50;
	case 6:
		goto loc_8246CC50;
	case 7:
		goto loc_8246CC50;
	case 8:
		goto loc_8246CC50;
	case 9:
		goto loc_8246CC50;
	case 10:
		goto loc_8246CC58;
	case 11:
		goto loc_8246CC58;
	case 12:
		goto loc_8246CC58;
	case 13:
		goto loc_8246CC58;
	case 14:
		goto loc_8246CCE8;
	case 15:
		goto loc_8246CCE8;
	case 16:
		goto loc_8246CCE8;
	case 17:
		goto loc_8246CCE8;
	case 18:
		goto loc_8246CCE8;
	case 19:
		goto loc_8246CCE8;
	case 20:
		goto loc_8246CCE8;
	case 21:
		goto loc_8246CCE8;
	case 22:
		goto loc_8246CC50;
	case 23:
		goto loc_8246CC60;
	case 24:
		goto loc_8246CC68;
	case 25:
		goto loc_8246CC70;
	case 26:
		goto loc_8246CCE8;
	case 27:
		goto loc_8246CC78;
	case 28:
		goto loc_8246CCE8;
	case 29:
		goto loc_8246CC80;
	case 30:
		goto loc_8246CC88;
	case 31:
		goto loc_8246CCE8;
	case 32:
		goto loc_8246CCE8;
	case 33:
		goto loc_8246CC90;
	case 34:
		goto loc_8246CCBC;
	case 35:
		goto loc_8246CC98;
	case 36:
		goto loc_8246CCA8;
	case 37:
		goto loc_8246CCC4;
	case 38:
		goto loc_8246CCE8;
	case 39:
		goto loc_8246CCE8;
	case 40:
		goto loc_8246CCE8;
	case 41:
		goto loc_8246CCE8;
	case 42:
		goto loc_8246CCCC;
	case 43:
		goto loc_8246CCD4;
	case 44:
		goto loc_8246CCE8;
	case 45:
		goto loc_8246CCDC;
	case 46:
		goto loc_8246CCE4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8246CC48:
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// b 0x8246ccec
	goto loc_8246CCEC;
loc_8246CC50:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC58:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC60:
	// sth r8,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// b 0x8246ccec
	goto loc_8246CCEC;
loc_8246CC68:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC70:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC78:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC80:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC88:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CC90:
	// rlwinm. r11,r25,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246cca0
	if (ctx.cr0.eq) goto loc_8246CCA0;
loc_8246CC98:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCA0:
	// rlwinm. r11,r25,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246ccb0
	if (ctx.cr0.eq) goto loc_8246CCB0;
loc_8246CCA8:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCB0:
	// rlwinm r11,r25,10,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 10) & 0x2;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCBC:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCC4:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCCC:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCD4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCDC:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8246cce8
	goto loc_8246CCE8;
loc_8246CCE4:
	// li r11,18
	ctx.r11.s64 = 18;
loc_8246CCE8:
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_8246CCEC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// sth r5,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// b 0x8246ce34
	goto loc_8246CE34;
loc_8246CD04:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// bl 0x82468100
	ctx.lr = 0x8246CD30;
	sub_82468100(ctx, base);
	// lhz r10,90(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// sth r5,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
loc_8246CD40:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246cd40
	if (!ctx.cr6.eq) goto loc_8246CD40;
	// rlwinm r3,r10,3,13,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x8246CD68;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8246cd7c
	if (!ctx.cr0.eq) goto loc_8246CD7C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8246ce58
	goto loc_8246CE58;
loc_8246CD7C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8246CD80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82449708
	ctx.lr = 0x8246CDA8;
	sub_82449708(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8246ce1c
	if (ctx.cr0.lt) goto loc_8246CE1C;
	// addi r7,r30,4
	ctx.r7.s64 = r30.s64 + 4;
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246cb48
	ctx.lr = 0x8246CDC8;
	sub_8246CB48(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8246ce1c
	if (ctx.cr0.lt) goto loc_8246CE1C;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8246cd80
	if (!ctx.cr6.eq) goto loc_8246CD80;
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82449708
	ctx.lr = 0x8246CE00;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bge 0x8246ce30
	if (!ctx.cr0.lt) goto loc_8246CE30;
	// bl 0x823f0350
	ctx.lr = 0x8246CE14;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8246ce58
	goto loc_8246CE58;
loc_8246CE1C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246CE28;
	sub_823F0350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8246ce58
	goto loc_8246CE58;
loc_8246CE30:
	// bl 0x823f0350
	ctx.lr = 0x8246CE34;
	sub_823F0350(ctx, base);
loc_8246CE34:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82449708
	ctx.lr = 0x8246CE50;
	sub_82449708(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8246CE58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8247DAD0) {
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
	ctx.lr = 0x8247DAD8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// lwzx r19,r11,r10
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r7,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,48(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// rlwinm r15,r25,2,0,29
	r15.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r16,r10,r15
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	// stw r25,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, r25.u32);
	// lwzx r14,r11,r10
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247eed0
	if (!ctx.cr0.eq) goto loc_8247EED0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lis r29,8192
	r29.s64 = 536870912;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lis r26,8208
	r26.s64 = 537919488;
	// lwz r9,0(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm. r8,r11,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lis r22,8256
	r22.s64 = 541065216;
	// lis r7,8304
	ctx.r7.s64 = 544210944;
	// lis r6,8320
	ctx.r6.s64 = 545259520;
	// lis r31,8336
	r31.s64 = 546308096;
	// clrlwi r30,r10,27
	r30.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r23,r9,27
	r23.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r28,r11,0,25,25
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// bne 0x8247dbf4
	if (!ctx.cr0.eq) goto loc_8247DBF4;
	// rlwinm r8,r3,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247dbc0
	if (ctx.cr6.eq) goto loc_8247DBC0;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247dbc0
	if (ctx.cr6.eq) goto loc_8247DBC0;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// beq cr6,0x8247dbc0
	if (ctx.cr6.eq) goto loc_8247DBC0;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8247dbc0
	if (ctx.cr6.eq) goto loc_8247DBC0;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247dbc0
	if (ctx.cr6.eq) goto loc_8247DBC0;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// bne cr6,0x8247dbf4
	if (!ctx.cr6.eq) goto loc_8247DBF4;
loc_8247DBC0:
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247dbd4
	if (ctx.cr0.eq) goto loc_8247DBD4;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x8247dbf0
	goto loc_8247DBF0;
loc_8247DBD4:
	// rlwinm. r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247dbe4
	if (ctx.cr0.eq) goto loc_8247DBE4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x8247dbf0
	goto loc_8247DBF0;
loc_8247DBE4:
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247dbf4
	if (ctx.cr0.eq) goto loc_8247DBF4;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_8247DBF0:
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8247DBF4:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lis r27,8288
	r27.s64 = 543162368;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247dc68
	if (ctx.cr0.eq) goto loc_8247DC68;
	// rlwinm r11,r3,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x8247dc44
	if (ctx.cr6.gt) goto loc_8247DC44;
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// b 0x8247dc68
	goto loc_8247DC68;
loc_8247DC44:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247dc5c
	if (ctx.cr6.eq) goto loc_8247DC5C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8247dc68
	if (!ctx.cr6.eq) goto loc_8247DC68;
loc_8247DC5C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8247DC68:
	// rlwinm r21,r3,0,0,11
	r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFF00000;
	// lis r20,8224
	r20.s64 = 538968064;
	// lis r18,8240
	r18.s64 = 540016640;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r24,4112
	r24.s64 = 269484032;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8247dce8
	if (ctx.cr6.gt) goto loc_8247DCE8;
	// beq cr6,0x8247dcdc
	if (ctx.cr6.eq) goto loc_8247DCDC;
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247dcd0
	if (ctx.cr6.eq) goto loc_8247DCD0;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247dcb4
	if (ctx.cr6.eq) goto loc_8247DCB4;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247dca8
	if (ctx.cr6.eq) goto loc_8247DCA8;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// bne cr6,0x8247debc
	if (!ctx.cr6.eq) goto loc_8247DEBC;
loc_8247DCA8:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// b 0x8247deb8
	goto loc_8247DEB8;
loc_8247DCB4:
	// ori r11,r30,4
	ctx.r11.u64 = r30.u64 | 4;
	// rlwinm r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
loc_8247DCBC:
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & r23.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_8247DCC4:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8247deb8
	goto loc_8247DEB8;
loc_8247DCD0:
	// ori r11,r30,8
	ctx.r11.u64 = r30.u64 | 8;
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// b 0x8247dcbc
	goto loc_8247DCBC;
loc_8247DCDC:
	// and r11,r23,r30
	ctx.r11.u64 = r23.u64 & r30.u64;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// b 0x8247dcc4
	goto loc_8247DCC4;
loc_8247DCE8:
	// cmplw cr6,r21,r5
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247dd18
	if (ctx.cr6.eq) goto loc_8247DD18;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8247dd08
	if (ctx.cr6.eq) goto loc_8247DD08;
	// cmplw cr6,r21,r6
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247dd08
	if (ctx.cr6.eq) goto loc_8247DD08;
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(r21.u32, r31.u32, ctx.xer);
	// bne cr6,0x8247debc
	if (!ctx.cr6.eq) goto loc_8247DEBC;
loc_8247DD08:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// and r10,r23,r30
	ctx.r10.u64 = r23.u64 & r30.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8247deb8
	goto loc_8247DEB8;
loc_8247DD18:
	// and r11,r23,r30
	ctx.r11.u64 = r23.u64 & r30.u64;
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// beq 0x8247dd3c
	if (ctx.cr0.eq) goto loc_8247DD3C;
	// rlwinm. r9,r23,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247dd4c
	if (!ctx.cr0.eq) goto loc_8247DD4C;
loc_8247DD3C:
	// rlwinm. r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247dd54
	if (ctx.cr0.eq) goto loc_8247DD54;
	// rlwinm. r9,r23,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247dd54
	if (ctx.cr0.eq) goto loc_8247DD54;
loc_8247DD4C:
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8247DD54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247dd64
	if (ctx.cr6.eq) goto loc_8247DD64;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247dd74
	if (!ctx.cr0.eq) goto loc_8247DD74;
loc_8247DD64:
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247dd80
	if (ctx.cr0.eq) goto loc_8247DD80;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247dd80
	if (ctx.cr0.eq) goto loc_8247DD80;
loc_8247DD74:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8247DD80:
	// cmplw cr6,r16,r14
	ctx.cr6.compare<uint32_t>(r16.u32, r14.u32, ctx.xer);
	// bne cr6,0x8247dd94
	if (!ctx.cr6.eq) goto loc_8247DD94;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8247deb8
	goto loc_8247DEB8;
loc_8247DD94:
	// lwz r10,4(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 4);
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247de24
	if (ctx.cr0.eq) goto loc_8247DE24;
	// lwz r10,72(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 72);
	// lwz r9,24(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247de24
	if (!ctx.cr6.eq) goto loc_8247DE24;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247de04
	if (ctx.cr6.eq) goto loc_8247DE04;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247DDE8:
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// beq cr6,0x8247de04
	if (ctx.cr6.eq) goto loc_8247DE04;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247dde8
	if (ctx.cr6.lt) goto loc_8247DDE8;
loc_8247DE04:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247debc
	if (!ctx.cr6.lt) goto loc_8247DEBC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// b 0x8247deac
	goto loc_8247DEAC;
loc_8247DE24:
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247debc
	if (ctx.cr0.eq) goto loc_8247DEBC;
	// lwz r11,72(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247debc
	if (!ctx.cr6.eq) goto loc_8247DEBC;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247de94
	if (ctx.cr6.eq) goto loc_8247DE94;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247DE74:
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8247de94
	if (ctx.cr6.eq) goto loc_8247DE94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247de74
	if (ctx.cr6.lt) goto loc_8247DE74;
loc_8247DE94:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247debc
	if (!ctx.cr6.lt) goto loc_8247DEBC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
loc_8247DEAC:
	// bne cr6,0x8247debc
	if (!ctx.cr6.eq) goto loc_8247DEBC;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_8247DEB8:
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8247DEBC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247df4c
	if (!ctx.cr6.eq) goto loc_8247DF4C;
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247df2c
	if (ctx.cr0.eq) goto loc_8247DF2C;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247df2c
	if (ctx.cr0.eq) goto loc_8247DF2C;
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247df20
	if (ctx.cr6.eq) goto loc_8247DF20;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247df18
	if (ctx.cr6.eq) goto loc_8247DF18;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247e3ec
	if (ctx.cr6.eq) goto loc_8247E3EC;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// bne cr6,0x8247df2c
	if (!ctx.cr6.eq) goto loc_8247DF2C;
loc_8247DEF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8247DEFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8247DF10;
	sub_82478758(ctx, base);
	// stw r3,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r3.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247DF18:
	// stw r25,48(r19)
	REX_STORE_U32(r19.u32 + 48, r25.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247DF20:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_8247DF24:
	// stw r11,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r11.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247DF2C:
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247df4c
	if (ctx.cr0.eq) goto loc_8247DF4C;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247df4c
	if (ctx.cr0.eq) goto loc_8247DF4C;
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247df18
	if (ctx.cr6.eq) goto loc_8247DF18;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247df20
	if (ctx.cr6.eq) goto loc_8247DF20;
loc_8247DF4C:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// lwz r25,16(r17)
	r25.u64 = REX_LOAD_U32(r17.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r6,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e024
	if (ctx.cr0.eq) goto loc_8247E024;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247e024
	if (!ctx.cr6.eq) goto loc_8247E024;
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e024
	if (ctx.cr0.eq) goto loc_8247E024;
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247e024
	if (!ctx.cr6.eq) goto loc_8247E024;
	// lfd f1,32(r16)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r16.u32 + 32);
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// lfd f2,32(r14)
	ctx.f2.u64 = REX_LOAD_U64(r14.u32 + 32);
	// beq cr6,0x8247e014
	if (ctx.cr6.eq) goto loc_8247E014;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247e008
	if (ctx.cr6.eq) goto loc_8247E008;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247dffc
	if (ctx.cr6.eq) goto loc_8247DFFC;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// beq cr6,0x8247dff0
	if (ctx.cr6.eq) goto loc_8247DFF0;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// beq cr6,0x8247dfe8
	if (ctx.cr6.eq) goto loc_8247DFE8;
	// cmplw cr6,r21,r5
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247dfe0
	if (ctx.cr6.eq) goto loc_8247DFE0;
	// cmplw cr6,r21,r27
	ctx.cr6.compare<uint32_t>(r21.u32, r27.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// bl 0x8269d528
	ctx.lr = 0x8247DFDC;
	sub_8269D528(ctx, base);
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247DFE0:
	// fmul f1,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64 * ctx.f1.f64;
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247DFE8:
	// fadd f1,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64 + ctx.f1.f64;
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247DFF0:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x8247e3ec
	if (ctx.cr6.lt) goto loc_8247E3EC;
	// b 0x8247def4
	goto loc_8247DEF4;
loc_8247DFFC:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8247e3ec
	if (!ctx.cr6.lt) goto loc_8247E3EC;
	// b 0x8247def4
	goto loc_8247DEF4;
loc_8247E008:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8247defc
	if (!ctx.cr6.lt) goto loc_8247DEFC;
	// b 0x8247e01c
	goto loc_8247E01C;
loc_8247E014:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x8247defc
	if (ctx.cr6.lt) goto loc_8247DEFC;
loc_8247E01C:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247E024:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247e398
	if (!ctx.cr6.eq) goto loc_8247E398;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247e040
	if (ctx.cr6.eq) goto loc_8247E040;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247e064
	if (ctx.cr6.eq) goto loc_8247E064;
loc_8247E040:
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e398
	if (ctx.cr0.eq) goto loc_8247E398;
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247e398
	if (!ctx.cr6.eq) goto loc_8247E398;
loc_8247E064:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247e08c
	if (ctx.cr6.eq) goto loc_8247E08C;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247e08c
	if (!ctx.cr6.eq) goto loc_8247E08C;
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lfd f0,32(r16)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r16.u32 + 32);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// b 0x8247e09c
	goto loc_8247E09C;
loc_8247E08C:
	// lfd f0,32(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r14.u32 + 32);
	// lwz r6,316(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8247E09C:
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247e360
	if (ctx.cr6.eq) goto loc_8247E360;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247e330
	if (ctx.cr6.eq) goto loc_8247E330;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247e290
	if (ctx.cr6.eq) goto loc_8247E290;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// beq cr6,0x8247e200
	if (ctx.cr6.eq) goto loc_8247E200;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// beq cr6,0x8247e1e4
	if (ctx.cr6.eq) goto loc_8247E1E4;
	// cmplw cr6,r21,r5
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247e0f4
	if (ctx.cr6.eq) goto loc_8247E0F4;
	// cmplw cr6,r21,r27
	ctx.cr6.compare<uint32_t>(r21.u32, r27.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// b 0x8247e2cc
	goto loc_8247E2CC;
loc_8247E0F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8247e2cc
	if (ctx.cr6.eq) goto loc_8247E2CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247e11c
	if (!ctx.cr6.eq) goto loc_8247E11C;
loc_8247E114:
	// stw r6,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r6.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247E11C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,32424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// lwz r5,20(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247e1a4
	if (ctx.cr6.eq) goto loc_8247E1A4;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8247E188:
	// lwzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247e1a4
	if (ctx.cr6.eq) goto loc_8247E1A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247e188
	if (ctx.cr6.lt) goto loc_8247E188;
loc_8247E1A4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247eed0
	if (!ctx.cr6.lt) goto loc_8247EED0;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8247df24
	goto loc_8247DF24;
loc_8247E1E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f13,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247eed4
	if (!ctx.cr6.eq) goto loc_8247EED4;
	// stw r6,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r6.u32);
	// b 0x8247eed4
	goto loc_8247EED4;
loc_8247E200:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bne cr6,0x8247e244
	if (!ctx.cr6.eq) goto loc_8247E244;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8247e220
	if (!ctx.cr6.lt) goto loc_8247E220;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2cc
	if (!ctx.cr0.eq) goto loc_8247E2CC;
loc_8247E220:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247e230
	if (ctx.cr6.lt) goto loc_8247E230;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2b0
	if (!ctx.cr0.eq) goto loc_8247E2B0;
loc_8247E230:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247eed0
	if (ctx.cr6.lt) goto loc_8247EED0;
	// b 0x8247e324
	goto loc_8247E324;
loc_8247E244:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8247e254
	if (ctx.cr6.gt) goto loc_8247E254;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2b0
	if (!ctx.cr0.eq) goto loc_8247E2B0;
loc_8247E254:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8247e264
	if (!ctx.cr6.gt) goto loc_8247E264;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2cc
	if (!ctx.cr0.eq) goto loc_8247E2CC;
loc_8247E264:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8247e27c
	if (!ctx.cr6.gt) goto loc_8247E27C;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2cc
	if (!ctx.cr0.eq) goto loc_8247E2CC;
loc_8247E27C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
loc_8247E280:
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8247E288:
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// b 0x8247e114
	goto loc_8247E114;
loc_8247E290:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bne cr6,0x8247e2f4
	if (!ctx.cr6.eq) goto loc_8247E2F4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8247e2bc
	if (!ctx.cr6.lt) goto loc_8247E2BC;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e2bc
	if (ctx.cr0.eq) goto loc_8247E2BC;
loc_8247E2B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// b 0x8247e390
	goto loc_8247E390;
loc_8247E2BC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247e2d4
	if (ctx.cr6.lt) goto loc_8247E2D4;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e2d4
	if (ctx.cr0.eq) goto loc_8247E2D4;
loc_8247E2CC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8247e390
	goto loc_8247E390;
loc_8247E2D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8247e2ec
	if (ctx.cr6.lt) goto loc_8247E2EC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2cc
	if (!ctx.cr0.eq) goto loc_8247E2CC;
loc_8247E2EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x8247e280
	goto loc_8247E280;
loc_8247E2F4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8247e304
	if (ctx.cr6.gt) goto loc_8247E304;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2cc
	if (!ctx.cr0.eq) goto loc_8247E2CC;
loc_8247E304:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8247e314
	if (!ctx.cr6.gt) goto loc_8247E314;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e2b0
	if (!ctx.cr0.eq) goto loc_8247E2B0;
loc_8247E314:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8247eed0
	if (!ctx.cr6.gt) goto loc_8247EED0;
loc_8247E324:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// b 0x8247e2cc
	goto loc_8247E2CC;
loc_8247E330:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247e348
	if (ctx.cr6.lt) goto loc_8247E348;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e390
	if (!ctx.cr0.eq) goto loc_8247E390;
loc_8247E348:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8247eed0
	if (ctx.cr6.gt) goto loc_8247EED0;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8247e288
	goto loc_8247E288;
loc_8247E360:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,3728(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247e378
	if (ctx.cr6.lt) goto loc_8247E378;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e114
	if (!ctx.cr0.eq) goto loc_8247E114;
loc_8247E378:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8247eed0
	if (ctx.cr6.gt) goto loc_8247EED0;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
loc_8247E390:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247E398:
	// cmplw cr6,r16,r14
	ctx.cr6.compare<uint32_t>(r16.u32, r14.u32, ctx.xer);
	// bne cr6,0x8247e3f8
	if (!ctx.cr6.eq) goto loc_8247E3F8;
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247e3d0
	if (ctx.cr6.eq) goto loc_8247E3D0;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(r21.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247e3d0
	if (ctx.cr6.eq) goto loc_8247E3D0;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247e3e4
	if (ctx.cr6.eq) goto loc_8247E3E4;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// beq cr6,0x8247e3d8
	if (ctx.cr6.eq) goto loc_8247E3D8;
	// cmplw cr6,r21,r5
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247e3f8
	if (!ctx.cr6.eq) goto loc_8247E3F8;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e3f8
	if (ctx.cr0.eq) goto loc_8247E3F8;
loc_8247E3D0:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// b 0x8247df24
	goto loc_8247DF24;
loc_8247E3D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// b 0x8247def4
	goto loc_8247DEF4;
loc_8247E3E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
loc_8247E3EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247E3F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// bne cr6,0x8247e750
	if (!ctx.cr6.eq) goto loc_8247E750;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e498
	if (ctx.cr0.eq) goto loc_8247E498;
	// lwz r11,72(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e498
	if (!ctx.cr6.eq) goto loc_8247E498;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247e478
	if (ctx.cr6.eq) goto loc_8247E478;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247E458:
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r31,324(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8247e478
	if (ctx.cr6.eq) goto loc_8247E478;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247e458
	if (ctx.cr6.lt) goto loc_8247E458;
loc_8247E478:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247e498
	if (!ctx.cr6.lt) goto loc_8247E498;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247e3ec
	if (ctx.cr6.eq) goto loc_8247E3EC;
loc_8247E498:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e518
	if (ctx.cr0.eq) goto loc_8247E518;
	// lwz r11,72(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e518
	if (!ctx.cr6.eq) goto loc_8247E518;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247e4f8
	if (ctx.cr6.eq) goto loc_8247E4F8;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247E4D8:
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8247e4f8
	if (ctx.cr6.eq) goto loc_8247E4F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247e4d8
	if (ctx.cr6.lt) goto loc_8247E4D8;
loc_8247E4F8:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247e518
	if (!ctx.cr6.lt) goto loc_8247E518;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247e3ec
	if (ctx.cr6.eq) goto loc_8247E3EC;
loc_8247E518:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
loc_8247E51C:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// beq 0x8247e538
	if (ctx.cr0.eq) goto loc_8247E538;
	// lwz r29,316(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// b 0x8247e540
	goto loc_8247E540;
loc_8247E538:
	// lwz r29,324(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_8247E540:
	// rlwinm. r28,r26,0,30,30
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8247e5dc
	if (ctx.cr0.eq) goto loc_8247E5DC;
	// lwz r6,20(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e744
	if (ctx.cr0.eq) goto loc_8247E744;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e744
	if (!ctx.cr6.eq) goto loc_8247E744;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247e5dc
	if (ctx.cr6.eq) goto loc_8247E5DC;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8247E5A4:
	// lwzx r31,r10,r8
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// beq cr6,0x8247e5c4
	if (ctx.cr6.eq) goto loc_8247E5C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247e5a4
	if (ctx.cr6.lt) goto loc_8247E5A4;
	// b 0x8247e5dc
	goto loc_8247E5DC;
loc_8247E5C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r29,48(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_8247E5DC:
	// lwz r31,20(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e744
	if (ctx.cr0.eq) goto loc_8247E744;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,24(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8247e744
	if (!ctx.cr6.eq) goto loc_8247E744;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247e6a8
	if (ctx.cr6.eq) goto loc_8247E6A8;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8247E638:
	// lwzx r19,r9,r7
	r19.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r19.u32, ctx.xer);
	// beq cr6,0x8247e658
	if (ctx.cr6.eq) goto loc_8247E658;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247e638
	if (ctx.cr6.lt) goto loc_8247E638;
	// b 0x8247e6a4
	goto loc_8247E6A4;
loc_8247E658:
	// clrlwi. r9,r26,31
	ctx.r9.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x8247e67c
	if (ctx.cr0.eq) goto loc_8247E67C;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x8247e688
	goto loc_8247E688;
loc_8247E67C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8247E688:
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r30,48(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r27,48(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_8247E6A4:
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8247E6A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8247e73c
	if (!ctx.cr6.eq) goto loc_8247E73C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e744
	if (ctx.cr0.eq) goto loc_8247E744;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e744
	if (!ctx.cr6.eq) goto loc_8247E744;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247e73c
	if (ctx.cr6.eq) goto loc_8247E73C;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8247E704:
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247e724
	if (ctx.cr6.eq) goto loc_8247E724;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247e704
	if (ctx.cr6.lt) goto loc_8247E704;
	// b 0x8247e73c
	goto loc_8247E73C;
loc_8247E724:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r30,48(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_8247E73C:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8247e7d8
	if (ctx.cr6.eq) goto loc_8247E7D8;
loc_8247E744:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(r26.u32, 8, ctx.xer);
	// blt cr6,0x8247e51c
	if (ctx.cr6.lt) goto loc_8247E51C;
loc_8247E750:
	// lis r28,4144
	r28.s64 = 271581184;
	// cmplw cr6,r21,r5
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247e8cc
	if (!ctx.cr6.eq) goto loc_8247E8CC;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r31,20(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 20);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
loc_8247E784:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e874
	if (ctx.cr0.eq) goto loc_8247E874;
	// lwz r29,24(r17)
	r29.u64 = REX_LOAD_U32(r17.u32 + 24);
loc_8247E7B4:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e7e0
	if (!ctx.cr6.eq) goto loc_8247E7E0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x8247e7ec
	goto loc_8247E7EC;
loc_8247E7D8:
	// stw r27,48(r19)
	REX_STORE_U32(r19.u32 + 48, r27.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247E7E0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8247e874
	if (!ctx.cr6.eq) goto loc_8247E874;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8247E7EC:
	// lwzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// beq cr6,0x8247e84c
	if (ctx.cr6.eq) goto loc_8247E84C;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247E814:
	// lwzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8247e834
	if (ctx.cr6.eq) goto loc_8247E834;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8247e814
	if (ctx.cr6.lt) goto loc_8247E814;
	// b 0x8247e84c
	goto loc_8247E84C;
loc_8247E834:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_8247E84C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8247e8c0
	if (!ctx.cr6.lt) goto loc_8247E8C0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247e7b4
	if (!ctx.cr0.eq) goto loc_8247E7B4;
loc_8247E874:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x8247e784
	if (ctx.cr6.lt) goto loc_8247E784;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247e8cc
	if (!ctx.cr6.eq) goto loc_8247E8CC;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8247e8cc
	if (ctx.cr6.eq) goto loc_8247E8CC;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8247def4
	if (ctx.cr6.eq) goto loc_8247DEF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,4296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4296);
	// b 0x8247defc
	goto loc_8247DEFC;
loc_8247E8C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8247eed4
	goto loc_8247EED4;
loc_8247E8CC:
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// bne cr6,0x8247e96c
	if (!ctx.cr6.eq) goto loc_8247E96C;
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwzx r11,r15,r11
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e96c
	if (ctx.cr0.eq) goto loc_8247E96C;
	// clrlwi. r10,r23,31
	ctx.r10.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e96c
	if (ctx.cr0.eq) goto loc_8247E96C;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247e96c
	if (!ctx.cr6.eq) goto loc_8247E96C;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8247E934:
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247e934
	if (ctx.cr6.lt) goto loc_8247E934;
loc_8247E954:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247df24
	if (ctx.cr6.eq) goto loc_8247DF24;
loc_8247E96C:
	// lwz r19,20(r17)
	r19.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwzx r11,r15,r19
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + r19.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r9,r10,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247eed0
	if (ctx.cr0.eq) goto loc_8247EED0;
	// lis r29,8272
	r29.s64 = 542113792;
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// beq cr6,0x8247e9c8
	if (ctx.cr6.eq) goto loc_8247E9C8;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8247e9c8
	if (ctx.cr6.eq) goto loc_8247E9C8;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// bne cr6,0x8247eb3c
	if (!ctx.cr6.eq) goto loc_8247EB3C;
loc_8247E9C8:
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r8,24(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwzx r7,r15,r9
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,72(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247eb3c
	if (!ctx.cr6.eq) goto loc_8247EB3C;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8247eb3c
	if (!ctx.cr6.eq) goto loc_8247EB3C;
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247ea4c
	if (ctx.cr6.eq) goto loc_8247EA4C;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247EA2C:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8247ea4c
	if (ctx.cr6.eq) goto loc_8247EA4C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8247ea2c
	if (ctx.cr6.lt) goto loc_8247EA2C;
loc_8247EA4C:
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247ea84
	if (ctx.cr6.eq) goto loc_8247EA84;
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247EA64:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8247ea84
	if (ctx.cr6.eq) goto loc_8247EA84;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8247ea64
	if (ctx.cr6.lt) goto loc_8247EA64;
loc_8247EA84:
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247eabc
	if (ctx.cr6.eq) goto loc_8247EABC;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247EA9C:
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r30,324(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247eabc
	if (ctx.cr6.eq) goto loc_8247EABC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247ea9c
	if (ctx.cr6.lt) goto loc_8247EA9C;
loc_8247EABC:
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// bne cr6,0x8247eae0
	if (!ctx.cr6.eq) goto loc_8247EAE0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x8247eaf8
	goto loc_8247EAF8;
loc_8247EAE0:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_8247EAF8:
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247EB3C:
	// lwz r31,316(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// lwz r30,324(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8247ec88
	if (!ctx.cr6.eq) goto loc_8247EC88;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lis r3,4208
	ctx.r3.s64 = 275775488;
	// lwz r5,24(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r11,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// beq cr6,0x8247eb80
	if (ctx.cr6.eq) goto loc_8247EB80;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8247ec88
	if (!ctx.cr6.eq) goto loc_8247EC88;
loc_8247EB80:
	// lwz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247ebb4
	if (ctx.cr6.eq) goto loc_8247EBB4;
	// lwz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247EB98:
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// beq cr6,0x8247ebb4
	if (ctx.cr6.eq) goto loc_8247EBB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247eb98
	if (ctx.cr6.lt) goto loc_8247EB98;
loc_8247EBB4:
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247ec88
	if (ctx.cr0.eq) goto loc_8247EC88;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247ec88
	if (!ctx.cr6.eq) goto loc_8247EC88;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// beq cr6,0x8247ec10
	if (ctx.cr6.eq) goto loc_8247EC10;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8247ec88
	if (!ctx.cr6.eq) goto loc_8247EC88;
loc_8247EC10:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247ec88
	if (ctx.cr6.eq) goto loc_8247EC88;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8247ec60
	if (!ctx.cr6.gt) goto loc_8247EC60;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247EC30:
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r5,r6,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stwx r5,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8247ec60
	if (!ctx.cr6.eq) goto loc_8247EC60;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8247ec30
	if (ctx.cr6.lt) goto loc_8247EC30;
loc_8247EC60:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247EC88:
	// cmplw cr6,r21,r29
	ctx.cr6.compare<uint32_t>(r21.u32, r29.u32, ctx.xer);
	// bne cr6,0x8247eed0
	if (!ctx.cr6.eq) goto loc_8247EED0;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi. r20,r11,31
	r20.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8247ecc0
	if (ctx.cr0.eq) goto loc_8247ECC0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247ECAC;
	sub_824798A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247ecc0
	if (ctx.cr0.eq) goto loc_8247ECC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r30.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247ECC0:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// clrlwi. r21,r11,31
	r21.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8247ecf0
	if (ctx.cr0.eq) goto loc_8247ECF0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247ECDC;
	sub_824798A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247ecf0
	if (ctx.cr0.eq) goto loc_8247ECF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r31.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247ECF0:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// li r22,1
	r22.s64 = 1;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eed0
	if (ctx.cr6.eq) goto loc_8247EED0;
	// lwz r27,24(r17)
	r27.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwz r23,20(r17)
	r23.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r16,316(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r18,324(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_8247ED24:
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
	// lwzx r10,r28,r19
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r19.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247ed6c
	if (ctx.cr6.eq) goto loc_8247ED6C;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247ED50:
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247ed6c
	if (ctx.cr6.eq) goto loc_8247ED6C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8247ed50
	if (ctx.cr6.lt) goto loc_8247ED50;
loc_8247ED6C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8247edc4
	if (ctx.cr6.eq) goto loc_8247EDC4;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247ED90;
	sub_824798A8(ctx, base);
	// and. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247ed9c
	if (ctx.cr0.eq) goto loc_8247ED9C;
	// li r25,1
	r25.s64 = 1;
loc_8247ED9C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8247edc4
	if (!ctx.cr6.eq) goto loc_8247EDC4;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247EDB4;
	sub_824798A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247edc4
	if (ctx.cr0.eq) goto loc_8247EDC4;
	// li r25,1
	r25.s64 = 1;
	// li r24,0
	r24.s64 = 0;
loc_8247EDC4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8247ee1c
	if (ctx.cr6.eq) goto loc_8247EE1C;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247EDE8;
	sub_824798A8(ctx, base);
	// and. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247edf4
	if (ctx.cr0.eq) goto loc_8247EDF4;
	// li r26,1
	r26.s64 = 1;
loc_8247EDF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8247ee1c
	if (!ctx.cr6.eq) goto loc_8247EE1C;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824798a8
	ctx.lr = 0x8247EE0C;
	sub_824798A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247ee1c
	if (ctx.cr0.eq) goto loc_8247EE1C;
	// li r26,1
	r26.s64 = 1;
	// li r22,0
	r22.s64 = 0;
loc_8247EE1C:
	// lwzx r10,r23,r28
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + r28.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247ed24
	if (!ctx.cr6.eq) goto loc_8247ED24;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8247ee80
	if (ctx.cr6.eq) goto loc_8247EE80;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8247ee78
	if (ctx.cr6.eq) goto loc_8247EE78;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8247ee90
	if (ctx.cr6.eq) goto loc_8247EE90;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8247ee78
	if (ctx.cr6.eq) goto loc_8247EE78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8247EE58:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82478758
	ctx.lr = 0x8247EE6C;
	sub_82478758(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247EE78:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8247ee90
	if (ctx.cr6.eq) goto loc_8247EE90;
loc_8247EE80:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8247ee9c
	if (ctx.cr6.eq) goto loc_8247EE9C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8247ee9c
	if (!ctx.cr6.eq) goto loc_8247EE9C;
loc_8247EE90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// b 0x8247ee58
	goto loc_8247EE58;
loc_8247EE9C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8247eeb8
	if (ctx.cr6.eq) goto loc_8247EEB8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8247eeb8
	if (ctx.cr6.eq) goto loc_8247EEB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r18,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r18.u32);
	// b 0x8247eed0
	goto loc_8247EED0;
loc_8247EEB8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8247eed0
	if (ctx.cr6.eq) goto loc_8247EED0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8247eed0
	if (ctx.cr6.eq) goto loc_8247EED0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r16,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r16.u32);
loc_8247EED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247EED4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825336B8) {
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
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bgt cr6,0x82533750
	if (ctx.cr6.gt) goto loc_82533750;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533750
	if (ctx.cr0.eq) goto loc_82533750;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82533750
	if (!ctx.cr0.eq) goto loc_82533750;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r3,656(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82533728
	if (!ctx.cr0.eq) goto loc_82533728;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533728
	if (ctx.cr0.eq) goto loc_82533728;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82533734
	if (!ctx.cr6.gt) goto loc_82533734;
loc_82533728:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x82533730;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82533734:
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
loc_82533750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82548F78) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x82549018
	if (ctx.cr6.gt) goto loc_82549018;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bge cr6,0x82548ff4
	if (!ctx.cr6.lt) goto loc_82548FF4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x82549030
	if (ctx.cr6.lt) goto loc_82549030;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x82548ff4
	if (!ctx.cr6.gt) goto loc_82548FF4;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x82549030
	if (!ctx.cr6.gt) goto loc_82549030;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// ble cr6,0x82548ff4
	if (!ctx.cr6.gt) goto loc_82548FF4;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x82549030
	if (!ctx.cr6.gt) goto loc_82549030;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bgt cr6,0x82549030
	if (ctx.cr6.gt) goto loc_82549030;
loc_82548FC0:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,18,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
loc_82548FCC:
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
loc_82548FD0:
	// lhz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 16);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// ble cr6,0x82549080
	if (!ctx.cr6.gt) goto loc_82549080;
	// li r4,3528
	ctx.r4.s64 = 3528;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_82548FF4:
	// rlwinm r11,r10,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82549008
	if (!ctx.cr6.gt) goto loc_82549008;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_82549008:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82548fcc
	goto loc_82548FCC;
loc_82549018:
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82548fc0
	if (ctx.cr6.eq) goto loc_82548FC0;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82549078
	if (ctx.cr6.eq) goto loc_82549078;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x82549078
	if (ctx.cr6.eq) goto loc_82549078;
loc_82549030:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82549044
	if (ctx.cr6.lt) goto loc_82549044;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82549048
	if (!ctx.cr6.gt) goto loc_82549048;
loc_82549044:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82549048:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548fc0
	if (!ctx.cr0.eq) goto loc_82548FC0;
	// rlwinm. r11,r10,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82549064
	if (ctx.cr0.eq) goto loc_82549064;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// b 0x82549068
	goto loc_82549068;
loc_82549064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82549068:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// b 0x82548fd0
	goto loc_82548FD0;
loc_82549078:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_82549080:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// sth r11,18(r4)
	REX_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550260) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// b 0x82550298
	goto loc_82550298;
loc_82550268:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82550294
	if (ctx.cr0.eq) goto loc_82550294;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255028c
	goto loc_8255028C;
loc_8255027C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x825502a8
	if (ctx.cr6.eq) goto loc_825502A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8255028C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255027c
	if (!ctx.cr6.eq) goto loc_8255027C;
loc_82550294:
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82550298:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82550268
	if (!ctx.cr6.eq) goto loc_82550268;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825502A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82551368) {
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
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82503da0
	ctx.lr = 0x8255138C;
	sub_82503DA0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r8,r11,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// li r9,7296
	ctx.r9.s64 = 7296;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r11,r8,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwimi r9,r10,5,25,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82553D98) {
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
	ctx.lr = 0x82553DA0;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82553DCC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82553df0
	if (ctx.cr6.eq) goto loc_82553DF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553DEC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553DF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553DF8;
	sub_8250AD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
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
	ctx.lr = 0x82553E28;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82557228) {
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
	ctx.lr = 0x82557230;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82557264
	if (!ctx.cr6.eq) goto loc_82557264;
	// stw r26,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r26.u32);
loc_82557264:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x824ffcc0
	ctx.lr = 0x8255727C;
	sub_824FFCC0(ctx, base);
	// rlwinm r9,r27,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// bl 0x825c69a0
	ctx.lr = 0x825572C0;
	sub_825C69A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825572D0;
	sub_825C69A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825572DC;
	sub_8250AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554508
	ctx.lr = 0x825572F0;
	sub_82554508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// bl 0x82503400
	ctx.lr = 0x82557304;
	sub_82503400(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554748
	ctx.lr = 0x82557318;
	sub_82554748(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255733C;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-16
	ctx.r11.s64 = r28.s64 + -16;
	// stwx r27,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
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
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82557368;
	sub_82503DA0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x8255737C;
	sub_8250B470(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r27,r30,24
	r27.s64 = r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,32(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// li r6,94
	ctx.r6.s64 = 94;
	// stw r10,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// stw r30,28(r29)
	REX_STORE_U32(r29.u32 + 28, r30.u32);
	// bl 0x825bb860
	ctx.lr = 0x825573F8;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82557410;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-12
	ctx.r11.s64 = r28.s64 + -12;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,100(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82557444
	if (ctx.cr6.eq) goto loc_82557444;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82557444;
	sub_8250B4D8(ctx, base);
loc_82557444:
	// stw r28,100(r30)
	REX_STORE_U32(r30.u32 + 100, r28.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x82557470;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82557480;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r26,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82557498;
	sub_8250A620(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r11,r26,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825574B0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825574C0;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r26,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x825574D8;
	sub_8250A620(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825574F0;
	sub_8250AD28(ctx, base);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82557500;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255750C;
	sub_8250AD28(ctx, base);
	// stw r3,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r3.u32);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82557520;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,527
	ctx.r5.s64 = 527;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x825bd768
	ctx.lr = 0x82557538;
	sub_825BD768(ctx, base);
	// lwz r5,100(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82557558
	if (ctx.cr6.eq) goto loc_82557558;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82557558;
	sub_8250B4D8(ctx, base);
loc_82557558:
	// stw r28,100(r30)
	REX_STORE_U32(r30.u32 + 100, r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8255757C;
	sub_825BB9C8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82557588;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82557598;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,529
	ctx.r5.s64 = 529;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x825bd768
	ctx.lr = 0x825575B0;
	sub_825BD768(ctx, base);
	// lwz r5,100(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825575d0
	if (ctx.cr6.eq) goto loc_825575D0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x825575D0;
	sub_8250B4D8(ctx, base);
loc_825575D0:
	// stw r29,100(r30)
	REX_STORE_U32(r30.u32 + 100, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x825575E8;
	sub_8257DFD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825804B8) {
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
	ctx.lr = 0x825804C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,16
	r29.s64 = ctx.r4.s64 + 16;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825804E8;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bb860
	ctx.lr = 0x82580508;
	sub_825BB860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250ad88
	ctx.lr = 0x8258052C;
	sub_8250AD88(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82580540;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// rlwimi r9,r10,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82581EE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82581EF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,55
	ctx.r6.s64 = 55;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581F14;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581f38
	if (ctx.cr6.eq) goto loc_82581F38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581F34;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581F38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581F40;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82583D68) {
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
	ctx.lr = 0x82583D70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// rlwinm r25,r7,28,4,31
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r24,r7,28
	r24.u64 = ctx.r7.u32 & 0xF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82583e58
	if (ctx.cr6.eq) goto loc_82583E58;
	// addic. r11,r6,1
	ctx.xer.ca = ctx.r6.u32 > 4294967294;
	ctx.r11.s64 = ctx.r6.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583db0
	if (ctx.cr0.eq) goto loc_82583DB0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf. r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82583db4
	if (ctx.cr0.eq) goto loc_82583DB4;
loc_82583DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82583DB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583e58
	if (ctx.cr0.eq) goto loc_82583E58;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r29,r27,608
	r29.s64 = r27.s64 + 608;
	// subfic r28,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	r28.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583bb0
	ctx.lr = 0x82583DE8;
	sub_82583BB0(ctx, base);
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82583e4c
	if (ctx.cr6.eq) goto loc_82583E4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82583e4c
	if (!ctx.cr6.eq) goto loc_82583E4C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583718
	ctx.lr = 0x82583E10;
	sub_82583718(ctx, base);
	// stw r3,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fec0
	ctx.lr = 0x82583E28;
	sub_8257FEC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fc28
	ctx.lr = 0x82583E40;
	sub_8257FC28(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82583E4C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82583E58;
	sub_824E4368(ctx, base);
loc_82583E58:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82583E68;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825893E8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8255db50
	ctx.lr = 0x8258940C;
	sub_8255DB50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82584600
	ctx.lr = 0x82589418;
	sub_82584600(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8258943c
	if (ctx.cr6.eq) goto loc_8258943C;
loc_82589420:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553828
	ctx.lr = 0x82589428;
	sub_82553828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585320
	ctx.lr = 0x82589434;
	sub_82585320(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82589420
	if (!ctx.cr0.eq) goto loc_82589420;
loc_8258943C:
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

DEFINE_REX_FUNC(sub_8258D2B0) {
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
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d458
	if (ctx.cr6.eq) goto loc_8258D458;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8258d2ec
	if (ctx.cr6.lt) goto loc_8258D2EC;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258D2EC;
	sub_824E4368(ctx, base);
loc_8258D2EC:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258d30c
	if (ctx.cr0.eq) goto loc_8258D30C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258D30C;
	sub_824E4368(ctx, base);
loc_8258D30C:
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r9,16383
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16383, ctx.xer);
	// ble cr6,0x8258d320
	if (!ctx.cr6.gt) goto loc_8258D320;
	// li r4,3519
	ctx.r4.s64 = 3519;
	// bl 0x824e4368
	ctx.lr = 0x8258D320;
	sub_824E4368(ctx, base);
loc_8258D320:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,3,15,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1FFF8) | (ctx.r7.u64 & 0xFFFFFFFFFFFE0007);
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r30,r8,0,29,31
	r30.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7) | (r30.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,112
	ctx.r10.u64 = ctx.r10.u64 | 112;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r9,20,10,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x380000) | (ctx.r10.u64 & 0xFFFFFFFFFFC7FFFF);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,40(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8258d1d0
	ctx.lr = 0x8258D458;
	sub_8258D1D0(ctx, base);
loc_8258D458:
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

DEFINE_REX_FUNC(sub_825A4AD0) {
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
	ctx.lr = 0x825A4AD8;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-9688
	r28.s64 = ctx.r10.s64 + -9688;
	// bne cr6,0x825a4b24
	if (!ctx.cr6.eq) goto loc_825A4B24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-22900
	ctx.r5.s64 = ctx.r11.s64 + -22900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,733
	ctx.r7.s64 = 733;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4B24;
	sub_824EA978(ctx, base);
loc_825A4B24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825a4b48
	if (!ctx.cr6.eq) goto loc_825A4B48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9700
	ctx.r5.s64 = ctx.r11.s64 + -9700;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,734
	ctx.r7.s64 = 734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4B48;
	sub_824EA978(ctx, base);
loc_825A4B48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a4b6c
	if (!ctx.cr6.eq) goto loc_825A4B6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9336
	ctx.r5.s64 = ctx.r11.s64 + -9336;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,735
	ctx.r7.s64 = 735;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4B6C;
	sub_824EA978(ctx, base);
loc_825A4B6C:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a4b98
	if (!ctx.cr6.eq) goto loc_825A4B98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9376
	ctx.r5.s64 = ctx.r11.s64 + -9376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,738
	ctx.r7.s64 = 738;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4B98;
	sub_824EA978(ctx, base);
loc_825A4B98:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825a4bc0
	if (!ctx.cr0.eq) goto loc_825A4BC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9404
	ctx.r5.s64 = ctx.r11.s64 + -9404;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4BC0;
	sub_824EA978(ctx, base);
loc_825A4BC0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a4be8
	if (!ctx.cr6.eq) goto loc_825A4BE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4BE8;
	sub_824EA978(ctx, base);
loc_825A4BE8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// bne 0x825a4d50
	if (!ctx.cr0.eq) goto loc_825A4D50;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a5fa0
	ctx.lr = 0x825A4C0C;
	sub_825A5FA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x825a4c34
	if (ctx.cr6.eq) goto loc_825A4C34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,754
	ctx.r7.s64 = 754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4C34;
	sub_824EA978(ctx, base);
loc_825A4C34:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a4ce0
	if (ctx.cr6.eq) goto loc_825A4CE0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x825a4c50
	if (ctx.cr6.lt) goto loc_825A4C50;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(r25.s32, 7, ctx.xer);
	// ble cr6,0x825a4c6c
	if (!ctx.cr6.gt) goto loc_825A4C6C;
loc_825A4C50:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9528
	ctx.r5.s64 = ctx.r11.s64 + -9528;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,762
	ctx.r7.s64 = 762;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4C6C;
	sub_824EA978(ctx, base);
loc_825A4C6C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a4c94
	if (!ctx.cr6.eq) goto loc_825A4C94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9568
	ctx.r5.s64 = ctx.r11.s64 + -9568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,766
	ctx.r7.s64 = 766;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4C94;
	sub_824EA978(ctx, base);
loc_825A4C94:
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r11,r25,71
	ctx.r11.s64 = r25.s64 + 71;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,15
	ctx.r11.s64 = r25.s64 + 15;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x824efa48
	ctx.lr = 0x825A4CDC;
	sub_824EFA48(ctx, base);
	// bl 0x824efb70
	ctx.lr = 0x825A4CE0;
	sub_824EFB70(ctx, base);
loc_825A4CE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,32(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,-9588
	r30.s64 = ctx.r11.s64 + -9588;
	// beq 0x825a4d1c
	if (ctx.cr0.eq) goto loc_825A4D1C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4D1C;
	sub_824EA978(ctx, base);
loc_825A4D1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x825a4d50
	if (ctx.cr0.eq) goto loc_825A4D50;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,795
	ctx.r7.s64 = 795;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4D50;
	sub_824EA978(ctx, base);
loc_825A4D50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825B3E78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825b3968
	ctx.lr = 0x825B3EB0;
	sub_825B3968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B4408) {
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
	ctx.lr = 0x825B4410;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// bl 0x825b3e30
	ctx.lr = 0x825B4420;
	sub_825B3E30(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,2136
	ctx.r11.s64 = ctx.r3.s64 + 2136;
	// li r21,0
	r21.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B4430:
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r21.u32);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// stbu r21,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U8(ea, r21.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x825b4430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B4430;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r30,1448(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r10,r10,-3768
	ctx.r10.s64 = ctx.r10.s64 + -3768;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r28,-32251
	r28.s64 = -2113601536;
	// stw r10,2180(r31)
	REX_STORE_U32(r31.u32 + 2180, ctx.r10.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// lis r26,-32251
	r26.s64 = -2113601536;
	// addi r20,r4,-3780
	r20.s64 = ctx.r4.s64 + -3780;
	// addi r19,r3,-3796
	r19.s64 = ctx.r3.s64 + -3796;
	// addi r4,r28,-3812
	ctx.r4.s64 = r28.s64 + -3812;
	// stw r20,2372(r31)
	REX_STORE_U32(r31.u32 + 2372, r20.u32);
	// addi r3,r27,-3824
	ctx.r3.s64 = r27.s64 + -3824;
	// stw r19,2396(r31)
	REX_STORE_U32(r31.u32 + 2396, r19.u32);
	// addi r10,r26,-3836
	ctx.r10.s64 = r26.s64 + -3836;
	// stw r4,2444(r31)
	REX_STORE_U32(r31.u32 + 2444, ctx.r4.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,2468(r31)
	REX_STORE_U32(r31.u32 + 2468, ctx.r3.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r10,2492(r31)
	REX_STORE_U32(r31.u32 + 2492, ctx.r10.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r20,2648(r31)
	REX_STORE_U32(r31.u32 + 2648, r20.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r19,2668(r31)
	REX_STORE_U32(r31.u32 + 2668, r19.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r29,-32251
	r29.s64 = -2113601536;
	// lis r25,-32251
	r25.s64 = -2113601536;
	// lis r24,-32251
	r24.s64 = -2113601536;
	// lis r23,-32251
	r23.s64 = -2113601536;
	// addi r11,r11,-3852
	ctx.r11.s64 = ctx.r11.s64 + -3852;
	// addi r9,r9,-3864
	ctx.r9.s64 = ctx.r9.s64 + -3864;
	// addi r8,r8,-3876
	ctx.r8.s64 = ctx.r8.s64 + -3876;
	// stw r11,2156(r31)
	REX_STORE_U32(r31.u32 + 2156, ctx.r11.u32);
	// addi r7,r7,-3884
	ctx.r7.s64 = ctx.r7.s64 + -3884;
	// stw r9,2252(r31)
	REX_STORE_U32(r31.u32 + 2252, ctx.r9.u32);
	// addi r6,r6,-3892
	ctx.r6.s64 = ctx.r6.s64 + -3892;
	// stw r8,2276(r31)
	REX_STORE_U32(r31.u32 + 2276, ctx.r8.u32);
	// addi r5,r5,-3900
	ctx.r5.s64 = ctx.r5.s64 + -3900;
	// stw r7,2300(r31)
	REX_STORE_U32(r31.u32 + 2300, ctx.r7.u32);
	// addi r29,r29,-3912
	r29.s64 = r29.s64 + -3912;
	// stw r6,2324(r31)
	REX_STORE_U32(r31.u32 + 2324, ctx.r6.u32);
	// addi r4,r25,-3928
	ctx.r4.s64 = r25.s64 + -3928;
	// stw r5,2348(r31)
	REX_STORE_U32(r31.u32 + 2348, ctx.r5.u32);
	// addi r3,r24,-3936
	ctx.r3.s64 = r24.s64 + -3936;
	// stw r29,2420(r31)
	REX_STORE_U32(r31.u32 + 2420, r29.u32);
	// addi r10,r23,-3944
	ctx.r10.s64 = r23.s64 + -3944;
	// stw r4,2516(r31)
	REX_STORE_U32(r31.u32 + 2516, ctx.r4.u32);
	// stw r3,2228(r31)
	REX_STORE_U32(r31.u32 + 2228, ctx.r3.u32);
	// li r4,1884
	ctx.r4.s64 = 1884;
	// stw r10,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,2528(r31)
	REX_STORE_U32(r31.u32 + 2528, ctx.r11.u32);
	// stw r9,2548(r31)
	REX_STORE_U32(r31.u32 + 2548, ctx.r9.u32);
	// stw r8,2568(r31)
	REX_STORE_U32(r31.u32 + 2568, ctx.r8.u32);
	// stw r7,2588(r31)
	REX_STORE_U32(r31.u32 + 2588, ctx.r7.u32);
	// stw r6,2608(r31)
	REX_STORE_U32(r31.u32 + 2608, ctx.r6.u32);
	// stw r5,2628(r31)
	REX_STORE_U32(r31.u32 + 2628, ctx.r5.u32);
	// stw r29,2688(r31)
	REX_STORE_U32(r31.u32 + 2688, r29.u32);
	// bl 0x825b33a0
	ctx.lr = 0x825B4534;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825b4550
	if (ctx.cr0.eq) goto loc_825B4550;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f3498
	ctx.lr = 0x825B454C;
	sub_825F3498(ctx, base);
	// b 0x825b4554
	goto loc_825B4554;
loc_825B4550:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_825B4554:
	// stw r3,2020(r31)
	REX_STORE_U32(r31.u32 + 2020, ctx.r3.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x825b49c8
	if (ctx.cr0.lt) goto loc_825B49C8;
	// addi r11,r26,425
	ctx.r11.s64 = r26.s64 + 425;
	// addi r23,r22,12
	r23.s64 = r22.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r25,r31,-1700
	ctx.xer.ca = r31.u32 <= 4294965596;
	r25.u64 = static_cast<uint64_t>(-1700) - r31.u64;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,1
	r27.s64 = 1;
	// addi r24,r11,-3976
	r24.s64 = ctx.r11.s64 + -3976;
loc_825B4584:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, r26.u32);
	// bl 0x825b40e0
	ctx.lr = 0x825B4590;
	sub_825B40E0(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bge cr6,0x825b45a0
	if (!ctx.cr6.lt) goto loc_825B45A0;
	// add r11,r25,r23
	ctx.r11.u64 = r25.u64 + r23.u64;
	// b 0x825b45a8
	goto loc_825B45A8;
loc_825B45A0:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
loc_825B45A8:
	// lwz r28,1456(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// li r4,76
	ctx.r4.s64 = 76;
	// lwzx r30,r11,r29
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825B45BC;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x825b45e0
	if (ctx.cr0.eq) goto loc_825B45E0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825deef8
	ctx.lr = 0x825B45D8;
	sub_825DEEF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x825b45e4
	goto loc_825B45E4;
loc_825B45E0:
	// mr r28,r21
	r28.u64 = r21.u64;
loc_825B45E4:
	// lwz r30,1452(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// li r4,2180
	ctx.r4.s64 = 2180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825B45F4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825b461c
	if (ctx.cr0.eq) goto loc_825B461C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r4,2020(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2020);
	// bl 0x825db268
	ctx.lr = 0x825B4614;
	sub_825DB268(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b4620
	goto loc_825B4620;
loc_825B461C:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_825B4620:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825de5f8
	ctx.lr = 0x825B462C;
	sub_825DE5F8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825b4648
	if (ctx.cr6.eq) goto loc_825B4648;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825df110
	ctx.lr = 0x825B463C;
	sub_825DF110(ctx, base);
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// lwz r3,-4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825B4648;
	sub_825B3528(ctx, base);
loc_825B4648:
	// stb r27,2544(r31)
	REX_STORE_U8(r31.u32 + 2544, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B4654;
	sub_825DE7B0(ctx, base);
	// stw r3,2532(r31)
	REX_STORE_U32(r31.u32 + 2532, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B4660;
	sub_825DE7B0(ctx, base);
	// stw r3,2536(r31)
	REX_STORE_U32(r31.u32 + 2536, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B466C;
	sub_825DE7B0(ctx, base);
	// stw r3,2540(r31)
	REX_STORE_U32(r31.u32 + 2540, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4678;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ec4d0
	ctx.lr = 0x825B4680;
	sub_825EC4D0(ctx, base);
	// stb r27,2564(r31)
	REX_STORE_U8(r31.u32 + 2564, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B468C;
	sub_825DE7B0(ctx, base);
	// stw r3,2552(r31)
	REX_STORE_U32(r31.u32 + 2552, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B4698;
	sub_825DE7B0(ctx, base);
	// stw r3,2556(r31)
	REX_STORE_U32(r31.u32 + 2556, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B46A4;
	sub_825DE7B0(ctx, base);
	// stw r3,2560(r31)
	REX_STORE_U32(r31.u32 + 2560, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B46B0;
	sub_825DE738(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b46c4
	if (ctx.cr0.eq) goto loc_825B46C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f2f48
	ctx.lr = 0x825B46C4;
	sub_825F2F48(ctx, base);
loc_825B46C4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b46d8
	if (ctx.cr0.eq) goto loc_825B46D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f3288
	ctx.lr = 0x825B46D8;
	sub_825F3288(ctx, base);
loc_825B46D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825de4f0
	ctx.lr = 0x825B46E0;
	sub_825DE4F0(ctx, base);
	// stb r27,2584(r31)
	REX_STORE_U8(r31.u32 + 2584, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B46EC;
	sub_825DE7B0(ctx, base);
	// stw r3,2572(r31)
	REX_STORE_U32(r31.u32 + 2572, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B46F8;
	sub_825DE7B0(ctx, base);
	// stw r3,2576(r31)
	REX_STORE_U32(r31.u32 + 2576, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B4704;
	sub_825DE7B0(ctx, base);
	// stw r3,2580(r31)
	REX_STORE_U32(r31.u32 + 2580, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4710;
	sub_825DE738(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b4724
	if (ctx.cr0.eq) goto loc_825B4724;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f1820
	ctx.lr = 0x825B4724;
	sub_825F1820(ctx, base);
loc_825B4724:
	// stb r27,2604(r31)
	REX_STORE_U8(r31.u32 + 2604, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B4730;
	sub_825DE7B0(ctx, base);
	// stw r3,2592(r31)
	REX_STORE_U32(r31.u32 + 2592, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B473C;
	sub_825DE7B0(ctx, base);
	// stw r3,2596(r31)
	REX_STORE_U32(r31.u32 + 2596, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B4748;
	sub_825DE7B0(ctx, base);
	// stw r3,2600(r31)
	REX_STORE_U32(r31.u32 + 2600, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4754;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,2020(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2020);
	// bl 0x825d79e8
	ctx.lr = 0x825B4760;
	sub_825D79E8(ctx, base);
	// stb r27,2624(r31)
	REX_STORE_U8(r31.u32 + 2624, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B476C;
	sub_825DE7B0(ctx, base);
	// stw r3,2612(r31)
	REX_STORE_U32(r31.u32 + 2612, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B4778;
	sub_825DE7B0(ctx, base);
	// stw r3,2616(r31)
	REX_STORE_U32(r31.u32 + 2616, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B4784;
	sub_825DE7B0(ctx, base);
	// stw r3,2620(r31)
	REX_STORE_U32(r31.u32 + 2620, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4790;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f1540
	ctx.lr = 0x825B4798;
	sub_825F1540(ctx, base);
	// stb r27,2644(r31)
	REX_STORE_U8(r31.u32 + 2644, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B47A4;
	sub_825DE7B0(ctx, base);
	// stw r3,2632(r31)
	REX_STORE_U32(r31.u32 + 2632, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B47B0;
	sub_825DE7B0(ctx, base);
	// stw r3,2636(r31)
	REX_STORE_U32(r31.u32 + 2636, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B47BC;
	sub_825DE7B0(ctx, base);
	// stw r3,2640(r31)
	REX_STORE_U32(r31.u32 + 2640, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B47C8;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825eb5b0
	ctx.lr = 0x825B47D0;
	sub_825EB5B0(ctx, base);
	// stb r27,2664(r31)
	REX_STORE_U8(r31.u32 + 2664, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B47DC;
	sub_825DE7B0(ctx, base);
	// stw r3,2652(r31)
	REX_STORE_U32(r31.u32 + 2652, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B47E8;
	sub_825DE7B0(ctx, base);
	// stw r3,2656(r31)
	REX_STORE_U32(r31.u32 + 2656, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B47F4;
	sub_825DE7B0(ctx, base);
	// stw r3,2660(r31)
	REX_STORE_U32(r31.u32 + 2660, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4800;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e9c70
	ctx.lr = 0x825B4808;
	sub_825E9C70(ctx, base);
	// stb r27,2684(r31)
	REX_STORE_U8(r31.u32 + 2684, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B4814;
	sub_825DE7B0(ctx, base);
	// stw r3,2672(r31)
	REX_STORE_U32(r31.u32 + 2672, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B4820;
	sub_825DE7B0(ctx, base);
	// stw r3,2676(r31)
	REX_STORE_U32(r31.u32 + 2676, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B482C;
	sub_825DE7B0(ctx, base);
	// stw r3,2680(r31)
	REX_STORE_U32(r31.u32 + 2680, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4838;
	sub_825DE738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e91e8
	ctx.lr = 0x825B4840;
	sub_825E91E8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-160
	ctx.r4.s64 = r29.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e6440
	ctx.lr = 0x825B4850;
	sub_825E6440(ctx, base);
	// stb r27,2704(r31)
	REX_STORE_U8(r31.u32 + 2704, r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de7b0
	ctx.lr = 0x825B485C;
	sub_825DE7B0(ctx, base);
	// stw r3,2692(r31)
	REX_STORE_U32(r31.u32 + 2692, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de7b0
	ctx.lr = 0x825B4868;
	sub_825DE7B0(ctx, base);
	// stw r3,2696(r31)
	REX_STORE_U32(r31.u32 + 2696, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// bl 0x825de7b0
	ctx.lr = 0x825B4874;
	sub_825DE7B0(ctx, base);
	// stw r3,2700(r31)
	REX_STORE_U32(r31.u32 + 2700, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B4880;
	sub_825DE738(ctx, base);
	// lwz r11,2080(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2080);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82130e88
	ctx.lr = 0x825B4894;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,2080(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2080);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,2084(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2084);
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// bl 0x825d7a30
	ctx.lr = 0x825B48B8;
	sub_825D7A30(ctx, base);
	// lbz r11,2029(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2029);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2029(r31)
	REX_STORE_U8(r31.u32 + 2029, ctx.r11.u8);
	// bl 0x825d7a40
	ctx.lr = 0x825B48D0;
	sub_825D7A40(ctx, base);
	// lbz r11,2030(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2030);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2030(r31)
	REX_STORE_U8(r31.u32 + 2030, ctx.r11.u8);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b48fc
	if (ctx.cr6.eq) goto loc_825B48FC;
	// lbz r11,126(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne 0x825b4900
	if (!ctx.cr0.eq) goto loc_825B4900;
loc_825B48FC:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_825B4900:
	// lbz r10,2025(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2025);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2025(r31)
	REX_STORE_U8(r31.u32 + 2025, ctx.r11.u8);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4928
	if (ctx.cr6.eq) goto loc_825B4928;
	// lbz r11,125(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne 0x825b492c
	if (!ctx.cr0.eq) goto loc_825B492C;
loc_825B4928:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_825B492C:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r9,2024(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2024);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// stb r11,2026(r31)
	REX_STORE_U8(r31.u32 + 2026, ctx.r11.u8);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stb r11,2024(r31)
	REX_STORE_U8(r31.u32 + 2024, ctx.r11.u8);
	// lbz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 124);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,2027(r31)
	REX_STORE_U8(r31.u32 + 2027, ctx.r11.u8);
	// bl 0x825d7a30
	ctx.lr = 0x825B4968;
	sub_825D7A30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b497c
	if (ctx.cr0.eq) goto loc_825B497C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7a38
	ctx.lr = 0x825B4978;
	sub_825D7A38(ctx, base);
	// stw r3,2032(r31)
	REX_STORE_U32(r31.u32 + 2032, ctx.r3.u32);
loc_825B497C:
	// lwz r11,2092(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2092);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,240(r29)
	REX_STORE_U32(r29.u32 + 240, ctx.r11.u32);
	// lwz r11,2096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
	// bl 0x825b4398
	ctx.lr = 0x825B4998;
	sub_825B4398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825db560
	ctx.lr = 0x825B49A0;
	sub_825DB560(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825B49AC;
	sub_825B3528(ctx, base);
	// lwz r3,1452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// bl 0x825de738
	ctx.lr = 0x825B49B4;
	sub_825DE738(ctx, base);
	// lwz r3,1456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1456);
	// bl 0x825de738
	ctx.lr = 0x825B49BC;
	sub_825DE738(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x825b4584
	if (!ctx.cr0.lt) goto loc_825B4584;
loc_825B49C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825D3448) {
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
	ctx.lr = 0x825D3450;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d3490
	if (!ctx.cr6.eq) goto loc_825D3490;
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
	// li r7,2047
	ctx.r7.s64 = 2047;
	// bl 0x824ea978
	ctx.lr = 0x825D3490;
	sub_824EA978(ctx, base);
loc_825D3490:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D34A0;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne 0x825d3508
	if (!ctx.cr0.eq) goto loc_825D3508;
	// beq cr6,0x825d34c4
	if (ctx.cr6.eq) goto loc_825D34C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D34C4;
	sub_824F0950(ctx, base);
loc_825D34C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3500
	if (ctx.cr6.eq) goto loc_825D3500;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3500
	if (ctx.cr6.eq) goto loc_825D3500;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bctrl 
	ctx.lr = 0x825D3500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3500:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3560
	goto loc_825D3560;
loc_825D3508:
	// beq cr6,0x825d3520
	if (ctx.cr6.eq) goto loc_825D3520;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3520;
	sub_824F0950(ctx, base);
loc_825D3520:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d355c
	if (ctx.cr6.eq) goto loc_825D355C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d355c
	if (ctx.cr6.eq) goto loc_825D355C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bctrl 
	ctx.lr = 0x825D355C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D355C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D6300) {
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
	ctx.lr = 0x825D6308;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,5624
	r29.s64 = ctx.r10.s64 + 5624;
	// bne cr6,0x825d6354
	if (!ctx.cr6.eq) goto loc_825D6354;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,504
	ctx.r7.s64 = 504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6354;
	sub_824EA978(ctx, base);
loc_825D6354:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// blt cr6,0x825d6378
	if (ctx.cr6.lt) goto loc_825D6378;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,6300
	ctx.r5.s64 = ctx.r11.s64 + 6300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6378;
	sub_824EA978(ctx, base);
loc_825D6378:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x825d639c
	if (!ctx.cr6.lt) goto loc_825D639C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,6288
	ctx.r5.s64 = ctx.r11.s64 + 6288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D639C;
	sub_824EA978(ctx, base);
loc_825D639C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D63AC;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x825d6410
	if (ctx.cr6.eq) goto loc_825D6410;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d63d0
	if (ctx.cr6.eq) goto loc_825D63D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D63D0;
	sub_824F0950(ctx, base);
loc_825D63D0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d6408
	if (ctx.cr6.eq) goto loc_825D6408;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d6408
	if (ctx.cr6.eq) goto loc_825D6408;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-28232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x825D6408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6408:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6468
	goto loc_825D6468;
loc_825D6410:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d642c
	if (ctx.cr6.eq) goto loc_825D642C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D642C;
	sub_824F0950(ctx, base);
loc_825D642C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d6464
	if (ctx.cr6.eq) goto loc_825D6464;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d6464
	if (ctx.cr6.eq) goto loc_825D6464;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-28232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x825D6464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D6468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825E06B0) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r6,r4,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824ea8e0
	ctx.lr = 0x825E06E4;
	sub_824EA8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x824ea8e0
	ctx.lr = 0x825E06F8;
	sub_824EA8E0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x824ea8e0
	ctx.lr = 0x825E0714;
	sub_824EA8E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825E5B90) {
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
	ctx.lr = 0x825E5B98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825e5bc0
	if (!ctx.cr0.eq) goto loc_825E5BC0;
	// lbz r11,141(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e5d90
	if (ctx.cr0.eq) goto loc_825E5D90;
loc_825E5BC0:
	// lwz r3,100(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 100);
	// bl 0x825e9278
	ctx.lr = 0x825E5BC8;
	sub_825E9278(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,11616
	r27.s64 = ctx.r10.s64 + 11616;
	// beq cr6,0x825e5bfc
	if (ctx.cr6.eq) goto loc_825E5BFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,13564
	ctx.r5.s64 = ctx.r11.s64 + 13564;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,792
	ctx.r7.s64 = 792;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E5BFC;
	sub_824EA978(ctx, base);
loc_825E5BFC:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e5d90
	if (!ctx.cr0.eq) goto loc_825E5D90;
	// lwz r3,104(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 104);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825e5d34
	if (!ctx.cr6.gt) goto loc_825E5D34;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// bl 0x825e9278
	ctx.lr = 0x825E5C24;
	sub_825E9278(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e0940
	ctx.lr = 0x825E5C30;
	sub_825E0940(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r24,56(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x825f9ad0
	ctx.lr = 0x825E5C44;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r24,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,11196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11196);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x825d7c78
	ctx.lr = 0x825E5C6C;
	sub_825D7C78(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x825e5ca4
	if (ctx.cr6.lt) goto loc_825E5CA4;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bge cr6,0x825e5c84
	if (!ctx.cr6.lt) goto loc_825E5C84;
	// addi r30,r30,-3
	r30.s64 = r30.s64 + -3;
	// b 0x825e5ca4
	goto loc_825E5CA4;
loc_825E5C84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,819
	ctx.r7.s64 = 819;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E5CA0;
	sub_824EA978(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825E5CA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E5CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E5CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	ctx.lr = 0x825E5D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	ctx.lr = 0x825E5D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825fcb60
	ctx.lr = 0x825E5D30;
	sub_825FCB60(ctx, base);
	// b 0x825e5d90
	goto loc_825E5D90;
loc_825E5D34:
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825e5d74
	if (!ctx.cr6.eq) goto loc_825E5D74;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825e5d64
	if (!ctx.cr6.lt) goto loc_825E5D64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e5d68
	goto loc_825E5D68;
loc_825E5D64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E5D68:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e5d90
	if (ctx.cr6.eq) goto loc_825E5D90;
loc_825E5D74:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,13600
	ctx.r5.s64 = ctx.r11.s64 + 13600;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,828
	ctx.r7.s64 = 828;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E5D90;
	sub_824EA978(ctx, base);
loc_825E5D90:
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// lbz r5,124(r26)
	ctx.r5.u64 = REX_LOAD_U8(r26.u32 + 124);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E5DA0;
	sub_825E35D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825F4E40) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x825f4e98
	if (!ctx.cr6.eq) goto loc_825F4E98;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825f4930
	ctx.lr = 0x825F4E60;
	sub_825F4930(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825f4e7c
	if (ctx.cr6.lt) goto loc_825F4E7C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x825f4e98
	goto loc_825F4E98;
loc_825F4E7C:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_825F4E98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F71E8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_825F721C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x825f721c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F721C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x825f59b0
	ctx.lr = 0x825F7268;
	sub_825F59B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f7280
	if (ctx.cr0.lt) goto loc_825F7280;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6ab8
	ctx.lr = 0x825F7280;
	sub_825F6AB8(ctx, base);
loc_825F7280:
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
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

DEFINE_REX_FUNC(sub_825F8DE0) {
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
	ctx.lr = 0x825F8DE8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825f8a50
	ctx.lr = 0x825F8DF8;
	sub_825F8A50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,28700
	ctx.r11.s64 = ctx.r11.s64 + 28700;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,2736(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// lwz r29,1536(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F8E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d3d70
	ctx.lr = 0x825F8E3C;
	sub_825D3D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f8efc
	if (!ctx.cr0.eq) goto loc_825F8EFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,28936(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28936);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f8ed8
	if (!ctx.cr6.eq) goto loc_825F8ED8;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825F8E6C;
	sub_825E7538(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F8E80;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825f8ea4
	if (ctx.cr0.eq) goto loc_825F8EA4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F8E9C;
	sub_825FB008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825f8ea8
	goto loc_825F8EA8;
loc_825F8EA4:
	// li r29,0
	r29.s64 = 0;
loc_825F8EA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F8EB4;
	sub_825FCB60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8EC4;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F8ED0;
	sub_825F80C0(ctx, base);
	// stwx r29,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x825f8edc
	goto loc_825F8EDC;
loc_825F8ED8:
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_825F8EDC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F8EE8;
	sub_825FB9B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8EF8;
	sub_825F9F38(ctx, base);
	// b 0x825f91f8
	goto loc_825F91F8;
loc_825F8EFC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,1536(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1536);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,15992
	ctx.r5.s64 = ctx.r11.s64 + 15992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d4308
	ctx.lr = 0x825F8F14;
	sub_825D4308(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r21,r11,29104
	r21.s64 = ctx.r11.s64 + 29104;
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x825f9118
	if (ctx.cr6.lt) goto loc_825F9118;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,29408
	r27.s64 = ctx.r11.s64 + 29408;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
	// addi r11,r11,28936
	ctx.r11.s64 = ctx.r11.s64 + 28936;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r26,r10,r11
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r26,6
	ctx.r11.s64 = r26.s64 + 6;
	// rlwinm r23,r11,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r24,r23,r31
	r24.u64 = REX_LOAD_U32(r23.u32 + r31.u32);
	// bne cr6,0x825f8ff8
	if (!ctx.cr6.eq) goto loc_825F8FF8;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825F8F8C;
	sub_825E7538(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F8FA0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825f8fc4
	if (ctx.cr0.eq) goto loc_825F8FC4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F8FBC;
	sub_825FB008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825f8fc8
	goto loc_825F8FC8;
loc_825F8FC4:
	// li r29,0
	r29.s64 = 0;
loc_825F8FC8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F8FD4;
	sub_825FCB60(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8FE4;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F8FF0;
	sub_825F80C0(ctx, base);
	// stwx r29,r28,r31
	REX_STORE_U32(r28.u32 + r31.u32, r29.u32);
	// b 0x825f8ffc
	goto loc_825F8FFC;
loc_825F8FF8:
	// lwz r25,28(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_825F8FFC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x825f9080
	if (!ctx.cr6.eq) goto loc_825F9080;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x825e7538
	ctx.lr = 0x825F9014;
	sub_825E7538(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F9028;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825f904c
	if (ctx.cr0.eq) goto loc_825F904C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F9044;
	sub_825FB008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825f9050
	goto loc_825F9050;
loc_825F904C:
	// li r29,0
	r29.s64 = 0;
loc_825F9050:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F905C;
	sub_825FCB60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F906C;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F9078;
	sub_825F80C0(ctx, base);
	// stwx r29,r23,r31
	REX_STORE_U32(r23.u32 + r31.u32, r29.u32);
	// b 0x825f9084
	goto loc_825F9084;
loc_825F9080:
	// lwz r28,28(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 28);
loc_825F9084:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F9090;
	sub_825FB9B8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F90A0;
	sub_825F9F38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r29)
	REX_STORE_U32(r29.u32 + 132, ctx.r11.u32);
	// bl 0x825f9f38
	ctx.lr = 0x825F90CC;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F90D8;
	sub_825F80C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825F90E4;
	sub_825FCB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F90F0;
	sub_825FB9B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F9100;
	sub_825F9F38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,12
	ctx.r11.s64 = r27.s64 + 12;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x825f91f0
	goto loc_825F91F0;
loc_825F9118:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r11,29440
	r26.s64 = ctx.r11.s64 + 29440;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,28936
	ctx.r11.s64 = ctx.r11.s64 + 28936;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f91c4
	if (!ctx.cr6.eq) goto loc_825F91C4;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825F9158;
	sub_825E7538(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F916C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825f9190
	if (ctx.cr0.eq) goto loc_825F9190;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F9188;
	sub_825FB008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825f9194
	goto loc_825F9194;
loc_825F9190:
	// li r29,0
	r29.s64 = 0;
loc_825F9194:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F91A0;
	sub_825FCB60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F91B0;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F91BC;
	sub_825F80C0(ctx, base);
	// stwx r29,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x825f91c8
	goto loc_825F91C8;
loc_825F91C4:
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_825F91C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F91D4;
	sub_825FB9B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F91E4;
	sub_825F9F38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r26,4
	ctx.r11.s64 = r26.s64 + 4;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
loc_825F91F0:
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
loc_825F91F8:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F9208;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F9214;
	sub_825F80C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825F9220;
	sub_825FCB18(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82614F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82614F90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// bne cr6,0x82614fb0
	if (!ctx.cr6.eq) goto loc_82614FB0;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82614fc8
	goto loc_82614FC8;
loc_82614FB0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82614fc0
	if (!ctx.cr6.eq) goto loc_82614FC0;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82614fc8
	goto loc_82614FC8;
loc_82614FC0:
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
loc_82614FC8:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// bne cr6,0x82614fe0
	if (!ctx.cr6.eq) goto loc_82614FE0;
	// li r31,32
	r31.s64 = 32;
	// b 0x82614ff8
	goto loc_82614FF8;
loc_82614FE0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82614ff0
	if (!ctx.cr6.eq) goto loc_82614FF0;
	// li r31,16
	r31.s64 = 16;
	// b 0x82614ff8
	goto loc_82614FF8;
loc_82614FF0:
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r31,r11,18
	r31.s64 = ctx.r11.s64 + 18;
loc_82614FF8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82615008;
	sub_826A1E70(ctx, base);
	// subf r5,r31,r29
	ctx.r5.u64 = r29.u64 - r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82615018;
	sub_826A2E60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826174C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826174C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r30,r3,84
	r30.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826174EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x826170c8
	ctx.lr = 0x826174F8;
	sub_826170C8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261AD98) {
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
	// lhz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r3,38(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// bl 0x82634b88
	ctx.lr = 0x8261ADC0;
	sub_82634B88(ctx, base);
	// lhz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
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

DEFINE_REX_FUNC(sub_8261D9C8) {
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
	// beq cr6,0x8261da04
	if (ctx.cr6.eq) goto loc_8261DA04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82130e88
	ctx.lr = 0x8261D9F4;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261d7d0
	ctx.lr = 0x8261D9FC;
	sub_8261D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82634e78
	ctx.lr = 0x8261DA04;
	sub_82634E78(ctx, base);
loc_8261DA04:
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

DEFINE_REX_FUNC(sub_82624588) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x826245d0
	if (ctx.cr6.eq) goto loc_826245D0;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826245c8
	if (!ctx.cr6.eq) goto loc_826245C8;
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826245d0
	if (!ctx.cr6.eq) goto loc_826245D0;
loc_826245C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826245d4
	goto loc_826245D4;
loc_826245D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826245D4:
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// lwz r31,32(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// li r6,32000
	ctx.r6.s64 = 32000;
	// lwz r10,56(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// lwz r30,16(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subfc r3,r6,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,8(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,12(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// subfe r5,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82624420
	ctx.lr = 0x82624618;
	sub_82624420(ctx, base);
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

DEFINE_REX_FUNC(sub_82627780) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826273e8
	sub_826273E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627820) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826283d0
	ctx.lr = 0x82627858;
	sub_826283D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82627868
	if (ctx.cr0.eq) goto loc_82627868;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627868;
	sub_8264C3D0(ctx, base);
loc_82627868:
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

DEFINE_REX_FUNC(sub_82629350) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8262937c
	if (!ctx.cr6.eq) goto loc_8262937C;
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x826150b8
	ctx.lr = 0x8262937C;
	sub_826150B8(ctx, base);
loc_8262937C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82793e24
	ctx.lr = 0x82629394;
	__imp__KeSetEvent(ctx, base);
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

DEFINE_REX_FUNC(sub_8262CC70) {
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
	ctx.lr = 0x8262CC78;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,32(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8262CCA0:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8262cca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CCA0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8262cce8
	if (!ctx.cr6.eq) goto loc_8262CCE8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8262CCC8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8262ccc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CCC8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826a2e60
	ctx.lr = 0x8262CCE4;
	sub_826A2E60(ctx, base);
	// b 0x8262cd80
	goto loc_8262CD80;
loc_8262CCE8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8262CD58:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8262cd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CD58;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262CD74:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8262cd74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CD74;
loc_8262CD80:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvrx128 v60,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvrx128 v57,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvlx128 v56,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvrx128 v55,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r6,r31,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// lvlx128 v54,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r27,4
	r27.s64 = 4;
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v51,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v50,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// vor128 v13,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v0,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// beq cr6,0x8262ce88
	if (ctx.cr6.eq) goto loc_8262CE88;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// ble cr6,0x8262cfe0
	if (!ctx.cr6.gt) goto loc_8262CFE0;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
loc_8262CE18:
	// lvlx128 v49,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v12,v12,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v61.f32)));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// vspltw128 v63,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// vor128 v48,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v48,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x8262ce58
	if (ctx.cr6.eq) goto loc_8262CE58;
	// lvlx128 v47,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v45,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v44
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v63,v63,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
loc_8262CE58:
	// vpermwi128 v43,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// rlwinm r9,r31,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stvewx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x8262ce18
	if (!ctx.cr6.eq) goto loc_8262CE18;
loc_8262CE88:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// ble cr6,0x8262cfe0
	if (!ctx.cr6.gt) goto loc_8262CFE0;
	// rlwinm r29,r28,2,0,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFF0;
	// vaddfp128 v63,v61,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// clrlwi r28,r28,30
	r28.u64 = r28.u32 & 0x3;
	// vaddfp128 v62,v58,v58
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v58.f32)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddfp128 v61,v57,v57
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v57.f32)));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262cfdc
	if (ctx.cr6.eq) goto loc_8262CFDC;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// addi r4,r30,192
	ctx.r4.s64 = r30.s64 + 192;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// li r3,864
	ctx.r3.s64 = 864;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8262CED8:
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// lvlx128 v42,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// dcbt r4,r9
	// dcbt r31,r3
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// vor128 v59,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vmrghw128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrglw128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// beq cr6,0x8262cf78
	if (ctx.cr6.eq) goto loc_8262CF78;
	// vspltw128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v8,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v6,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// lvx128 v3,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v9,v9,v0,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v7,v12,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v6,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v7,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v9,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v10,v4,v12,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v11,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8262cfd0
	goto loc_8262CFD0;
loc_8262CF78:
	// vaddfp128 v40,v13,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v39,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vaddfp128 v38,v0,v61
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v35,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vaddfp128 v36,v12,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v37,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw128 v34,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v33,v11,v13
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v32,v39,v0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v60,v37,v12
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v59,v10,v40
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmulfp128 v56,v35,v38
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v55,v34,v36
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v36.f32)));
	// stvx128 v33,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v40,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v32,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v38,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v36,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v60,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8262CFD0:
	// addi r31,r31,96
	r31.s64 = r31.s64 + 96;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8262ced8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CED8;
loc_8262CFDC:
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
loc_8262CFE0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8262d04c
	if (ctx.cr6.eq) goto loc_8262D04C;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_8262CFEC:
	// lvlx128 v54,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// vspltw128 v63,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// vor128 v53,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v53,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x8262d028
	if (ctx.cr6.eq) goto loc_8262D028;
	// lvlx128 v52,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v50,v52,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v49
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v63,v63,v50
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v50.f32)));
loc_8262D028:
	// vpermwi128 v48,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stvrx128 v63,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// stvewx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x8262cfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CFEC;
loc_8262D04C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8265C7B8) {
	REX_FUNC_PROLOGUE();
	// b 0x8265c500
	sub_8265C500(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265C940) {
	REX_FUNC_PROLOGUE();
	// lbz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8265c990
	if (ctx.cr6.eq) goto loc_8265C990;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8265c97c
	if (ctx.cr6.eq) goto loc_8265C97C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8265c97c
	if (ctx.cr6.eq) goto loc_8265C97C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8265c984
	if (ctx.cr6.eq) goto loc_8265C984;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8265c990
	if (ctx.cr6.eq) goto loc_8265C990;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8265c984
	if (ctx.cr6.eq) goto loc_8265C984;
loc_8265C97C:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8265c994
	goto loc_8265C994;
loc_8265C984:
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8265c998
	goto loc_8265C998;
loc_8265C990:
	// li r5,4
	ctx.r5.s64 = 4;
loc_8265C994:
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_8265C998:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823ee698
	sub_823EE698(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D9A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d9cc
	if (ctx.cr6.eq) goto loc_8265D9CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6216
	ctx.r5.s64 = ctx.r11.s64 + -6216;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8265D9CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265E2F0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// std r5,92(r31)
	REX_STORE_U64(r31.u32 + 92, ctx.r5.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265e37c
	if (!ctx.cr6.eq) goto loc_8265E37C;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,1199
	ctx.r4.s64 = 1199;
	// li r3,1001
	ctx.r3.s64 = 1001;
	// bl 0x82660ff8
	ctx.lr = 0x8265E328;
	sub_82660FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265e3c0
	if (ctx.cr0.lt) goto loc_8265E3C0;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mulli r9,r10,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_8265E35C:
	// bl 0x823ef900
	ctx.lr = 0x8265E360;
	sub_823EF900(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265E368:
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
loc_8265E37C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r7,r31,60
	ctx.r7.s64 = r31.s64 + 60;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// bl 0x8264e300
	ctx.lr = 0x8265E3A0;
	sub_8264E300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265e35c
	if (ctx.cr0.eq) goto loc_8265E35C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265e35c
	if (ctx.cr6.eq) goto loc_8265E35C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265e3c0
	if (!ctx.cr6.gt) goto loc_8265E3C0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_8265E3C0:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// b 0x8265e368
	goto loc_8265E368;
}

DEFINE_REX_FUNC(sub_82662A38) {
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
	ctx.lr = 0x82662A40;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82662b14
	if (ctx.cr6.eq) goto loc_82662B14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82662ae0
	if (ctx.cr6.eq) goto loc_82662AE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82662a98
	if (ctx.cr6.eq) goto loc_82662A98;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82662b54
	if (!ctx.cr6.eq) goto loc_82662B54;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82662a90
	if (!ctx.cr6.gt) goto loc_82662A90;
loc_82662A84:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82662b5c
	goto loc_82662B5C;
loc_82662A90:
	// li r30,257
	r30.s64 = 257;
	// b 0x82662aa8
	goto loc_82662AA8;
loc_82662A98:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82662a84
	if (ctx.cr6.gt) goto loc_82662A84;
	// li r30,258
	r30.s64 = 258;
loc_82662AA8:
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_82662AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82662ABC:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_82662AE0:
	// li r27,8
	r27.s64 = 8;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x82662b54
	if (!ctx.cr6.eq) goto loc_82662B54;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b54
	if (ctx.cr6.eq) goto loc_82662B54;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82662ab8
	if (!ctx.cr6.eq) goto loc_82662AB8;
	// b 0x82662b54
	goto loc_82662B54;
loc_82662B14:
	// li r27,38
	r27.s64 = 38;
	// cmplwi cr6,r7,38
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 38, ctx.xer);
	// bne cr6,0x82662b54
	if (!ctx.cr6.eq) goto loc_82662B54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// bl 0x826a1e70
	ctx.lr = 0x82662B40;
	sub_826A1E70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,-8
	ctx.r3.s64 = r26.s64 + -8;
	// bl 0x826615a0
	ctx.lr = 0x82662B4C;
	sub_826615A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82662ab8
	if (!ctx.cr0.eq) goto loc_82662AB8;
loc_82662B54:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
loc_82662B5C:
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// b 0x82662abc
	goto loc_82662ABC;
}

DEFINE_REX_FUNC(sub_82669F80) {
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
	ctx.lr = 0x82669F88;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// li r22,0
	r22.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,292(r4)
	REX_STORE_U32(ctx.r4.u32 + 292, ctx.r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669fd8
	if (!ctx.cr6.eq) goto loc_82669FD8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82669fd0
	if (!ctx.cr6.eq) goto loc_82669FD0;
loc_82669FC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8266c148
	ctx.lr = 0x82669FD0;
	sub_8266C148(ctx, base);
loc_82669FD0:
	// mr r30,r22
	r30.u64 = r22.u64;
	// b 0x8266a454
	goto loc_8266A454;
loc_82669FD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8266a500
	ctx.lr = 0x82669FE8;
	sub_8266A500(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a454
	if (!ctx.cr0.eq) goto loc_8266A454;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266a024
	if (ctx.cr0.eq) goto loc_8266A024;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// lwz r11,236(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 236);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,236(r26)
	REX_STORE_U32(r26.u32 + 236, ctx.r11.u32);
	// bne 0x8266a024
	if (!ctx.cr0.eq) goto loc_8266A024;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82666318
	ctx.lr = 0x8266A01C;
	sub_82666318(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a454
	if (!ctx.cr0.eq) goto loc_8266A454;
loc_8266A024:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82662e78
	ctx.lr = 0x8266A034;
	sub_82662E78(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a454
	if (!ctx.cr0.eq) goto loc_8266A454;
	// addi r24,r26,8
	r24.s64 = r26.s64 + 8;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82674f90
	ctx.lr = 0x8266A054;
	sub_82674F90(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a454
	if (!ctx.cr0.eq) goto loc_8266A454;
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a09c
	if (ctx.cr0.eq) goto loc_8266A09C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a09c
	if (ctx.cr0.eq) goto loc_8266A09C;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669fc4
	if (ctx.cr6.eq) goto loc_82669FC4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669fd0
	if (ctx.cr6.eq) goto loc_82669FD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826688b8
	ctx.lr = 0x8266A098;
	sub_826688B8(ctx, base);
	// b 0x82669fd0
	goto loc_82669FD0;
loc_8266A09C:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266a0c0
	if (!ctx.cr6.eq) goto loc_8266A0C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82668598
	ctx.lr = 0x8266A0B8;
	sub_82668598(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a454
	if (!ctx.cr0.eq) goto loc_8266A454;
loc_8266A0C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82669fd0
	if (!ctx.cr6.eq) goto loc_82669FD0;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// lis r9,13364
	ctx.r9.s64 = 875823104;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r25,r10,4626
	r25.u64 = ctx.r10.u64 | 4626;
	// ori r23,r9,13364
	r23.u64 = ctx.r9.u64 | 13364;
	// beq 0x8266a218
	if (ctx.cr0.eq) goto loc_8266A218;
	// lwz r30,64(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8266a164
	if (!ctx.cr6.eq) goto loc_8266A164;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x826a1e70
	ctx.lr = 0x8266A100;
	sub_826A1E70(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826727b8
	ctx.lr = 0x8266A110;
	sub_826727B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82669fc4
	if (ctx.cr0.eq) goto loc_82669FC4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266A120;
	sub_82672C40(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82669fd0
	if (ctx.cr0.eq) goto loc_82669FD0;
	// bl 0x82675b10
	ctx.lr = 0x8266A130;
	sub_82675B10(ctx, base);
	// stw r22,72(r31)
	REX_STORE_U32(r31.u32 + 72, r22.u32);
loc_8266A134:
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
	// bne 0x8266a134
	if (!ctx.cr0.eq) goto loc_8266A134;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82669fd0
	if (!ctx.cr6.eq) goto loc_82669FD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A160;
	sub_82670CD8(ctx, base);
	// b 0x82669fd0
	goto loc_82669FD0;
loc_8266A164:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82672760
	ctx.lr = 0x8266A170;
	sub_82672760(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266a18c
	if (!ctx.cr0.eq) goto loc_8266A18C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82672a28
	ctx.lr = 0x8266A184;
	sub_82672A28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8266a218
	if (ctx.cr0.eq) goto loc_8266A218;
loc_8266A18C:
	// lwz r10,172(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 172);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r28,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blt cr6,0x8266a1b4
	if (ctx.cr6.lt) goto loc_8266A1B4;
	// lis r27,-32646
	r27.s64 = -2139488256;
	// ori r27,r27,4113
	r27.u64 = r27.u64 | 4113;
loc_8266A1B4:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x8266a1e0
	if (ctx.cr6.eq) goto loc_8266A1E0;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// beq cr6,0x8266a1e0
	if (ctx.cr6.eq) goto loc_8266A1E0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8266a204
	if (ctx.cr6.gt) goto loc_8266A204;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82666618
	ctx.lr = 0x8266A1DC;
	sub_82666618(ctx, base);
	// b 0x8266a1fc
	goto loc_8266A1FC;
loc_8266A1E0:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x826748e8
	ctx.lr = 0x8266A1FC;
	sub_826748E8(ctx, base);
loc_8266A1FC:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266a440
	if (!ctx.cr0.eq) goto loc_8266A440;
loc_8266A204:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266A210;
	sub_82672C40(ctx, base);
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8266a21c
	goto loc_8266A21C;
loc_8266A218:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_8266A21C:
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a338
	if (ctx.cr0.eq) goto loc_8266A338;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826727b8
	ctx.lr = 0x8266A244;
	sub_826727B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8266a298
	if (ctx.cr0.eq) goto loc_8266A298;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266a43c
	if (ctx.cr6.eq) goto loc_8266A43C;
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r11,r29,116
	ctx.r11.s64 = r29.s64 + 116;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// beq cr6,0x8266a43c
	if (ctx.cr6.eq) goto loc_8266A43C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x8266a280
	if (ctx.cr6.eq) goto loc_8266A280;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bne cr6,0x8266a43c
	if (!ctx.cr6.eq) goto loc_8266A43C;
loc_8266A280:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826748e8
	ctx.lr = 0x8266A290;
	sub_826748E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8266a440
	goto loc_8266A440;
loc_8266A298:
	// lwz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82669fd0
	if (!ctx.cr6.eq) goto loc_82669FD0;
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a43c
	if (ctx.cr0.eq) goto loc_8266A43C;
loc_8266A2B0:
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
	// bne 0x8266a2b0
	if (!ctx.cr0.eq) goto loc_8266A2B0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264c7f0
	ctx.lr = 0x8266A2D8;
	sub_8264C7F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 24);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82673220
	ctx.lr = 0x8266A300;
	sub_82673220(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8266a43c
	if (ctx.cr0.eq) goto loc_8266A43C;
loc_8266A308:
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
	// bne 0x8266a308
	if (!ctx.cr0.eq) goto loc_8266A308;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a454
	if (!ctx.cr6.eq) goto loc_8266A454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A334;
	sub_82670CD8(ctx, base);
	// b 0x8266a440
	goto loc_8266A440;
loc_8266A338:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266a43c
	if (!ctx.cr6.eq) goto loc_8266A43C;
	// lwz r29,168(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8266a3f4
	if (ctx.cr6.eq) goto loc_8266A3F4;
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a3ec
	if (ctx.cr0.eq) goto loc_8266A3EC;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r29,12
	ctx.r11.s64 = r29.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266a3ec
	if (!ctx.cr6.eq) goto loc_8266A3EC;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// beq 0x8266a3e8
	if (ctx.cr0.eq) goto loc_8266A3E8;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// bl 0x82663088
	ctx.lr = 0x8266A388;
	sub_82663088(ctx, base);
	// stw r22,56(r29)
	REX_STORE_U32(r29.u32 + 56, r22.u32);
	// stw r22,168(r31)
	REX_STORE_U32(r31.u32 + 168, r22.u32);
loc_8266A390:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a390
	if (!ctx.cr0.eq) goto loc_8266A390;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266A3B8;
	sub_8266C148(ctx, base);
loc_8266A3B8:
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
	// bne 0x8266a3b8
	if (!ctx.cr0.eq) goto loc_8266A3B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a3ec
	if (!ctx.cr6.eq) goto loc_8266A3EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A3E4;
	sub_82670CD8(ctx, base);
	// b 0x8266a3ec
	goto loc_8266A3EC;
loc_8266A3E8:
	// bl 0x82663088
	ctx.lr = 0x8266A3EC;
	sub_82663088(ctx, base);
loc_8266A3EC:
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8266a43c
	goto loc_8266A43C;
loc_8266A3F4:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a420
	if (ctx.cr0.eq) goto loc_8266A420;
	// lwz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8266a43c
	if (ctx.cr6.lt) goto loc_8266A43C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8266a43c
	if (!ctx.cr6.eq) goto loc_8266A43C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266A41C;
	sub_8266C148(ctx, base);
	// b 0x8266a43c
	goto loc_8266A43C;
loc_8266A420:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8266a43c
	if (!ctx.cr6.eq) goto loc_8266A43C;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82663030
	ctx.lr = 0x8266A43C;
	sub_82663030(ctx, base);
loc_8266A43C:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8266A440:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8266a454
	if (ctx.cr6.eq) goto loc_8266A454;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266A454;
	sub_82672C40(ctx, base);
loc_8266A454:
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a494
	if (ctx.cr0.eq) goto loc_8266A494;
	// lwz r11,240(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 240);
	// addi r10,r26,240
	ctx.r10.s64 = r26.s64 + 240;
	// b 0x8266a47c
	goto loc_8266A47C;
loc_8266A46C:
	// lbz r9,288(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 288);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8266a494
	if (ctx.cr0.eq) goto loc_8266A494;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266A47C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266a48c
	if (ctx.cr6.eq) goto loc_8266A48C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266a46c
	if (!ctx.cr0.eq) goto loc_8266A46C;
loc_8266A48C:
	// addi r3,r26,8
	ctx.r3.s64 = r26.s64 + 8;
	// bl 0x826757a0
	ctx.lr = 0x8266A494;
	sub_826757A0(ctx, base);
loc_8266A494:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82689B40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82689B48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82689c04
	if (ctx.cr6.eq) goto loc_82689C04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82689bb0
	if (!ctx.cr0.eq) goto loc_82689BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268bc30
	ctx.lr = 0x82689B94;
	sub_8268BC30(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82689bb0
	if (ctx.cr6.eq) goto loc_82689BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260fbd8
	ctx.lr = 0x82689BA8;
	sub_8260FBD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689bd0
	if (!ctx.cr0.eq) goto loc_82689BD0;
loc_82689BB0:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82689bd0
	if (ctx.cr0.eq) goto loc_82689BD0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82689be4
	goto loc_82689BE4;
loc_82689BD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
loc_82689BE4:
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82689C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82691470) {
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
	ctx.lr = 0x82691478;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,8(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r23,144(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// lwz r25,148(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r26,r11,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826914fc
	if (ctx.cr6.eq) goto loc_826914FC;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,208(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826914d4
	if (ctx.cr0.eq) goto loc_826914D4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x826914D4;
	sub_823EF5F0(ctx, base);
loc_826914D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826914F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_826914FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r24,16000
	r24.s64 = 16000;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826915e4
	if (!ctx.cr6.eq) goto loc_826915E4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82691534
	if (!ctx.cr6.eq) goto loc_82691534;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x82691534
	if (ctx.cr6.lt) goto loc_82691534;
	// addi r25,r25,200
	r25.s64 = r25.s64 + 200;
loc_82691534:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82691590
	if (ctx.cr6.eq) goto loc_82691590;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82691590
	if (!ctx.cr0.eq) goto loc_82691590;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82691574
	if (ctx.cr6.eq) goto loc_82691574;
	// addi r11,r27,-2
	ctx.r11.s64 = r27.s64 + -2;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8269155C:
	// lhau r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// bdnz 0x8269155c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269155C;
loc_82691574:
	// divwu r11,r28,r26
	ctx.r11.u64 = uint32_t(r26.u32 ? r28.u32 / r26.u32 : 0);
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// subfc r11,r11,r25
	ctx.xer.ca = r25.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82691594
	goto loc_82691594;
loc_82691590:
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
loc_82691594:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826915b4
	if (!ctx.cr6.eq) goto loc_826915B4;
	// li r11,500
	ctx.r11.s64 = 500;
	// li r10,300
	ctx.r10.s64 = 300;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// b 0x826915e4
	goto loc_826915E4;
loc_826915B4:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826915dc
	if (!ctx.cr6.gt) goto loc_826915DC;
	// mulli r10,r26,1000
	ctx.r10.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(1000));
	// divwu r10,r10,r24
	ctx.r10.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// b 0x826915e4
	goto loc_826915E4;
loc_826915DC:
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_826915E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826915f8
	if (!ctx.cr6.eq) goto loc_826915F8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82691604
	if (ctx.cr6.eq) goto loc_82691604;
loc_826915F8:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// ble cr6,0x82691628
	if (!ctx.cr6.gt) goto loc_82691628;
loc_82691604:
	// lbz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 140);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r22,156(r31)
	REX_STORE_U32(r31.u32 + 156, r22.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-9980
	ctx.r4.s64 = ctx.r10.s64 + -9980;
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x826a1e70
	ctx.lr = 0x82691628;
	sub_826A1E70(ctx, base);
loc_82691628:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82691648
	if (!ctx.cr6.eq) goto loc_82691648;
	// mulli r11,r26,1000
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(1000));
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// divwu r11,r11,r24
	ctx.r11.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
loc_82691648:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8269CCE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8269cd04
	if (ctx.cr0.eq) goto loc_8269CD04;
loc_8269CCEC:
	// cmpwi cr1,r6,0
	ctx.cr1.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr1,0x8269cd14
	if (ctx.cr1.eq) goto loc_8269CD14;
	// beq 0x8269cd18
	if (ctx.cr0.eq) goto loc_8269CD18;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x8269ccec
	goto loc_8269CCEC;
loc_8269CD04:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8269cd18
	if (ctx.cr0.eq) goto loc_8269CD18;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x8269cd04
	goto loc_8269CD04;
loc_8269CD14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CD18:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E0E0) {
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
	// bl 0x8269ee58
	ctx.lr = 0x8269E0F0;
	sub_8269EE58(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lbz r11,8952(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8952);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8269e104
	if (ctx.cr0.eq) goto loc_8269E104;
	// bl 0x826a9550
	ctx.lr = 0x8269E104;
	sub_826A9550(ctx, base);
loc_8269E104:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,31540(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31540);
	// bl 0x8269d770
	ctx.lr = 0x8269E110;
	sub_8269D770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269EF08) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bne 0x8269ef54
	if (!ctx.cr0.eq) goto loc_8269EF54;
	// bl 0x826a33d0
	ctx.lr = 0x8269EF40;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269EF4C;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269ef6c
	goto loc_8269EF6C;
loc_8269EF54:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269ef84
	if (ctx.cr0.eq) goto loc_8269EF84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_8269EF68:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8269EF6C:
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
loc_8269EF84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x8269EF8C;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ee60
	ctx.lr = 0x8269EF98;
	sub_8269EE60(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = r31.s64 + 112;
	// bl 0x8269efcc
	ctx.lr = 0x8269EFA8;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269EFCC(ctx, base);
	r30 = ctx.r30;
	r31 = ctx.r31;
	// b 0x8269ef68
	goto loc_8269EF68;
}

DEFINE_REX_FUNC(sub_826A28E8) {
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
	ctx.lr = 0x826A2900;
	sub_826A3A68(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x826a2918
	goto loc_826A2918;
loc_826A2908:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x826a2938
	if (ctx.cr6.eq) goto loc_826A2938;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_826A2918:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a2908
	if (!ctx.cr6.eq) goto loc_826A2908;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826A2924:
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
loc_826A2938:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a2924
	goto loc_826A2924;
}

DEFINE_REX_FUNC(__savevmx_19) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_74) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B6398) {
	REX_FUNC_PROLOGUE();
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B64B0) {
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
	// bl 0x826bc340
	ctx.lr = 0x826B64CC;
	sub_826BC340(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,640(r31)
	REX_STORE_U32(r31.u32 + 640, r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// stw r30,644(r31)
	REX_STORE_U32(r31.u32 + 644, r30.u32);
	// stw r30,648(r31)
	REX_STORE_U32(r31.u32 + 648, r30.u32);
	// stw r30,652(r31)
	REX_STORE_U32(r31.u32 + 652, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826B64F8;
	sub_826A2E60(ctx, base);
	// stw r30,656(r31)
	REX_STORE_U32(r31.u32 + 656, r30.u32);
	// stw r30,660(r31)
	REX_STORE_U32(r31.u32 + 660, r30.u32);
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

DEFINE_REX_FUNC(sub_826B9F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B9F10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// beq cr6,0x826b9f48
	if (ctx.cr6.eq) goto loc_826B9F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9fd8
	if (ctx.cr6.lt) goto loc_826B9FD8;
loc_826B9F48:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9f68
	if (ctx.cr6.eq) goto loc_826B9F68;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B9F68:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b9fd8
	if (ctx.cr6.lt) goto loc_826B9FD8;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9f90
	if (ctx.cr6.eq) goto loc_826B9F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B9F90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b9fd8
	if (ctx.cr6.lt) goto loc_826B9FD8;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x826c1c98
	ctx.lr = 0x826B9FA0;
	sub_826C1C98(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x826c1c98
	ctx.lr = 0x826B9FA8;
	sub_826C1C98(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x826c1c98
	ctx.lr = 0x826B9FB0;
	sub_826C1C98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r29,288(r31)
	REX_STORE_U64(r31.u32 + 288, r29.u64);
	// std r29,304(r31)
	REX_STORE_U64(r31.u32 + 304, r29.u64);
	// std r29,296(r31)
	REX_STORE_U64(r31.u32 + 296, r29.u64);
	// stw r29,316(r31)
	REX_STORE_U32(r31.u32 + 316, r29.u32);
	// stw r29,320(r31)
	REX_STORE_U32(r31.u32 + 320, r29.u32);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,324(r31)
	REX_STORE_U32(r31.u32 + 324, r29.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stw r29,328(r31)
	REX_STORE_U32(r31.u32 + 328, r29.u32);
loc_826B9FD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826C1798) {
	REX_FUNC_PROLOGUE();
	// b 0x826c1718
	sub_826C1718(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C17E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C1AA8) {
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
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C32A0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c32d0
	if (ctx.cr6.eq) goto loc_826C32D0;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C32D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C32D0:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C32E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c3300
	if (ctx.cr6.eq) goto loc_826C3300;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x823ef910
	ctx.lr = 0x826C32F8;
	sub_823EF910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
loc_826C3300:
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

DEFINE_REX_FUNC(sub_826C68D8) {
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
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f0350
	ctx.lr = 0x826C68FC;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_826C85F0) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C8920) {
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
	ctx.lr = 0x826C8928;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x826c6880
	ctx.lr = 0x826C895C;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c8aa8
	if (ctx.cr6.lt) goto loc_826C8AA8;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826C8978:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826c8978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C8978;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32147
	ctx.r8.s64 = -2106785792;
	// lis r7,-32147
	ctx.r7.s64 = -2106785792;
	// lis r6,-32147
	ctx.r6.s64 = -2106785792;
	// lis r5,-32147
	ctx.r5.s64 = -2106785792;
	// addi r3,r8,-30712
	ctx.r3.s64 = ctx.r8.s64 + -30712;
	// addi r4,r11,-31384
	ctx.r4.s64 = ctx.r11.s64 + -31384;
	// addi r11,r7,-31280
	ctx.r11.s64 = ctx.r7.s64 + -31280;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r10,r6,-31248
	ctx.r10.s64 = ctx.r6.s64 + -31248;
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// addi r8,r5,-31248
	ctx.r8.s64 = ctx.r5.s64 + -31248;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// std r29,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r29.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r29.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r6)
	REX_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r4.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, r30.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,60(r7)
	REX_STORE_U32(ctx.r7.u32 + 60, r28.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, r26.u32);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x826a1e70
	ctx.lr = 0x826C8A5C;
	sub_826A1E70(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r5,68(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826c8a90
	if (!ctx.cr6.eq) goto loc_826C8A90;
loc_826C8A6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c8600
	ctx.lr = 0x826C8A74;
	sub_826C8600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c8aa8
	if (ctx.cr6.lt) goto loc_826C8AA8;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x826c8a6c
	if (ctx.cr6.lt) goto loc_826C8A6C;
loc_826C8A90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-20880
	ctx.r5.s64 = ctx.r11.s64 + -20880;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c63a0
	ctx.lr = 0x826C8AA8;
	sub_826C63A0(ctx, base);
loc_826C8AA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D8C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826D8C78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826d8ca8
	if (!ctx.cr6.eq) goto loc_826D8CA8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8ca8
	if (ctx.cr6.eq) goto loc_826D8CA8;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// b 0x826d8cc4
	goto loc_826D8CC4;
loc_826D8CA8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826d8ce0
	if (!ctx.cr6.eq) goto loc_826D8CE0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8ce0
	if (ctx.cr6.eq) goto loc_826D8CE0;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
loc_826D8CC4:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D8CD0;
	sub_826C68D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D8CE0;
	sub_826C68D8(ctx, base);
loc_826D8CE0:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8d1c
	if (ctx.cr6.eq) goto loc_826D8D1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d8d0c
	if (ctx.cr6.eq) goto loc_826D8D0C;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D8D0C;
	sub_826C68D8(ctx, base);
loc_826D8D0C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D8D1C;
	sub_826C68D8(ctx, base);
loc_826D8D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826DD148) {
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
	ctx.lr = 0x826DD150;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x826dd1a0
	if (ctx.cr6.eq) goto loc_826DD1A0;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dd1a0
	if (ctx.cr6.eq) goto loc_826DD1A0;
	// ld r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 48);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x826dd1a0
	if (ctx.cr6.eq) goto loc_826DD1A0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DD1A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c6880
	ctx.lr = 0x826DD1B4;
	sub_826C6880(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd2bc
	if (ctx.cr6.lt) goto loc_826DD2BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x826dd200
	if (ctx.cr6.gt) goto loc_826DD200;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826DD200:
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x826dd294
	if (!ctx.cr6.eq) goto loc_826DD294;
	// bl 0x826dccc8
	ctx.lr = 0x826DD21C;
	sub_826DCCC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd2bc
	if (ctx.cr6.lt) goto loc_826DD2BC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// beq cr6,0x826dd2d8
	if (ctx.cr6.eq) goto loc_826DD2D8;
	// ld r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 96);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x826dd2d8
	if (!ctx.cr6.gt) goto loc_826DD2D8;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826dd274
	if (ctx.cr6.gt) goto loc_826DD274;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DD274:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DD294:
	// bl 0x826dcd90
	ctx.lr = 0x826DD298;
	sub_826DCD90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd2bc
	if (ctx.cr6.lt) goto loc_826DD2BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DD2BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dd2d8
	if (ctx.cr6.eq) goto loc_826DD2D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c68d8
	ctx.lr = 0x826DD2D8;
	sub_826C68D8(ctx, base);
loc_826DD2D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E2CE0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r3,520
	ctx.r4.s64 = ctx.r3.s64 + 520;
	// addi r3,r3,524
	ctx.r3.s64 = ctx.r3.s64 + 524;
	// lwz r5,96(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// bl 0x826e2c30
	ctx.lr = 0x826E2D00;
	sub_826E2C30(ctx, base);
	// lwz r10,100(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826e2d18
	if (!ctx.cr6.eq) goto loc_826E2D18;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r9,r11,8504
	ctx.r9.s64 = ctx.r11.s64 + 8504;
	// b 0x826e2d20
	goto loc_826E2D20;
loc_826E2D18:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r9,r11,25480
	ctx.r9.s64 = ctx.r11.s64 + 25480;
loc_826E2D20:
	// stw r9,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826e2d58
	if (!ctx.cr6.eq) goto loc_826E2D58;
	// lwz r11,96(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x826e2d44
	if (!ctx.cr6.eq) goto loc_826E2D44;
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// addi r9,r11,-29408
	ctx.r9.s64 = ctx.r11.s64 + -29408;
	// b 0x826e2d54
	goto loc_826E2D54;
loc_826E2D44:
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// bne cr6,0x826e2d58
	if (!ctx.cr6.eq) goto loc_826E2D58;
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// addi r9,r11,-28160
	ctx.r9.s64 = ctx.r11.s64 + -28160;
loc_826E2D54:
	// stw r9,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
loc_826E2D58:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x826e2d70
	if (!ctx.cr6.eq) goto loc_826E2D70;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-24680
	ctx.r10.s64 = ctx.r11.s64 + -24680;
	// stw r10,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r10.u32);
loc_826E2D70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826EB870) {
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
	ctx.lr = 0x826EB878;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,456(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 456);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r29,452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 452);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826eb8c0
	if (ctx.cr6.lt) goto loc_826EB8C0;
	// lhz r10,118(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// bgt cr6,0x826eba10
	if (ctx.cr6.gt) goto loc_826EBA10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// ble cr6,0x826eb8c0
	if (!ctx.cr6.gt) goto loc_826EB8C0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_826EB8C0:
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
	// stw r9,452(r4)
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r9.u32);
	// lhz r8,118(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826eb8e8
	if (!ctx.cr6.gt) goto loc_826EB8E8;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
loc_826EB8E8:
	// mr r27,r29
	r27.u64 = r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_826EB8F0:
	// lwz r11,452(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826eb904
	if (!ctx.cr6.lt) goto loc_826EB904;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,452(r4)
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r11.u32);
loc_826EB904:
	// lhz r11,182(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 182);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r24,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r24.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x826eba08
	if (ctx.cr0.lt) goto loc_826EBA08;
	// mulli r11,r24,56
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r31,r11,200
	r31.s64 = ctx.r11.s64 + 200;
loc_826EB920:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826eb964
	if (!ctx.cr6.gt) goto loc_826EB964;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826f4ee8
	ctx.lr = 0x826EB938;
	sub_826F4EE8(ctx, base);
	// lwz r11,212(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 212);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826EB954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826f4ee8
	ctx.lr = 0x826EB964;
	sub_826F4EE8(ctx, base);
loc_826EB964:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// ble cr6,0x826eb98c
	if (!ctx.cr6.gt) goto loc_826EB98C;
	// lwz r10,212(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 212);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r29,r27
	ctx.r6.u64 = r27.u64 - r29.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826EB98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826EB98C:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// ble cr6,0x826eb9d4
	if (!ctx.cr6.gt) goto loc_826EB9D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826f4ee8
	ctx.lr = 0x826EB9A4;
	sub_826F4EE8(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r27,r28
	ctx.r6.u64 = r28.u64 - r27.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,212(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826EB9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826f4ee8
	ctx.lr = 0x826EB9D4;
	sub_826F4EE8(ctx, base);
loc_826EB9D4:
	// cmpw cr6,r23,r28
	ctx.cr6.compare<int32_t>(r23.s32, r28.s32, ctx.xer);
	// ble cr6,0x826eb9fc
	if (!ctx.cr6.gt) goto loc_826EB9FC;
	// lwz r10,212(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 212);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r28,r23
	ctx.r6.u64 = r23.u64 - r28.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826EB9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826EB9FC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r31,r31,-56
	r31.s64 = r31.s64 + -56;
	// bge 0x826eb920
	if (!ctx.cr0.lt) goto loc_826EB920;
loc_826EBA08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_826EBA10:
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// subf r8,r9,r28
	ctx.r8.u64 = r28.u64 - ctx.r9.u64;
	// stw r8,452(r4)
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r8.u32);
	// lhz r7,118(r5)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x826eb8f0
	if (!ctx.cr6.gt) goto loc_826EB8F0;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// b 0x826eb8f0
	goto loc_826EB8F0;
}

DEFINE_REX_FUNC(sub_826F7EE8) {
	REX_FUNC_PROLOGUE();
	// b 0x826f7e58
	sub_826F7E58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826F7FF8) {
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
	ctx.lr = 0x826F8000;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lwz r6,12(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r30,16(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r29,20(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r11,r5,r10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r10.u64);
	// mulld r28,r9,r6
	r28.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r6.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulld r10,r10,r9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r9.u64);
	// mulld r9,r5,r6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r6.u64);
	// sradi r27,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	r27.s64 = ctx.r11.s64 >> 30;
	// mulld r5,r8,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r7.u64);
	// sradi r6,r28,30
	ctx.xer.ca = (r28.s64 < 0) & ((r28.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = r28.s64 >> 30;
	// sradi r28,r10,30
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FFFFFFF) != 0);
	r28.s64 = ctx.r10.s64 >> 30;
	// mulld r11,r7,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r7.u64);
	// sradi r26,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	r26.s64 = ctx.r9.s64 >> 30;
	// sradi r10,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s64 >> 30;
	// sradi r9,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 30;
	// lis r5,16383
	ctx.r5.s64 = 1073676288;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// mulld r25,r3,r5
	r25.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r5.u64);
	// mulld r24,r31,r9
	r24.s64 = static_cast<int64_t>(r31.u64 * ctx.r9.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r5,r31,r5
	ctx.r5.s64 = static_cast<int64_t>(r31.u64 * ctx.r5.u64);
	// mulld r3,r3,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r9.u64);
	// sradi r31,r25,30
	ctx.xer.ca = (r25.s64 < 0) & ((r25.u64 & 0x3FFFFFFF) != 0);
	r31.s64 = r25.s64 >> 30;
	// mulld r9,r11,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r8.u64);
	// sradi r25,r24,30
	ctx.xer.ca = (r24.s64 < 0) & ((r24.u64 & 0x3FFFFFFF) != 0);
	r25.s64 = r24.s64 >> 30;
	// mulld r24,r10,r7
	r24.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r7.u64);
	// sradi r5,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s64 >> 30;
	// mulld r11,r11,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r7.u64);
	// sradi r3,r3,30
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 30;
	// sradi r9,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 30;
	// mulld r8,r10,r8
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// sradi r7,r24,30
	ctx.xer.ca = (r24.s64 < 0) & ((r24.u64 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = r24.s64 >> 30;
	// sradi r24,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	r24.s64 = ctx.r11.s64 >> 30;
	// sradi r8,r8,30
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x3FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s64 >> 30;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// extsw r7,r24
	ctx.r7.s64 = r24.s32;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// extsw r8,r27
	ctx.r8.s64 = r27.s32;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r20,r30
	r20.s64 = r30.s32;
	// extsw r27,r7
	r27.s64 = ctx.r7.s32;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// mulld r30,r20,r27
	r30.s64 = static_cast<int64_t>(r20.u64 * r27.u64);
	// extsw r6,r31
	ctx.r6.s64 = r31.s32;
	// extsw r28,r28
	r28.s64 = r28.s32;
	// extsw r26,r26
	r26.s64 = r26.s32;
	// extsw r7,r25
	ctx.r7.s64 = r25.s32;
	// sradi r19,r30,30
	ctx.xer.ca = (r30.s64 < 0) & ((r30.u64 & 0x3FFFFFFF) != 0);
	r19.s64 = r30.s64 >> 30;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r24,r26,r28
	r24.u64 = r28.u64 - r26.u64;
	// add r30,r6,r7
	r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// subf r25,r5,r3
	r25.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulld r7,r9,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// mulld r6,r9,r27
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * r27.u64);
	// mulld r5,r20,r8
	ctx.r5.s64 = static_cast<int64_t>(r20.u64 * ctx.r8.u64);
	// sradi r4,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s64 >> 30;
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// sradi r9,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s64 >> 30;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r8,r19
	ctx.r8.s64 = r19.s32;
	// subf r26,r11,r10
	r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r27,r7,r6
	r27.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r26,r27
	ctx.r11.u64 = r26.u64 + r27.u64;
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// bl 0x826f7ef0
	ctx.lr = 0x826F81B8;
	sub_826F7EF0(ctx, base);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// subf r7,r27,r28
	ctx.r7.u64 = r28.u64 - r27.u64;
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - r29.u64;
	// subf r10,r30,r7
	ctx.r10.u64 = ctx.r7.u64 - r30.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// bl 0x826f7ef0
	ctx.lr = 0x826F81E4;
	sub_826F7EF0(ctx, base);
	// subf r4,r23,r22
	ctx.r4.u64 = r22.u64 - r23.u64;
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r28
	ctx.r8.u64 = r28.u64 - r30.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// subf r10,r24,r8
	ctx.r10.u64 = ctx.r8.u64 - r24.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x826f7ef0
	ctx.lr = 0x826F8214;
	sub_826F7EF0(ctx, base);
	// add r5,r23,r22
	ctx.r5.u64 = r23.u64 + r22.u64;
	// subf r4,r29,r28
	ctx.r4.u64 = r28.u64 - r29.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r27
	ctx.r8.u64 = r27.u64 - r26.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - r31.u64;
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - r25.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x826f7ef0
	ctx.lr = 0x826F8244;
	sub_826F7EF0(ctx, base);
	// rlwinm r5,r22,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r23,r5
	ctx.r4.u64 = ctx.r5.u64 - r23.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8271A7F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a870
	if (ctx.cr6.eq) goto loc_8271A870;
	// lwz r11,20908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a85c
	if (ctx.cr6.eq) goto loc_8271A85C;
	// lwz r11,21924(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21924);
	// addi r7,r3,21376
	ctx.r7.s64 = ctx.r3.s64 + 21376;
	// addi r6,r3,21388
	ctx.r6.s64 = ctx.r3.s64 + 21388;
	// addi r5,r3,21400
	ctx.r5.s64 = ctx.r3.s64 + 21400;
	// stw r7,2436(r3)
	REX_STORE_U32(ctx.r3.u32 + 2436, ctx.r7.u32);
	// addi r4,r3,21412
	ctx.r4.s64 = ctx.r3.s64 + 21412;
	// stw r6,2440(r3)
	REX_STORE_U32(ctx.r3.u32 + 2440, ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,2444(r3)
	REX_STORE_U32(ctx.r3.u32 + 2444, ctx.r5.u32);
	// stw r4,2448(r3)
	REX_STORE_U32(ctx.r3.u32 + 2448, ctx.r4.u32);
	// beq cr6,0x8271a848
	if (ctx.cr6.eq) goto loc_8271A848;
	// addi r11,r3,21328
	ctx.r11.s64 = ctx.r3.s64 + 21328;
	// addi r10,r3,21340
	ctx.r10.s64 = ctx.r3.s64 + 21340;
	// addi r9,r3,21352
	ctx.r9.s64 = ctx.r3.s64 + 21352;
	// addi r8,r3,21364
	ctx.r8.s64 = ctx.r3.s64 + 21364;
	// b 0x8271a8c0
	goto loc_8271A8C0;
loc_8271A848:
	// addi r11,r3,21424
	ctx.r11.s64 = ctx.r3.s64 + 21424;
	// addi r10,r3,21436
	ctx.r10.s64 = ctx.r3.s64 + 21436;
	// addi r9,r3,21448
	ctx.r9.s64 = ctx.r3.s64 + 21448;
	// addi r8,r3,21460
	ctx.r8.s64 = ctx.r3.s64 + 21460;
	// b 0x8271a8c0
	goto loc_8271A8C0;
loc_8271A85C:
	// addi r11,r3,21424
	ctx.r11.s64 = ctx.r3.s64 + 21424;
	// addi r10,r3,21436
	ctx.r10.s64 = ctx.r3.s64 + 21436;
	// addi r9,r3,21448
	ctx.r9.s64 = ctx.r3.s64 + 21448;
	// addi r8,r3,21460
	ctx.r8.s64 = ctx.r3.s64 + 21460;
	// b 0x8271a8a0
	goto loc_8271A8A0;
loc_8271A870:
	// lwz r11,22528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a890
	if (ctx.cr6.eq) goto loc_8271A890;
	// addi r11,r3,22584
	ctx.r11.s64 = ctx.r3.s64 + 22584;
	// addi r10,r3,22596
	ctx.r10.s64 = ctx.r3.s64 + 22596;
	// addi r9,r3,22608
	ctx.r9.s64 = ctx.r3.s64 + 22608;
	// addi r8,r3,22620
	ctx.r8.s64 = ctx.r3.s64 + 22620;
	// b 0x8271a8c0
	goto loc_8271A8C0;
loc_8271A890:
	// addi r11,r3,2352
	ctx.r11.s64 = ctx.r3.s64 + 2352;
	// addi r10,r3,2364
	ctx.r10.s64 = ctx.r3.s64 + 2364;
	// addi r9,r3,2376
	ctx.r9.s64 = ctx.r3.s64 + 2376;
	// addi r8,r3,2388
	ctx.r8.s64 = ctx.r3.s64 + 2388;
loc_8271A8A0:
	// addi r4,r3,21412
	ctx.r4.s64 = ctx.r3.s64 + 21412;
	// addi r5,r3,21400
	ctx.r5.s64 = ctx.r3.s64 + 21400;
	// addi r6,r3,21388
	ctx.r6.s64 = ctx.r3.s64 + 21388;
	// stw r4,2448(r3)
	REX_STORE_U32(ctx.r3.u32 + 2448, ctx.r4.u32);
	// addi r7,r3,21376
	ctx.r7.s64 = ctx.r3.s64 + 21376;
	// stw r5,2444(r3)
	REX_STORE_U32(ctx.r3.u32 + 2444, ctx.r5.u32);
	// stw r6,2440(r3)
	REX_STORE_U32(ctx.r3.u32 + 2440, ctx.r6.u32);
	// stw r7,2436(r3)
	REX_STORE_U32(ctx.r3.u32 + 2436, ctx.r7.u32);
loc_8271A8C0:
	// stw r11,2420(r3)
	REX_STORE_U32(ctx.r3.u32 + 2420, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,2424(r3)
	REX_STORE_U32(ctx.r3.u32 + 2424, ctx.r10.u32);
	// stw r9,2428(r3)
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r9.u32);
	// stw r8,2432(r3)
	REX_STORE_U32(ctx.r3.u32 + 2432, ctx.r8.u32);
	// stw r11,2400(r3)
	REX_STORE_U32(ctx.r3.u32 + 2400, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82721668) {
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
	ctx.lr = 0x82721670;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r24,r6,-2
	r24.s64 = ctx.r6.s64 + -2;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r28,r4,2
	r28.s64 = ctx.r4.s64 + 2;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r31,3(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// addi r27,r4,3
	r27.s64 = ctx.r4.s64 + 3;
	// mulli r7,r7,14
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(14));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r31,r10
	ctx.r7.u64 = r31.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r7,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82721738
	if (!ctx.cr6.gt) goto loc_82721738;
	// addi r10,r24,-3
	ctx.r10.s64 = r24.s64 + -3;
	// addi r26,r4,-1
	r26.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r4,-2
	r25.s64 = ctx.r4.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827216E8:
	// lbzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzx r30,r26,r11
	r30.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// lbzx r7,r25,r11
	ctx.r7.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r27,r11
	r31.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r7,r7,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// srawi r10,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 7;
	// stwu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x827216e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827216E8;
loc_82721738:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r4,-3(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r11,r29,14
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(14));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r7,r9,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// ble cr6,0x827217d4
	if (!ctx.cr6.gt) goto loc_827217D4;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_827217A8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x827217c0
	if (!ctx.cr6.gt) goto loc_827217C0;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_827217C0:
	// stbx r31,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r31.u8);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stbx r11,r8,r3
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x827217a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827217A8;
loc_827217D4:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82729B88) {
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
	ctx.lr = 0x82729B90;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c94
	ctx.lr = 0x82729B98;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// fmr f23,f2
	f23.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	f26.f64 = ctx.f4.f64;
	// fmr f24,f5
	f24.f64 = ctx.f5.f64;
	// bne cr6,0x82729bd0
	if (!ctx.cr6.eq) goto loc_82729BD0;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce0
	ctx.lr = 0x82729BCC;
	// b 0x826a1cd0
	return;
loc_82729BD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r8,15360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r23,15376(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r22,15380(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 15380);
	// srawi r19,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r19.s64 = ctx.r10.s32 >> 1;
	// frsp f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64));
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r26.s64 = ctx.r8.s32 >> 1;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// srawi r25,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r25.s64 = ctx.r10.s32 >> 5;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r24,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	r24.s64 = ctx.r10.s32 >> 6;
	// lfd f28,-3744(r6)
	f28.u64 = REX_LOAD_U64(ctx.r6.u32 + -3744);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// fcmpu cr6,f25,f28
	ctx.cr6.compare(f25.f64, f28.f64);
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r25.u32);
	// stw r24,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r24.u32);
	// beq cr6,0x8272ae7c
	if (ctx.cr6.eq) goto loc_8272AE7C;
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(f27.f64, f28.f64);
	// beq cr6,0x8272ae7c
	if (ctx.cr6.eq) goto loc_8272AE7C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f29,4296(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fsub f11,f13,f23
	ctx.f11.f64 = ctx.f13.f64 - f23.f64;
	// fdiv f12,f29,f25
	ctx.f12.f64 = f29.f64 / f25.f64;
	// fdiv f30,f11,f25
	f30.f64 = ctx.f11.f64 / f25.f64;
	// fmul f0,f12,f23
	ctx.f0.f64 = ctx.f12.f64 * f23.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82729c84
	if (!ctx.cr6.gt) goto loc_82729C84;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_82729C84:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82729C8C;
	sub_826A3CB0(ctx, base);
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82729cac
	if (!ctx.cr6.lt) goto loc_82729CAC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82729CAC:
	// bl 0x826a2f00
	ctx.lr = 0x82729CB0;
	sub_826A2F00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f0,30712(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 30712);
	// fadd f0,f30,f0
	ctx.f0.f64 = f30.f64 + ctx.f0.f64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82729ce8
	if (!ctx.cr6.lt) goto loc_82729CE8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82729CE8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82729CF0;
	sub_826A2F00(ctx, base);
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82729d14
	if (ctx.cr6.lt) goto loc_82729D14;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
loc_82729D14:
	// bl 0x826a2f00
	ctx.lr = 0x82729D18;
	sub_826A2F00(ctx, base);
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f28.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82729D20;
	sub_826A3CB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsel f1,f31,f31,f28
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : f28.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82729D34;
	sub_826A3CB0(ctx, base);
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,15356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15356);
	// fdiv f13,f29,f27
	ctx.f13.f64 = f29.f64 / f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f30,3728(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fmul f0,f13,f26
	ctx.f0.f64 = ctx.f13.f64 * f26.f64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fsub f9,f10,f26
	ctx.f9.f64 = ctx.f10.f64 - f26.f64;
	// fdiv f8,f9,f27
	ctx.f8.f64 = ctx.f9.f64 / f27.f64;
	// fadd f31,f8,f30
	f31.f64 = ctx.f8.f64 + f30.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82729d84
	if (!ctx.cr6.gt) goto loc_82729D84;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_82729D84:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82729D8C;
	sub_826A3CB0(ctx, base);
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82729dac
	if (!ctx.cr6.lt) goto loc_82729DAC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82729DAC:
	// bl 0x826a2f00
	ctx.lr = 0x82729DB0;
	sub_826A2F00(ctx, base);
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82729ddc
	if (ctx.cr6.lt) goto loc_82729DDC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82729DDC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82729DE4;
	sub_826A2F00(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f28.f64;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// rlwinm r18,r11,0,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r30,r10,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r18.u32);
	// rlwinm r14,r28,0,0,30
	r14.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r14.u32);
	// bl 0x826a3cb0
	ctx.lr = 0x82729E14;
	sub_826A3CB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r28,r9,0,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bge cr6,0x82729e38
	if (!ctx.cr6.lt) goto loc_82729E38;
	// li r28,2
	r28.s64 = 2;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
loc_82729E38:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,15388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r6,15392(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// srawi r9,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// lwz r16,15384(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15384);
	// srawi r7,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r7.s64 = r29.s32 >> 1;
	// fcmpu cr6,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f24.f64, f30.f64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfd f0,30696(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 30696);
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lfd f13,30704(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 30704);
	// fmul f10,f23,f0
	ctx.f10.f64 = f23.f64 * ctx.f0.f64;
	// fmul f9,f25,f13
	ctx.f9.f64 = f25.f64 * ctx.f13.f64;
	// srawi r5,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r5.s64 = r14.s32 >> 1;
	// fmul f11,f26,f0
	ctx.f11.f64 = f26.f64 * ctx.f0.f64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// fmul f8,f27,f13
	ctx.f8.f64 = f27.f64 * ctx.f13.f64;
	// lfd f12,8312(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 8312);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f9
	ctx.f5.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r9,r11,r18
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// fmul f3,f9,f12
	ctx.f3.f64 = ctx.f9.f64 * ctx.f12.f64;
	// mullw r7,r29,r30
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r15,r11,r8
	r15.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// ble cr6,0x82729f08
	if (!ctx.cr6.gt) goto loc_82729F08;
	// fmr f24,f30
	f24.f64 = f30.f64;
	// b 0x82729f14
	goto loc_82729F14;
loc_82729F08:
	// fcmpu cr6,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f24.f64, f28.f64);
	// bge cr6,0x82729f14
	if (!ctx.cr6.lt) goto loc_82729F14;
	// fmr f24,f28
	f24.f64 = f28.f64;
loc_82729F14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,128
	r30.s64 = 128;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfd f0,-15880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -15880);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// fmul f0,f24,f0
	ctx.f0.f64 = f24.f64 * ctx.f0.f64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v1,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// ble cr6,0x82729fe4
	if (!ctx.cr6.gt) goto loc_82729FE4;
loc_82729F48:
	// lwz r10,15360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82729f70
	if (!ctx.cr6.gt) goto loc_82729F70;
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
loc_82729F5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82729f5c
	if (ctx.cr6.lt) goto loc_82729F5C;
loc_82729F70:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82729f94
	if (!ctx.cr6.gt) goto loc_82729F94;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_82729F84:
	// stbx r30,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r30.u8);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82729f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729F84;
loc_82729F94:
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82729fcc
	if (!ctx.cr6.gt) goto loc_82729FCC;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82729FB8:
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729fb8
	if (ctx.cr6.lt) goto loc_82729FB8;
loc_82729FCC:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// blt cr6,0x82729f48
	if (ctx.cr6.lt) goto loc_82729F48;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82729FE4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r15.s32 >> 11;
	// lwz r9,15372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8272a01c
	if (!ctx.cr6.gt) goto loc_8272A01C;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_8272A00C:
	// dcbt r11,r9
	// dcbt r11,r10
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8272a00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A00C;
loc_8272A01C:
	// srawi r11,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r15.s32 >> 12;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// ble cr6,0x8272a040
	if (!ctx.cr6.gt) goto loc_8272A040;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8272A030:
	// dcbt r11,r23
	// dcbt r11,r22
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8272a030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A030;
loc_8272A040:
	// addi r4,r28,-2
	ctx.r4.s64 = r28.s64 + -2;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8272ab00
	if (!ctx.cr6.lt) goto loc_8272AB00;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r17,r11,12720
	r17.s64 = ctx.r11.s64 + 12720;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lfs f13,2208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2208);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r17.u32);
loc_8272A080:
	// clrlwi r26,r15,21
	r26.u64 = r15.u32 & 0x7FF;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r15.s32 >> 11;
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r7,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// ble cr6,0x8272a0d8
	if (!ctx.cr6.gt) goto loc_8272A0D8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8272A0CC:
	// dcbt r11,r28
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8272a0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A0CC;
loc_8272A0D8:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272a104
	if (!ctx.cr6.gt) goto loc_8272A104;
	// addi r11,r16,-1
	ctx.r11.s64 = r16.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8272a100
	if (ctx.cr6.eq) goto loc_8272A100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272A0F8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A0F8;
loc_8272A100:
	// add r3,r16,r9
	ctx.r3.u64 = r16.u64 + ctx.r9.u64;
loc_8272A104:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8272A110:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A110;
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x8272a2cc
	if (!ctx.cr0.gt) goto loc_8272A2CC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8272A13C:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272A150:
	// srawi r9,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r30.s32 >> 11;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r4,r30,21
	ctx.r4.u64 = r30.u32 & 0x7FF;
	// clrlwi r30,r8,21
	r30.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r22,r4,r27
	r22.u64 = r27.u64 - ctx.r4.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r21,0(r7)
	r21.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r30,r27
	r20.u64 = r27.u64 - r30.u64;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r21,r7
	ctx.r7.u64 = ctx.r7.u64 - r21.u64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// clrlwi r15,r8,21
	r15.u64 = ctx.r8.u32 & 0x7FF;
	// subf r7,r23,r7
	ctx.r7.u64 = ctx.r7.u64 - r23.u64;
	// stw r21,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r21.u32);
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r22,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r22.u32);
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r23,r15,r27
	r23.u64 = r27.u64 - r15.u64;
	// lbz r22,1(r9)
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r21,r8,21
	r21.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r14,0(r7)
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// subf r7,r22,r7
	ctx.r7.u64 = ctx.r7.u64 - r22.u64;
	// stw r22,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r22.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// subf r22,r21,r27
	r22.u64 = r27.u64 - r21.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r30,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r30.u32);
	// stw r20,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r20.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + r28.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r30.u32);
	// stw r15,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r15.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r15,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r15.u32);
	// stw r23,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r23.u32);
	// lbzx r7,r4,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// lbz r5,1(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r6,r4,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r22,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r22.u32);
	// stwu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r21,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r21.u32);
	// add r30,r8,r29
	r30.u64 = ctx.r8.u64 + r29.u64;
	// stwu r21,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8272a150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A150;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = r17.s64 + 256;
	// bl 0x82727db8
	ctx.lr = 0x8272A2B0;
	sub_82727DB8(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8272a13c
	if (!ctx.cr0.eq) goto loc_8272A13C;
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,116(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8272A2CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8272a354
	if (!ctx.cr6.gt) goto loc_8272A354;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8272A2D8:
	// srawi r11,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8272a2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A2D8;
loc_8272A354:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x8272a38c
	if (!ctx.cr6.lt) goto loc_8272A38C;
	// subf r11,r11,r14
	ctx.r11.u64 = r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8272A368:
	// srawi r10,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8272a368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A368;
loc_8272A38C:
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8272a3b8
	if (!ctx.cr6.lt) goto loc_8272A3B8;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8272A3A4:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272a3a4
	if (ctx.cr6.lt) goto loc_8272A3A4;
loc_8272A3B8:
	// srawi r11,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r15.s32 >> 12;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// srawi r9,r15,1
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	ctx.r9.s64 = r15.s32 >> 1;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r20,r11,r19
	r20.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,88(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r23,r9,21
	r23.u64 = ctx.r9.u32 & 0x7FF;
	// add r11,r20,r19
	ctx.r11.u64 = r20.u64 + r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272a400
	if (!ctx.cr6.gt) goto loc_8272A400;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8272A3F0:
	// dcbt r11,r10
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8272a3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A3F0;
loc_8272A400:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272a428
	if (!ctx.cr6.gt) goto loc_8272A428;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,128
	ctx.r11.s64 = 128;
loc_8272A414:
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x8272a414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A414;
loc_8272A428:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8272A434:
	// stwu r23,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A434;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// subfic r26,r23,2048
	ctx.xer.ca = r23.u32 <= 2048;
	r26.u64 = static_cast<uint64_t>(2048) - r23.u64;
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r21,r9,r10
	r21.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x8272a604
	if (!ctx.cr0.gt) goto loc_8272A604;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r20,r10
	r28.u64 = r20.u64 + ctx.r10.u64;
	// add r27,r20,r9
	r27.u64 = r20.u64 + ctx.r9.u64;
loc_8272A468:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-12
	ctx.r10.s64 = r17.s64 + -12;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272A47C:
	// srawi r7,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 12;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r8,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r8.s64 = r30.s32 >> 1;
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// clrlwi r5,r8,21
	ctx.r5.u64 = ctx.r8.u32 & 0x7FF;
	// add r8,r30,r6
	ctx.r8.u64 = r30.u64 + ctx.r6.u64;
	// lbzx r4,r28,r7
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r14,r9,r19
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r5,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// clrlwi r4,r5,21
	ctx.r4.u64 = ctx.r5.u32 & 0x7FF;
	// stw r14,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r14.u32);
	// lbzx r3,r9,r19
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lbzx r14,r28,r7
	r14.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbzx r3,r9,r19
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r4,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r5,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// stw r30,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r30.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r14,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r14.u32);
	// subf r5,r3,r26
	ctx.r5.u64 = r26.u64 - ctx.r3.u64;
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r14,0(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
	// stw r14,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r14.u32);
	// lbzx r14,r9,r19
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbzx r4,r28,r7
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r3,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r5,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// stw r4,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// clrlwi r5,r3,21
	ctx.r5.u64 = ctx.r3.u32 & 0x7FF;
	// stw r14,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r14.u32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r14,0(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// stw r30,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r30.u32);
	// stw r14,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r14.u32);
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbzx r14,r28,r7
	r14.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r3,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// stwu r5,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stw r4,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// stw r30,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r30.u32);
	// stw r14,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r14.u32);
	// lbzx r3,r27,r7
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + ctx.r7.u32);
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r5,r9,r19
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// stw r3,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r3.u32);
	// add r30,r8,r6
	r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r7,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r7.u32);
	// stwu r5,128(r11)
	ea = 128 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A47C;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r17,256
	ctx.r5.s64 = r17.s64 + 256;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82728478
	ctx.lr = 0x8272A5E8;
	sub_82728478(ctx, base);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// bne 0x8272a468
	if (!ctx.cr0.eq) goto loc_8272A468;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8272A604:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x8272a6c4
	if (!ctx.cr6.gt) goto loc_8272A6C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r20,r11
	ctx.r8.u64 = r20.u64 + ctx.r11.u64;
	// add r7,r20,r10
	ctx.r7.u64 = r20.u64 + ctx.r10.u64;
loc_8272A620:
	// srawi r10,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r10.s64 = r30.s32 >> 12;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r4,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r4.s64 = r30.s32 >> 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// subfic r9,r3,2048
	ctx.xer.ca = ctx.r3.u32 <= 2048;
	ctx.r9.u64 = static_cast<uint64_t>(2048) - ctx.r3.u64;
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r28,r11,r19
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// subf r27,r23,r9
	r27.u64 = ctx.r9.u64 - r23.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r28,r23
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 11;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x8272a620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A620;
loc_8272A6C4:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272a734
	if (!ctx.cr6.lt) goto loc_8272A734;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r20,r10
	ctx.r9.u64 = r20.u64 + ctx.r10.u64;
	// add r8,r20,r8
	ctx.r8.u64 = r20.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8272A6E8:
	// srawi r11,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 12;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r7
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// stb r3,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r3.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lbzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x8272a6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A6E8;
loc_8272A734:
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8272a768
	if (!ctx.cr6.lt) goto loc_8272A768;
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r10,r5,r25
	ctx.r10.u64 = r25.u64 - ctx.r5.u64;
	// subf r9,r5,r24
	ctx.r9.u64 = r24.u64 - ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,128
	ctx.r8.s64 = 128;
loc_8272A758:
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272a758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A758;
loc_8272A768:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r21,r18,1
	r21.s64 = r18.s64 + 1;
	// lwz r9,15360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// add r11,r15,r11
	ctx.r11.u64 = r15.u64 + ctx.r11.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r22,r16,r9
	r22.u64 = r16.u64 + ctx.r9.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,15356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15356);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// and r23,r9,r11
	r23.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// clrlwi r26,r23,21
	r26.u64 = r23.u32 & 0x7FF;
	// srawi r11,r23,11
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r23.s32 >> 11;
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// blt cr6,0x8272a7d8
	if (ctx.cr6.lt) goto loc_8272A7D8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8272A7D8:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,15372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8272a814
	if (!ctx.cr6.gt) goto loc_8272A814;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8272a810
	if (ctx.cr6.eq) goto loc_8272A810;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272A808:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A808;
loc_8272A810:
	// add r3,r22,r9
	ctx.r3.u64 = r22.u64 + ctx.r9.u64;
loc_8272A814:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8272A820:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272a820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A820;
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x8272a9e4
	if (!ctx.cr0.gt) goto loc_8272A9E4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8272A84C:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272A860:
	// srawi r9,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r30.s32 >> 11;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r4,r30,21
	ctx.r4.u64 = r30.u32 & 0x7FF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// subf r20,r4,r27
	r20.u64 = r27.u64 - ctx.r4.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r18,r8,21
	r18.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r17,0(r7)
	r17.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r16,r18,r27
	r16.u64 = r27.u64 - r18.u64;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// subf r7,r17,r7
	ctx.r7.u64 = ctx.r7.u64 - r17.u64;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// stw r17,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r17.u32);
	// stw r20,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r20.u32);
	// clrlwi r30,r8,21
	r30.u64 = ctx.r8.u32 & 0x7FF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r20,r30,r27
	r20.u64 = r27.u64 - r30.u64;
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// clrlwi r17,r8,21
	r17.u64 = ctx.r8.u32 & 0x7FF;
	// subf r15,r17,r27
	r15.u64 = r27.u64 - r17.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r14,0(r7)
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lwz r14,116(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r18,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r18.u32);
	// stw r18,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r18.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r16,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r16.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r14.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + r28.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// stw r30,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r30.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r30.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r20,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r20.u32);
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbzx r9,r4,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r6,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r15,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r15.u32);
	// add r30,r8,r29
	r30.u64 = ctx.r8.u64 + r29.u64;
	// stw r17,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r17.u32);
	// stwu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r17,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8272a860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A860;
	// lwz r17,164(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = r17.s64 + 256;
	// bl 0x82727db8
	ctx.lr = 0x8272A9CC;
	sub_82727DB8(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8272a84c
	if (!ctx.cr0.eq) goto loc_8272A84C;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8272A9E4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8272aa6c
	if (!ctx.cr6.gt) goto loc_8272AA6C;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8272A9F0:
	// srawi r11,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8272a9f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272A9F0;
loc_8272AA6C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x8272aaa4
	if (!ctx.cr6.lt) goto loc_8272AAA4;
	// subf r11,r11,r14
	ctx.r11.u64 = r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8272AA80:
	// srawi r10,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8272aa80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AA80;
loc_8272AAA4:
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8272aad0
	if (!ctx.cr6.lt) goto loc_8272AAD0;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8272AABC:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8272aabc
	if (ctx.cr6.lt) goto loc_8272AABC;
loc_8272AAD0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r21,1
	r18.s64 = r21.s64 + 1;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r16,r11,r22
	r16.u64 = ctx.r11.u64 + r22.u64;
	// add r10,r23,r10
	ctx.r10.u64 = r23.u64 + ctx.r10.u64;
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r4.s32, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// and r15,r8,r10
	r15.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// blt cr6,0x8272a080
	if (ctx.cr6.lt) goto loc_8272A080;
loc_8272AB00:
	// lwz r11,15356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15356);
	// srawi r6,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = r15.s32 >> 11;
	// lwz r23,128(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// blt cr6,0x8272ab1c
	if (ctx.cr6.lt) goto loc_8272AB1C;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_8272AB1C:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r17,160(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272adc0
	if (ctx.cr6.lt) goto loc_8272ADC0;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r17.s32, ctx.xer);
	// bge cr6,0x8272adc0
	if (!ctx.cr6.lt) goto loc_8272ADC0;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r14,128
	r14.s64 = 128;
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r21,136(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8272AB64:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8272ab90
	if (!ctx.cr6.gt) goto loc_8272AB90;
	// addi r11,r16,-1
	ctx.r11.s64 = r16.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8272ab8c
	if (ctx.cr6.eq) goto loc_8272AB8C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8272AB84:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8272ab84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AB84;
loc_8272AB8C:
	// add r11,r16,r30
	ctx.r11.u64 = r16.u64 + r30.u64;
loc_8272AB90:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// lwz r10,15372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8272abd4
	if (!ctx.cr6.lt) goto loc_8272ABD4;
	// subf r9,r30,r26
	ctx.r9.u64 = r26.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272ABB0:
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r5,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272abb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272ABB0;
loc_8272ABD4:
	// lwz r9,15360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8272abfc
	if (!ctx.cr6.lt) goto loc_8272ABFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8272ABE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r11.u32 = ea;
	// lwz r9,15360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272abe8
	if (ctx.cr6.lt) goto loc_8272ABE8;
loc_8272ABFC:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x8272ac24
	if (!ctx.cr6.gt) goto loc_8272AC24;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_8272AC10:
	// stb r14,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r14,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r14.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8272ac10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AC10;
loc_8272AC24:
	// lwz r7,15356(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15356);
	// srawi r9,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r9.s64 = r15.s32 >> 12;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8272ac40
	if (ctx.cr6.lt) goto loc_8272AC40;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_8272AC40:
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// cmpw cr6,r21,r27
	ctx.cr6.compare<int32_t>(r21.s32, r27.s32, ctx.xer);
	// bge cr6,0x8272aca8
	if (!ctx.cr6.lt) goto loc_8272ACA8;
	// subf r7,r21,r27
	ctx.r7.u64 = r27.u64 - r21.u64;
	// add r6,r9,r20
	ctx.r6.u64 = ctx.r9.u64 + r20.u64;
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + r18.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8272AC5C:
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r7,r9,r3
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r7,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8272ac5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AC5C;
loc_8272ACA8:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bge cr6,0x8272acd4
	if (!ctx.cr6.lt) goto loc_8272ACD4;
	// subf r8,r27,r28
	ctx.r8.u64 = r28.u64 - r27.u64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8272ACC4:
	// stbx r14,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r14.u8);
	// stbx r14,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r14.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8272acc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272ACC4;
loc_8272ACD4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r24,r24,r28
	r24.u64 = r24.u64 + r28.u64;
	// lwz r9,15360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r11,r15,r11
	ctx.r11.u64 = r15.u64 + ctx.r11.u64;
	// lwz r10,15356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15356);
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// and r15,r9,r11
	r15.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// srawi r6,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = r15.s32 >> 11;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272ad18
	if (ctx.cr6.lt) goto loc_8272AD18;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
loc_8272AD18:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8272ad40
	if (!ctx.cr6.gt) goto loc_8272AD40;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8272ad3c
	if (ctx.cr6.eq) goto loc_8272AD3C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8272AD34:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8272ad34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AD34;
loc_8272AD3C:
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + r30.u64;
loc_8272AD40:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// lwz r10,15372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8272ad84
	if (!ctx.cr6.lt) goto loc_8272AD84;
	// subf r9,r30,r26
	ctx.r9.u64 = r26.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272AD60:
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272ad60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AD60;
loc_8272AD84:
	// lwz r10,15360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8272adac
	if (!ctx.cr6.lt) goto loc_8272ADAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8272AD98:
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272ad98
	if (ctx.cr6.lt) goto loc_8272AD98;
loc_8272ADAC:
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r16,r10,r7
	r16.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r17.s32, ctx.xer);
	// blt cr6,0x8272ab64
	if (ctx.cr6.lt) goto loc_8272AB64;
	// b 0x8272add4
	goto loc_8272ADD4;
loc_8272ADC0:
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r22,0
	r22.s64 = 0;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r14,128
	r14.s64 = 128;
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8272ADD4:
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8272ae7c
	if (!ctx.cr6.lt) goto loc_8272AE7C;
loc_8272ADE4:
	// lwz r10,15360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272ae0c
	if (!ctx.cr6.gt) goto loc_8272AE0C;
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
loc_8272ADF8:
	// stbu r22,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272adf8
	if (ctx.cr6.lt) goto loc_8272ADF8;
loc_8272AE0C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8272ae30
	if (!ctx.cr6.gt) goto loc_8272AE30;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r10,r25,r24
	ctx.r10.u64 = r24.u64 - r25.u64;
loc_8272AE20:
	// stbx r14,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r14.u8);
	// stb r14,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272ae20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AE20;
loc_8272AE30:
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// add r24,r24,r28
	r24.u64 = r24.u64 + r28.u64;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272ae68
	if (!ctx.cr6.gt) goto loc_8272AE68;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_8272AE54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8272ae54
	if (ctx.cr6.lt) goto loc_8272AE54;
loc_8272AE68:
	// lwz r10,15364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272ade4
	if (ctx.cr6.lt) goto loc_8272ADE4;
loc_8272AE7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce0
	ctx.lr = 0x8272AE8C;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B42C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x827b2410
	sub_827B2410(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827B4530) {
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
	ctx.lr = 0x827B4538;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x827b49d0
	if (ctx.cr6.eq) goto loc_827B49D0;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x827b4814
	if (ctx.cr6.eq) goto loc_827B4814;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b47ac
	if (!ctx.cr6.gt) goto loc_827B47AC;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	r15.s64 = 144;
	// li r16,192
	r16.s64 = 192;
	// li r17,240
	r17.s64 = 240;
	// li r18,-80
	r18.s64 = -80;
	// li r19,-32
	r19.s64 = -32;
	// li r20,64
	r20.s64 = 64;
	// li r21,112
	r21.s64 = 112;
	// li r22,160
	r22.s64 = 160;
	// li r23,208
	r23.s64 = 208;
	// li r24,256
	r24.s64 = 256;
loc_827B45D4:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	r27.u64 = r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	r29.u64 = r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	r28.u64 = r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	r25.u64 = r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x827b45d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B45D4;
	// lwz r29,1068(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827B47AC:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b4a90
	if (!ctx.cr6.gt) goto loc_827B4A90;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827B47E0:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827b47e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B47E0;
	// b 0x827b4a90
	goto loc_827B4A90;
loc_827B4814:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r4,4
	ctx.r4.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B4998:
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r7.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r5,96(r8)
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827b4998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B4998;
	// b 0x827b4a90
	goto loc_827B4A90;
loc_827B49D0:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B4A90:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b28b8
	ctx.lr = 0x827B4AA8;
	sub_827B28B8(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x826a1cd0
	return;
}

