#include "hydrothunder_funcs.24.h"

DEFINE_REX_FUNC(sub_82121530) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,69(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82121550
	if (!ctx.cr0.eq) goto loc_82121550;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82121550:
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
	// bne cr6,0x82121570
	if (!ctx.cr6.eq) goto loc_82121570;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8212158c
	goto loc_8212158C;
loc_82121570:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82121588
	if (!ctx.cr6.eq) goto loc_82121588;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8212158c
	goto loc_8212158C;
loc_82121588:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8212158C:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82129CF0) {
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
	ctx.lr = 0x82129CF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82129D30;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129088
	ctx.lr = 0x82129D3C;
	sub_82129088(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82129D50;
	sub_82120AC0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,80(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 80);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82120b20
	ctx.lr = 0x82129D78;
	sub_82120B20(ctx, base);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82129d90
	if (ctx.cr6.lt) goto loc_82129D90;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82129D90:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215eed0
	ctx.lr = 0x82129DA0;
	sub_8215EED0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129460
	ctx.lr = 0x82129DB0;
	sub_82129460(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82129ddc
	if (!ctx.cr0.eq) goto loc_82129DDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82129DD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_82129DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82129e20
	if (!ctx.cr0.eq) goto loc_82129E20;
	// li r30,0
	r30.s64 = 0;
loc_82129E00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82129dd4
	goto loc_82129DD4;
loc_82129E20:
	// li r30,1
	r30.s64 = 1;
	// b 0x82129e00
	goto loc_82129E00;
}

DEFINE_REX_FUNC(sub_82132838) {
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
	ctx.lr = 0x8213285C;
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
	ctx.lr = 0x82132874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6084(r10)
	REX_STORE_U32(ctx.r10.u32 + 6084, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821349B8) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822c2278
	ctx.lr = 0x821349D0;
	sub_822C2278(ctx, base);
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

DEFINE_REX_FUNC(sub_82135DF8) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135E88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
loc_82135EC0:
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x82135ec0
	if (ctx.cr6.lt) goto loc_82135EC0;
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

DEFINE_REX_FUNC(sub_8213D8B0) {
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
	ctx.lr = 0x8213D8B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,68
	r27.s64 = ctx.r3.s64 + 68;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120780
	ctx.lr = 0x8213D8D4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213d8e4
	if (!ctx.cr0.eq) goto loc_8213D8E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8213d9bc
	goto loc_8213D9BC;
loc_8213D8E4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120b20
	ctx.lr = 0x8213D8F8;
	sub_82120B20(ctx, base);
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x8213d91c
	goto loc_8213D91C;
loc_8213D904:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8213D910;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213d924
	if (ctx.cr0.eq) goto loc_8213D924;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
loc_8213D91C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8213d904
	if (!ctx.cr6.eq) goto loc_8213D904;
loc_8213D924:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8213d940
	if (!ctx.cr6.eq) goto loc_8213D940;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-25744
	ctx.r4.s64 = ctx.r11.s64 + -25744;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120c08
	ctx.lr = 0x8213D940;
	sub_82120C08(ctx, base);
loc_8213D940:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-25752
	ctx.r11.s64 = ctx.r11.s64 + -25752;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r9,-25800
	ctx.r9.s64 = ctx.r9.s64 + -25800;
	// addi r11,r8,-25816
	ctx.r11.s64 = ctx.r8.s64 + -25816;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// stb r10,96(r29)
	REX_STORE_U8(r29.u32 + 96, ctx.r10.u8);
	// li r30,4
	r30.s64 = 4;
loc_8213D980:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125d00
	ctx.lr = 0x8213D98C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213d99c
	if (!ctx.cr0.eq) goto loc_8213D99C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r29)
	REX_STORE_U8(r29.u32 + 96, ctx.r11.u8);
loc_8213D99C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8213d980
	if (!ctx.cr0.eq) goto loc_8213D980;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213D9BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82147930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82147938;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214796C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821479A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821479c4
	if (!ctx.cr6.eq) goto loc_821479C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-14440
	ctx.r4.s64 = ctx.r11.s64 + -14440;
	// addi r3,r10,-14312
	ctx.r3.s64 = ctx.r10.s64 + -14312;
	// li r5,121
	ctx.r5.s64 = 121;
	// bl 0x821231d0
	ctx.lr = 0x821479C4;
	sub_821231D0(ctx, base);
loc_821479C4:
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
	ctx.lr = 0x821479E0;
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
	ctx.lr = 0x821479FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147a1c
	if (ctx.cr6.eq) goto loc_82147A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147A1C:
	// lwz r29,56(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82147a40
	if (ctx.cr6.eq) goto loc_82147A40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82180508
	ctx.lr = 0x82147A38;
	sub_82180508(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82147A40;
	sub_8269CE98(ctx, base);
loc_82147A40:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147a64
	if (ctx.cr6.eq) goto loc_82147A64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147A64:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147a88
	if (ctx.cr6.eq) goto loc_82147A88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147A88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147A88:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147aac
	if (ctx.cr6.eq) goto loc_82147AAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147AAC:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147ad0
	if (ctx.cr6.eq) goto loc_82147AD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147AD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147AD0:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147af4
	if (ctx.cr6.eq) goto loc_82147AF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147AF4:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147b18
	if (ctx.cr6.eq) goto loc_82147B18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147B18:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82154D38) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82154d48
	if (!ctx.cr6.eq) goto loc_82154D48;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82154D48:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
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

DEFINE_REX_FUNC(sub_821557A8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821557f0
	if (ctx.cr6.eq) goto loc_821557F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-9012
	ctx.r3.s64 = ctx.r10.s64 + -9012;
	// li r5,456
	ctx.r5.s64 = 456;
	// bl 0x821231d0
	ctx.lr = 0x821557F0;
	sub_821231D0(ctx, base);
loc_821557F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155fd0
	ctx.lr = 0x821557FC;
	sub_82155FD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215586c
	if (ctx.cr6.eq) goto loc_8215586C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8215581C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82155854
	if (ctx.cr6.lt) goto loc_82155854;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r8,-308
	ctx.r11.s64 = ctx.r8.s64 + -308;
loc_82155834:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82155850
	if (ctx.cr6.eq) goto loc_82155850;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// bge 0x82155834
	if (!ctx.cr0.lt) goto loc_82155834;
	// b 0x82155854
	goto loc_82155854;
loc_82155850:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82155854:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155860
	if (ctx.cr0.eq) goto loc_82155860;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82155860:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,308
	ctx.r8.s64 = ctx.r8.s64 + 308;
	// bdnz 0x8215581c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215581C;
loc_8215586C:
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

DEFINE_REX_FUNC(sub_8215BCB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215BCC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-88
	r31.s64 = ctx.r3.s64 + -88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215b2a0
	ctx.lr = 0x8215BCD8;
	sub_8215B2A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,18556
	ctx.r11.s64 = ctx.r11.s64 + 18556;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x822f63d0
	ctx.lr = 0x8215BCEC;
	sub_822F63D0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bcfc
	if (ctx.cr0.eq) goto loc_8215BCFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215BCFC;
	sub_8269CE98(ctx, base);
loc_8215BCFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215D118) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822f65b0
	sub_822F65B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D448) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215D450;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8215d478
	if (ctx.cr6.lt) goto loc_8215D478;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8215D478:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r30,r10,18704
	r30.s64 = ctx.r10.s64 + 18704;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bge cr6,0x8215d4ac
	if (!ctx.cr6.lt) goto loc_8215D4AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D4A8;
	sub_8215D5D0(ctx, base);
	// b 0x8215d4e4
	goto loc_8215D4E4;
loc_8215D4AC:
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// lbz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r7,2(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// lbz r5,3(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r7,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
loc_8215D4E4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215d4f4
	if (!ctx.cr0.eq) goto loc_8215D4F4;
loc_8215D4EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215d5c8
	goto loc_8215D5C8;
loc_8215D4F4:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x8215d510
	if (!ctx.cr6.lt) goto loc_8215D510;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D50C;
	sub_8215D5D0(ctx, base);
	// b 0x8215d554
	goto loc_8215D554;
loc_8215D510:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// subf r9,r11,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r11.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r6,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_8215D554:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d4ec
	if (ctx.cr0.eq) goto loc_8215D4EC;
	// lis r11,16715
	ctx.r11.s64 = 1095434240;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,19010
	ctx.r11.u64 = ctx.r11.u64 | 19010;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215d584
	if (ctx.cr6.eq) goto loc_8215D584;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18716
	ctx.r4.s64 = ctx.r11.s64 + 18716;
loc_8215D578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D580;
	sub_8215D5D0(ctx, base);
	// b 0x8215d5c8
	goto loc_8215D5C8;
loc_8215D584:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8215d59c
	if (ctx.cr6.eq) goto loc_8215D59C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18732
	ctx.r4.s64 = ctx.r11.s64 + 18732;
	// b 0x8215d578
	goto loc_8215D578;
loc_8215D59C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215D5A4;
	sub_8215F0F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d660
	ctx.lr = 0x8215D5B0;
	sub_8215D660(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215d5c4
	if (!ctx.cr0.eq) goto loc_8215D5C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215D5C0;
	sub_8215F0F0(ctx, base);
	// b 0x8215d4ec
	goto loc_8215D4EC;
loc_8215D5C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215D5C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8216A8F0) {
	REX_FUNC_PROLOGUE();
	// b 0x8269fd10
	sub_8269FD10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216A988) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ed568
	sub_823ED568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216B2E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,440(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 440);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,444(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f9,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f8,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r11,304
	ctx.r5.s64 = ctx.r11.s64 + 304;
	// lfs f0,-19392(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f12,f11,f10,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f11,f11,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8216B378;
	sub_823FBD18(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
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

DEFINE_REX_FUNC(sub_821726E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8217270c
	if (ctx.cr6.lt) goto loc_8217270C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82172724
	if (ctx.cr6.lt) goto loc_82172724;
loc_8217270C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,27080
	ctx.r4.s64 = ctx.r11.s64 + 27080;
	// addi r3,r10,27208
	ctx.r3.s64 = ctx.r10.s64 + 27208;
	// li r5,281
	ctx.r5.s64 = 281;
	// bl 0x821231d0
	ctx.lr = 0x82172724;
	sub_821231D0(ctx, base);
loc_82172724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x82172730;
	sub_823ED490(ctx, base);
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// bne cr6,0x82172748
	if (!ctx.cr6.eq) goto loc_82172748;
	// mulli r11,r31,36
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
loc_82172748:
	// mulli r11,r31,36
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
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

DEFINE_REX_FUNC(sub_82177D18) {
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
	ctx.lr = 0x82177D20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82177D34:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82177d34
	if (!ctx.cr6.eq) goto loc_82177D34;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// ld r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x82177d74
	if (!ctx.cr6.gt) goto loc_82177D74;
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r30.s64, ctx.xer);
	// subf r28,r30,r11
	r28.u64 = ctx.r11.u64 - r30.u64;
	// bgt cr6,0x82177d78
	if (ctx.cr6.gt) goto loc_82177D78;
loc_82177D74:
	// li r28,0
	r28.s64 = 0;
loc_82177D78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215d2f0
	ctx.lr = 0x82177D84;
	sub_8215D2F0(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82177d98
	if (!ctx.cr0.eq) goto loc_82177D98;
	// li r27,4
	r27.s64 = 4;
	// b 0x82177e2c
	goto loc_82177E2C;
loc_82177D98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,0,23,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82177de4
	if (ctx.cr6.eq) goto loc_82177DE4;
	// b 0x82177ddc
	goto loc_82177DDC;
loc_82177DB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82178068
	ctx.lr = 0x82177DD0;
	sub_82178068(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82177e14
	if (ctx.cr6.eq) goto loc_82177E14;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82177DDC:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(r28.s64, 0, ctx.xer);
	// bgt cr6,0x82177db8
	if (ctx.cr6.gt) goto loc_82177DB8;
loc_82177DE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82177E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpd cr6,r3,r30
	ctx.cr6.compare<int64_t>(ctx.r3.s64, r30.s64, ctx.xer);
	// beq cr6,0x82177ea8
	if (ctx.cr6.eq) goto loc_82177EA8;
loc_82177E14:
	// li r27,4
	r27.s64 = 4;
loc_82177E18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
loc_82177E2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x82177e70
	if (ctx.cr6.eq) goto loc_82177E70;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r11,r27,r10
	ctx.r11.u64 = r27.u64 | ctx.r10.u64;
	// bne cr6,0x82177e58
	if (!ctx.cr6.eq) goto loc_82177E58;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82177E58:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq 0x82177e70
	if (ctx.cr0.eq) goto loc_82177E70;
	// bl 0x8215d170
	ctx.lr = 0x82177E70;
	sub_8215D170(ctx, base);
loc_82177E70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215d0a0
	ctx.lr = 0x82177E78;
	sub_8215D0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_82177E84:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82178068
	ctx.lr = 0x82177E9C;
	sub_82178068(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82177e14
	if (ctx.cr6.eq) goto loc_82177E14;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82177EA8:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(r28.s64, 0, ctx.xer);
	// bgt cr6,0x82177e84
	if (ctx.cr6.gt) goto loc_82177E84;
	// b 0x82177e18
	goto loc_82177E18;
}

DEFINE_REX_FUNC(sub_82183E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82183e48
	if (!ctx.cr6.eq) goto loc_82183E48;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82183e48
	if (!ctx.cr6.gt) goto loc_82183E48;
	// lfs f0,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82183E48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821883A0) {
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
	// lwz r4,-15392(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15392);
	// bl 0x82120600
	ctx.lr = 0x821883CC;
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
	ctx.lr = 0x821883E8;
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
	ctx.lr = 0x821883FC;
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

DEFINE_REX_FUNC(sub_8218B190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,248(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f12,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821967A0) {
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
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ld r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 80);
	// ld r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r10.u64);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x821263d8
	ctx.lr = 0x821967EC;
	sub_821263D8(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82196800;
	sub_826A1E70(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
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

DEFINE_REX_FUNC(sub_8219B448) {
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
	ctx.lr = 0x8219B450;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,862
	ctx.r10.s64 = 56492032;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,20694
	ctx.r10.u64 = ctx.r10.u64 | 20694;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8219b490
	if (ctx.cr6.lt) goto loc_8219B490;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x82150bf0
	ctx.lr = 0x8219B47C;
	sub_82150BF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8219B484;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8219B490;
	sub_822F6020(ctx, base);
loc_8219B490:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b4bc
	if (!ctx.cr6.eq) goto loc_8219B4BC;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8219b4f4
	goto loc_8219B4F4;
loc_8219B4BC:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219b4e0
	if (ctx.cr0.eq) goto loc_8219B4E0;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b4f8
	if (!ctx.cr6.eq) goto loc_8219B4F8;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8219b4f8
	goto loc_8219B4F8;
loc_8219B4E0:
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b4f8
	if (!ctx.cr6.eq) goto loc_8219B4F8;
loc_8219B4F4:
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_8219B4F8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8219b5f8
	if (!ctx.cr0.eq) goto loc_8219B5F8;
	// li r27,0
	r27.s64 = 0;
loc_8219B514:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b578
	if (!ctx.cr6.eq) goto loc_8219B578;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8219b588
	if (ctx.cr0.eq) goto loc_8219B588;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b550
	if (!ctx.cr6.eq) goto loc_8219B550;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82150940
	ctx.lr = 0x8219B550;
	sub_82150940(ctx, base);
loc_8219B550:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821509a8
	ctx.lr = 0x8219B574;
	sub_821509A8(ctx, base);
	// b 0x8219b5e8
	goto loc_8219B5E8;
loc_8219B578:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8219b5ac
	if (!ctx.cr0.eq) goto loc_8219B5AC;
loc_8219B588:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r29,88(r10)
	REX_STORE_U8(ctx.r10.u32 + 88, r29.u8);
	// stb r29,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8219b5e8
	goto loc_8219B5E8;
loc_8219B5AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b5c4
	if (!ctx.cr6.eq) goto loc_8219B5C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821509a8
	ctx.lr = 0x8219B5C4;
	sub_821509A8(ctx, base);
loc_8219B5C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82150940
	ctx.lr = 0x8219B5E8;
	sub_82150940(ctx, base);
loc_8219B5E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219b514
	if (ctx.cr0.eq) goto loc_8219B514;
loc_8219B5F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A6D78) {
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
	ctx.lr = 0x821A6D80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,28384
	ctx.r4.s64 = ctx.r11.s64 + 28384;
	// li r30,1
	r30.s64 = 1;
	// bl 0x8215f338
	ctx.lr = 0x821A6D9C;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,-17568
	r25.s64 = ctx.r11.s64 + -17568;
	// addi r29,r10,-18652
	r29.s64 = ctx.r10.s64 + -18652;
loc_821A6DB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a6dd8
	if (!ctx.cr6.eq) goto loc_821A6DD8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821a6ddc
	goto loc_821A6DDC;
loc_821A6DD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A6DDC:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821a6e6c
	if (!ctx.cr6.lt) goto loc_821A6E6C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821A6DF0;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A6DFC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A6E00;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821a6e10
	if (ctx.cr6.lt) goto loc_821A6E10;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821A6E10:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x821a6e4c
	if (!ctx.cr6.eq) goto loc_821A6E4C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A6E28;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A6E2C;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821a6e3c
	if (ctx.cr6.lt) goto loc_821A6E3C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821A6E3C:
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821a6e78
	ctx.lr = 0x821A6E48;
	sub_821A6E78(ctx, base);
	// b 0x821a6e60
	goto loc_821A6E60;
loc_821A6E4C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A6E54;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821a6d78
	ctx.lr = 0x821A6E60;
	sub_821A6D78(ctx, base);
loc_821A6E60:
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x821a6db4
	goto loc_821A6DB4;
loc_821A6E6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821ACEE8) {
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
	ctx.lr = 0x821ACF0C;
	sub_8215F338(ctx, base);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821AE978) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x821AE980;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// addi r26,r3,64
	r26.s64 = ctx.r3.s64 + 64;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821aeac4
	if (!ctx.cr0.gt) goto loc_821AEAC4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r25,0
	r25.s64 = 0;
	// addi r23,r11,-15232
	r23.s64 = ctx.r11.s64 + -15232;
loc_821AE9BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r11,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bl 0x821fd140
	ctx.lr = 0x821AE9CC;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aeaa4
	if (ctx.cr0.eq) goto loc_821AEAA4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r28,156(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 156);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,160(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 160);
	// addi r31,r27,152
	r31.s64 = r27.s64 + 152;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,116(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// lfs f0,120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// ld r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// ld r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// ld r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// ld r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// ble cr6,0x821aea78
	if (!ctx.cr6.gt) goto loc_821AEA78;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bgt cr6,0x821aea44
	if (ctx.cr6.gt) goto loc_821AEA44;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821AEA44:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821aea78
	if (!ctx.cr6.gt) goto loc_821AEA78;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,48
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821AEA58;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,48
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(48));
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AEA68;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821AEA70;
	sub_8269D1B8(ctx, base);
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821AEA78:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEA88;
	sub_821AFA30(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821AEA98:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821aea98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AEA98;
loc_821AEAA4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ae9bc
	if (ctx.cr6.lt) goto loc_821AE9BC;
loc_821AEAC4:
	// lwz r30,156(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 156);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821aeb4c
	if (ctx.cr6.eq) goto loc_821AEB4C;
	// addi r31,r27,152
	r31.s64 = r27.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEAE0;
	sub_821AFA30(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-14456
	ctx.r6.s64 = ctx.r11.s64 + -14456;
	// bl 0x826a0028
	ctx.lr = 0x821AEAF4;
	sub_826A0028(ctx, base);
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// lwz r10,156(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 156);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// ble cr6,0x821aeb34
	if (!ctx.cr6.gt) goto loc_821AEB34;
loc_821AEB0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEB18;
	sub_821AFA30(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r11,156(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 156);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821aeb0c
	if (ctx.cr6.lt) goto loc_821AEB0C;
loc_821AEB34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x821afa30
	ctx.lr = 0x821AEB44;
	sub_821AFA30(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 164, temp.u32);
loc_821AEB4C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821BDD78) {
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
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821BF720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BF728;
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
	ctx.lr = 0x821BF740;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-18412
	ctx.r11.s64 = ctx.r11.s64 + -18412;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821BF760;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BF768;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821bf798
	if (ctx.cr0.eq) goto loc_821BF798;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x82120600
	ctx.lr = 0x821BF780;
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
	ctx.lr = 0x821BF794;
	sub_821BF110(ctx, base);
	// b 0x821bf79c
	goto loc_821BF79C;
loc_821BF798:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF79C:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821BF7AC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bf7c4
	if (ctx.cr0.eq) goto loc_821BF7C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BF7C4;
	sub_82120AC0(ctx, base);
loc_821BF7C4:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BF7CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf7ec
	if (ctx.cr0.eq) goto loc_821BF7EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BF7E4;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bf7f0
	goto loc_821BF7F0;
loc_821BF7EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821BF7F0:
	// stw r4,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BF7FC;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BF804;
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
	// beq 0x821bf884
	if (ctx.cr0.eq) goto loc_821BF884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x821BF82C;
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
	ctx.lr = 0x821BF844;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BF850;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf874
	if (ctx.cr0.eq) goto loc_821BF874;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1736
	ctx.r10.s64 = ctx.r10.s64 + -1736;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bf878
	goto loc_821BF878;
loc_821BF874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BF878:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bf888
	goto loc_821BF888;
loc_821BF884:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BF888:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BF8A0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BF8A8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bf910
	if (ctx.cr0.eq) goto loc_821BF910;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-19340
	ctx.r4.s64 = ctx.r10.s64 + -19340;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BF8D0;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BF8DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf900
	if (ctx.cr0.eq) goto loc_821BF900;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1624
	ctx.r10.s64 = ctx.r10.s64 + -1624;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bf904
	goto loc_821BF904;
loc_821BF900:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BF904:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bf914
	goto loc_821BF914;
loc_821BF910:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BF914:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BF92C;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821CE490) {
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
	// lwz r10,136(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 136);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821ce4c0
	if (ctx.cr6.lt) goto loc_821CE4C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821CE4C0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821ea0e0
	ctx.lr = 0x821CE4CC;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ce4dc
	if (ctx.cr0.eq) goto loc_821CE4DC;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822fbe20
	ctx.lr = 0x821CE4DC;
	sub_822FBE20(ctx, base);
loc_821CE4DC:
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

DEFINE_REX_FUNC(sub_821D21D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x821D21D8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c94
	ctx.lr = 0x821D21E0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	f31.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x821D2244;
	sub_823FBD18(ctx, base);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// ld r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 8);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// ld r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 16);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// ld r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + 24);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// ld r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 32);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// ld r29,40(r29)
	r29.u64 = REX_LOAD_U64(r29.u32 + 40);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// fsubs f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// lfs f8,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// std r6,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// std r4,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// std r29,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r29.u64);
	// lfs f13,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f10,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f9,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f8,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f7,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f4,f31
	f28.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f5,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f12
	f30.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f11,f11
	f29.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// fmadds f4,f9,f9,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, f30.f64)));
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// fmuls f27,f3,f31
	f27.f64 = double(float(ctx.f3.f64 * f31.f64));
	// fmadds f1,f10,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmadds f3,f8,f8,f29
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, f29.f64)));
	// fmadds f4,f6,f6,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmadds f1,f7,f7,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f3,f5,f5,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f3.f64)));
	// fsqrts f29,f4
	f29.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsqrts f1,f1
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f26,f0,f1
	f26.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fdivs f25,f0,f29
	f25.f64 = double(float(ctx.f0.f64 / f29.f64));
	// fsqrts f24,f3
	f24.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f30,f1,f2
	f30.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fdivs f23,f0,f24
	f23.f64 = double(float(ctx.f0.f64 / f24.f64));
	// lfs f4,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f29,f28
	f29.f64 = double(float(f29.f64 * f28.f64));
	// fsubs f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// lfs f4,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f24,f27
	f28.f64 = double(float(f24.f64 * f27.f64));
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f3,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f31,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f31.f64 = double(temp.f32);
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * f25.f64));
	// lfs f4,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f31,f31,f3
	f31.f64 = double(float(f31.f64 - ctx.f3.f64));
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// lfs f3,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f8,f23
	ctx.f13.f64 = double(float(ctx.f8.f64 * f23.f64));
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// fmuls f6,f6,f25
	ctx.f6.f64 = double(float(ctx.f6.f64 * f25.f64));
	// fmuls f27,f2,f0
	f27.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f7,f26,f7
	ctx.f7.f64 = double(float(f26.f64 * ctx.f7.f64));
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f10,f10,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * f26.f64));
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 * f25.f64));
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * f23.f64));
	// stfs f7,224(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f12,f5,f23
	ctx.f12.f64 = double(float(ctx.f5.f64 * f23.f64));
	// stfs f10,228(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f9,240(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// addi r11,r9,-20
	ctx.r11.s64 = ctx.r9.s64 + -20;
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f13,f1,f4,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, f27.f64)));
	// fmadds f6,f31,f3,f13
	ctx.f6.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f13.f64)));
loc_821D23D8:
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f13,f4,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f0,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821d23d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D23D8;
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f27,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f27.f64 = double(temp.f32);
	// fabs f13,f27
	ctx.f13.u64 = f27.u64 & ~0x8000000000000000;
	// lfs f26,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
	// fabs f12,f26
	ctx.f12.u64 = f26.u64 & ~0x8000000000000000;
	// lfs f3,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmadds f0,f13,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f0.f64)));
	// fmadds f0,f12,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f0.f64)));
	// fadds f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f24,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	f24.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821D245C:
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfsx f8,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// fmuls f8,f8,f24
	ctx.f8.f64 = double(float(ctx.f8.f64 * f24.f64));
	// stfsx f8,r11,r7
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmadds f13,f11,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f13,f0,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfsx f13,r11,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d245c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D245C;
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f5,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f24,f6
	ctx.f13.f64 = double(float(f24.f64 * ctx.f6.f64));
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmadds f12,f1,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmuls f10,f9,f29
	ctx.f10.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fmadds f25,f11,f31,f12
	f25.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f12.f64)));
	// fmadds f11,f8,f28,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, ctx.f10.f64)));
	// fmuls f12,f3,f25
	ctx.f12.f64 = double(float(ctx.f3.f64 * f25.f64));
	// fmadds f11,f5,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f11.f64)));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D2510:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfsx f11,r11,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d2510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2510;
	// lfs f11,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f11,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f10,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f12,f11,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f12.f64)));
	// fmadds f12,f10,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f12.f64)));
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f4,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821D2594:
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lfsx f8,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfsx f8,r11,r7
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmadds f13,f11,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f13,f0,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfsx f13,r11,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d2594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2594;
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f5,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fabs f2,f5
	ctx.f2.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f12,f1,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmuls f10,f9,f29
	ctx.f10.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fmadds f5,f11,f31,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f12.f64)));
	// fmadds f11,f8,f28,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, ctx.f10.f64)));
	// fmuls f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmadds f11,f2,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f11.f64)));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D2648:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfsx f11,r11,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d2648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2648;
	// lfs f11,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f11,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f10,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f12,f11,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f12.f64)));
	// fmadds f12,f10,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f12.f64)));
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f8,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f8.f64 = double(temp.f32);
loc_821D26B8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfsx f11,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfsx f10,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// fmadds f9,f9,f4,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f13.f64)));
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x821d2700
	if (!ctx.cr6.lt) goto loc_821D2700;
	// lfs f2,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
loc_821D2700:
	// fadds f9,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x821d2714
	if (!ctx.cr6.gt) goto loc_821D2714;
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
loc_821D2714:
	// fmuls f12,f12,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * f25.f64));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x821d26b8
	if (ctx.cr6.lt) goto loc_821D26B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D2750:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x821d2780
	if (!ctx.cr6.lt) goto loc_821D2780;
	// lfs f10,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_821D2780:
	// fsubs f11,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x821d2794
	if (!ctx.cr6.gt) goto loc_821D2794;
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_821D2794:
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfsx f2,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmsubs f13,f2,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, -ctx.f13.f64)));
	// fmsubs f10,f2,f27,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f27.f64, -ctx.f10.f64)));
	// fmsubs f9,f2,f26,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, f26.f64, -ctx.f9.f64)));
	// fmsubs f0,f0,f5,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -ctx.f1.f64)));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmadds f13,f10,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f13.f64)));
	// fmadds f13,f9,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f13.f64)));
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x821d2750
	if (ctx.cr6.lt) goto loc_821D2750;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D2808:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f24
	ctx.f11.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x821d2834
	if (!ctx.cr6.lt) goto loc_821D2834;
	// lfs f10,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_821D2834:
	// fadds f11,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x821d2848
	if (!ctx.cr6.gt) goto loc_821D2848;
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_821D2848:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// lfsx f2,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f13,f2,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, -ctx.f13.f64)));
	// fmsubs f10,f2,f27,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f27.f64, -ctx.f10.f64)));
	// fmsubs f9,f2,f26,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, f26.f64, -ctx.f9.f64)));
	// fmsubs f0,f2,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -ctx.f0.f64)));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmadds f13,f10,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f13.f64)));
	// fmadds f13,f9,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f13.f64)));
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x821d2808
	if (ctx.cr6.lt) goto loc_821D2808;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D28C4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d28c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D28C4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821D2900:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f7,f11,f24
	ctx.f7.f64 = double(float(ctx.f11.f64 * f24.f64));
	// fneg f11,f9
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f10,f10,f4,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f7.f64)));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x821d2944
	if (!ctx.cr6.lt) goto loc_821D2944;
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
loc_821D2944:
	// fadds f7,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x821d2958
	if (!ctx.cr6.gt) goto loc_821D2958;
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
loc_821D2958:
	// fmuls f10,f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmsubs f10,f0,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, -ctx.f10.f64)));
	// fnmsubs f10,f12,f6,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f10.f64)));
loc_821D2974:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfsx f2,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfsx f1,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f31,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	f30.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmsubs f2,f1,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fnmsubs f2,f31,f12,f2
	ctx.f2.f64 = double(float(-std::fma(f31.f64, ctx.f12.f64, -ctx.f2.f64)));
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmadds f11,f2,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f11.f64)));
	// bdnz 0x821d2974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2974;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x821d2900
	if (ctx.cr6.lt) goto loc_821D2900;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821D29D8:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fneg f11,f9
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f10,f10,f24,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, ctx.f7.f64)));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x821d2a1c
	if (!ctx.cr6.lt) goto loc_821D2A1C;
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
loc_821D2A1C:
	// fadds f7,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x821d2a30
	if (!ctx.cr6.gt) goto loc_821D2A30;
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
loc_821D2A30:
	// fmuls f10,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmsubs f10,f13,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, -ctx.f10.f64)));
	// fnmsubs f10,f12,f6,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f10.f64)));
loc_821D2A4C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfsx f2,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfsx f1,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f31,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	f30.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmsubs f2,f1,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f2.f64)));
	// fnmsubs f2,f31,f12,f2
	ctx.f2.f64 = double(float(-std::fma(f31.f64, ctx.f12.f64, -ctx.f2.f64)));
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmadds f11,f2,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f11.f64)));
	// bdnz 0x821d2a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2A4C;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x821d29d8
	if (ctx.cr6.lt) goto loc_821D29D8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821D2AB0:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 * f24.f64));
	// fmadds f10,f9,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f10.f64)));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x821d2af0
	if (!ctx.cr6.lt) goto loc_821D2AF0;
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
loc_821D2AF0:
	// fadds f7,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x821d2b04
	if (!ctx.cr6.gt) goto loc_821D2B04;
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
loc_821D2B04:
	// fmuls f10,f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmsubs f10,f0,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, -ctx.f10.f64)));
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f10.f64)));
loc_821D2B20:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfsx f2,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfsx f1,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f31,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	f30.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmsubs f2,f1,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fmadds f2,f31,f12,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f2.f64)));
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmadds f11,f2,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f11.f64)));
	// bdnz 0x821d2b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2B20;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x821d2ab0
	if (ctx.cr6.lt) goto loc_821D2AB0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821D2B84:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 * f24.f64));
	// fmadds f10,f9,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f10.f64)));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x821d2bc4
	if (!ctx.cr6.lt) goto loc_821D2BC4;
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
loc_821D2BC4:
	// fadds f7,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x821d2bd8
	if (!ctx.cr6.gt) goto loc_821D2BD8;
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
loc_821D2BD8:
	// fmuls f10,f5,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmsubs f10,f25,f0,f10
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f10.f64)));
loc_821D2BF4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfsx f2,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfsx f1,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f31,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	f30.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmsubs f2,f1,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fmadds f2,f31,f12,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f2.f64)));
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmadds f11,f2,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f11.f64)));
	// bdnz 0x821d2bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D2BF4;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x821d2c5c
	if (ctx.cr6.lt) goto loc_821D2C5C;
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x821d2c5c
	if (ctx.cr6.gt) goto loc_821D2C5C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x821d2b84
	if (ctx.cr6.lt) goto loc_821D2B84;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d2c60
	goto loc_821D2C60;
loc_821D2C5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D2C60:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce0
	ctx.lr = 0x821D2C6C;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82236E48) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x821e31f0
	sub_821E31F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822370F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13524
	ctx.r3.s64 = ctx.r11.s64 + -13524;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237648) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82237668
	if (!ctx.cr0.eq) goto loc_82237668;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82237668:
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
	// bne cr6,0x82237688
	if (!ctx.cr6.eq) goto loc_82237688;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x822376a4
	goto loc_822376A4;
loc_82237688:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822376a0
	if (!ctx.cr6.eq) goto loc_822376A0;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x822376a4
	goto loc_822376A4;
loc_822376A0:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822376A4:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223A938) {
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
	ctx.lr = 0x8223A940;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8223aa34
	if (!ctx.cr6.lt) goto loc_8223AA34;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223a974
	if (ctx.cr6.eq) goto loc_8223A974;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r24,320
	ctx.r3.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(320));
	// bl 0x8269d1d0
	ctx.lr = 0x8223A96C;
	sub_8269D1D0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8223a978
	goto loc_8223A978;
loc_8223A974:
	// li r25,0
	r25.s64 = 0;
loc_8223A978:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223a9d8
	if (!ctx.cr6.gt) goto loc_8223A9D8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r26,r11,-16904
	r26.s64 = ctx.r11.s64 + -16904;
loc_8223A998:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223a9c8
	if (ctx.cr6.eq) goto loc_8223A9C8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223a810
	ctx.lr = 0x8223A9B4;
	sub_8223A810(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lbz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 308);
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_8223A9C8:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,320
	r29.s64 = r29.s64 + 320;
	// addi r31,r31,320
	r31.s64 = r31.s64 + 320;
	// bne 0x8223a998
	if (!ctx.cr0.eq) goto loc_8223A998;
loc_8223A9D8:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8223aa10
	if (!ctx.cr6.gt) goto loc_8223AA10;
	// li r30,0
	r30.s64 = 0;
loc_8223A9E8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
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
	ctx.lr = 0x8223AA04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,320
	r30.s64 = r30.s64 + 320;
	// bne 0x8223a9e8
	if (!ctx.cr0.eq) goto loc_8223A9E8;
loc_8223AA10:
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223aa24
	if (ctx.cr0.eq) goto loc_8223AA24;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8223AA24;
	sub_8269D1B8(ctx, base);
loc_8223AA24:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,8(r28)
	REX_STORE_U32(r28.u32 + 8, r25.u32);
	// stw r24,4(r28)
	REX_STORE_U32(r28.u32 + 4, r24.u32);
	// stb r11,12(r28)
	REX_STORE_U8(r28.u32 + 12, ctx.r11.u8);
loc_8223AA34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82243368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r4,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(304));
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r7,224(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 224);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x822433b0
	if (ctx.cr0.eq) goto loc_822433B0;
	// mulli r9,r5,304
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(304));
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r6,224(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 224);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x822433b0
	if (ctx.cr0.eq) goto loc_822433B0;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82243430
	goto loc_82243430;
loc_822433B0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822433c0
	if (ctx.cr6.eq) goto loc_822433C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822433C0:
	// mulli r9,r5,304
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(304));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,224(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 224);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822433dc
	if (ctx.cr0.eq) goto loc_822433DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822433DC:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82243424
	if (ctx.cr6.eq) goto loc_82243424;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
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
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_82243424:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
loc_82243430:
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82243440
	if (ctx.cr6.lt) goto loc_82243440;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243440:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249D88) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82249da8
	sub_82249DA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224A6C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13156
	ctx.r3.s64 = ctx.r11.s64 + -13156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B490) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8224B498;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r3,264
	r31.s64 = ctx.r3.s64 + 264;
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b4d4
	if (ctx.cr6.eq) goto loc_8224B4D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8224b4d0
	if (ctx.cr6.eq) goto loc_8224B4D0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8224B4C4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8224b4c4
	if (!ctx.cr6.eq) goto loc_8224B4C4;
loc_8224B4D0:
	// bl 0x8269ce98
	ctx.lr = 0x8224B4D4;
	sub_8269CE98(ctx, base);
loc_8224B4D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r29,252
	r30.s64 = r29.s64 + 252;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r31,4
	r31.s64 = 4;
loc_8224B4EC:
	// lbzu r11,-8(r30)
	ea = -8 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821ea168
	ctx.lr = 0x8224B508;
	sub_821EA168(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8224b4ec
	if (!ctx.cr0.lt) goto loc_8224B4EC;
	// addi r31,r29,212
	r31.s64 = r29.s64 + 212;
	// li r30,4
	r30.s64 = 4;
loc_8224B518:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8224B52C;
	sub_82120AC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8224b518
	if (!ctx.cr0.lt) goto loc_8224B518;
	// lwz r3,56(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 56);
	// bl 0x8269d1b8
	ctx.lr = 0x8224B53C;
	sub_8269D1B8(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// bl 0x8269d1b8
	ctx.lr = 0x8224B544;
	sub_8269D1B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B54C;
	sub_8269CE98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82250AE8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x82250B14;
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
	// beq 0x82250b30
	if (ctx.cr0.eq) goto loc_82250B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82250B30;
	sub_8269CE98(ctx, base);
loc_82250B30:
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

DEFINE_REX_FUNC(sub_82253188) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2c94
	ctx.lr = 0x8225319C;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f31,f9,f10
	f31.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f29,f9,f11
	f29.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f30,f9,f12
	f30.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 * ctx.f13.f64));
	// fmuls f11,f29,f13
	ctx.f11.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fmsubs f13,f30,f13,f11
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fmuls f11,f10,f10
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f28,f11,f12
	f28.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f26,f11,f13
	f26.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f27,f11,f10
	f27.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f13,f31,f28
	ctx.f13.f64 = double(float(f31.f64 * f28.f64));
	// fmuls f11,f26,f29
	ctx.f11.f64 = double(float(f26.f64 * f29.f64));
	// fmuls f12,f27,f30
	ctx.f12.f64 = double(float(f27.f64 * f30.f64));
	// fmsubs f13,f26,f30,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, f30.f64, -ctx.f13.f64)));
	// fmsubs f11,f27,f31,f11
	ctx.f11.f64 = double(float(std::fma(f27.f64, f31.f64, -ctx.f11.f64)));
	// fmsubs f12,f29,f28,f12
	ctx.f12.f64 = double(float(std::fma(f29.f64, f28.f64, -ctx.f12.f64)));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f25,f0,f11
	f25.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f24,f0,f13
	f24.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f23,f0,f12
	f23.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x82126320
	ctx.lr = 0x82253270;
	sub_82126320(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f25,112(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f24,116(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f23,120(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821deda0
	ctx.lr = 0x822532A0;
	sub_821DEDA0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ce0
	ctx.lr = 0x822532AC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225F098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8225F0A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,192
	r30.s64 = ctx.r3.s64 + 192;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82125d00
	ctx.lr = 0x8225F0C0;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f144
	if (ctx.cr0.eq) goto loc_8225F144;
	// lwz r6,276(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8225f188
	if (!ctx.cr6.gt) goto loc_8225F188;
	// addi r7,r31,280
	ctx.r7.s64 = r31.s64 + 280;
loc_8225F0E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8225F0EC:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8225f104
	if (ctx.cr0.eq) goto loc_8225F104;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8225f134
	if (ctx.cr6.eq) goto loc_8225F134;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8225F104:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8225f0ec
	if (ctx.cr6.lt) goto loc_8225F0EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F118:
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225f184
	if (ctx.cr0.eq) goto loc_8225F184;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8225f0e0
	if (ctx.cr6.lt) goto loc_8225F0E0;
	// b 0x8225f188
	goto loc_8225F188;
loc_8225F134:
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// b 0x8225f118
	goto loc_8225F118;
loc_8225F144:
	// lwz r7,272(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8225f188
	if (!ctx.cr6.gt) goto loc_8225F188;
loc_8225F154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225F15C;
	sub_8228C340(ctx, base);
	// lbz r11,102(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 102);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225f174
	if (ctx.cr0.eq) goto loc_8225F174;
	// lbz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225f184
	if (ctx.cr0.eq) goto loc_8225F184;
loc_8225F174:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8225f154
	if (ctx.cr6.lt) goto loc_8225F154;
	// b 0x8225f188
	goto loc_8225F188;
loc_8225F184:
	// li r29,0
	r29.s64 = 0;
loc_8225F188:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225f1a8
	if (!ctx.cr0.eq) goto loc_8225F1A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,680(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8225f1b8
	if (!ctx.cr6.gt) goto loc_8225F1B8;
loc_8225F1A8:
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225F1B8;
	sub_8225B1C8(ctx, base);
loc_8225F1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82266628) {
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
	ctx.lr = 0x82266630;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8226684c
	if (ctx.cr6.lt) goto loc_8226684C;
	// li r27,0
	r27.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x822f6280
	ctx.lr = 0x82266654;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82266860
	if (ctx.cr0.eq) goto loc_82266860;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r31,25
	r31.s64 = 25;
loc_82266674:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82207828
	ctx.lr = 0x8226667C;
	sub_82207828(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bge 0x82266674
	if (!ctx.cr0.lt) goto loc_82266674;
	// li r28,0
	r28.s64 = 0;
	// b 0x822667d8
	goto loc_822667D8;
loc_82266690:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x822666d4
	if (ctx.cr6.eq) goto loc_822666D4;
	// lis r8,1489
	ctx.r8.s64 = 97583104;
	// ori r8,r8,29788
	ctx.r8.u64 = ctx.r8.u64 | 29788;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - r27.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82266854
	if (ctx.cr6.lt) goto loc_82266854;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r8,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r8.u32);
loc_822666D4:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82266794
	if (ctx.cr6.eq) goto loc_82266794;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
loc_82266714:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82266774
	if (ctx.cr6.eq) goto loc_82266774;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266908
	ctx.lr = 0x8226672C;
	sub_82266908(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226675c
	if (ctx.cr6.eq) goto loc_8226675C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// b 0x82266764
	goto loc_82266764;
loc_8226675C:
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82266764:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x82266714
	if (ctx.cr6.lt) goto loc_82266714;
loc_82266774:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(r30.u32, 25, ctx.xer);
	// bne cr6,0x82266794
	if (!ctx.cr6.eq) goto loc_82266794;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82266908
	ctx.lr = 0x82266788;
	sub_82266908(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822667d8
	goto loc_822667D8;
loc_82266794:
	// mulli r10,r30,12
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822667cc
	if (ctx.cr6.eq) goto loc_822667CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_822667CC:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x822667d8
	if (!ctx.cr6.eq) goto loc_822667D8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_822667D8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82266690
	if (!ctx.cr6.eq) goto loc_82266690;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x8226680c
	if (!ctx.cr6.gt) goto loc_8226680C;
	// addi r31,r1,124
	r31.s64 = ctx.r1.s64 + 124;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
loc_822667F4:
	// addi r4,r31,-12
	ctx.r4.s64 = r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266908
	ctx.lr = 0x82266800;
	sub_82266908(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x822667f4
	if (!ctx.cr0.eq) goto loc_822667F4;
loc_8226680C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x82266880
	ctx.lr = 0x8226682C;
	sub_82266880(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r6,r11,30880
	ctx.r6.s64 = ctx.r11.s64 + 30880;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212e1b0
	ctx.lr = 0x82266844;
	sub_8212E1B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822078a0
	ctx.lr = 0x8226684C;
	sub_822078A0(ctx, base);
loc_8226684C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1d00
	return;
loc_82266854:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82266860;
	sub_822F6020(ctx, base);
loc_82266860:
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
	ctx.lr = 0x8226687C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_822764C8) {
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
	// lbz r11,362(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 362);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227652c
	if (ctx.cr0.eq) goto loc_8227652C;
	// lbz r11,360(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 360);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8227652c
	if (!ctx.cr0.eq) goto loc_8227652C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// bl 0x822771e8
	ctx.lr = 0x82276508;
	sub_822771E8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,360(r31)
	REX_STORE_U8(r31.u32 + 360, ctx.r11.u8);
loc_8227652C:
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

DEFINE_REX_FUNC(sub_8227AA28) {
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
	ctx.lr = 0x8227AA30;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mulli r9,r5,720
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(720));
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r10,6056(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r8,-1144
	ctx.r4.s64 = ctx.r8.s64 + -1144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r10,32
	r29.s64 = ctx.r10.s64 + 32;
	// bl 0x826a0568
	ctx.lr = 0x8227AA70;
	sub_826A0568(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227AA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8227aab0
	if (ctx.cr6.lt) goto loc_8227AAB0;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8227aab4
	goto loc_8227AAB4;
loc_8227AAB0:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8227AAB4:
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// addi r31,r31,508
	r31.s64 = r31.s64 + 508;
	// bl 0x822e6ff8
	ctx.lr = 0x8227AAC0;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r9,50
	ctx.r9.s64 = 50;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x8227AAE4;
	sub_82174318(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82280A38) {
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
	ctx.lr = 0x82280A40;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82280A58:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82280a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82280A58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82280b48
	ctx.lr = 0x82280A6C;
	sub_82280B48(ctx, base);
	// lwz r30,448(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82280a94
	if (!ctx.cr6.eq) goto loc_82280A94;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,440
	ctx.r4.s64 = r31.s64 + 440;
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149510
	ctx.lr = 0x82280A8C;
	sub_82149510(ctx, base);
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// b 0x82280b40
	goto loc_82280B40;
loc_82280A94:
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x82280AA4;
	sub_826A1E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821840d8
	ctx.lr = 0x82280AAC;
	sub_821840D8(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,6168(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 6168);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82149f18
	ctx.lr = 0x82280AC0;
	sub_82149F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82149e08
	ctx.lr = 0x82280ACC;
	sub_82149E08(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f0,-16132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lfs f13,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82280b40
	if (ctx.cr6.lt) goto loc_82280B40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,6168(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6168);
	// addi r4,r31,440
	ctx.r4.s64 = r31.s64 + 440;
	// bl 0x82149510
	ctx.lr = 0x82280AF4;
	sub_82149510(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,452(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82280b08
	if (ctx.cr6.eq) goto loc_82280B08;
	// bl 0x821357c8
	ctx.lr = 0x82280B08;
	sub_821357C8(ctx, base);
loc_82280B08:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,436(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 436);
	// stw r30,448(r31)
	REX_STORE_U32(r31.u32 + 448, r30.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r10,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r10.u32);
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82280B40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82287C80) {
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
	ctx.lr = 0x82287C88;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82250b90
	ctx.lr = 0x82287C9C;
	sub_82250B90(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82151d50
	ctx.lr = 0x82287CA4;
	sub_82151D50(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// addi r26,r3,32
	r26.s64 = ctx.r3.s64 + 32;
	// beq 0x82287e3c
	if (ctx.cr0.eq) goto loc_82287E3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82287ec0
	ctx.lr = 0x82287CC4;
	sub_82287EC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r27,r31,116
	r27.s64 = r31.s64 + 116;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f0,1428(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1428);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x82287D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82287e28
	if (ctx.cr0.eq) goto loc_82287E28;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,76(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f9,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f0,f9,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f0.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82250370
	ctx.lr = 0x82287D68;
	sub_82250370(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lbz r11,31(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82287d84
	if (ctx.cr0.eq) goto loc_82287D84;
	// lwz r3,200(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 200);
	// bl 0x82130e88
	ctx.lr = 0x82287D84;
	sub_82130E88(ctx, base);
loc_82287D84:
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r28,r31,144
	r28.s64 = r31.s64 + 144;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
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
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// bl 0x82250fa8
	ctx.lr = 0x82287DD4;
	sub_82250FA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251288
	ctx.lr = 0x82287DE4;
	sub_82251288(ctx, base);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251758
	ctx.lr = 0x82287DF4;
	sub_82251758(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// lfs f1,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251950
	ctx.lr = 0x82287E28;
	sub_82251950(ctx, base);
loc_82287E28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 48);
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82251ac0
	ctx.lr = 0x82287E3C;
	sub_82251AC0(ctx, base);
loc_82287E3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82296838) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82296870
	if (!ctx.cr6.eq) goto loc_82296870;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822968b4
	goto loc_822968B4;
loc_82296870:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,200(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229688C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822968b0
	if (ctx.cr0.eq) goto loc_822968B0;
	// addi r7,r30,16
	ctx.r7.s64 = r30.s64 + 16;
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82294e48
	ctx.lr = 0x822968B0;
	sub_82294E48(ctx, base);
loc_822968B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822968B4:
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

DEFINE_REX_FUNC(sub_8229E4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8229E4B0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E4FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,3
	ctx.r6.s64 = 3;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_8229E534:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8229e548
	if (!ctx.cr6.eq) goto loc_8229E548;
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// b 0x8229e54c
	goto loc_8229E54C;
loc_8229E548:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8229E54C:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne cr6,0x8229e59c
	if (!ctx.cr6.eq) goto loc_8229E59C;
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x8229e5d4
	goto loc_8229E5D4;
loc_8229E59C:
	// lfd f10,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f9,8(r9)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f8,16(r9)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_8229E5D4:
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r3,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne 0x8229e534
	if (!ctx.cr0.eq) goto loc_8229E534;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A8268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822A8270;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a838c
	if (ctx.cr6.eq) goto loc_822A838C;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a838c
	if (ctx.cr0.eq) goto loc_822A838C;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a8364
	if (!ctx.cr6.eq) goto loc_822A8364;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822a82b4
	if (!ctx.cr0.eq) goto loc_822A82B4;
	// li r29,1
	r29.s64 = 1;
loc_822A82B4:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a8364
	if (!ctx.cr6.lt) goto loc_822A8364;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a82d4
	if (ctx.cr6.eq) goto loc_822A82D4;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822A82CC;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822a82d8
	goto loc_822A82D8;
loc_822A82D4:
	// li r30,0
	r30.s64 = 0;
loc_822A82D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a8310
	if (!ctx.cr6.gt) goto loc_822A8310;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822A82F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8304
	if (ctx.cr6.eq) goto loc_822A8304;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822A8304:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a82f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A82F0;
loc_822A8310:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8354
	if (ctx.cr6.eq) goto loc_822A8354;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a834c
	if (ctx.cr0.eq) goto loc_822A834C;
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
	ctx.lr = 0x822A834C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A834C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822A8354:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822A8364:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8380
	if (ctx.cr0.eq) goto loc_822A8380;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822A8380:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822A838C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B7FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,7168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7168);
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822b8044
	if (!ctx.cr0.eq) goto loc_822B8044;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,7168(r10)
	REX_STORE_U32(ctx.r10.u32 + 7168, ctx.r11.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822c0368
	ctx.lr = 0x822B8038;
	sub_822C0368(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13152
	ctx.r3.s64 = ctx.r11.s64 + 13152;
	// bl 0x8269d008
	ctx.lr = 0x822B8044;
	sub_8269D008(ctx, base);
loc_822B8044:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r11,6464
	ctx.r9.s64 = ctx.r11.s64 + 6464;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822c0b70
	ctx.lr = 0x822B806C;
	sub_822C0B70(ctx, base);
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

DEFINE_REX_FUNC(sub_822BC5C0) {
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
	ctx.lr = 0x822BC5C8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x822be578
	ctx.lr = 0x822BC5E8;
	sub_822BE578(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30800
	ctx.r4.s64 = ctx.r11.s64 + 30800;
	// bl 0x82180150
	ctx.lr = 0x822BC5F8;
	sub_82180150(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822bc648
	if (ctx.cr6.eq) goto loc_822BC648;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822bc68c
	if (ctx.cr6.lt) goto loc_822BC68C;
	// fdivs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f0.f64)));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// b 0x822bc68c
	goto loc_822BC68C;
loc_822BC648:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f30,240(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822bc670
	if (ctx.cr6.lt) goto loc_822BC670;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC670:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc684
	if (ctx.cr0.eq) goto loc_822BC684;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// b 0x822bc68c
	goto loc_822BC68C;
loc_822BC684:
	// li r29,1
	r29.s64 = 1;
	// li r30,1
	r30.s64 = 1;
loc_822BC68C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC6A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822bc6d8
	if (ctx.cr0.eq) goto loc_822BC6D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC6BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r11,r3,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	// stb r11,53(r10)
	REX_STORE_U8(ctx.r10.u32 + 53, ctx.r11.u8);
loc_822BC6D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822bc76c
	if (ctx.cr6.eq) goto loc_822BC76C;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bgt cr6,0x822bc6ec
	if (ctx.cr6.gt) goto loc_822BC6EC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822BC6EC:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,148(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bctrl 
	ctx.lr = 0x822BC718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x822bc780
	if (!ctx.cr6.gt) goto loc_822BC780;
loc_822BC734:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822bc734
	if (!ctx.cr0.eq) goto loc_822BC734;
	// b 0x822bc780
	goto loc_822BC780;
loc_822BC76C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC780:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// bl 0x821800b8
	ctx.lr = 0x822BC7A8;
	sub_821800B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C35C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12624);
	// stw r4,12212(r3)
	REX_STORE_U32(ctx.r3.u32 + 12212, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822c3600
	if (ctx.cr6.eq) goto loc_822C3600;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822c3600
	if (ctx.cr6.eq) goto loc_822C3600;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822c3600
	if (ctx.cr6.eq) goto loc_822C3600;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822C3600:
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
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	REX_STORE_U32(ctx.r3.u32 + 10384, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9240) {
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
	ctx.lr = 0x822C9248;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,-1420(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -1420);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c927c
	if (ctx.cr6.eq) goto loc_822C927C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C926C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c927c
	if (!ctx.cr0.eq) goto loc_822C927C;
loc_822C9274:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c9328
	goto loc_822C9328;
loc_822C927C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822C92AC;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822c9274
	if (ctx.cr0.eq) goto loc_822C9274;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// bl 0x823ef2f8
	ctx.lr = 0x822C92DC;
	sub_823EF2F8(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822C92E8;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822c9300
	if (!ctx.cr0.eq) goto loc_822C9300;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x822C92FC;
	sub_823F0350(ctx, base);
	// b 0x822c9274
	goto loc_822C9274;
loc_822C9300:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822C9310;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9208
	ctx.lr = 0x822C931C;
	sub_822C9208(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822C9328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822CE560) {
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
	ctx.lr = 0x822CE568;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822ce5a4
	if (!ctx.cr6.eq) goto loc_822CE5A4;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ce5a4
	if (!ctx.cr0.eq) goto loc_822CE5A4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822CE5A4:
	// rlwinm. r11,r22,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ce6e8
	if (ctx.cr0.eq) goto loc_822CE6E8;
	// lwz r31,4(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ce5c4
	if (ctx.cr0.eq) goto loc_822CE5C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x822ce5cc
	goto loc_822CE5CC;
loc_822CE5C4:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_822CE5CC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r25,r11,20,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822ce6e8
	if (ctx.cr0.eq) goto loc_822CE6E8;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ce6e0
	if (ctx.cr6.lt) goto loc_822CE6E0;
	// mulli r9,r25,12
	ctx.r9.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(12));
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x822ce6e0
	if (ctx.cr6.gt) goto loc_822CE6E0;
	// rlwinm r9,r31,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r11,16,20,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// or r26,r9,r8
	r26.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822ce6e8
	if (ctx.cr6.eq) goto loc_822CE6E8;
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_822CE620:
	// li r11,2
	ctx.r11.s64 = 2;
	// slw r10,r27,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r8,r27,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x822ce668
	if (ctx.cr0.eq) goto loc_822CE668;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_822CE668:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ce674
	if (ctx.cr0.eq) goto loc_822CE674;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_822CE674:
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822ce684
	if (ctx.cr0.eq) goto loc_822CE684;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_822CE684:
	// rlwinm r10,r10,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20480, ctx.xer);
	// bne cr6,0x822ce694
	if (!ctx.cr6.eq) goto loc_822CE694;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_822CE694:
	// and r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 & r22.u64;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ce6c8
	if (ctx.cr0.eq) goto loc_822CE6C8;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,260(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x822CE6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ce6e8
	if (ctx.cr0.lt) goto loc_822CE6E8;
loc_822CE6C8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x822ce620
	if (ctx.cr6.lt) goto loc_822CE620;
	// b 0x822ce6e8
	goto loc_822CE6E8;
loc_822CE6E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_822CE6E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822DD790) {
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
	ctx.lr = 0x822DD798;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822DD7AC:
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822dd864
	if (!ctx.cr6.lt) goto loc_822DD864;
	// addi r31,r25,-1
	r31.s64 = r25.s64 + -1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_822DD7C4:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// rlwinm r7,r31,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r9,1
	r27.s64 = ctx.r9.s64 + 1;
	// lhz r29,-4(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r28,0(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r7,r26
	ctx.r9.u64 = ctx.r7.u64 + r26.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r27,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r8,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r29,r29,3
	r29.u64 = __builtin_rotateleft32(r29.u32, 3);
	// rotlwi r28,r28,3
	r28.u64 = __builtin_rotateleft32(r28.u32, 3);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_822DD804:
	// lwz r24,-4(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822dd83c
	if (!ctx.cr6.lt) goto loc_822DD83C;
	// lwz r24,4(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(r24.u32, r29.u32, ctx.xer);
	// ble cr6,0x822dd83c
	if (!ctx.cr6.gt) goto loc_822DD83C;
	// lwz r24,0(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r24,r27
	ctx.cr6.compare<uint32_t>(r24.u32, r27.u32, ctx.xer);
	// bge cr6,0x822dd83c
	if (!ctx.cr6.lt) goto loc_822DD83C;
	// lwz r24,8(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(r24.u32, r28.u32, ctx.xer);
	// ble cr6,0x822dd83c
	if (!ctx.cr6.gt) goto loc_822DD83C;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
loc_822DD83C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x822dd804
	if (!ctx.cr6.eq) goto loc_822DD804;
	// oris r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 2147483648;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822dd7c4
	if (ctx.cr6.lt) goto loc_822DD7C4;
loc_822DD864:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822dd874
	if (ctx.cr6.eq) goto loc_822DD874;
	// bl 0x822daf40
	ctx.lr = 0x822DD874;
	sub_822DAF40(ctx, base);
loc_822DD874:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dd7ac
	if (!ctx.cr6.eq) goto loc_822DD7AC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822E5950) {
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
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r11,r3,1128
	ctx.r11.s64 = ctx.r3.s64 + 1128;
	// std r9,12000(r3)
	REX_STORE_U64(ctx.r3.u32 + 12000, ctx.r9.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E5980:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822e5980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E5980;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,1768
	ctx.r11.s64 = r31.s64 + 1768;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E599C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822e599c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E599C;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// lwz r11,10564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10564);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// lwz r7,10568(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10568);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// ori r6,r6,61440
	ctx.r6.u64 = ctx.r6.u64 | 61440;
	// stw r8,10428(r31)
	REX_STORE_U32(r31.u32 + 10428, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r6,10708(r31)
	REX_STORE_U32(r31.u32 + 10708, ctx.r6.u32);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// stw r8,10772(r31)
	REX_STORE_U32(r31.u32 + 10772, ctx.r8.u32);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// stw r11,10564(r31)
	REX_STORE_U32(r31.u32 + 10564, ctx.r11.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,10628(r31)
	REX_STORE_U32(r31.u32 + 10628, ctx.r10.u32);
	// ori r5,r5,61696
	ctx.r5.u64 = ctx.r5.u64 | 61696;
	// stw r10,10768(r31)
	REX_STORE_U32(r31.u32 + 10768, ctx.r10.u32);
	// oris r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 65536;
	// stw r3,10604(r31)
	REX_STORE_U32(r31.u32 + 10604, ctx.r3.u32);
	// ori r8,r4,65535
	ctx.r8.u64 = ctx.r4.u64 | 65535;
	// stw r5,10712(r31)
	REX_STORE_U32(r31.u32 + 10712, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,10580(r31)
	REX_STORE_U32(r31.u32 + 10580, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,10568(r31)
	REX_STORE_U32(r31.u32 + 10568, ctx.r7.u32);
	// stw r8,10444(r31)
	REX_STORE_U32(r31.u32 + 10444, ctx.r8.u32);
	// stw r9,10688(r31)
	REX_STORE_U32(r31.u32 + 10688, ctx.r9.u32);
	// stw r6,10824(r31)
	REX_STORE_U32(r31.u32 + 10824, ctx.r6.u32);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// stw r10,10916(r31)
	REX_STORE_U32(r31.u32 + 10916, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822e5a5c
	if (!ctx.cr6.gt) goto loc_822E5A5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822E5A5C;
	sub_822D5B28(ctx, base);
loc_822E5A5C:
	// li r11,3329
	ctx.r11.s64 = 3329;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r9,129
	ctx.r9.s64 = 129;
	// ori r8,r11,8448
	ctx.r8.u64 = ctx.r11.u64 | 8448;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r5,-16382
	ctx.r5.s64 = -1073610752;
	// li r30,8032
	r30.s64 = 8032;
	// lwz r11,144(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 144);
	// ori r7,r5,8448
	ctx.r7.u64 = ctx.r5.u64 | 8448;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r5,130
	ctx.r5.s64 = 130;
	// oris r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 2147549184;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r8,3650
	ctx.r8.s64 = 3650;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// lwz r10,24192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24192);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,3205
	ctx.r10.s64 = 3205;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bne 0x822e5af4
	if (!ctx.cr0.eq) goto loc_822E5AF4;
	// li r9,3
	ctx.r9.s64 = 3;
loc_822E5AF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r10,1404
	ctx.r10.s64 = 1404;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,61453
	ctx.r9.u64 = ctx.r9.u64 | 61453;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,1403
	ctx.r10.s64 = 1403;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822EFB48) {
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
	// bne cr6,0x822efba4
	if (!ctx.cr6.eq) goto loc_822EFBA4;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x822EFB7C;
	sub_8212DD28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r9,-1088
	ctx.r6.s64 = ctx.r9.s64 + -1088;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// bl 0x8212dc68
	ctx.lr = 0x822EFBA4;
	sub_8212DC68(ctx, base);
loc_822EFBA4:
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

DEFINE_REX_FUNC(sub_822F3B00) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3be4
	if (ctx.cr6.eq) goto loc_822F3BE4;
	// lwz r11,8236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822f3be4
	if (ctx.cr6.lt) goto loc_822F3BE4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793c74
	ctx.lr = 0x822F3B40;
	__imp___vsnprintf(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822f3be4
	if (!ctx.cr0.gt) goto loc_822F3BE4;
	// lbz r11,8233(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8233);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f3bc0
	if (ctx.cr0.eq) goto loc_822F3BC0;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,8233(r31)
	REX_STORE_U8(r31.u32 + 8233, ctx.r10.u8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822f3b8c
	if (ctx.cr6.eq) goto loc_822F3B8C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822f3b8c
	if (ctx.cr6.eq) goto loc_822F3B8C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822f3b84
	if (ctx.cr6.lt) goto loc_822F3B84;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x822f3b8c
	if (!ctx.cr6.gt) goto loc_822F3B8C;
loc_822F3B84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f3b90
	goto loc_822F3B90;
loc_822F3B8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F3B90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f3bc0
	if (!ctx.cr0.eq) goto loc_822F3BC0;
	// lwz r11,8216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8216);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8220);
	// addi r4,r10,-26960
	ctx.r4.s64 = ctx.r10.s64 + -26960;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F3BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822f3bc0
	if (!ctx.cr0.lt) goto loc_822F3BC0;
	// stw r3,8236(r31)
	REX_STORE_U32(r31.u32 + 8236, ctx.r3.u32);
loc_822F3BC0:
	// lwz r11,8216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8216);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F3BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822f3be4
	if (!ctx.cr0.lt) goto loc_822F3BE4;
	// stw r3,8236(r31)
	REX_STORE_U32(r31.u32 + 8236, ctx.r3.u32);
loc_822F3BE4:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

DEFINE_REX_FUNC(sub_822F7A68) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// beq 0x822f7a7c
	if (ctx.cr0.eq) goto loc_822F7A7C;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x822f7a80
	goto loc_822F7A80;
loc_822F7A7C:
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
loc_822F7A80:
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8B70) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822F8B78;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// beq 0x822f8ce8
	if (ctx.cr0.eq) goto loc_822F8CE8;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8bb4
	if (ctx.cr6.eq) goto loc_822F8BB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8bb8
	goto loc_822F8BB8;
loc_822F8BB4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F8BB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8bd4
	if (ctx.cr6.eq) goto loc_822F8BD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8bd0
	if (ctx.cr6.eq) goto loc_822F8BD0;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8bd4
	goto loc_822F8BD4;
loc_822F8BD0:
	// li r28,0
	r28.s64 = 0;
loc_822F8BD4:
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// stfs f31,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 248, temp.u32);
	// stfs f30,252(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 252, temp.u32);
	// stfs f29,256(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 256, temp.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8c78
	if (ctx.cr0.eq) goto loc_822F8C78;
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
	// ble cr6,0x822f8d14
	if (!ctx.cr6.gt) goto loc_822F8D14;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822F8C10:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8c64
	if (ctx.cr6.eq) goto loc_822F8C64;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8c30
	if (ctx.cr6.eq) goto loc_822F8C30;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8c34
	goto loc_822F8C34;
loc_822F8C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F8C34:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822f8c64
	if (!ctx.cr6.eq) goto loc_822F8C64;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8c64
	if (ctx.cr0.eq) goto loc_822F8C64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822f8b70
	ctx.lr = 0x822F8C5C;
	sub_822F8B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8d18
	if (!ctx.cr0.eq) goto loc_822F8D18;
loc_822F8C64:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822f8c10
	if (ctx.cr6.lt) goto loc_822F8C10;
	// b 0x822f8d14
	goto loc_822F8D14;
loc_822F8C78:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f8d14
	if (!ctx.cr6.gt) goto loc_822F8D14;
	// li r31,0
	r31.s64 = 0;
loc_822F8C90:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f8ccc
	if (ctx.cr6.eq) goto loc_822F8CCC;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8ccc
	if (ctx.cr6.eq) goto loc_822F8CCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822f8b70
	ctx.lr = 0x822F8CC4;
	sub_822F8B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8d18
	if (!ctx.cr0.eq) goto loc_822F8D18;
loc_822F8CCC:
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
	// blt cr6,0x822f8c90
	if (ctx.cr6.lt) goto loc_822F8C90;
	// b 0x822f8d14
	goto loc_822F8D14;
loc_822F8CE8:
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// stfs f31,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f30,252(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f29,256(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,208(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F8D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8d18
	if (!ctx.cr0.eq) goto loc_822F8D18;
loc_822F8D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F8D18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82303080) {
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
	ctx.lr = 0x82303088;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823030ac
	if (!ctx.cr6.eq) goto loc_823030AC;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82303148
	goto loc_82303148;
loc_823030AC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82303144
	if (ctx.cr6.eq) goto loc_82303144;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82303144
	if (ctx.cr6.eq) goto loc_82303144;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r27,r28
	r27.u64 = r28.u64;
	// b 0x823030d4
	goto loc_823030D4;
loc_823030C8:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x823030dc
	if (ctx.cr6.eq) goto loc_823030DC;
	// lbzu r11,1(r27)
	ea = 1 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
loc_823030D4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823030c8
	if (!ctx.cr0.eq) goto loc_823030C8;
loc_823030DC:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82303144
	if (ctx.cr0.eq) goto loc_82303144;
	// lwz r29,124(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r26,r3,124
	r26.s64 = ctx.r3.s64 + 124;
	// b 0x8230313c
	goto loc_8230313C;
loc_823030F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	r31.s64 = r29.s64 + -4;
	// bne cr6,0x82303104
	if (!ctx.cr6.eq) goto loc_82303104;
	// li r31,0
	r31.s64 = 0;
loc_82303104:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82303138
	if (ctx.cr6.eq) goto loc_82303138;
	// subf r30,r28,r27
	r30.u64 = r27.u64 - r28.u64;
	// bl 0x82331458
	ctx.lr = 0x82303118;
	sub_82331458(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bne cr6,0x82303138
	if (!ctx.cr6.eq) goto loc_82303138;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823316d8
	ctx.lr = 0x82303130;
	sub_823316D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82303150
	if (ctx.cr0.eq) goto loc_82303150;
loc_82303138:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8230313C:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bne cr6,0x823030f4
	if (!ctx.cr6.eq) goto loc_823030F4;
loc_82303144:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82303148:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82303150:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82303148
	goto loc_82303148;
}

DEFINE_REX_FUNC(sub_8230CD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8230CDA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230cdc4
	if (ctx.cr6.eq) goto loc_8230CDC4;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8230cdc8
	if (!ctx.cr0.eq) goto loc_8230CDC8;
loc_8230CDC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230CDC8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8230c218
	ctx.lr = 0x8230CDE0;
	sub_8230C218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230ce24
	if (!ctx.cr0.eq) goto loc_8230CE24;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230ce20
	if (ctx.cr6.eq) goto loc_8230CE20;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8230c218
	ctx.lr = 0x8230CE18;
	sub_8230C218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230ce24
	if (!ctx.cr0.eq) goto loc_8230CE24;
loc_8230CE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230CE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823114D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f12,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,666
	ctx.r8.s64 = 666;
	// lfs f13,5444(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5444);
	ctx.f13.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r11,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stfs f13,120(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 120, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,124(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 124, temp.u32);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// stw r11,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r11.u32);
	// stw r8,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r8.u32);
	// stw r10,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r10.u32);
	// stw r10,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r10.u32);
	// stw r10,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r10.u32);
	// stw r11,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r11.u32);
	// stw r10,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r10.u32);
	// stw r11,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r11,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r11.u32);
	// stw r11,92(r9)
	REX_STORE_U32(ctx.r9.u32 + 92, ctx.r11.u32);
	// stw r11,140(r9)
	REX_STORE_U32(ctx.r9.u32 + 140, ctx.r11.u32);
	// stw r7,144(r9)
	REX_STORE_U32(ctx.r9.u32 + 144, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82314890) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823148b8
	if (!ctx.cr6.eq) goto loc_823148B8;
	// li r3,95
	ctx.r3.s64 = 95;
	// b 0x823148d0
	goto loc_823148D0;
loc_823148B8:
	// bl 0x823165f0
	ctx.lr = 0x823148BC;
	sub_823165F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823148D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823148D0:
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

DEFINE_REX_FUNC(sub_82316528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82316530;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bge cr6,0x8231657c
	if (!ctx.cr6.lt) goto loc_8231657C;
loc_82316554:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82316588
	if (ctx.cr6.eq) goto loc_82316588;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823315e8
	ctx.lr = 0x82316568;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82316588
	if (ctx.cr0.eq) goto loc_82316588;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x82316554
	if (ctx.cr6.lt) goto loc_82316554;
loc_8231657C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82316580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82316588:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82316580
	goto loc_82316580;
}

DEFINE_REX_FUNC(sub_82318E28) {
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
	// lwz r3,-10780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318e80
	if (ctx.cr6.eq) goto loc_82318E80;
	// bl 0x82318cf0
	ctx.lr = 0x82318E4C;
	sub_82318CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318e84
	if (!ctx.cr0.eq) goto loc_82318E84;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10780(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10780);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1209
	ctx.r6.s64 = 1209;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82318E78;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10780(r31)
	REX_STORE_U32(r31.u32 + -10780, ctx.r11.u32);
loc_82318E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318E84:
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

DEFINE_REX_FUNC(sub_8231D318) {
	REX_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d328
	if (ctx.cr6.eq) goto loc_8231D328;
	// b 0x82350f40
	sub_82350F40(ctx, base);
	return;
loc_8231D328:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231D668) {
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
	// beq cr6,0x8231d6b0
	if (ctx.cr6.eq) goto loc_8231D6B0;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231d6d8
	if (!ctx.cr0.eq) goto loc_8231D6D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231D6A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231d6dc
	if (!ctx.cr0.eq) goto loc_8231D6DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8231d6d4
	goto loc_8231D6D4;
loc_8231D6B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231D6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231d6dc
	if (!ctx.cr0.eq) goto loc_8231D6DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231D6D4:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8231D6D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231D6DC:
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

DEFINE_REX_FUNC(sub_82322DD8) {
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
	ctx.lr = 0x82322DE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82322d30
	ctx.lr = 0x82322DF0;
	sub_82322D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322f28
	if (!ctx.cr0.eq) goto loc_82322F28;
	// lwz r25,12(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 12);
	// addi r24,r23,12
	r24.s64 = r23.s64 + 12;
	// b 0x82322ee8
	goto loc_82322EE8;
loc_82322E04:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// bne cr6,0x82322e14
	if (!ctx.cr6.eq) goto loc_82322E14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82322E14:
	// lwz r27,52(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r26,r11,52
	r26.s64 = ctx.r11.s64 + 52;
	// b 0x82322edc
	goto loc_82322EDC;
loc_82322E20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r28,r27,-4
	r28.s64 = r27.s64 + -4;
	// bne cr6,0x82322e30
	if (!ctx.cr6.eq) goto loc_82322E30;
	// li r28,0
	r28.s64 = 0;
loc_82322E30:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82322e94
	if (!ctx.cr0.eq) goto loc_82322E94;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82322e94
	if (!ctx.cr0.eq) goto loc_82322E94;
	// lwz r31,128(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 128);
	// addi r29,r28,128
	r29.s64 = r28.s64 + 128;
	// b 0x82322e80
	goto loc_82322E80;
loc_82322E50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// bne cr6,0x82322e60
	if (!ctx.cr6.eq) goto loc_82322E60;
	// li r30,0
	r30.s64 = 0;
loc_82322E60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82312e10
	ctx.lr = 0x82322E68;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322f28
	if (!ctx.cr0.eq) goto loc_82322F28;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82322E80:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82322e50
	if (!ctx.cr6.eq) goto loc_82322E50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r28)
	REX_STORE_U32(r28.u32 + 88, ctx.r11.u32);
	// b 0x82322ed8
	goto loc_82322ED8;
loc_82322E94:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322ec8
	if (ctx.cr6.eq) goto loc_82322EC8;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322ec8
	if (ctx.cr6.eq) goto loc_82322EC8;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,64(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x82322EC8;
	sub_822F7C10(ctx, base);
loc_82322EC8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82312e10
	ctx.lr = 0x82322ED0;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322f28
	if (!ctx.cr0.eq) goto loc_82322F28;
loc_82322ED8:
	// lwz r27,0(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82322EDC:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x82322e20
	if (!ctx.cr6.eq) goto loc_82322E20;
	// lwz r25,0(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82322EE8:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// bne cr6,0x82322e04
	if (!ctx.cr6.eq) goto loc_82322E04;
	// lwz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24);
	// addi r9,r23,24
	ctx.r9.s64 = r23.s64 + 24;
	// b 0x82322f1c
	goto loc_82322F1C;
loc_82322EFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82322f0c
	if (!ctx.cr6.eq) goto loc_82322F0C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82322F0C:
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82322F1C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82322efc
	if (!ctx.cr6.eq) goto loc_82322EFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82322F28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8232D170) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D758) {
	REX_FUNC_PROLOGUE();
	// lbz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, ctx.r4.u8);
	// stb r11,49(r3)
	REX_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F388) {
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
	ctx.lr = 0x8232F3A4;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f3b8
	if (!ctx.cr6.eq) goto loc_8232F3B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82336d78
	ctx.lr = 0x8232F3B8;
	sub_82336D78(ctx, base);
loc_8232F3B8:
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

DEFINE_REX_FUNC(sub_8232FD48) {
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
	// bl 0x8235ace0
	ctx.lr = 0x8232FD5C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fd78
	if (!ctx.cr6.eq) goto loc_8232FD78;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232FD78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82331758) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82331790
	if (!ctx.cr6.gt) goto loc_82331790;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8233176C:
	// lbzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331790
	if (!ctx.cr6.eq) goto loc_82331790;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8233176c
	if (ctx.cr0.gt) goto loc_8233176C;
loc_82331790:
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82335990) {
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
	ctx.lr = 0x82335998;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823359c8
	if (!ctx.cr6.eq) goto loc_823359C8;
loc_823359BC:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_823359C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823359E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823359f8
	if (ctx.cr6.eq) goto loc_823359F8;
loc_823359EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_823359F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335a20
	if (ctx.cr6.eq) goto loc_82335A20;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82334888
	ctx.lr = 0x82335A14;
	sub_82334888(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823359ec
	if (!ctx.cr6.eq) goto loc_823359EC;
loc_82335A20:
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(r31.s32, -2, ctx.xer);
	// bne cr6,0x82335a78
	if (!ctx.cr6.eq) goto loc_82335A78;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82335a40
	if (!ctx.cr6.eq) goto loc_82335A40;
	// li r31,-1
	r31.s64 = -1;
	// b 0x82335a78
	goto loc_82335A78;
loc_82335A40:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335a6c
	if (ctx.cr6.eq) goto loc_82335A6C;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82335a6c
	if (!ctx.cr6.eq) goto loc_82335A6C;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234f290
	ctx.lr = 0x82335A68;
	sub_8234F290(ctx, base);
	// b 0x82335b9c
	goto loc_82335B9C;
loc_82335A6C:
	// lwz r31,56(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(r31.s32, -2, ctx.xer);
	// beq cr6,0x82335b9c
	if (ctx.cr6.eq) goto loc_82335B9C;
loc_82335A78:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// stw r26,0(r24)
	REX_STORE_U32(r24.u32 + 0, r26.u32);
	// beq cr6,0x82335ab0
	if (ctx.cr6.eq) goto loc_82335AB0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x823359bc
	if (ctx.cr6.lt) goto loc_823359BC;
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823359bc
	if (!ctx.cr6.lt) goto loc_823359BC;
	// lwz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 308);
	// mulli r10,r31,424
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(424));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82350470
	ctx.lr = 0x82335AAC;
	sub_82350470(ctx, base);
	// b 0x82335b4c
	goto loc_82335B4C;
loc_82335AB0:
	// lwz r11,744(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 744);
	// addi r10,r30,744
	ctx.r10.s64 = r30.s64 + 744;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82335ad0
	if (!ctx.cr6.eq) goto loc_82335AD0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x82335ad4
	if (ctx.cr6.eq) goto loc_82335AD4;
loc_82335AD0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82335AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335afc
	if (!ctx.cr6.eq) goto loc_82335AFC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335af4
	if (ctx.cr6.eq) goto loc_82335AF4;
	// addi r29,r11,-8
	r29.s64 = ctx.r11.s64 + -8;
	// b 0x82335b4c
	goto loc_82335B4C;
loc_82335AF4:
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82335b4c
	goto loc_82335B4C;
loc_82335AFC:
	// lwz r10,1160(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1160);
	// addi r11,r30,1160
	ctx.r11.s64 = r30.s64 + 1160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82335b1c
	if (!ctx.cr6.eq) goto loc_82335B1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x82335b20
	if (ctx.cr6.eq) goto loc_82335B20;
loc_82335B1C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82335B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335b38
	if (ctx.cr6.eq) goto loc_82335B38;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_82335B38:
	// lwz r11,1164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234f290
	ctx.lr = 0x82335B4C;
	sub_8234F290(ctx, base);
loc_82335B4C:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addic. r8,r30,312
	ctx.xer.ca = r30.u32 > 4294966983;
	ctx.r8.s64 = r30.s64 + 312;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r30,320
	ctx.r10.s64 = r30.s64 + 320;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r6,12(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r26,16(r29)
	REX_STORE_U32(r29.u32 + 16, r26.u32);
	// bne 0x82335b84
	if (!ctx.cr0.eq) goto loc_82335B84;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82335B84:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82335B9C:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335bc0
	if (ctx.cr6.eq) goto loc_82335BC0;
	// lwz r11,292(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335bcc
	if (ctx.cr6.eq) goto loc_82335BCC;
	// lwz r31,172(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x82335bc4
	goto loc_82335BC4;
loc_82335BC0:
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
loc_82335BC4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82335bd0
	if (!ctx.cr6.eq) goto loc_82335BD0;
loc_82335BCC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82335BD0:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335be8
	if (!ctx.cr6.eq) goto loc_82335BE8;
	// lwz r11,1180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1180);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82335c5c
	if (!ctx.cr6.eq) goto loc_82335C5C;
loc_82335BE8:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335c5c
	if (ctx.cr6.eq) goto loc_82335C5C;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82335c10
	if (!ctx.cr6.eq) goto loc_82335C10;
	// addi r3,r30,23440
	ctx.r3.s64 = r30.s64 + 23440;
	// bl 0x82354fb8
	ctx.lr = 0x82335C08;
	sub_82354FB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82335c5c
	goto loc_82335C5C;
loc_82335C10:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82335c28
	if (!ctx.cr6.eq) goto loc_82335C28;
	// addi r3,r30,24000
	ctx.r3.s64 = r30.s64 + 24000;
	// bl 0x82354fb8
	ctx.lr = 0x82335C20;
	sub_82354FB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82335c5c
	goto loc_82335C5C;
loc_82335C28:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82335c40
	if (!ctx.cr6.eq) goto loc_82335C40;
	// addi r3,r30,23720
	ctx.r3.s64 = r30.s64 + 23720;
	// bl 0x82354fb8
	ctx.lr = 0x82335C38;
	sub_82354FB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82335c5c
	goto loc_82335C5C;
loc_82335C40:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82335c58
	if (!ctx.cr6.eq) goto loc_82335C58;
	// addi r3,r30,24280
	ctx.r3.s64 = r30.s64 + 24280;
	// bl 0x82354fb8
	ctx.lr = 0x82335C50;
	sub_82354FB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82335c5c
	goto loc_82335C5C;
loc_82335C58:
	// li r28,25
	r28.s64 = 25;
loc_82335C5C:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335cac
	if (ctx.cr6.eq) goto loc_82335CAC;
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82335cac
	if (ctx.cr6.eq) goto loc_82335CAC;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335d14
	if (ctx.cr6.eq) goto loc_82335D14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bctrl 
	ctx.lr = 0x82335C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82335d14
	if (!ctx.cr6.eq) goto loc_82335D14;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// b 0x82335d08
	goto loc_82335D08;
loc_82335CAC:
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335cd0
	if (!ctx.cr6.eq) goto loc_82335CD0;
	// lwz r11,1176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1176);
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335cd0
	if (ctx.cr6.eq) goto loc_82335CD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82335cdc
	goto loc_82335CDC;
loc_82335CD0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82335d14
	if (!ctx.cr6.eq) goto loc_82335D14;
	// lwz r3,20884(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20884);
loc_82335CDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r7,72(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 72);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82335d14
	if (!ctx.cr6.eq) goto loc_82335D14;
loc_82335D08:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// beq cr6,0x82335d4c
	if (ctx.cr6.eq) goto loc_82335D4C;
loc_82335D14:
	// lwz r3,1208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1208);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,72(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 72);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82335e40
	if (!ctx.cr6.eq) goto loc_82335E40;
loc_82335D4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,1208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1208);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82335d70
	if (!ctx.cr6.eq) goto loc_82335D70;
	// lwz r11,84(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 84);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82335D70:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82335e04
	if (ctx.cr6.eq) goto loc_82335E04;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,1208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82335db4
	if (!ctx.cr6.eq) goto loc_82335DB4;
	// stw r25,72(r29)
	REX_STORE_U32(r29.u32 + 72, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,76(r29)
	REX_STORE_U32(r29.u32 + 76, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_82335DB4:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r25,72(r29)
	REX_STORE_U32(r29.u32 + 72, r25.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r11,76(r29)
	REX_STORE_U32(r29.u32 + 76, ctx.r11.u32);
	// stw r31,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, r31.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// ble cr6,0x82335e38
	if (!ctx.cr6.gt) goto loc_82335E38;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r11,124
	ctx.r8.s64 = ctx.r11.s64 + 124;
loc_82335DE0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82335de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82335DE0;
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_82335E04:
	// stw r31,72(r29)
	REX_STORE_U32(r29.u32 + 72, r31.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82335e38
	if (!ctx.cr6.gt) goto loc_82335E38;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r29,72
	ctx.r8.s64 = r29.s64 + 72;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
loc_82335E24:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82335e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82335E24;
loc_82335E38:
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82335E40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8235B9E0) {
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
	// lbz r11,561(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 561);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235ba30
	if (!ctx.cr6.eq) goto loc_8235BA30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8235ba20
	if (ctx.cr6.eq) goto loc_8235BA20;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8235BA20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235bb04
	if (ctx.cr6.eq) goto loc_8235BB04;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x8235bb04
	goto loc_8235BB04;
loc_8235BA30:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,576(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,568(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 568);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f13,580(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f5.f64)));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f4.f64)));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8235ba80
	if (ctx.cr6.gt) goto loc_8235BA80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8235baec
	goto loc_8235BAEC;
loc_8235BA80:
	// lfs f12,584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8235ba9c
	if (ctx.cr6.lt) goto loc_8235BA9C;
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8235baec
	goto loc_8235BAEC;
loc_8235BA9C:
	// lfs f12,588(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x8235babc
	if (ctx.cr6.gt) goto loc_8235BABC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8235baec
	goto loc_8235BAEC;
loc_8235BABC:
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10616(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10616);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,10608(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x8235BAE8;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_8235BAEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8235baf8
	if (ctx.cr6.eq) goto loc_8235BAF8;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8235BAF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235bb04
	if (ctx.cr6.eq) goto loc_8235BB04;
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8235BB04:
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

DEFINE_REX_FUNC(sub_82365A40) {
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
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82365c0c
	if (ctx.cr6.gt) goto loc_82365C0C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82365ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365AB4;
	// bdzf 4*cr6+eq,0x82365ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365AE8;
	// bdzf 4*cr6+eq,0x82365b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365B1C;
	// bdzf 4*cr6+eq,0x82365b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365B50;
	// bdzf 4*cr6+eq,0x82365b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365B84;
	// bdzf 4*cr6+eq,0x82365bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82365BB8;
	// bne cr6,0x82365bec
	if (!ctx.cr6.eq) goto loc_82365BEC;
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365AA0;
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
loc_82365AB4:
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365AD4;
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
loc_82365AE8:
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
	ctx.lr = 0x82365B08;
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
loc_82365B1C:
	// lfs f0,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365B3C;
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
loc_82365B50:
	// lfs f0,336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365B70;
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
loc_82365B84:
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
	ctx.lr = 0x82365BA4;
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
loc_82365BB8:
	// lfs f0,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365BD8;
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
loc_82365BEC:
	// lfs f0,332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82365C0C;
	sub_826A0568(ctx, base);
loc_82365C0C:
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

DEFINE_REX_FUNC(sub_82377B88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82377b98
	if (!ctx.cr6.eq) goto loc_82377B98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82377B98:
	// b 0x82377aa8
	sub_82377AA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823784F8) {
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
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r30,r31,12272
	r30.s64 = r31.s64 + 12272;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82378524;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,18156
	ctx.r11.s64 = ctx.r11.s64 + 18156;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r3,-32200
	ctx.r3.s64 = -2110259200;
	// stw r11,12272(r31)
	REX_STORE_U32(r31.u32 + 12272, ctx.r11.u32);
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r11,r3,-31520
	ctx.r11.s64 = ctx.r3.s64 + -31520;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r4,31600
	ctx.r10.s64 = ctx.r4.s64 + 31600;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// addi r9,r5,31648
	ctx.r9.s64 = ctx.r5.s64 + 31648;
	// addi r11,r6,31672
	ctx.r11.s64 = ctx.r6.s64 + 31672;
	// addi r10,r7,31624
	ctx.r10.s64 = ctx.r7.s64 + 31624;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// lis r8,-32201
	ctx.r8.s64 = -2110324736;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r8,31696
	ctx.r9.s64 = ctx.r8.s64 + 31696;
	// li r10,292
	ctx.r10.s64 = 292;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// stw r9,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82380EA8) {
	REX_FUNC_PROLOGUE();
	// lbz r10,681(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 681);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82380f20
	if (ctx.cr6.gt) goto loc_82380F20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82380f08
	if (ctx.cr6.eq) goto loc_82380F08;
	// bdz 0x82380ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82380ED0;
	// bdz 0x82380ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82380EE4;
	// b 0x82380f08
	goto loc_82380F08;
loc_82380ED0:
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// subfic r9,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// b 0x82380f20
	goto loc_82380F20;
loc_82380EE4:
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x82380efc
	if (!ctx.cr6.lt) goto loc_82380EFC;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// b 0x82380f20
	goto loc_82380F20;
loc_82380EFC:
	// li r10,-64
	ctx.r10.s64 = -64;
	// stw r10,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// b 0x82380f20
	goto loc_82380F20;
loc_82380F08:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lwz r9,656(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// addi r8,r10,30696
	ctx.r8.s64 = ctx.r10.s64 + 30696;
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stw r6,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
loc_82380F20:
	// lbz r10,661(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 661);
	// lwz r9,484(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,472(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// stw r10,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// lwz r7,656(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82380f5c
	if (ctx.cr6.lt) goto loc_82380F5C;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x82380f7c
	if (!ctx.cr6.gt) goto loc_82380F7C;
	// subfic r10,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// stw r10,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// b 0x82380f7c
	goto loc_82380F7C;
loc_82380F5C:
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82380f70
	if (!ctx.cr6.lt) goto loc_82380F70;
	// stw r9,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r9.u32);
loc_82380F70:
	// lwz r10,484(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r9.u32);
loc_82380F7C:
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// lbz r9,660(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 660);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,656(r3)
	REX_STORE_U32(ctx.r3.u32 + 656, ctx.r10.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82380f9c
	if (!ctx.cr6.gt) goto loc_82380F9C;
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// stw r10,656(r3)
	REX_STORE_U32(ctx.r3.u32 + 656, ctx.r10.u32);
loc_82380F9C:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82390A00) {
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
	ctx.lr = 0x82390A08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823c86b8
	ctx.lr = 0x82390A14;
	sub_823C86B8(ctx, base);
	// lwz r3,1056(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1056);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390a2c
	if (ctx.cr6.eq) goto loc_82390A2C;
	// bl 0x82358490
	ctx.lr = 0x82390A28;
	sub_82358490(ctx, base);
	// stw r27,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, r27.u32);
loc_82390A2C:
	// lwz r3,524(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390a50
	if (ctx.cr6.eq) goto loc_82390A50;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,524(r31)
	REX_STORE_U32(r31.u32 + 524, r27.u32);
loc_82390A50:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82390a9c
	if (!ctx.cr6.gt) goto loc_82390A9C;
	// addi r30,r31,2204
	r30.s64 = r31.s64 + 2204;
loc_82390A64:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390a88
	if (ctx.cr6.eq) goto loc_82390A88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
loc_82390A88:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390a64
	if (ctx.cr6.lt) goto loc_82390A64;
loc_82390A9C:
	// lwz r4,1052(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1052);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,19840
	r29.s64 = ctx.r11.s64 + 19840;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390ad0
	if (ctx.cr6.eq) goto loc_82390AD0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1988
	ctx.r6.s64 = 1988;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390ACC;
	sub_82330D00(ctx, base);
	// stw r27,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, r27.u32);
loc_82390AD0:
	// lwz r4,1060(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390af8
	if (ctx.cr6.eq) goto loc_82390AF8;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1994
	ctx.r6.s64 = 1994;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390AF4;
	sub_82330D00(ctx, base);
	// stw r27,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, r27.u32);
loc_82390AF8:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390b84
	if (ctx.cr6.eq) goto loc_82390B84;
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82390b64
	if (!ctx.cr6.gt) goto loc_82390B64;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82390B18:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390b50
	if (ctx.cr6.eq) goto loc_82390B50;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2004
	ctx.r6.s64 = 2004;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390B44;
	sub_82330D00(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_82390B50:
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390b18
	if (ctx.cr6.lt) goto loc_82390B18;
loc_82390B64:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,2009
	ctx.r6.s64 = 2009;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390B80;
	sub_82330D00(ctx, base);
	// stw r27,520(r31)
	REX_STORE_U32(r31.u32 + 520, r27.u32);
loc_82390B84:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82390bd4
	if (!ctx.cr6.gt) goto loc_82390BD4;
	// addi r30,r31,792
	r30.s64 = r31.s64 + 792;
loc_82390B98:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390bc0
	if (ctx.cr6.eq) goto loc_82390BC0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2017
	ctx.r6.s64 = 2017;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390BBC;
	sub_82330D00(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
loc_82390BC0:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390b98
	if (ctx.cr6.lt) goto loc_82390B98;
loc_82390BD4:
	// lwz r4,528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390bfc
	if (ctx.cr6.eq) goto loc_82390BFC;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2024
	ctx.r6.s64 = 2024;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390BF8;
	sub_82330D00(ctx, base);
	// stw r27,528(r31)
	REX_STORE_U32(r31.u32 + 528, r27.u32);
loc_82390BFC:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390c24
	if (ctx.cr6.eq) goto loc_82390C24;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2030
	ctx.r6.s64 = 2030;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82390C20;
	sub_82330D00(ctx, base);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
loc_82390C24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823A06B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A06C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0704
	if (!ctx.cr6.gt) goto loc_823A0704;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A06E0:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A06F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a06e0
	if (ctx.cr6.lt) goto loc_823A06E0;
loc_823A0704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A25D8) {
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
	ctx.lr = 0x823A25E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,4356(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4356);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823A25F8;
	sub_8233E7E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r26,1
	r26.s64 = 1;
	// bl 0x82334748
	ctx.lr = 0x823A2610;
	sub_82334748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a2630
	if (ctx.cr6.eq) goto loc_823A2630;
loc_823A261C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A2624;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823A2630:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a2658
	if (ctx.cr6.lt) goto loc_823A2658;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a21b8
	ctx.lr = 0x823A264C;
	sub_823A21B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a261c
	if (!ctx.cr6.eq) goto loc_823A261C;
loc_823A2658:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r25,r26,2,0,29
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mulli r10,r11,61
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(61));
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r28,r9,r25
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,60(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A26A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a2844
	if (!ctx.cr6.eq) goto loc_823A2844;
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82349190
	ctx.lr = 0x823A26C8;
	sub_82349190(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a2844
	if (!ctx.cr6.eq) goto loc_823A2844;
	// lwz r10,284(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 284);
	// extsw r9,r28
	ctx.r9.s64 = r28.s32;
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// std r9,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r9.u64);
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stb r6,44(r30)
	REX_STORE_U8(r30.u32 + 44, ctx.r6.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r4,45(r30)
	REX_STORE_U8(r30.u32 + 45, ctx.r4.u8);
	// lhz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U16(r28.u32 + 84);
	// sth r3,46(r30)
	REX_STORE_U16(r30.u32 + 46, ctx.r3.u16);
	// beq cr6,0x823a271c
	if (ctx.cr6.eq) goto loc_823A271C;
	// lhz r11,86(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 86);
	// b 0x823a2720
	goto loc_823A2720;
loc_823A271C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A2720:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,48(r30)
	REX_STORE_U16(r30.u32 + 48, ctx.r11.u16);
	// beq cr6,0x823a2734
	if (ctx.cr6.eq) goto loc_823A2734;
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// b 0x823a2738
	goto loc_823A2738;
loc_823A2734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A2738:
	// stb r11,50(r30)
	REX_STORE_U8(r30.u32 + 50, ctx.r11.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r28,90
	ctx.r4.s64 = r28.s64 + 90;
	// addi r3,r30,51
	ctx.r3.s64 = r30.s64 + 51;
	// bl 0x823ef2f8
	ctx.lr = 0x823A274C;
	sub_823EF2F8(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823a2788
	if (ctx.cr0.eq) goto loc_823A2788;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_823A2764:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x823a283c
	if (ctx.cr6.eq) goto loc_823A283C;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a2764
	if (ctx.cr6.lt) goto loc_823A2764;
loc_823A2788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A278C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a2800
	if (!ctx.cr6.eq) goto loc_823A2800;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x823a2800
	if (ctx.cr0.lt) goto loc_823A2800;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823A27A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a27c8
	if (ctx.cr6.lt) goto loc_823A27C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a2248
	ctx.lr = 0x823A27BC;
	sub_823A2248(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a2844
	if (!ctx.cr6.eq) goto loc_823A2844;
loc_823A27C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x82349998
	ctx.lr = 0x823A27EC;
	sub_82349998(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a2844
	if (!ctx.cr6.eq) goto loc_823A2844;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge 0x823a27a8
	if (!ctx.cr0.lt) goto loc_823A27A8;
loc_823A2800:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823a2630
	if (!ctx.cr6.eq) goto loc_823A2630;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a22b8
	ctx.lr = 0x823A2814;
	sub_823A22B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,55
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 55, ctx.xer);
	// beq cr6,0x823a2858
	if (ctx.cr6.eq) goto loc_823A2858;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a2858
	if (ctx.cr6.eq) goto loc_823A2858;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A2830;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823A283C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a278c
	goto loc_823A278C;
loc_823A2844:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A284C;
	sub_8233E820(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823A2858:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A2860;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823BC290) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x823BC298;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823bacf0
	ctx.lr = 0x823BC2B8;
	sub_823BACF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,0
	r24.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r31,r31,1432
	r31.s64 = r31.s64 + 1432;
	// lfd f31,8312(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// li r25,1
	r25.s64 = 1;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,32356
	r27.s64 = ctx.r11.s64 + 32356;
loc_823BC2DC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// bl 0x826a16a0
	ctx.lr = 0x823BC30C;
	sub_826A16A0(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a16a0
	ctx.lr = 0x823BC318;
	sub_826A16A0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,193
	ctx.r6.s64 = 193;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// fdivs f8,f29,f9
	ctx.f8.f64 = double(float(f29.f64 / ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// slw r30,r25,r10
	r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x823BC350;
	sub_82330E40(ctx, base);
	// stw r3,-36(r31)
	REX_STORE_U32(r31.u32 + -36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc394
	if (ctx.cr6.eq) goto loc_823BC394;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,-12(r31)
	REX_STORE_U32(r31.u32 + -12, r30.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwu r24,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r24.u32);
	r31.u32 = ea;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x823bc2dc
	if (ctx.cr6.lt) goto loc_823BC2DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
loc_823BC394:
	// li r3,4500
	ctx.r3.s64 = 4500;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823C72E0) {
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
	ctx.lr = 0x823C72E8;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,264(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,18512(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18512);
	// lwz r24,18520(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 18520);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r25,18516(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 18516);
	// lwz r31,18508(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 18508);
	// slw r22,r24,r11
	r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// beq 0x823c73f8
	if (ctx.cr0.eq) goto loc_823C73F8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x823c7374
	if (ctx.cr6.eq) goto loc_823C7374;
loc_823C732C:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsh r21,r11
	r21.s64 = ctx.r11.s16;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C7340;
	sub_823C1638(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C7354;
	sub_823C1638(ctx, base);
	// slw r7,r27,r21
	ctx.r7.u64 = r21.u8 & 0x20 ? 0 : (r27.u32 << (r21.u8 & 0x3F));
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823c732c
	if (!ctx.cr0.eq) goto loc_823C732C;
loc_823C7374:
	// subf. r28,r25,r24
	r28.u64 = r24.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x823c73b4
	if (ctx.cr0.eq) goto loc_823C73B4;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_823C7380:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C7394;
	sub_823C1638(ctx, base);
	// slw r9,r27,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (r27.u32 << (r25.u8 & 0x3F));
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwu r8,8(r30)
	ea = 8 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bne 0x823c7380
	if (!ctx.cr0.eq) goto loc_823C7380;
loc_823C73B4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823c747c
	if (ctx.cr6.eq) goto loc_823C747C;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// addi r30,r23,-4
	r30.s64 = r23.s64 + -4;
loc_823C73CC:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c73ec
	if (ctx.cr6.eq) goto loc_823C73EC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C73E4;
	sub_823C16C0(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
loc_823C73EC:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x823c73cc
	if (!ctx.cr0.eq) goto loc_823C73CC;
	// b 0x823c747c
	goto loc_823C747C;
loc_823C73F8:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823c743c
	if (ctx.cr6.eq) goto loc_823C743C;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// li r27,1
	r27.s64 = 1;
loc_823C740C:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C7420;
	sub_823C1638(ctx, base);
	// slw r9,r27,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (r27.u32 << (r25.u8 & 0x3F));
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bne 0x823c740c
	if (!ctx.cr0.eq) goto loc_823C740C;
loc_823C743C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823c747c
	if (ctx.cr6.eq) goto loc_823C747C;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// addi r30,r23,-4
	r30.s64 = r23.s64 + -4;
loc_823C7454:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7474
	if (ctx.cr6.eq) goto loc_823C7474;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C746C;
	sub_823C16C0(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
loc_823C7474:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x823c7454
	if (!ctx.cr0.eq) goto loc_823C7454;
loc_823C747C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823c7534
	if (ctx.cr6.eq) goto loc_823C7534;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// addi r30,r23,-4
	r30.s64 = r23.s64 + -4;
loc_823C7494:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c752c
	if (ctx.cr6.eq) goto loc_823C752C;
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823c7500
	if (ctx.cr6.lt) goto loc_823C7500;
	// beq cr6,0x823c74ec
	if (ctx.cr6.eq) goto loc_823C74EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823c74dc
	if (ctx.cr6.lt) goto loc_823C74DC;
	// bl 0x823c16c0
	ctx.lr = 0x823C74C4;
	sub_823C16C0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C74D4;
	sub_823C16C0(ctx, base);
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// b 0x823c7524
	goto loc_823C7524;
loc_823C74DC:
	// bl 0x823c16c0
	ctx.lr = 0x823C74E0;
	sub_823C16C0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// b 0x823c7524
	goto loc_823C7524;
loc_823C74EC:
	// bl 0x823c16c0
	ctx.lr = 0x823C74F0;
	sub_823C16C0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// b 0x823c7518
	goto loc_823C7518;
loc_823C7500:
	// bl 0x823c16c0
	ctx.lr = 0x823C7504;
	sub_823C16C0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C7514;
	sub_823C16C0(ctx, base);
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
loc_823C7518:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C7524;
	sub_823C16C0(ctx, base);
loc_823C7524:
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_823C752C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x823c7494
	if (!ctx.cr0.eq) goto loc_823C7494;
loc_823C7534:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823D0E50) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x823D0E58;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r29,32
	r29.s64 = 32;
	// addi r28,r11,-26496
	r28.s64 = ctx.r11.s64 + -26496;
	// lfs f31,13952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13952);
	f31.f64 = double(temp.f32);
	// lfs f29,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	f29.f64 = double(temp.f32);
loc_823D0E84:
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(r29.s32, 512, ctx.xer);
	// bgt cr6,0x823d0edc
	if (ctx.cr6.gt) goto loc_823D0EDC;
	// beq cr6,0x823d0ed4
	if (ctx.cr6.eq) goto loc_823D0ED4;
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(r29.s32, 128, ctx.xer);
	// bgt cr6,0x823d0ec4
	if (ctx.cr6.gt) goto loc_823D0EC4;
	// beq cr6,0x823d0ebc
	if (ctx.cr6.eq) goto loc_823D0EBC;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// beq cr6,0x823d0eb4
	if (ctx.cr6.eq) goto loc_823D0EB4;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(r29.s32, 64, ctx.xer);
	// bne cr6,0x823d0f74
	if (!ctx.cr6.eq) goto loc_823D0F74;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0EB4:
	// addi r11,r28,10496
	ctx.r11.s64 = r28.s64 + 10496;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0EBC:
	// addi r11,r28,27008
	ctx.r11.s64 = r28.s64 + 27008;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0EC4:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(r29.s32, 256, ctx.xer);
	// bne cr6,0x823d0f74
	if (!ctx.cr6.eq) goto loc_823D0F74;
	// addi r11,r28,31616
	ctx.r11.s64 = r28.s64 + 31616;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0ED4:
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0EDC:
	// cmpwi cr6,r29,1024
	ctx.cr6.compare<int32_t>(r29.s32, 1024, ctx.xer);
	// beq cr6,0x823d0f04
	if (ctx.cr6.eq) goto loc_823D0F04;
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(r29.s32, 2048, ctx.xer);
	// beq cr6,0x823d0efc
	if (ctx.cr6.eq) goto loc_823D0EFC;
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(r29.s32, 4096, ctx.xer);
	// bne cr6,0x823d0f74
	if (!ctx.cr6.eq) goto loc_823D0F74;
	// addi r11,r28,10624
	ctx.r11.s64 = r28.s64 + 10624;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0EFC:
	// addi r11,r28,2304
	ctx.r11.s64 = r28.s64 + 2304;
	// b 0x823d0f08
	goto loc_823D0F08;
loc_823D0F04:
	// addi r11,r28,27520
	ctx.r11.s64 = r28.s64 + 27520;
loc_823D0F08:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823d0f74
	if (!ctx.cr6.gt) goto loc_823D0F74;
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
loc_823D0F2C:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + f29.f64));
	// fdivs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 / f30.f64));
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * f31.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823D0F50;
	sub_826A14E0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * f31.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823D0F60;
	sub_826A14E0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfsu f7,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x823d0f2c
	if (ctx.cr6.lt) goto loc_823D0F2C;
loc_823D0F74:
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(r29.s32, 4096, ctx.xer);
	// ble cr6,0x823d0e84
	if (!ctx.cr6.gt) goto loc_823D0E84;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823D9990) {
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
	ctx.lr = 0x823D9998;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r23,32(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r21,12(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// ble cr6,0x823d99ec
	if (!ctx.cr6.gt) goto loc_823D99EC;
	// bl 0x8269dfa8
	ctx.lr = 0x823D99C4;
	sub_8269DFA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r11,-5408
	ctx.r4.s64 = ctx.r11.s64 + -5408;
	// addi r5,r10,-5296
	ctx.r5.s64 = ctx.r10.s64 + -5296;
	// addi r7,r9,-5348
	ctx.r7.s64 = ctx.r9.s64 + -5348;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// li r6,201
	ctx.r6.s64 = 201;
	// bl 0x8269f3c0
	ctx.lr = 0x823D99E8;
	sub_8269F3C0(ctx, base);
	// bl 0x8269f008
	ctx.lr = 0x823D99EC;
	sub_8269F008(ctx, base);
loc_823D99EC:
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823d9ad4
	if (!ctx.cr6.gt) goto loc_823D9AD4;
	// lwz r25,20(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r25,2,0,29
	r22.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// extsh r24,r9
	r24.s64 = ctx.r9.s16;
loc_823D9A1C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823d9a90
	if (!ctx.cr6.gt) goto loc_823D9A90;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_823D9A34:
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + r26.u64;
loc_823D9A6C:
	// lfsux f0,r10,r6
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823d9a6c
	if (ctx.cr6.lt) goto loc_823D9A6C;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x823d9a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9A34;
loc_823D9A90:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// bge cr6,0x823d9ac0
	if (!ctx.cr6.lt) goto loc_823D9AC0;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// subf. r11,r31,r24
	ctx.r11.u64 = r24.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x823d9ac0
	if (ctx.cr0.eq) goto loc_823D9AC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D9AB8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d9ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9AB8;
loc_823D9AC0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r30,r22,r30
	r30.u64 = r22.u64 + r30.u64;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + r21.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// blt cr6,0x823d9a1c
	if (ctx.cr6.lt) goto loc_823D9A1C;
loc_823D9AD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823E19D8) {
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
	ctx.lr = 0x823E19E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e1a38
	if (ctx.cr6.eq) goto loc_823E1A38;
loc_823E1A00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82393bf0
	ctx.lr = 0x823E1A10;
	sub_82393BF0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E1A20;
	sub_823EF5F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E1A2C;
	sub_82393BF0(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x823e1a00
	if (!ctx.cr6.eq) goto loc_823E1A00;
loc_823E1A38:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1a7c
	if (ctx.cr6.eq) goto loc_823E1A7C;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 68);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82393b68
	ctx.lr = 0x823E1A58;
	sub_82393B68(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e1a68
	if (!ctx.cr6.eq) goto loc_823E1A68;
	// li r26,-139
	r26.s64 = -139;
loc_823E1A68:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
loc_823E1A7C:
	// stw r27,72(r30)
	REX_STORE_U32(r30.u32 + 72, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,84(r30)
	REX_STORE_U32(r30.u32 + 84, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823E5E08) {
	REX_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823e5a70
	sub_823E5A70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E6A08) {
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
	ctx.lr = 0x823E6A10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e6c34
	if (!ctx.cr6.gt) goto loc_823E6C34;
	// rlwinm r31,r6,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r5,268
	r30.s64 = ctx.r5.s64 + 268;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_823E6A28:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r31,r3
	ctx.r10.u64 = r31.u64 + ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823e6bb4
	if (ctx.cr6.lt) goto loc_823E6BB4;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E6A58:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmadds f7,f11,f9,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmsubs f6,f9,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f5,f12,f11,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmsubs f4,f8,f11,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fsubs f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f1,12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fadds f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f6,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmadds f3,f10,f9,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f5.f64)));
	// fmsubs f2,f6,f9,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fsubs f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f4,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f1,f8,f7,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f3.f64)));
	// fmsubs f0,f4,f7,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f2.f64)));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,28(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f10,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x823e6a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6A58;
loc_823E6BB4:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823e6c28
	if (!ctx.cr6.lt) goto loc_823E6C28;
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E6BD0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmsubs f6,f10,f0,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f9.f64)));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfsu f3,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsu f1,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e6bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6BD0;
loc_823E6C28:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// bne 0x823e6a28
	if (!ctx.cr0.eq) goto loc_823E6A28;
loc_823E6C34:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F0570) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82793c04
	ctx.lr = 0x823F058C;
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f05a0
	if (!ctx.cr0.lt) goto loc_823F05A0;
	// bl 0x823eff48
	ctx.lr = 0x823F0598;
	sub_823EFF48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f05a4
	goto loc_823F05A4;
loc_823F05A0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823F05A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4B78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4ba4
	if (ctx.cr6.eq) goto loc_823F4BA4;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x827938b4
	ctx.lr = 0x823F4BA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823F4BA4:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5CC8) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x823F5CD0;
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lis r8,771
	ctx.r8.s64 = 50528256;
	// ori r9,r9,514
	ctx.r9.u64 = ctx.r9.u64 | 514;
	// lis r6,1799
	ctx.r6.s64 = 117899264;
	// lis r7,1285
	ctx.r7.s64 = 84213760;
	// stw r9,12008(r3)
	REX_STORE_U32(ctx.r3.u32 + 12008, ctx.r9.u32);
	// ori r8,r8,1028
	ctx.r8.u64 = ctx.r8.u64 | 1028;
	// ori r7,r7,1542
	ctx.r7.u64 = ctx.r7.u64 | 1542;
	// ori r9,r6,2056
	ctx.r9.u64 = ctx.r6.u64 | 2056;
	// stw r8,12012(r3)
	REX_STORE_U32(ctx.r3.u32 + 12012, ctx.r8.u32);
	// lis r5,2313
	ctx.r5.s64 = 151584768;
	// stw r7,12016(r3)
	REX_STORE_U32(ctx.r3.u32 + 12016, ctx.r7.u32);
	// lis r4,2827
	ctx.r4.s64 = 185270272;
	// stw r9,12020(r3)
	REX_STORE_U32(ctx.r3.u32 + 12020, ctx.r9.u32);
	// lis r31,3341
	r31.s64 = 218955776;
	// ori r8,r5,2570
	ctx.r8.u64 = ctx.r5.u64 | 2570;
	// ori r7,r4,3084
	ctx.r7.u64 = ctx.r4.u64 | 3084;
	// ori r9,r31,3598
	ctx.r9.u64 = r31.u64 | 3598;
	// stw r8,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r8.u32);
	// lis r11,4369
	ctx.r11.s64 = 286326784;
	// stw r7,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r7.u32);
	// lis r30,3855
	r30.s64 = 252641280;
	// stw r9,12032(r3)
	REX_STORE_U32(ctx.r3.u32 + 12032, ctx.r9.u32);
	// ori r11,r11,4369
	ctx.r11.u64 = ctx.r11.u64 | 4369;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r30,4112
	ctx.r8.u64 = r30.u64 | 4112;
	// stw r11,12040(r3)
	REX_STORE_U32(ctx.r3.u32 + 12040, ctx.r11.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r10,12004(r3)
	REX_STORE_U32(ctx.r3.u32 + 12004, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,12036(r3)
	REX_STORE_U32(ctx.r3.u32 + 12036, ctx.r8.u32);
	// stw r11,12044(r3)
	REX_STORE_U32(ctx.r3.u32 + 12044, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12048(r3)
	REX_STORE_U32(ctx.r3.u32 + 12048, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,12052(r3)
	REX_STORE_U32(ctx.r3.u32 + 12052, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,12056(r3)
	REX_STORE_U32(ctx.r3.u32 + 12056, ctx.r7.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r9,12060(r3)
	REX_STORE_U32(ctx.r3.u32 + 12060, ctx.r9.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r10,12064(r3)
	REX_STORE_U32(ctx.r3.u32 + 12064, ctx.r10.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r8,12068(r3)
	REX_STORE_U32(ctx.r3.u32 + 12068, ctx.r8.u32);
	// stw r6,12072(r3)
	REX_STORE_U32(ctx.r3.u32 + 12072, ctx.r6.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// li r6,46
	ctx.r6.s64 = 46;
	// stw r5,12076(r3)
	REX_STORE_U32(ctx.r3.u32 + 12076, ctx.r5.u32);
	// stw r11,12080(r3)
	REX_STORE_U32(ctx.r3.u32 + 12080, ctx.r11.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,12084(r3)
	REX_STORE_U32(ctx.r3.u32 + 12084, ctx.r7.u32);
	// li r11,94
	ctx.r11.s64 = 94;
	// stw r9,12088(r3)
	REX_STORE_U32(ctx.r3.u32 + 12088, ctx.r9.u32);
	// li r7,126
	ctx.r7.s64 = 126;
	// stw r10,12092(r3)
	REX_STORE_U32(ctx.r3.u32 + 12092, ctx.r10.u32);
	// li r9,190
	ctx.r9.s64 = 190;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r8,12096(r3)
	REX_STORE_U32(ctx.r3.u32 + 12096, ctx.r8.u32);
	// stw r6,12100(r3)
	REX_STORE_U32(ctx.r3.u32 + 12100, ctx.r6.u32);
	// li r8,382
	ctx.r8.s64 = 382;
	// li r6,510
	ctx.r6.s64 = 510;
	// stw r5,12104(r3)
	REX_STORE_U32(ctx.r3.u32 + 12104, ctx.r5.u32);
	// stw r11,12108(r3)
	REX_STORE_U32(ctx.r3.u32 + 12108, ctx.r11.u32);
	// li r5,766
	ctx.r5.s64 = 766;
	// stw r7,12112(r3)
	REX_STORE_U32(ctx.r3.u32 + 12112, ctx.r7.u32);
	// li r11,1022
	ctx.r11.s64 = 1022;
	// stw r9,12116(r3)
	REX_STORE_U32(ctx.r3.u32 + 12116, ctx.r9.u32);
	// li r7,1534
	ctx.r7.s64 = 1534;
	// stw r10,12120(r3)
	REX_STORE_U32(ctx.r3.u32 + 12120, ctx.r10.u32);
	// li r9,2046
	ctx.r9.s64 = 2046;
	// li r10,3070
	ctx.r10.s64 = 3070;
	// stw r8,12124(r3)
	REX_STORE_U32(ctx.r3.u32 + 12124, ctx.r8.u32);
	// stw r6,12128(r3)
	REX_STORE_U32(ctx.r3.u32 + 12128, ctx.r6.u32);
	// li r8,4094
	ctx.r8.s64 = 4094;
	// stw r5,12132(r3)
	REX_STORE_U32(ctx.r3.u32 + 12132, ctx.r5.u32);
	// li r6,6142
	ctx.r6.s64 = 6142;
	// stw r11,12136(r3)
	REX_STORE_U32(ctx.r3.u32 + 12136, ctx.r11.u32);
	// stw r7,12140(r3)
	REX_STORE_U32(ctx.r3.u32 + 12140, ctx.r7.u32);
	// stw r9,12144(r3)
	REX_STORE_U32(ctx.r3.u32 + 12144, ctx.r9.u32);
	// stw r10,12148(r3)
	REX_STORE_U32(ctx.r3.u32 + 12148, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r8,12152(r3)
	REX_STORE_U32(ctx.r3.u32 + 12152, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r6,12156(r3)
	REX_STORE_U32(ctx.r3.u32 + 12156, ctx.r6.u32);
	// ori r11,r11,49150
	ctx.r11.u64 = ctx.r11.u64 | 49150;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,12180(r3)
	REX_STORE_U32(ctx.r3.u32 + 12180, ctx.r11.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,12184(r3)
	REX_STORE_U32(ctx.r3.u32 + 12184, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r9,32766
	ctx.r9.u64 = ctx.r9.u64 | 32766;
	// ori r11,r8,65534
	ctx.r11.u64 = ctx.r8.u64 | 65534;
	// ori r10,r7,65534
	ctx.r10.u64 = ctx.r7.u64 | 65534;
	// stw r9,12188(r3)
	REX_STORE_U32(ctx.r3.u32 + 12188, ctx.r9.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r11,12192(r3)
	REX_STORE_U32(ctx.r3.u32 + 12192, ctx.r11.u32);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// stw r10,12196(r3)
	REX_STORE_U32(ctx.r3.u32 + 12196, ctx.r10.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r9,r6,65534
	ctx.r9.u64 = ctx.r6.u64 | 65534;
	// ori r11,r5,65534
	ctx.r11.u64 = ctx.r5.u64 | 65534;
	// ori r10,r4,65534
	ctx.r10.u64 = ctx.r4.u64 | 65534;
	// stw r9,12200(r3)
	REX_STORE_U32(ctx.r3.u32 + 12200, ctx.r9.u32);
	// lis r31,9
	r31.s64 = 589824;
	// stw r11,12204(r3)
	REX_STORE_U32(ctx.r3.u32 + 12204, ctx.r11.u32);
	// lis r30,11
	r30.s64 = 720896;
	// stw r10,12208(r3)
	REX_STORE_U32(ctx.r3.u32 + 12208, ctx.r10.u32);
	// lis r29,13
	r29.s64 = 851968;
	// ori r9,r31,65534
	ctx.r9.u64 = r31.u64 | 65534;
	// ori r11,r30,65534
	ctx.r11.u64 = r30.u64 | 65534;
	// ori r10,r29,65534
	ctx.r10.u64 = r29.u64 | 65534;
	// stw r9,12212(r3)
	REX_STORE_U32(ctx.r3.u32 + 12212, ctx.r9.u32);
	// lis r28,15
	r28.s64 = 983040;
	// stw r11,12216(r3)
	REX_STORE_U32(ctx.r3.u32 + 12216, ctx.r11.u32);
	// lis r27,17
	r27.s64 = 1114112;
	// stw r10,12220(r3)
	REX_STORE_U32(ctx.r3.u32 + 12220, ctx.r10.u32);
	// lis r26,19
	r26.s64 = 1245184;
	// ori r9,r28,65534
	ctx.r9.u64 = r28.u64 | 65534;
	// ori r11,r27,65534
	ctx.r11.u64 = r27.u64 | 65534;
	// ori r10,r26,65534
	ctx.r10.u64 = r26.u64 | 65534;
	// stw r9,12224(r3)
	REX_STORE_U32(ctx.r3.u32 + 12224, ctx.r9.u32);
	// lis r25,21
	r25.s64 = 1376256;
	// stw r11,12228(r3)
	REX_STORE_U32(ctx.r3.u32 + 12228, ctx.r11.u32);
	// lis r24,23
	r24.s64 = 1507328;
	// stw r10,12232(r3)
	REX_STORE_U32(ctx.r3.u32 + 12232, ctx.r10.u32);
	// lis r23,25
	r23.s64 = 1638400;
	// li r19,8190
	r19.s64 = 8190;
	// li r18,12286
	r18.s64 = 12286;
	// ori r9,r25,65534
	ctx.r9.u64 = r25.u64 | 65534;
	// stw r19,12160(r3)
	REX_STORE_U32(ctx.r3.u32 + 12160, r19.u32);
	// ori r11,r24,65534
	ctx.r11.u64 = r24.u64 | 65534;
	// stw r18,12164(r3)
	REX_STORE_U32(ctx.r3.u32 + 12164, r18.u32);
	// ori r10,r23,65534
	ctx.r10.u64 = r23.u64 | 65534;
	// stw r9,12236(r3)
	REX_STORE_U32(ctx.r3.u32 + 12236, ctx.r9.u32);
	// lis r22,27
	r22.s64 = 1769472;
	// stw r11,12240(r3)
	REX_STORE_U32(ctx.r3.u32 + 12240, ctx.r11.u32);
	// lis r21,29
	r21.s64 = 1900544;
	// stw r10,12244(r3)
	REX_STORE_U32(ctx.r3.u32 + 12244, ctx.r10.u32);
	// lis r20,31
	r20.s64 = 2031616;
	// li r17,16382
	r17.s64 = 16382;
	// li r19,24574
	r19.s64 = 24574;
	// li r18,32766
	r18.s64 = 32766;
	// stw r17,12168(r3)
	REX_STORE_U32(ctx.r3.u32 + 12168, r17.u32);
	// ori r9,r22,65534
	ctx.r9.u64 = r22.u64 | 65534;
	// stw r19,12172(r3)
	REX_STORE_U32(ctx.r3.u32 + 12172, r19.u32);
	// ori r11,r21,65534
	ctx.r11.u64 = r21.u64 | 65534;
	// stw r18,12176(r3)
	REX_STORE_U32(ctx.r3.u32 + 12176, r18.u32);
	// ori r10,r20,65534
	ctx.r10.u64 = r20.u64 | 65534;
	// stw r9,12248(r3)
	REX_STORE_U32(ctx.r3.u32 + 12248, ctx.r9.u32);
	// stw r11,12252(r3)
	REX_STORE_U32(ctx.r3.u32 + 12252, ctx.r11.u32);
	// stw r10,12256(r3)
	REX_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82404168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824041a4
	if (!ctx.cr6.gt) goto loc_824041A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824041b8
	goto loc_824041B8;
loc_824041A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824009e0
	ctx.lr = 0x824041B8;
	sub_824009E0(ctx, base);
loc_824041B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82406400) {
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
	ctx.lr = 0x82406408;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c8c
	ctx.lr = 0x82406410;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r16,0
	r16.s64 = 0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8240643c
	if (ctx.cr6.eq) goto loc_8240643C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8240691c
	goto loc_8240691C;
loc_8240643C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r9,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r30,r7,15,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r29,r11,14,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// lwz r4,104(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x82405f88
	ctx.lr = 0x82406468;
	sub_82405F88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82405f88
	ctx.lr = 0x82406484;
	sub_82405F88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x82405f88
	ctx.lr = 0x824064A0;
	sub_82405F88(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824068d4
	if (ctx.cr6.eq) goto loc_824068D4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x824068d4
	if (ctx.cr6.eq) goto loc_824068D4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824068d4
	if (ctx.cr6.eq) goto loc_824068D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x824064D4;
	sub_823F02B8(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x824068d4
	if (ctx.cr0.eq) goto loc_824068D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x823f02b8
	ctx.lr = 0x824064F0;
	sub_823F02B8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x824068d4
	if (ctx.cr0.eq) goto loc_824068D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r17,0
	r17.s64 = 0;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// add r29,r10,r20
	r29.u64 = ctx.r10.u64 + r20.u64;
	// add r28,r9,r20
	r28.u64 = ctx.r9.u64 + r20.u64;
	// add r27,r8,r20
	r27.u64 = ctx.r8.u64 + r20.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x824068cc
	if (!ctx.cr6.gt) goto loc_824068CC;
	// addi r24,r26,8
	r24.s64 = r26.s64 + 8;
	// li r18,-1
	r18.s64 = -1;
loc_82406538:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r19,0
	r19.s64 = 0;
	// mr r21,r18
	r21.u64 = r18.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824068b8
	if (!ctx.cr6.gt) goto loc_824068B8;
	// addi r26,r14,8
	r26.s64 = r14.s64 + 8;
loc_82406554:
	// lwz r23,-8(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + -8);
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(r23.u32, r21.u32, ctx.xer);
	// beq cr6,0x824065d4
	if (ctx.cr6.eq) goto loc_824065D4;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x824065b4
	if (ctx.cr6.eq) goto loc_824065B4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + -8);
	// mr r21,r23
	r21.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824065B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824065d4
	goto loc_824065D4;
loc_824065B4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_824065D4:
	// lwz r23,0(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x82406624
	if (ctx.cr6.eq) goto loc_82406624;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + -8);
	// mr r22,r23
	r22.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82406624:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240687c
	if (!ctx.cr6.gt) goto loc_8240687C;
	// addi r9,r15,-12
	ctx.r9.s64 = r15.s64 + -12;
	// addi r8,r16,-4
	ctx.r8.s64 = r16.s64 + -4;
loc_8240663C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// lfs f9,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// lfsx f8,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f4,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f1,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f5,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f2,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f31,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f30,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f29,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f28,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f29,f29,f13
	f29.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f27,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f12
	f28.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f26,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f26.f64 = double(temp.f32);
	// fmuls f27,f27,f12
	f27.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfsx f25,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	f25.f64 = double(temp.f32);
	// fmuls f26,f26,f12
	f26.f64 = double(float(f26.f64 * ctx.f12.f64));
	// lfsx f24,r10,r28
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	f24.f64 = double(temp.f32);
	// fmuls f25,f25,f13
	f25.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f24,f24,f12
	f24.f64 = double(float(f24.f64 * ctx.f12.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// lfsx f3,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f7,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(f28.f64 + f31.f64));
	// lfs f31,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f31.f64 = double(temp.f32);
	// fadds f30,f27,f30
	f30.f64 = double(float(f27.f64 + f30.f64));
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// fadds f29,f26,f29
	f29.f64 = double(float(f26.f64 + f29.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f28,f24,f25
	f28.f64 = double(float(f24.f64 + f25.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f30,f30,f10
	f30.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f29,f29,f10
	f29.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmuls f28,f28,f10
	f28.f64 = double(float(f28.f64 * ctx.f10.f64));
	// fadds f6,f1,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fadds f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 + ctx.f5.f64));
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(f29.f64 + ctx.f4.f64));
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(f28.f64 + ctx.f8.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfsx f8,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfsx f31,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f29,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f28,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f26,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f26.f64 = double(temp.f32);
	// fmuls f30,f30,f12
	f30.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f29,f29,f12
	f29.f64 = double(float(f29.f64 * ctx.f12.f64));
	// lfs f27,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f27.f64 = double(temp.f32);
	// lfs f25,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f25.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	f28.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f24,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	f26.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f23,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	f23.f64 = double(temp.f32);
	// fmuls f27,f27,f13
	f27.f64 = double(float(f27.f64 * ctx.f13.f64));
	// lfs f22,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f22.f64 = double(temp.f32);
	// fmuls f24,f24,f13
	f24.f64 = double(float(f24.f64 * ctx.f13.f64));
	// lfs f21,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f21.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	f25.f64 = double(float(f25.f64 * ctx.f0.f64));
	// fmuls f13,f22,f13
	ctx.f13.f64 = double(float(f22.f64 * ctx.f13.f64));
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmuls f0,f21,f0
	ctx.f0.f64 = double(float(f21.f64 * ctx.f0.f64));
	// fmuls f12,f23,f12
	ctx.f12.f64 = double(float(f23.f64 * ctx.f12.f64));
	// lfs f23,-4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + -4);
	f23.f64 = double(temp.f32);
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f30,f2
	ctx.f3.f64 = double(float(f30.f64 + ctx.f2.f64));
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(f31.f64 + ctx.f8.f64));
	// fadds f2,f29,f1
	ctx.f2.f64 = double(float(f29.f64 + ctx.f1.f64));
	// fadds f1,f26,f28
	ctx.f1.f64 = double(float(f26.f64 + f28.f64));
	// fadds f31,f25,f27
	f31.f64 = double(float(f25.f64 + f27.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f7,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f2,f1,f10
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f1,f31,f10
	ctx.f1.f64 = double(float(f31.f64 * ctx.f10.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * f23.f64));
	// fmuls f12,f11,f23
	ctx.f12.f64 = double(float(ctx.f11.f64 * f23.f64));
	// fmuls f11,f10,f23
	ctx.f11.f64 = double(float(ctx.f10.f64 * f23.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240663c
	if (ctx.cr6.lt) goto loc_8240663C;
loc_8240687C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240689C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82406554
	if (ctx.cr6.lt) goto loc_82406554;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824068B8:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82406538
	if (ctx.cr6.lt) goto loc_82406538;
loc_824068CC:
	// li r31,0
	r31.s64 = 0;
	// b 0x824068dc
	goto loc_824068DC;
loc_824068D4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_824068DC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f0350
	ctx.lr = 0x824068E8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823f0350
	ctx.lr = 0x824068F4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823f0350
	ctx.lr = 0x82406900;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823f0350
	ctx.lr = 0x8240690C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x82406918;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8240691C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd8
	ctx.lr = 0x82406928;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82433470) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x82433478;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// stw r4,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r9,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// stw r16,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r16.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r19,r16
	r19.u64 = r16.u64;
	// mr r14,r16
	r14.u64 = r16.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// mr r22,r16
	r22.u64 = r16.u64;
	// beq cr6,0x824341c0
	if (ctx.cr6.eq) goto loc_824341C0;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x824341c0
	if (!ctx.cr6.eq) goto loc_824341C0;
	// lwz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82433504
	if (ctx.cr6.eq) goto loc_82433504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r6,r11,-22272
	ctx.r6.s64 = ctx.r11.s64 + -22272;
	// li r5,3042
	ctx.r5.s64 = 3042;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82423e58
	ctx.lr = 0x824334F8;
	sub_82423E58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x824341c8
	goto loc_824341C8;
loc_82433504:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8243351c
	if (ctx.cr6.eq) goto loc_8243351C;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8247d028
	ctx.lr = 0x82433514;
	sub_8247D028(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_8243351C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243352c
	if (ctx.cr6.eq) goto loc_8243352C;
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82433530
	goto loc_82433530;
loc_8243352C:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82433530:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82433540
	if (ctx.cr6.eq) goto loc_82433540;
	// lwz r20,12(r30)
	r20.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x82433544
	goto loc_82433544;
loc_82433540:
	// mr r20,r16
	r20.u64 = r16.u64;
loc_82433544:
	// lwz r11,44(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// b 0x82433588
	goto loc_82433588;
loc_82433550:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243357c
	if (ctx.cr6.eq) goto loc_8243357C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243357c
	if (ctx.cr6.eq) goto loc_8243357C;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x8243357c
	if (!ctx.cr6.eq) goto loc_8243357C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8243357C:
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82433588:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82433550
	if (!ctx.cr6.eq) goto loc_82433550;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824335A0;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824335c8
	if (ctx.cr6.eq) goto loc_824335C8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824335C0;
	sub_823F02B8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
loc_824335C8:
	// lwz r25,44(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r21,r29
	r21.u64 = r29.u64;
	// li r17,1
	r17.s64 = 1;
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82433914
	if (ctx.cr6.eq) goto loc_82433914;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r19,r11,-22320
	r19.s64 = ctx.r11.s64 + -22320;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_824335F0:
	// lwz r26,8(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r28,r16
	r28.u64 = r16.u64;
	// lwz r25,12(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82433624
	if (ctx.cr6.eq) goto loc_82433624;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433624
	if (ctx.cr6.eq) goto loc_82433624;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x82433624
	if (!ctx.cr6.eq) goto loc_82433624;
	// lwz r25,12(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82433624:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r30,24(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243384c
	if (ctx.cr6.eq) goto loc_8243384C;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243364c
	if (ctx.cr6.eq) goto loc_8243364C;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243384c
	if (!ctx.cr0.eq) goto loc_8243384C;
loc_8243364C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,116(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// beq 0x82433668
	if (ctx.cr0.eq) goto loc_82433668;
	// lwz r27,124(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x82433674
	goto loc_82433674;
loc_82433668:
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82433674
	if (ctx.cr0.eq) goto loc_82433674;
	// lwz r27,128(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
loc_82433674:
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824336f8
	if (ctx.cr6.eq) goto loc_824336F8;
loc_82433684:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r28,r29,r11
	r28.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x82478758
	ctx.lr = 0x824336A4;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824336c4
	if (!ctx.cr6.lt) goto loc_824336C4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x824336c8
	goto loc_824336C8;
loc_824336C4:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_824336C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824336dc
	if (ctx.cr6.eq) goto loc_824336DC;
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r28.u32);
	// stw r26,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r26.u32);
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r29.u32);
loc_824336DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82433684
	if (ctx.cr6.lt) goto loc_82433684;
loc_824336F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8243372c
	if (ctx.cr6.eq) goto loc_8243372C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82427940
	ctx.lr = 0x82433724;
	sub_82427940(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_8243372C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x82433784
	if (!ctx.cr6.eq) goto loc_82433784;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427cf8
	ctx.lr = 0x8243376C;
	sub_82427CF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82421cb8
	ctx.lr = 0x82433780;
	sub_82421CB8(ctx, base);
	// b 0x824338f0
	goto loc_824338F0;
loc_82433784:
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x824338f8
	if (!ctx.cr6.eq) goto loc_824338F8;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// bl 0x82427cf8
	ctx.lr = 0x824337C0;
	sub_82427CF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82422f90
	ctx.lr = 0x824337E4;
	sub_82422F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82433828
	if (ctx.cr0.eq) goto loc_82433828;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824338f8
	if (ctx.cr6.eq) goto loc_824338F8;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82433804:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82433804
	if (ctx.cr6.lt) goto loc_82433804;
	// b 0x824338f8
	goto loc_824338F8;
loc_82433828:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r5,3502
	ctx.r5.s64 = 3502;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82423e58
	ctx.lr = 0x82433848;
	sub_82423E58(ctx, base);
	// b 0x824338f8
	goto loc_824338F8;
loc_8243384C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8243385C;
	sub_82432F08(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824338e0
	if (ctx.cr6.eq) goto loc_824338E0;
	// lwz r28,8(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82433894
	if (ctx.cr6.eq) goto loc_82433894;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x8243388C;
	sub_82434350(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_82433894:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824338d8
	if (ctx.cr0.eq) goto loc_824338D8;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r5,r17,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x824338D0;
	sub_82423F70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_824338D8:
	// lwz r21,12(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 12);
	// b 0x824338f8
	goto loc_824338F8;
loc_824338E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x824338F0;
	sub_82432F08(ctx, base);
loc_824338F0:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_824338F8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// bne cr6,0x824335f0
	if (!ctx.cr6.eq) goto loc_824335F0;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82433914:
	// lwz r25,380(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82433b34
	if (ctx.cr6.eq) goto loc_82433B34;
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8243397c
	if (ctx.cr6.eq) goto loc_8243397C;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82433930:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82433964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82433bf0
	if (ctx.cr0.lt) goto loc_82433BF0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x82433930
	if (ctx.cr6.lt) goto loc_82433930;
loc_8243397C:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// bl 0x824793b0
	ctx.lr = 0x82433994;
	sub_824793B0(ctx, base);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82433b34
	if (ctx.cr6.eq) goto loc_82433B34;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// ble cr6,0x82433b34
	if (!ctx.cr6.gt) goto loc_82433B34;
	// addi r30,r22,-1
	r30.s64 = r22.s64 + -1;
	// addi r28,r15,4
	r28.s64 = r15.s64 + 4;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824339D8:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,108(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82433a24
	if (!ctx.cr6.eq) goto loc_82433A24;
	// lwz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82433a24
	if (!ctx.cr6.eq) goto loc_82433A24;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82433a24
	if (!ctx.cr6.eq) goto loc_82433A24;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82433a28
	goto loc_82433A28;
loc_82433A24:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82433A28:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824339d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824339D8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82433b34
	if (ctx.cr6.eq) goto loc_82433B34;
	// rlwinm r29,r6,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82433A48;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r26,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82433A60;
	sub_823F02B8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// subf r3,r14,r26
	ctx.r3.u64 = r26.u64 - r14.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,20(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82433A9C:
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r29,108(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r30,r7,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// lwz r30,108(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x82433afc
	if (!ctx.cr6.eq) goto loc_82433AFC;
	// lwz r30,16(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r29,16(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82433afc
	if (!ctx.cr6.eq) goto loc_82433AFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82433b04
	goto loc_82433B04;
loc_82433AFC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82433B04:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x82433a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82433A9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r17,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82433B2C;
	sub_82423F70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_82433B34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// beq cr6,0x82433b70
	if (ctx.cr6.eq) goto loc_82433B70;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82433B54;
	sub_823F02B8(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82433B70;
	sub_826A1E70(ctx, base);
loc_82433B70:
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,72(r23)
	REX_STORE_U32(r23.u32 + 72, r17.u32);
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 48);
	// bl 0x82432f08
	ctx.lr = 0x82433B8C;
	sub_82432F08(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82433bac
	if (!ctx.cr6.eq) goto loc_82433BAC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// beq cr6,0x82433bb0
	if (ctx.cr6.eq) goto loc_82433BB0;
loc_82433BAC:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82433BB0:
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r16,72(r23)
	REX_STORE_U32(r23.u32 + 72, r16.u32);
	// blt cr6,0x8243414c
	if (ctx.cr6.lt) goto loc_8243414C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82433bfc
	if (!ctx.cr6.eq) goto loc_82433BFC;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82433bfc
	if (!ctx.cr6.gt) goto loc_82433BFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r5,3507
	ctx.r5.s64 = 3507;
	// addi r6,r11,-22356
	ctx.r6.s64 = ctx.r11.s64 + -22356;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x82433BF0;
	sub_82423E58(ctx, base);
loc_82433BF0:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x8243414c
	goto loc_8243414C;
loc_82433BFC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82433d98
	if (ctx.cr6.eq) goto loc_82433D98;
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82433dfc
	if (ctx.cr6.eq) goto loc_82433DFC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82433c50
	if (ctx.cr6.eq) goto loc_82433C50;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82433c50
	if (ctx.cr6.eq) goto loc_82433C50;
loc_82433C28:
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82433c28
	if (ctx.cr6.lt) goto loc_82433C28;
loc_82433C50:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r5,r17,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82423f70
	ctx.lr = 0x82433C80;
	sub_82423F70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r4,40(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 40);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82427940
	ctx.lr = 0x82433CA8;
	sub_82427940(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,56(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 56);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r4,40(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,132(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 132);
	// bl 0x82427cf8
	ctx.lr = 0x82433CE4;
	sub_82427CF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 20);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82422f90
	ctx.lr = 0x82433D08;
	sub_82422F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82433d78
	if (ctx.cr0.eq) goto loc_82433D78;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82433dfc
	if (ctx.cr6.eq) goto loc_82433DFC;
loc_82433D1C:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82433D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82433d70
	if (ctx.cr0.lt) goto loc_82433D70;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82433d1c
	if (ctx.cr6.lt) goto loc_82433D1C;
	// b 0x82433dfc
	goto loc_82433DFC;
loc_82433D70:
	// stw r17,76(r31)
	REX_STORE_U32(r31.u32 + 76, r17.u32);
	// b 0x82433dfc
	goto loc_82433DFC;
loc_82433D78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r5,3503
	ctx.r5.s64 = 3503;
	// addi r6,r11,-22404
	ctx.r6.s64 = ctx.r11.s64 + -22404;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x82433D94;
	sub_82423E58(ctx, base);
	// b 0x82433dfc
	goto loc_82433DFC;
loc_82433D98:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82433dfc
	if (ctx.cr6.eq) goto loc_82433DFC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82433ddc
	if (ctx.cr6.eq) goto loc_82433DDC;
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82433dfc
	if (!ctx.cr6.gt) goto loc_82433DFC;
	// addi r10,r18,-4
	ctx.r10.s64 = r18.s64 + -4;
loc_82433DC0:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82433dc0
	if (ctx.cr6.lt) goto loc_82433DC0;
	// b 0x82433dfc
	goto loc_82433DFC;
loc_82433DDC:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82433DFC;
	sub_826A1E70(ctx, base);
loc_82433DFC:
	// lwz r24,44(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r23,r27
	r23.u64 = r27.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82434148
	if (ctx.cr6.eq) goto loc_82434148;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r22,r10,-22408
	r22.s64 = ctx.r10.s64 + -22408;
	// addi r21,r11,-22456
	r21.s64 = ctx.r11.s64 + -22456;
loc_82433E1C:
	// lwz r25,8(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r24,12(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82433e48
	if (ctx.cr6.eq) goto loc_82433E48;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433e48
	if (ctx.cr6.eq) goto loc_82433E48;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82433e48
	if (!ctx.cr6.eq) goto loc_82433E48;
	// lwz r24,12(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 12);
loc_82433E48:
	// lwz r30,24(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82434088
	if (ctx.cr0.eq) goto loc_82434088;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r28,20(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82433ea4
	if (ctx.cr6.eq) goto loc_82433EA4;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82433f0c
	if (ctx.cr6.eq) goto loc_82433F0C;
loc_82433E78:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82433e78
	if (ctx.cr6.lt) goto loc_82433E78;
	// b 0x82433f0c
	goto loc_82433F0C;
loc_82433EA4:
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82433f0c
	if (ctx.cr6.eq) goto loc_82433F0C;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82433EBC:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82433ee4
	if (!ctx.cr6.lt) goto loc_82433EE4;
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// b 0x82433ee8
	goto loc_82433EE8;
loc_82433EE4:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_82433EE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433f00
	if (ctx.cr6.eq) goto loc_82433F00;
	// lwz r6,116(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82434190
	if (ctx.cr6.eq) goto loc_82434190;
loc_82433F00:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82433ebc
	if (ctx.cr6.lt) goto loc_82433EBC;
loc_82433F0C:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243405c
	if (ctx.cr6.eq) goto loc_8243405C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwimi r5,r17,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82433F44;
	sub_82423F70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82427940
	ctx.lr = 0x82433F6C;
	sub_82427940(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,132(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 132);
	// bl 0x82427cf8
	ctx.lr = 0x82433FA8;
	sub_82427CF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82422f90
	ctx.lr = 0x82433FCC;
	sub_82422F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8243403c
	if (ctx.cr0.eq) goto loc_8243403C;
	// mr r28,r16
	r28.u64 = r16.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82434088
	if (ctx.cr6.eq) goto loc_82434088;
loc_82433FE0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82434018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82434034
	if (ctx.cr0.lt) goto loc_82434034;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82433fe0
	if (ctx.cr6.lt) goto loc_82433FE0;
	// b 0x82434088
	goto loc_82434088;
loc_82434034:
	// stw r17,76(r31)
	REX_STORE_U32(r31.u32 + 76, r17.u32);
	// b 0x82434088
	goto loc_82434088;
loc_8243403C:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r8,24(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 24);
	// li r5,3503
	ctx.r5.s64 = 3503;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x82434058;
	sub_82423E58(ctx, base);
	// b 0x82434088
	goto loc_82434088;
loc_8243405C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82434134
	if (ctx.cr6.eq) goto loc_82434134;
	// lwz r4,8(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82434128
	if (ctx.cr6.eq) goto loc_82434128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x82434080;
	sub_82434350(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8243414c
	if (ctx.cr0.lt) goto loc_8243414C;
loc_82434088:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82434128
	if (ctx.cr6.eq) goto loc_82434128;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824340ac
	if (ctx.cr6.eq) goto loc_824340AC;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82434128
	if (!ctx.cr0.eq) goto loc_82434128;
loc_824340AC:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82434134
	if (ctx.cr0.eq) goto loc_82434134;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r26,24(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x82434134
	if (ctx.cr6.eq) goto loc_82434134;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824340D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824340d0
	if (!ctx.cr6.eq) goto loc_824340D0;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82444608
	ctx.lr = 0x82434100;
	sub_82444608(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824341b4
	if (ctx.cr0.eq) goto loc_824341B4;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82404168
	ctx.lr = 0x8243411C;
	sub_82404168(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r28.u32);
	// b 0x82434134
	goto loc_82434134;
loc_82434128:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82434134
	if (ctx.cr6.eq) goto loc_82434134;
	// lwz r20,12(r20)
	r20.u64 = REX_LOAD_U32(r20.u32 + 12);
loc_82434134:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bne cr6,0x82433e1c
	if (!ctx.cr6.eq) goto loc_82433E1C;
loc_82434148:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_8243414C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x823f0350
	ctx.lr = 0x82434158;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x823f0350
	ctx.lr = 0x82434164;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f0350
	ctx.lr = 0x82434170;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x823f0350
	ctx.lr = 0x8243417C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823f0350
	ctx.lr = 0x82434188;
	sub_823F0350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824341c8
	goto loc_824341C8;
loc_82434190:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,24(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 24);
	// li r5,3508
	ctx.r5.s64 = 3508;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r6,r10,-22508
	ctx.r6.s64 = ctx.r10.s64 + -22508;
	// lwz r4,96(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x824341B0;
	sub_82423E58(ctx, base);
	// b 0x8243414c
	goto loc_8243414C;
loc_824341B4:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8243414c
	goto loc_8243414C;
loc_824341C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824341C8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82497538) {
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
	ctx.lr = 0x82497540;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82497674
	if (ctx.cr6.eq) goto loc_82497674;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82497674
	if (!ctx.cr6.eq) goto loc_82497674;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82497578
	if (ctx.cr6.eq) goto loc_82497578;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82497674
	if (!ctx.cr6.eq) goto loc_82497674;
loc_82497578:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82497674
	if (ctx.cr6.eq) goto loc_82497674;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82497674
	if (!ctx.cr6.eq) goto loc_82497674;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82497674
	if (!ctx.cr6.eq) goto loc_82497674;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x824975A4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824975bc
	if (ctx.cr0.eq) goto loc_824975BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82444d78
	ctx.lr = 0x824975B4;
	sub_82444D78(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824975c0
	goto loc_824975C0;
loc_824975BC:
	// li r27,0
	r27.s64 = 0;
loc_824975C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82497674
	if (ctx.cr6.eq) goto loc_82497674;
	// lwz r28,24(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r30,24(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r5,r11,17704
	ctx.r5.s64 = ctx.r11.s64 + 17704;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824975E8;
	sub_82404168(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824975F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824975f0
	if (!ctx.cr6.eq) goto loc_824975F0;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82497610:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82497610
	if (!ctx.cr6.eq) goto loc_82497610;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82444608
	ctx.lr = 0x82497644;
	sub_82444608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82497674
	if (ctx.cr0.eq) goto loc_82497674;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r5,r11,-11716
	ctx.r5.s64 = ctx.r11.s64 + -11716;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404168
	ctx.lr = 0x82497668;
	sub_82404168(ctx, base);
	// stw r31,24(r27)
	REX_STORE_U32(r27.u32 + 24, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82497678
	goto loc_82497678;
loc_82497674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82497678:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824A2560) {
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
	ctx.lr = 0x824A2568;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a2b68
	if (!ctx.cr6.eq) goto loc_824A2B68;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x824a2b68
	if (!ctx.cr6.eq) goto loc_824A2B68;
	// lwz r29,16(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r17,0
	r17.s64 = 0;
	// addi r20,r5,16
	r20.s64 = ctx.r5.s64 + 16;
	// stw r17,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r17.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r17,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r17.u32);
	// mr r30,r17
	r30.u64 = r17.u64;
	// stw r17,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r17.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r17.u32);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x824a2674
	if (ctx.cr6.gt) goto loc_824A2674;
	// beq cr6,0x824a2660
	if (ctx.cr6.eq) goto loc_824A2660;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x824a264c
	if (ctx.cr6.eq) goto loc_824A264C;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x824a2638
	if (ctx.cr6.eq) goto loc_824A2638;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x824a2624
	if (ctx.cr6.eq) goto loc_824A2624;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x824a2610
	if (ctx.cr6.eq) goto loc_824A2610;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x824a26e0
	if (!ctx.cr6.eq) goto loc_824A26E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,14
	r30.s64 = 14;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,15048
	r31.s64 = ctx.r11.s64 + 15048;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A2610:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,14
	r30.s64 = 14;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,11856
	r31.s64 = ctx.r11.s64 + 11856;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A2624:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,18
	r30.s64 = 18;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,7752
	r31.s64 = ctx.r11.s64 + 7752;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A2638:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,14
	r30.s64 = 14;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,4560
	r31.s64 = ctx.r11.s64 + 4560;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A264C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,18
	r30.s64 = 18;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,456
	r31.s64 = ctx.r11.s64 + 456;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A2660:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,12
	r30.s64 = 12;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,18240
	r31.s64 = ctx.r11.s64 + 18240;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A2674:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x824a26d0
	if (ctx.cr6.eq) goto loc_824A26D0;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x824a26c0
	if (ctx.cr6.eq) goto loc_824A26C0;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x824a26ac
	if (ctx.cr6.eq) goto loc_824A26AC;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// ble cr6,0x824a26e0
	if (!ctx.cr6.gt) goto loc_824A26E0;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bgt cr6,0x824a26e0
	if (ctx.cr6.gt) goto loc_824A26E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,2
	r30.s64 = 2;
	// addi r31,r11,-10088
	r31.s64 = ctx.r11.s64 + -10088;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A26AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,20976
	r31.s64 = ctx.r11.s64 + 20976;
	// b 0x824a26e0
	goto loc_824A26E0;
loc_824A26C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,22120
	r31.s64 = ctx.r11.s64 + 22120;
	// b 0x824a26dc
	goto loc_824A26DC;
loc_824A26D0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// addi r31,r11,21208
	r31.s64 = ctx.r11.s64 + 21208;
loc_824A26DC:
	// li r30,4
	r30.s64 = 4;
loc_824A26E0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82495950
	ctx.lr = 0x824A26F4;
	sub_82495950(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bne cr6,0x824a2710
	if (!ctx.cr6.eq) goto loc_824A2710;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3087
	ctx.r5.s64 = 3087;
	// addi r6,r11,-6264
	ctx.r6.s64 = ctx.r11.s64 + -6264;
	// b 0x824a2798
	goto loc_824A2798;
loc_824A2710:
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82497848
	ctx.lr = 0x824A2730;
	sub_82497848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2b68
	if (ctx.cr0.lt) goto loc_824A2B68;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a27ac
	if (ctx.cr6.eq) goto loc_824A27AC;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82497848
	ctx.lr = 0x824A2764;
	sub_82497848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2b68
	if (ctx.cr0.lt) goto loc_824A2B68;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,3088
	ctx.r5.s64 = 3088;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bne cr6,0x824a2790
	if (!ctx.cr6.eq) goto loc_824A2790;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r6,r11,-6320
	ctx.r6.s64 = ctx.r11.s64 + -6320;
	// b 0x824a27a0
	goto loc_824A27A0;
loc_824A2790:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-6356
	ctx.r6.s64 = ctx.r11.s64 + -6356;
loc_824A2798:
	// lwz r8,8(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
loc_824A27A0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A27A8;
	sub_82494D48(ctx, base);
	// b 0x824a2b68
	goto loc_824A2B68;
loc_824A27AC:
	// lwz r21,144(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r1,152
	r25.s64 = ctx.r1.s64 + 152;
	// addi r24,r1,156
	r24.s64 = ctx.r1.s64 + 156;
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r26,44(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824a29a0
	if (ctx.cr6.eq) goto loc_824A29A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r23,r11,-6432
	r23.s64 = ctx.r11.s64 + -6432;
	// addi r22,r10,-14616
	r22.s64 = ctx.r10.s64 + -14616;
loc_824A27D8:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// lwz r27,8(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2804
	if (ctx.cr6.eq) goto loc_824A2804;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x824a2804
	if (!ctx.cr6.eq) goto loc_824A2804;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_824A2804:
	// lwz r29,24(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a298c
	if (ctx.cr6.eq) goto loc_824A298C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r30,48(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2828
	if (ctx.cr6.eq) goto loc_824A2828;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x824a282c
	goto loc_824A282C;
loc_824A2828:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_824A282C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A2834;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2850
	if (ctx.cr0.eq) goto loc_824A2850;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A284C;
	sub_82444918(ctx, base);
	// b 0x824a2854
	goto loc_824A2854;
loc_824A2850:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824A2854:
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A2868;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2884
	if (ctx.cr0.eq) goto loc_824A2884;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A2880;
	sub_82444918(ctx, base);
	// b 0x824a2888
	goto loc_824A2888;
loc_824A2884:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824A2888:
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a28dc
	if (ctx.cr0.eq) goto loc_824A28DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824987e0
	ctx.lr = 0x824A28B4;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// beq 0x824a29e4
	if (ctx.cr0.eq) goto loc_824A29E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x824A28D4;
	sub_8249C6F0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_824A28DC:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a2974
	if (ctx.cr0.eq) goto loc_824A2974;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824956c8
	ctx.lr = 0x824A28F4;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a29f0
	if (!ctx.cr0.eq) goto loc_824A29F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824987e0
	ctx.lr = 0x824A2910;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a29f0
	if (ctx.cr0.eq) goto loc_824A29F0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8249c4a8
	ctx.lr = 0x824A2928;
	sub_8249C4A8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824a2b68
	if (ctx.cr0.eq) goto loc_824A2B68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x824A2944;
	sub_8249C6F0(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824a2b68
	if (ctx.cr0.eq) goto loc_824A2B68;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8249d2e8
	ctx.lr = 0x824A2964;
	sub_8249D2E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2b68
	if (ctx.cr0.eq) goto loc_824A2B68;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_824A2974:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r25,r11,12
	r25.s64 = ctx.r11.s64 + 12;
	// addi r24,r10,12
	r24.s64 = ctx.r10.s64 + 12;
	// b 0x824a2994
	goto loc_824A2994;
loc_824A298C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a29a8
	if (ctx.cr6.eq) goto loc_824A29A8;
loc_824A2994:
	// lwz r26,12(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824a27d8
	if (!ctx.cr6.eq) goto loc_824A27D8;
loc_824A29A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824a2b10
	if (!ctx.cr6.eq) goto loc_824A2B10;
loc_824A29A8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824a2b10
	if (!ctx.cr6.eq) goto loc_824A2B10;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x824A29B8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2a10
	if (ctx.cr0.eq) goto loc_824A2A10;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x824A29DC;
	sub_824474C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824a2a14
	goto loc_824A2A14;
loc_824A29E4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x824a29fc
	goto loc_824A29FC;
loc_824A29F0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_824A29FC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r5,8(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82498c30
	ctx.lr = 0x824A2A0C;
	sub_82498C30(ctx, base);
	// b 0x824a2b68
	goto loc_824A2B68;
loc_824A2A10:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_824A2A14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2a48
	if (ctx.cr6.eq) goto loc_824A2A48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2b68
	if (ctx.cr0.eq) goto loc_824A2B68;
loc_824A2A48:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2b68
	if (ctx.cr0.eq) goto loc_824A2B68;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A2A70;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2a94
	if (ctx.cr0.eq) goto loc_824A2A94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-24696
	ctx.r6.s64 = ctx.r11.s64 + -24696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A2A8C;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a2a98
	goto loc_824A2A98;
loc_824A2A94:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_824A2A98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82444750
	ctx.lr = 0x824A2AB8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2adc
	if (ctx.cr0.eq) goto loc_824A2ADC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-6380
	ctx.r6.s64 = ctx.r11.s64 + -6380;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A2AD4;
	sub_82444918(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x824a2ae0
	goto loc_824A2AE0;
loc_824A2ADC:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_824A2AE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// beq cr6,0x824a2b68
	if (ctx.cr6.eq) goto loc_824A2B68;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// bl 0x824974b0
	ctx.lr = 0x824A2B08;
	sub_824974B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824a2b6c
	goto loc_824A2B6C;
loc_824A2B10:
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824a2b38
	if (ctx.cr6.eq) goto loc_824A2B38;
loc_824A2B20:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2b20
	if (!ctx.cr6.eq) goto loc_824A2B20;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x824a2b44
	if (ctx.cr6.eq) goto loc_824A2B44;
loc_824A2B38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,25300
	ctx.r9.s64 = ctx.r11.s64 + 25300;
	// b 0x824a2b4c
	goto loc_824A2B4C;
loc_824A2B44:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-26856
	ctx.r9.s64 = ctx.r11.s64 + -26856;
loc_824A2B4C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 8);
	// li r5,3013
	ctx.r5.s64 = 3013;
	// addi r6,r11,-6424
	ctx.r6.s64 = ctx.r11.s64 + -6424;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A2B68;
	sub_82494D48(ctx, base);
loc_824A2B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2B6C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824C5788) {
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
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x824c580c
	if (!ctx.cr6.gt) goto loc_824C580C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,22376
	ctx.r3.s64 = ctx.r11.s64 + 22376;
	// bl 0x824793b0
	ctx.lr = 0x824C57C0;
	sub_824793B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824c5808
	if (!ctx.cr6.gt) goto loc_824C5808;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_824C57DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824c57f4
	if (ctx.cr6.eq) goto loc_824C57F4;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_824C57F4:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824c57dc
	if (ctx.cr6.lt) goto loc_824C57DC;
loc_824C5808:
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
loc_824C580C:
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

DEFINE_REX_FUNC(sub_824C8E10) {
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
	ctx.lr = 0x824C8E18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,420(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c8f08
	if (!ctx.cr6.eq) goto loc_824C8F08;
	// cmpwi cr6,r5,25
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 25, ctx.xer);
	// bge cr6,0x824c8f5c
	if (!ctx.cr6.lt) goto loc_824C8F5C;
loc_824C8E4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8e7c
	if (!ctx.cr6.eq) goto loc_824C8E7C;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C8E68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c8ef8
	if (ctx.cr6.eq) goto loc_824C8EF8;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824C8E7C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x824c8ee0
	if (!ctx.cr6.eq) goto loc_824C8EE0;
loc_824C8E90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8ec0
	if (!ctx.cr6.eq) goto loc_824C8EC0;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C8EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c8ef8
	if (ctx.cr6.eq) goto loc_824C8EF8;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824C8EC0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x824c8e90
	if (ctx.cr6.eq) goto loc_824C8E90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c8f04
	if (!ctx.cr6.eq) goto loc_824C8F04;
	// li r11,255
	ctx.r11.s64 = 255;
loc_824C8EE0:
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r26,r10,r11
	r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpwi cr6,r28,25
	ctx.cr6.compare<int32_t>(r28.s32, 25, ctx.xer);
	// blt cr6,0x824c8e4c
	if (ctx.cr6.lt) goto loc_824C8E4C;
	// b 0x824c8f5c
	goto loc_824C8F5C;
loc_824C8EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_824C8F04:
	// stw r11,420(r29)
	REX_STORE_U32(r29.u32 + 420, ctx.r11.u32);
loc_824C8F08:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// ble cr6,0x824c8f5c
	if (!ctx.cr6.gt) goto loc_824C8F5C;
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 448);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824c8f50
	if (!ctx.cr6.eq) goto loc_824C8F50;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,117
	ctx.r10.s64 = 117;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C8F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,448(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 448);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
loc_824C8F50:
	// subfic r11,r28,25
	ctx.xer.ca = r28.u32 <= 25;
	ctx.r11.u64 = static_cast<uint64_t>(25) - r28.u64;
	// li r28,25
	r28.s64 = 25;
	// slw r26,r26,r11
	r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
loc_824C8F5C:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r27)
	REX_STORE_U32(r27.u32 + 4, r30.u32);
	// stw r26,8(r27)
	REX_STORE_U32(r27.u32 + 8, r26.u32);
	// stw r28,12(r27)
	REX_STORE_U32(r27.u32 + 12, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824D2128) {
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
	ctx.lr = 0x824D2130;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x822c5fd8
	ctx.lr = 0x824D2154;
	sub_822C5FD8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x824d2340
	if (ctx.cr6.eq) goto loc_824D2340;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x824d22a0
	if (ctx.cr6.eq) goto loc_824D22A0;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x824d2260
	if (ctx.cr6.eq) goto loc_824D2260;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x824d2230
	if (ctx.cr6.eq) goto loc_824D2230;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x824d21f0
	if (ctx.cr6.eq) goto loc_824D21F0;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x824d21c4
	if (ctx.cr6.eq) goto loc_824D21C4;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x824d254c
	if (!ctx.cr6.eq) goto loc_824D254C;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d2ee8
	ctx.lr = 0x824D21A0;
	sub_822D2EE8(ctx, base);
	// lwz r10,304(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,320(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x824d2374
	goto loc_824D2374;
loc_824D21C4:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d2ee8
	ctx.lr = 0x824D21D4;
	sub_822D2EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// b 0x824d2368
	goto loc_824D2368;
loc_824D21F0:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d2ee8
	ctx.lr = 0x824D2200;
	sub_822D2EE8(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// b 0x824d2378
	goto loc_824D2378;
loc_824D2230:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d30a8
	ctx.lr = 0x824D2240;
	sub_822D30A8(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// b 0x824d2370
	goto loc_824D2370;
loc_824D2260:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d34b8
	ctx.lr = 0x824D226C;
	sub_822D34B8(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r28,r11,4,28,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x824d2378
	goto loc_824D2378;
loc_824D22A0:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d3400
	ctx.lr = 0x824D22AC;
	sub_822D3400(ctx, base);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r7,r7,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824d22f0
	if (ctx.cr0.eq) goto loc_824D22F0;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r28,r11,4,28,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x824d2378
	goto loc_824D2378;
loc_824D22F0:
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// addi r7,r7,-26296
	ctx.r7.s64 = ctx.r7.s64 + -26296;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x824d254c
	goto loc_824D254C;
loc_824D2340:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d2ee8
	ctx.lr = 0x824D2350;
	sub_822D2EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r9,240(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r11,264(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_824D2368:
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
loc_824D2370:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_824D2374:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_824D2378:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r10,-26296
	ctx.r11.s64 = ctx.r10.s64 + -26296;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x822c6b30
	ctx.lr = 0x824D23A0;
	sub_822C6B30(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824d1ea8
	ctx.lr = 0x824D23BC;
	sub_824D1EA8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824d2438
	if (!ctx.cr6.eq) goto loc_824D2438;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x824d2438
	if (!ctx.cr6.eq) goto loc_824D2438;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824d2438
	if (!ctx.cr0.eq) goto loc_824D2438;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824d2438
	if (!ctx.cr0.eq) goto loc_824D2438;
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824d2438
	if (!ctx.cr0.eq) goto loc_824D2438;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824d2438
	if (!ctx.cr0.eq) goto loc_824D2438;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824d2438
	if (!ctx.cr0.eq) goto loc_824D2438;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1a98
	ctx.lr = 0x824D2420;
	sub_822D1A98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// b 0x824d243c
	goto loc_824D243C;
loc_824D2438:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824D243C:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x824d247c
	if (!ctx.cr6.eq) goto loc_824D247C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bgt cr6,0x824d247c
	if (ctx.cr6.gt) goto loc_824D247C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c5fd8
	ctx.lr = 0x824D2474;
	sub_822C5FD8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x824d249c
	if (ctx.cr6.eq) goto loc_824D249C;
loc_824D247C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c5fd8
	ctx.lr = 0x824D2484;
	sub_822C5FD8(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x824d249c
	if (ctx.cr6.eq) goto loc_824D249C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824D249C:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 26;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x824d24c0
	if (ctx.cr6.eq) goto loc_824D24C0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_824D24C0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d24d8
	if (ctx.cr6.eq) goto loc_824D24D8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_824D24D8:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d24f0
	if (ctx.cr0.eq) goto loc_824D24F0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_824D24F0:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r6,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// divwu r10,r10,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_824D254C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824EA2D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824EA2E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824ea30c
	if (ctx.cr6.lt) goto loc_824EA30C;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824ea310
	if (!ctx.cr6.gt) goto loc_824EA310;
loc_824EA30C:
	// bl 0x826b40a0
	ctx.lr = 0x824EA310;
	sub_826B40A0(ctx, base);
loc_824EA310:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x824ea358
	if (!ctx.cr6.lt) goto loc_824EA358;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x824ea240
	ctx.lr = 0x824EA340;
	sub_824EA240(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_824EA358:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824EE250) {
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
	ctx.lr = 0x824EE258;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r9,-26424
	r27.s64 = ctx.r9.s64 + -26424;
	// addi r26,r10,-26736
	r26.s64 = ctx.r10.s64 + -26736;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee28c
	if (!ctx.cr6.eq) goto loc_824EE28C;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ee298
	goto loc_824EE298;
loc_824EE28C:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee310
	if (!ctx.cr6.eq) goto loc_824EE310;
loc_824EE298:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE2B0;
	sub_824EA978(ctx, base);
	// b 0x824ee310
	goto loc_824EE310;
loc_824EE2B4:
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ee2cc
	if (ctx.cr6.eq) goto loc_824EE2CC;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee2e4
	if (!ctx.cr6.eq) goto loc_824EE2E4;
loc_824EE2CC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,524
	ctx.r7.s64 = 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE2E4;
	sub_824EA978(ctx, base);
loc_824EE2E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EE2EC;
	sub_824EE070(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x824EE304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EE310;
	sub_825A28C0(ctx, base);
loc_824EE310:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824ee2b4
	if (!ctx.cr6.eq) goto loc_824EE2B4;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x824ee32c
	if (ctx.cr0.eq) goto loc_824EE32C;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EE32C;
	sub_825A28C0(ctx, base);
loc_824EE32C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825a2758
	ctx.lr = 0x824EE334;
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
	ctx.lr = 0x824EE348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F13D0) {
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
	ctx.lr = 0x824F13D8;
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-25912
	r27.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f1418
	if (!ctx.cr6.eq) goto loc_824F1418;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1418;
	sub_824EA978(ctx, base);
loc_824F1418:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f143c
	if (!ctx.cr6.eq) goto loc_824F143C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25356
	ctx.r5.s64 = ctx.r11.s64 + -25356;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,957
	ctx.r7.s64 = 957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F143C;
	sub_824EA978(ctx, base);
loc_824F143C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f08a0
	ctx.lr = 0x824F1444;
	sub_824F08A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F1458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f1484
	if (!ctx.cr0.eq) goto loc_824F1484;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25424
	ctx.r5.s64 = ctx.r11.s64 + -25424;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F147C;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f14ac
	goto loc_824F14AC;
loc_824F1484:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f08a0
	ctx.lr = 0x824F148C;
	sub_824F08A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F149C;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2428);
	// bl 0x824ef768
	ctx.lr = 0x824F14A8;
	sub_824EF768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F14AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F7BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824F7C00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f7c88
	if (!ctx.cr0.eq) goto loc_824F7C88;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f7c88
	if (ctx.cr0.eq) goto loc_824F7C88;
loc_824F7C20:
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_824F7C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f7c6c
	if (ctx.cr6.eq) goto loc_824F7C6C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7c64
	if (ctx.cr6.eq) goto loc_824F7C64;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7c64
	if (ctx.cr0.eq) goto loc_824F7C64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f75b8
	ctx.lr = 0x824F7C4C;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7c64
	if (ctx.cr0.eq) goto loc_824F7C64;
	// rlwinm r11,r31,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// ble cr6,0x824f7c64
	if (!ctx.cr6.gt) goto loc_824F7C64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_824F7C64:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x824f7c24
	goto loc_824F7C24;
loc_824F7C6C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f7c88
	if (!ctx.cr0.eq) goto loc_824F7C88;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f7c20
	if (!ctx.cr6.eq) goto loc_824F7C20;
loc_824F7C88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82500148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82500150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500174
	if (ctx.cr0.eq) goto loc_82500174;
loc_8250016C:
	// li r31,0
	r31.s64 = 0;
	// b 0x82500210
	goto loc_82500210;
loc_82500174:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82500210
	if (ctx.cr0.eq) goto loc_82500210;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8250019c
	if (ctx.cr6.lt) goto loc_8250019C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825001a0
	if (!ctx.cr6.gt) goto loc_825001A0;
loc_8250019C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825001A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825001f8
	if (ctx.cr0.eq) goto loc_825001F8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x825001c4
	if (ctx.cr6.lt) goto loc_825001C4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825001c8
	if (!ctx.cr6.gt) goto loc_825001C8;
loc_825001C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825001C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825001f8
	if (ctx.cr0.eq) goto loc_825001F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7af8
	ctx.lr = 0x825001D8;
	sub_824F7AF8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825001f8
	if (!ctx.cr6.eq) goto loc_825001F8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250016c
	if (!ctx.cr0.eq) goto loc_8250016C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_825001F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82500210
	if (ctx.cr6.eq) goto loc_82500210;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16128, ctx.xer);
	// beq cr6,0x825002a4
	if (ctx.cr6.eq) goto loc_825002A4;
loc_82500210:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250022C;
	sub_825BB860(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x82500270
	if (ctx.cr6.eq) goto loc_82500270;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x825002a0
	goto loc_825002A0;
loc_82500270:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
loc_825002A0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825002A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8250CEE0) {
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
	ctx.lr = 0x8250CEE8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x8250cf1c
	if (!ctx.cr6.eq) goto loc_8250CF1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8250d250
	goto loc_8250D250;
loc_8250CF1C:
	// cmplwi cr6,r10,85
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// bne cr6,0x8250cf2c
	if (!ctx.cr6.eq) goto loc_8250CF2C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8250d250
	goto loc_8250D250;
loc_8250CF2C:
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x8250cf3c
	if (ctx.cr6.eq) goto loc_8250CF3C;
loc_8250CF34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250d250
	goto loc_8250D250;
loc_8250CF3C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r28,r11,14,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8250CF58;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwzx r31,r3,r10
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_8250CF64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250cf88
	if (ctx.cr6.eq) goto loc_8250CF88;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x8250cf80
	if (!ctx.cr6.eq) goto loc_8250CF80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250cf64
	goto loc_8250CF64;
loc_8250CF80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8250cf94
	if (!ctx.cr6.eq) goto loc_8250CF94;
loc_8250CF88:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250CF94;
	sub_824E4368(ctx, base);
loc_8250CF94:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// clrlwi r6,r10,13
	ctx.r6.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250cfd8
	if (ctx.cr0.eq) goto loc_8250CFD8;
	// stb r28,0(r27)
	REX_STORE_U8(r27.u32 + 0, r28.u8);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// b 0x8250d250
	goto loc_8250D250;
loc_8250CFD8:
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d020
	if (ctx.cr0.eq) goto loc_8250D020;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8250D004:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r27)
	REX_STORE_U8(r27.u32 + 0, ctx.r11.u8);
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x8250d250
	goto loc_8250D250;
loc_8250D020:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250d058
	if (ctx.cr6.eq) goto loc_8250D058;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne 0x8250d05c
	if (!ctx.cr0.eq) goto loc_8250D05C;
loc_8250D058:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D05C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250d0a8
	if (!ctx.cr0.eq) goto loc_8250D0A8;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8250d09c
	if (ctx.cr6.eq) goto loc_8250D09C;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne 0x8250d0a0
	if (!ctx.cr0.eq) goto loc_8250D0A0;
loc_8250D09C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D0A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250cf34
	if (ctx.cr0.eq) goto loc_8250CF34;
loc_8250D0A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8250D0AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250d0e4
	if (ctx.cr6.eq) goto loc_8250D0E4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r8,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// and. r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250d140
	if (!ctx.cr0.eq) goto loc_8250D140;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8250d0ac
	goto loc_8250D0AC;
loc_8250D0E4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8250D0E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250d120
	if (ctx.cr6.eq) goto loc_8250D120;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r6,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250d128
	if (!ctx.cr0.eq) goto loc_8250D128;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8250d0e8
	goto loc_8250D0E8;
loc_8250D120:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250d140
	goto loc_8250D140;
loc_8250D128:
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// rlwinm r28,r9,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8250D140:
	// stb r28,0(r27)
	REX_STORE_U8(r27.u32 + 0, r28.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// bne cr6,0x8250d24c
	if (!ctx.cr6.eq) goto loc_8250D24C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250d18c
	if (ctx.cr6.eq) goto loc_8250D18C;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne 0x8250d190
	if (!ctx.cr0.eq) goto loc_8250D190;
loc_8250D18C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D190:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d24c
	if (ctx.cr0.eq) goto loc_8250D24C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8250d1d0
	if (ctx.cr6.eq) goto loc_8250D1D0;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne 0x8250d1d4
	if (!ctx.cr0.eq) goto loc_8250D1D4;
loc_8250D1D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D1D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d24c
	if (ctx.cr0.eq) goto loc_8250D24C;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b7c0
	ctx.lr = 0x8250D1F8;
	sub_8250B7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250d208
	if (!ctx.cr0.eq) goto loc_8250D208;
loc_8250D200:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8250d250
	goto loc_8250D250;
loc_8250D208:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250d24c
	if (ctx.cr6.eq) goto loc_8250D24C;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b7c0
	ctx.lr = 0x8250D230;
	sub_8250B7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d200
	if (ctx.cr0.eq) goto loc_8250D200;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250d200
	if (!ctx.cr6.eq) goto loc_8250D200;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8250d004
	goto loc_8250D004;
loc_8250D24C:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8250D250:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82538A80) {
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
	ctx.lr = 0x82538A88;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r25,3
	r25.s64 = 3;
	// li r26,1
	r26.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi. r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r31,0
	r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r29,r9,18,29,31
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// beq 0x82538b68
	if (ctx.cr0.eq) goto loc_82538B68;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r9,27
	ctx.r3.u64 = ctx.r9.u32 & 0x1F;
loc_82538AE0:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// rlwinm r5,r11,29,3,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r7,r5,r28
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + r28.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r5,r11,58
	ctx.r5.u64 = ctx.r11.u64 & 0x3F;
	// li r28,-1
	r28.s64 = -1;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// sld r7,r28,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 << (ctx.r5.u8 & 0x7F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// srd r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r5.u8 & 0x7F));
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// bne cr6,0x82538b38
	if (!ctx.cr6.eq) goto loc_82538B38;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82538B38:
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r25,r5
	r28.u64 = ctx.r5.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r5.u8 & 0x3F));
	// andc r31,r31,r28
	r31.u64 = r31.u64 & ~r28.u64;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// or r31,r31,r7
	r31.u64 = r31.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82538ae0
	if (ctx.cr6.lt) goto loc_82538AE0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_82538B68:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r8,r30,32
	ctx.r8.u64 = r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r28,0
	r28.s64 = 0;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r24,r11,r29
	r24.u64 = r29.u64 - ctx.r11.u64;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// beq cr6,0x82538bb8
	if (ctx.cr6.eq) goto loc_82538BB8;
	// lwz r14,0(r27)
	r14.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x82538bbc
	goto loc_82538BBC;
loc_82538BB8:
	// li r14,228
	r14.s64 = 228;
loc_82538BBC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82538c40
	if (ctx.cr6.eq) goto loc_82538C40;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82538BD4:
	// slw r11,r26,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538c20
	if (ctx.cr0.eq) goto loc_82538C20;
	// srw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82538bfc
	if (!ctx.cr6.eq) goto loc_82538BFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82538BFC:
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r6,r14,r11
	ctx.r6.u64 = r14.u64 & ~ctx.r11.u64;
	// and r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 & r14.u64;
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// or r14,r11,r7
	r14.u64 = ctx.r11.u64 | ctx.r7.u64;
	// b 0x82538c34
	goto loc_82538C34;
loc_82538C20:
	// slw r11,r25,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r28,r11,r7
	r28.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_82538C34:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82538bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82538BD4;
loc_82538C40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82538c4c
	if (ctx.cr6.eq) goto loc_82538C4C;
	// stw r14,0(r27)
	REX_STORE_U32(r27.u32 + 0, r14.u32);
loc_82538C4C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82538c5c
	if (!ctx.cr6.eq) goto loc_82538C5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8253927c
	goto loc_8253927C;
loc_82538C5C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82538cbc
	if (!ctx.cr6.eq) goto loc_82538CBC;
	// addi r30,r15,4
	r30.s64 = r15.s64 + 4;
loc_82538C68:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82538cbc
	if (ctx.cr6.eq) goto loc_82538CBC;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82538ca8
	if (ctx.cr6.eq) goto loc_82538CA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538ca8
	if (ctx.cr0.eq) goto loc_82538CA8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82538ca8
	if (!ctx.cr6.eq) goto loc_82538CA8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,660(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 660);
	// bl 0x8254f428
	ctx.lr = 0x82538CA8;
	sub_8254F428(ctx, base);
loc_82538CA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82538c68
	if (!ctx.cr6.eq) goto loc_82538C68;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x82538c68
	goto loc_82538C68;
loc_82538CBC:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 28);
	// rlwinm r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825bb860
	ctx.lr = 0x82538CDC;
	sub_825BB860(ctx, base);
	// lhz r11,14(r15)
	ctx.r11.u64 = REX_LOAD_U16(r15.u32 + 14);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82538d30
	if (ctx.cr0.eq) goto loc_82538D30;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82538d30
	if (ctx.cr6.eq) goto loc_82538D30;
	// li r30,0
	r30.s64 = 0;
loc_82538CFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254fb38
	ctx.lr = 0x82538D08;
	sub_8254FB38(ctx, base);
	// srw r11,r14,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r14.u32 >> (r30.u8 & 0x3F));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8254fb50
	ctx.lr = 0x82538D20;
	sub_8254FB50(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x82538cfc
	if (ctx.cr6.lt) goto loc_82538CFC;
loc_82538D30:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r21,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r11,20(r21)
	REX_STORE_U32(r21.u32 + 20, ctx.r11.u32);
	// stw r10,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538d98
	if (ctx.cr0.eq) goto loc_82538D98;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_82538D98:
	// li r30,0
	r30.s64 = 0;
	// addi r31,r21,44
	r31.s64 = r21.s64 + 44;
	// subf r29,r21,r15
	r29.u64 = r15.u64 - r21.u64;
loc_82538DA4:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82538e28
	if (!ctx.cr6.lt) goto loc_82538E28;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82538DC0;
	sub_8250AD28(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r5,r5,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xFF;
	// rlwinm r11,r28,27,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x6;
	// rlwinm r10,r24,14,15,17
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 14) & 0x1C000;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r9,r28,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x6;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r28,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x6;
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r6,r28,1,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x6;
	// srw r10,r5,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r11,r5,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r11,r10,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r7,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82538da4
	goto loc_82538DA4;
loc_82538E28:
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
loc_82538E2C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82538e8c
	if (ctx.cr6.eq) goto loc_82538E8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82538e78
	if (!ctx.cr0.eq) goto loc_82538E78;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82538e58
	goto loc_82538E58;
loc_82538E50:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82538E58:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82538e50
	if (!ctx.cr6.eq) goto loc_82538E50;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r21.u32);
loc_82538E78:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82538e2c
	if (!ctx.cr6.eq) goto loc_82538E2C;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82538e2c
	goto loc_82538E2C;
loc_82538E8C:
	// addi r16,r15,4
	r16.s64 = r15.s64 + 4;
loc_82538E90:
	// lwz r17,0(r16)
	r17.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x825391b8
	if (ctx.cr6.eq) goto loc_825391B8;
	// lwz r27,16(r17)
	r27.u64 = REX_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825391a4
	if (ctx.cr6.eq) goto loc_825391A4;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253916c
	if (!ctx.cr6.eq) goto loc_8253916C;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253916c
	if (ctx.cr0.eq) goto loc_8253916C;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8253912c
	if (!ctx.cr6.eq) goto loc_8253912C;
	// rlwinm r9,r11,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253912c
	if (ctx.cr0.eq) goto loc_8253912C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 28);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x825bb9c8
	ctx.lr = 0x82538F04;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// li r25,0
	r25.s64 = 0;
	// li r23,0
	r23.s64 = 0;
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
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825390b0
	if (ctx.cr0.eq) goto loc_825390B0;
	// li r30,0
	r30.s64 = 0;
	// addi r19,r3,44
	r19.s64 = ctx.r3.s64 + 44;
	// addi r18,r27,44
	r18.s64 = r27.s64 + 44;
loc_82538F70:
	// lwz r31,0(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r29,r11,27,30,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// bne cr6,0x82538fbc
	if (!ctx.cr6.eq) goto loc_82538FBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r9,r11,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82538fbc
	if (ctx.cr0.eq) goto loc_82538FBC;
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r23.u8 & 0x3F));
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// andc r10,r22,r10
	ctx.r10.u64 = r22.u64 & ~ctx.r10.u64;
	// slw r9,r29,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// or r20,r11,r20
	r20.u64 = ctx.r11.u64 | r20.u64;
	// or r22,r10,r9
	r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82539094
	goto loc_82539094;
loc_82538FBC:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r28,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r28.u32 << (r30.u8 & 0x3F));
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// andc r11,r26,r11
	ctx.r11.u64 = r26.u64 & ~ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82538FDC;
	sub_8250AD28(ctx, base);
	// stw r3,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x82539068
	if (!ctx.cr6.eq) goto loc_82539068;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r9,r9,0,27,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r8,r10,5,22,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3E0;
	// rlwinm r9,r9,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r8,r8,7296
	ctx.r8.u64 = ctx.r8.u64 | 7296;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r25,r8
	ctx.r9.u64 = r25.u64 & ~ctx.r8.u64;
	// or r25,r9,r10
	r25.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82539044
	goto loc_82539044;
loc_8253903C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82539044:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253903c
	if (!ctx.cr6.eq) goto loc_8253903C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r21)
	REX_STORE_U32(r21.u32 + 4, ctx.r3.u32);
	// stw r21,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r21.u32);
	// b 0x8253908c
	goto loc_8253908C;
loc_82539068:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x8253908c
	if (!ctx.cr6.eq) goto loc_8253908C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r25,r10
	ctx.r10.u64 = r25.u64 & ~ctx.r10.u64;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r25,r10,r11
	r25.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8253908C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
loc_82539094:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82538f70
	if (ctx.cr6.lt) goto loc_82538F70;
loc_825390B0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825390B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253910c
	if (ctx.cr6.eq) goto loc_8253910C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x6;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r14,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r8,r8,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x6;
	// andc r9,r26,r9
	ctx.r9.u64 = r26.u64 & ~ctx.r9.u64;
	// srw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r26,r10,r9
	r26.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x825390b4
	goto loc_825390B4;
loc_8253910C:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82537760
	ctx.lr = 0x82539128;
	sub_82537760(ctx, base);
	// b 0x825391a4
	goto loc_825391A4;
loc_8253912C:
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r11,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r14,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
loc_8253916C:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82539184
	goto loc_82539184;
loc_8253917C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82539184:
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, ctx.xer);
	// bne cr6,0x8253917c
	if (!ctx.cr6.eq) goto loc_8253917C;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r11,8(r17)
	REX_STORE_U32(r17.u32 + 8, ctx.r11.u32);
	// stw r17,4(r21)
	REX_STORE_U32(r21.u32 + 4, r17.u32);
	// stw r21,12(r17)
	REX_STORE_U32(r17.u32 + 12, r21.u32);
loc_825391A4:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bne cr6,0x82538e90
	if (!ctx.cr6.eq) goto loc_82538E90;
	// addi r16,r17,8
	r16.s64 = r17.s64 + 8;
	// b 0x82538e90
	goto loc_82538E90;
loc_825391B8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82539260
	if (ctx.cr0.eq) goto loc_82539260;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825391FC;
	sub_82516448(ctx, base);
	// lwz r31,276(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r3,18(r21)
	REX_STORE_U16(r21.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82539238
	if (!ctx.cr0.eq) goto loc_82539238;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539238
	if (ctx.cr0.eq) goto loc_82539238;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82539244
	if (!ctx.cr6.gt) goto loc_82539244;
loc_82539238:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82539240;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82539244:
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
	// stwx r21,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r21.u32);
	// b 0x82539264
	goto loc_82539264;
loc_82539260:
	// lwz r31,276(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82539264:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x82539278;
	sub_825C2288(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8253927C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82589F28) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82589f70
	if (!ctx.cr6.eq) goto loc_82589F70;
	// bl 0x82589ed0
	ctx.lr = 0x82589F54;
	sub_82589ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589f70
	if (!ctx.cr0.eq) goto loc_82589F70;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x82589F70;
	sub_824E4368(ctx, base);
loc_82589F70:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
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

DEFINE_REX_FUNC(sub_8259D1D0) {
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
	ctx.lr = 0x8259D1D8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r27.s64 = temp.s64;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// li r26,0
	r26.s64 = 0;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8259d2e4
	if (!ctx.cr0.gt) goto loc_8259D2E4;
	// subf r11,r27,r8
	ctx.r11.u64 = ctx.r8.u64 - r27.u64;
	// addi r19,r30,-1
	r19.s64 = r30.s64 + -1;
	// rlwinm r22,r11,3,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r21,r6,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8259D21C:
	// cmpw cr6,r26,r19
	ctx.cr6.compare<int32_t>(r26.s32, r19.s32, ctx.xer);
	// li r25,4
	r25.s64 = 4;
	// blt cr6,0x8259d22c
	if (ctx.cr6.lt) goto loc_8259D22C;
	// subfic r25,r17,4
	ctx.xer.ca = r17.u32 <= 4;
	r25.u64 = static_cast<uint64_t>(4) - r17.u64;
loc_8259D22C:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8259d2d0
	if (!ctx.cr6.gt) goto loc_8259D2D0;
	// addi r23,r27,-1
	r23.s64 = r27.s64 + -1;
loc_8259D23C:
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8259D248:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8259D254:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// stfsx f13,r6,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// bdnz 0x8259d254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259D254;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8259d248
	if (ctx.cr6.lt) goto loc_8259D248;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(r31.s32, r23.s32, ctx.xer);
	// li r6,4
	ctx.r6.s64 = 4;
	// blt cr6,0x8259d2ac
	if (ctx.cr6.lt) goto loc_8259D2AC;
	// subfic r6,r18,4
	ctx.xer.ca = r18.u32 <= 4;
	ctx.r6.u64 = static_cast<uint64_t>(4) - r18.u64;
loc_8259D2AC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259cbb8
	ctx.lr = 0x8259D2C0;
	sub_8259CBB8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x8259d23c
	if (ctx.cr6.lt) goto loc_8259D23C;
loc_8259D2D0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r29,r22,r29
	r29.u64 = r22.u64 + r29.u64;
	// add r28,r21,r28
	r28.u64 = r21.u64 + r28.u64;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// blt cr6,0x8259d21c
	if (ctx.cr6.lt) goto loc_8259D21C;
loc_8259D2E4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825A34C0) {
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
	ctx.lr = 0x825A34C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,-11144
	r23.s64 = ctx.r10.s64 + -11144;
	// bne cr6,0x825a3518
	if (!ctx.cr6.eq) goto loc_825A3518;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3518;
	sub_824EA978(ctx, base);
loc_825A3518:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a353c
	if (!ctx.cr6.eq) goto loc_825A353C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A353C;
	sub_824EA978(ctx, base);
loc_825A353C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a3560
	if (!ctx.cr6.eq) goto loc_825A3560;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-25924
	ctx.r5.s64 = ctx.r11.s64 + -25924;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3560;
	sub_824EA978(ctx, base);
loc_825A3560:
	// li r4,1192
	ctx.r4.s64 = 1192;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x825A3570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825a359c
	if (!ctx.cr0.eq) goto loc_825A359C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-11152
	ctx.r5.s64 = ctx.r11.s64 + -11152;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3594;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825a3608
	goto loc_825A3608;
loc_825A359C:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r28,-1
	r28.s64 = -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// bne cr6,0x825a35c8
	if (!ctx.cr6.eq) goto loc_825A35C8;
	// stw r28,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r28.u32);
	// b 0x825a35f4
	goto loc_825A35F4;
loc_825A35C8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x825a35ec
	if (ctx.cr6.eq) goto loc_825A35EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-11180
	ctx.r5.s64 = ctx.r11.s64 + -11180;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A35EC;
	sub_824EA978(ctx, base);
loc_825A35EC:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, ctx.r11.u32);
loc_825A35F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1180(r31)
	REX_STORE_U32(r31.u32 + 1180, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1184(r31)
	REX_STORE_U32(r31.u32 + 1184, ctx.r11.u32);
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
loc_825A3608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825A9578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A9580;
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
	// bl 0x825a60d8
	ctx.lr = 0x825A9594;
	sub_825A60D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825A95A0;
	sub_825A60D8(ctx, base);
	// li r11,73
	ctx.r11.s64 = 73;
	// clrlwi r8,r28,16
	ctx.r8.u64 = r28.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// sth r8,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r8.u16);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
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
	// beq 0x825a95f4
	if (ctx.cr0.eq) goto loc_825A95F4;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A95F4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a960c
	if (ctx.cr0.eq) goto loc_825A960C;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A960C:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a9630
	if (ctx.cr0.eq) goto loc_825A9630;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9630:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a9648
	if (ctx.cr0.eq) goto loc_825A9648;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9648:
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,65
	ctx.r6.s64 = 65;
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r9,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r6,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
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
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r6,r7,0,16,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r6.u64 & 0x3F0000);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
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
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r6,r7,0,0,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r6,r7,0,28,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r6.u64 & 0x70);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r6,r7,0,24,20
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r6.u64 & 0x700);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r6,r7,0,20,16
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r6.u64 & 0x7000);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// rlwimi r6,r7,0,29,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r6.u64 & 0x8);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// rlwimi r7,r6,0,25,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r7.u64 & 0x80);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// rlwimi r6,r7,0,21,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r6.u64 & 0x800);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// rlwimi r6,r7,0,17,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r6.u64 & 0x8000);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825a9780
	if (ctx.cr0.eq) goto loc_825A9780;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9780:
	// li r7,64
	ctx.r7.s64 = 64;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
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
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r6,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r6,0,10,8
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r7.u64 & 0x400000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r7,r7,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825a97ec
	if (ctx.cr0.eq) goto loc_825A97EC;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A97EC:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825a9804
	if (ctx.cr0.eq) goto loc_825A9804;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9804:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825a9838
	if (ctx.cr0.eq) goto loc_825A9838;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9838:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a9850
	if (ctx.cr0.eq) goto loc_825A9850;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9850:
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825BD060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BD068;
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
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD08C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bd0b0
	if (ctx.cr6.eq) goto loc_825BD0B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825BD0AC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825BD0B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD0B8;
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

DEFINE_REX_FUNC(sub_825C1958) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x825bdf00
	ctx.lr = 0x825C19B4;
	sub_825BDF00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C4C28) {
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
	ctx.lr = 0x825C4C30;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x824f7678
	ctx.lr = 0x825C4C4C;
	sub_824F7678(ctx, base);
	// addi r23,r3,4
	r23.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r23,1
	ctx.r10.u64 = r23.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r22,1
	r22.s64 = 1;
	// lwz r26,12(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_825C4C78:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x825c5084
	if (!ctx.cr6.eq) goto loc_825C5084;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4ed0
	if (ctx.cr0.eq) goto loc_825C4ED0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825c4eec
	if (ctx.cr6.eq) goto loc_825C4EEC;
	// lwz r7,28(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// rlwinm. r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c4ed0
	if (ctx.cr0.eq) goto loc_825C4ED0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r27,28(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4cf4
	if (!ctx.cr0.eq) goto loc_825C4CF4;
	// lwz r8,40(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
loc_825C4CC4:
	// rlwinm r9,r11,27,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFF;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c4cf4
	if (!ctx.cr0.eq) goto loc_825C4CF4;
	// lwz r27,52(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c4cc4
	if (ctx.cr0.eq) goto loc_825C4CC4;
loc_825C4CF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c4ed0
	if (ctx.cr6.eq) goto loc_825C4ED0;
	// rlwinm r10,r11,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFF;
	// lwz r9,40(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4ed0
	if (!ctx.cr0.eq) goto loc_825C4ED0;
	// lwz r28,8(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
loc_825C4D24:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825c54c0
	if (ctx.cr6.eq) goto loc_825C54C0;
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_825C4D34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c4d58
	if (ctx.cr6.eq) goto loc_825C4D58;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825c4d50
	if (ctx.cr6.eq) goto loc_825C4D50;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c4d34
	goto loc_825C4D34;
loc_825C4D50:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// b 0x825c4d5c
	goto loc_825C4D5C;
loc_825C4D58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C4D5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4ec8
	if (ctx.cr0.eq) goto loc_825C4EC8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C4D70;
	sub_8250B3D0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825c4d90
	if (ctx.cr6.eq) goto loc_825C4D90;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c4d94
	if (!ctx.cr6.eq) goto loc_825C4D94;
loc_825C4D90:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_825C4D94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c553c
	if (ctx.cr0.eq) goto loc_825C553C;
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4e00
	if (!ctx.cr0.eq) goto loc_825C4E00;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4ddc
	if (!ctx.cr0.eq) goto loc_825C4DDC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c4ddc
	if (ctx.cr0.eq) goto loc_825C4DDC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c4de8
	if (!ctx.cr6.gt) goto loc_825C4DE8;
loc_825C4DDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C4DE8;
	sub_8251FE00(ctx, base);
loc_825C4DE8:
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
loc_825C4E00:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4ec8
	if (!ctx.cr0.eq) goto loc_825C4EC8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c4ec8
	if (ctx.cr0.eq) goto loc_825C4EC8;
loc_825C4E18:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x825c4eac
	if (!ctx.cr6.eq) goto loc_825C4EAC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x825C4E40;
	sub_8257B1B8(ctx, base);
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4eac
	if (!ctx.cr0.eq) goto loc_825C4EAC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4e88
	if (!ctx.cr0.eq) goto loc_825C4E88;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c4e88
	if (ctx.cr0.eq) goto loc_825C4E88;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c4e94
	if (!ctx.cr6.gt) goto loc_825C4E94;
loc_825C4E88:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C4E94;
	sub_8251FE00(ctx, base);
loc_825C4E94:
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
loc_825C4EAC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4ec8
	if (!ctx.cr0.eq) goto loc_825C4EC8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c4e18
	if (!ctx.cr6.eq) goto loc_825C4E18;
loc_825C4EC8:
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x825c4d24
	goto loc_825C4D24;
loc_825C4ED0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c4eec
	if (ctx.cr6.eq) goto loc_825C4EEC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// bne cr6,0x825c4ef0
	if (!ctx.cr6.eq) goto loc_825C4EF0;
loc_825C4EEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C4EF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5084
	if (ctx.cr0.eq) goto loc_825C5084;
	// lwz r4,28(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r31,8(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_825C4F04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c512c
	if (ctx.cr6.eq) goto loc_825C512C;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4f44
	if (!ctx.cr0.eq) goto loc_825C4F44;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x825c4f04
	goto loc_825C4F04;
loc_825C4F44:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4f5c
	if (!ctx.cr0.eq) goto loc_825C4F5C;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825620e8
	ctx.lr = 0x825C4F5C;
	sub_825620E8(ctx, base);
loc_825C4F5C:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5038
	if (!ctx.cr0.eq) goto loc_825C5038;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c5038
	if (ctx.cr0.eq) goto loc_825C5038;
loc_825C4F74:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c501c
	if (ctx.cr0.eq) goto loc_825C501C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_825C4F84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c501c
	if (ctx.cr6.eq) goto loc_825C501C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c4fa4
	if (!ctx.cr0.eq) goto loc_825C4FA4;
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c4fac
	if (ctx.cr0.eq) goto loc_825C4FAC;
loc_825C4FA4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c4f84
	goto loc_825C4F84;
loc_825C4FAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C4FB8;
	sub_8250B3D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825c501c
	if (ctx.cr0.eq) goto loc_825C501C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c501c
	if (!ctx.cr0.eq) goto loc_825C501C;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825c5004
	if (ctx.cr6.eq) goto loc_825C5004;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x825c5004
	if (ctx.cr6.eq) goto loc_825C5004;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x825c5004
	if (ctx.cr6.eq) goto loc_825C5004;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x825c5004
	if (ctx.cr6.eq) goto loc_825C5004;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x825c5004
	if (ctx.cr6.eq) goto loc_825C5004;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c5008
	if (!ctx.cr6.eq) goto loc_825C5008;
loc_825C5004:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_825C5008:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c501c
	if (ctx.cr0.eq) goto loc_825C501C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c5730
	ctx.lr = 0x825C501C;
	sub_825C5730(ctx, base);
loc_825C501C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5038
	if (!ctx.cr0.eq) goto loc_825C5038;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c4f74
	if (!ctx.cr6.eq) goto loc_825C4F74;
loc_825C5038:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5084
	if (!ctx.cr0.eq) goto loc_825C5084;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5084
	if (!ctx.cr0.eq) goto loc_825C5084;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c5084
	if (ctx.cr0.eq) goto loc_825C5084;
loc_825C5058:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c506c
	if (ctx.cr0.eq) goto loc_825C506C;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_825C506C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5084
	if (!ctx.cr0.eq) goto loc_825C5084;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c5058
	if (!ctx.cr6.eq) goto loc_825C5058;
loc_825C5084:
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_825C5088:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825c5350
	if (ctx.cr6.eq) goto loc_825C5350;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c50a8
	if (!ctx.cr0.eq) goto loc_825C50A8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x825c50ac
	if (ctx.cr0.eq) goto loc_825C50AC;
loc_825C50A8:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_825C50AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5348
	if (ctx.cr0.eq) goto loc_825C5348;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c52dc
	if (ctx.cr0.eq) goto loc_825C52DC;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c52dc
	if (ctx.cr0.eq) goto loc_825C52DC;
	// lwz r29,28(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 28);
loc_825C50C8:
	// lwz r29,52(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 52);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C50D8;
	sub_8250B3D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825c50c8
	if (ctx.cr0.eq) goto loc_825C50C8;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x825c50c8
	if (!ctx.cr6.eq) goto loc_825C50C8;
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c52dc
	if (!ctx.cr0.eq) goto loc_825C52DC;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825C510C;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c520c
	if (ctx.cr0.eq) goto loc_825C520C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825c5214
	goto loc_825C5214;
loc_825C512C:
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c51c4
	if (ctx.cr0.eq) goto loc_825C51C4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825C513C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c5084
	if (ctx.cr6.eq) goto loc_825C5084;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8250b3d0
	ctx.lr = 0x825C5150;
	sub_8250B3D0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c51bc
	if (!ctx.cr0.eq) goto loc_825C51BC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5198
	if (!ctx.cr0.eq) goto loc_825C5198;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5198
	if (ctx.cr0.eq) goto loc_825C5198;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c51a4
	if (!ctx.cr6.gt) goto loc_825C51A4;
loc_825C5198:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C51A4;
	sub_8251FE00(ctx, base);
loc_825C51A4:
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
loc_825C51BC:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x825c513c
	goto loc_825C513C;
loc_825C51C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c5084
	if (ctx.cr6.eq) goto loc_825C5084;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x825C51E4;
	sub_8257B1B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5204
	if (ctx.cr0.eq) goto loc_825C5204;
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,52(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x825c33f8
	ctx.lr = 0x825C5204;
	sub_825C33F8(ctx, base);
loc_825C5204:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x825c51c4
	goto loc_825C51C4;
loc_825C520C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825C5214:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C521C;
	sub_8250B3D0(ctx, base);
	// oris r11,r31,1024
	ctx.r11.u64 = r31.u64 | 67108864;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5258
	if (!ctx.cr0.eq) goto loc_825C5258;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5258
	if (ctx.cr0.eq) goto loc_825C5258;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c5264
	if (!ctx.cr6.gt) goto loc_825C5264;
loc_825C5258:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C5264;
	sub_8251FE00(ctx, base);
loc_825C5264:
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
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c52b8
	if (!ctx.cr0.eq) goto loc_825C52B8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c52b8
	if (ctx.cr0.eq) goto loc_825C52B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c52c4
	if (!ctx.cr6.gt) goto loc_825C52C4;
loc_825C52B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C52C4;
	sub_8251FE00(ctx, base);
loc_825C52C4:
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
loc_825C52DC:
	// lwz r31,12(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5348
	if (!ctx.cr0.eq) goto loc_825C5348;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5324
	if (!ctx.cr0.eq) goto loc_825C5324;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5324
	if (ctx.cr0.eq) goto loc_825C5324;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c5330
	if (!ctx.cr6.gt) goto loc_825C5330;
loc_825C5324:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C5330;
	sub_8251FE00(ctx, base);
loc_825C5330:
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
loc_825C5348:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x825c5088
	goto loc_825C5088;
loc_825C5350:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x825c536c
	if (ctx.cr6.lt) goto loc_825C536C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// ble cr6,0x825c5370
	if (!ctx.cr6.gt) goto loc_825C5370;
loc_825C536C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C5370:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c54c0
	if (ctx.cr0.eq) goto loc_825C54C0;
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_825C537C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c54c0
	if (ctx.cr6.eq) goto loc_825C54C0;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c54b8
	if (ctx.cr6.eq) goto loc_825C54B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5404
	if (ctx.cr0.eq) goto loc_825C5404;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// blt cr6,0x825c53bc
	if (ctx.cr6.lt) goto loc_825C53BC;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// ble cr6,0x825c53c0
	if (!ctx.cr6.gt) goto loc_825C53C0;
loc_825C53BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C53C0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c54b8
	if (!ctx.cr0.eq) goto loc_825C54B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825c53e0
	goto loc_825C53E0;
loc_825C53D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825C53E0:
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x825c53d0
	if (ctx.cr6.eq) goto loc_825C53D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c54b8
	if (!ctx.cr0.eq) goto loc_825C54B8;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825c5464
	goto loc_825C5464;
loc_825C5404:
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c54b8
	if (ctx.cr0.eq) goto loc_825C54B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825c5448
	if (ctx.cr6.eq) goto loc_825C5448;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x825c5448
	if (ctx.cr6.eq) goto loc_825C5448;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x825c5448
	if (ctx.cr6.eq) goto loc_825C5448;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x825c5448
	if (ctx.cr6.eq) goto loc_825C5448;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x825c5448
	if (ctx.cr6.eq) goto loc_825C5448;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c544c
	if (!ctx.cr6.eq) goto loc_825C544C;
loc_825C5448:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_825C544C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c54b8
	if (ctx.cr0.eq) goto loc_825C54B8;
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c54b8
	if (!ctx.cr0.eq) goto loc_825C54B8;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_825C5464:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5494
	if (!ctx.cr0.eq) goto loc_825C5494;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5494
	if (ctx.cr0.eq) goto loc_825C5494;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c54a0
	if (!ctx.cr6.gt) goto loc_825C54A0;
loc_825C5494:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C54A0;
	sub_8251FE00(ctx, base);
loc_825C54A0:
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
loc_825C54B8:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825c537c
	goto loc_825C537C;
loc_825C54C0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5548
	if (!ctx.cr0.eq) goto loc_825C5548;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c5548
	if (ctx.cr0.eq) goto loc_825C5548;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
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
	// bne 0x825c5534
	if (!ctx.cr0.eq) goto loc_825C5534;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
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
	ctx.lr = 0x825C5534;
	sub_824E4308(ctx, base);
loc_825C5534:
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x825c4c78
	goto loc_825C4C78;
loc_825C553C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C5548;
	sub_824E4368(ctx, base);
loc_825C5548:
	// lwz r10,976(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 976);
	// addi r11,r24,972
	ctx.r11.s64 = r24.s64 + 972;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r25,976(r24)
	REX_STORE_U32(r24.u32 + 976, r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826082E0) {
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
	ctx.lr = 0x826082E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d8668
	ctx.lr = 0x82608320;
	sub_825D8668(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82608388
	if (!ctx.cr0.gt) goto loc_82608388;
loc_82608338:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82608370
	if (ctx.cr0.eq) goto loc_82608370;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82608370:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82608338
	if (ctx.cr6.lt) goto loc_82608338;
loc_82608388:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8260839c
	if (ctx.cr6.eq) goto loc_8260839C;
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x8260839C;
	sub_825B3528(ctx, base);
loc_8260839C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r30,-32120
	r30.s64 = -2105016320;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,20556(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 20556);
	// lwz r3,1456(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x826083B8;
	sub_825B33A0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r3,20556(r30)
	REX_STORE_U32(r30.u32 + 20556, ctx.r3.u32);
	// ble cr6,0x826083e4
	if (!ctx.cr6.gt) goto loc_826083E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// b 0x826083d4
	goto loc_826083D4;
loc_826083D0:
	// lwz r3,20556(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20556);
loc_826083D4:
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826083d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826083D0;
loc_826083E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x826083F4;
	sub_825B3528(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x82608408;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x82608430
	if (ctx.cr0.eq) goto loc_82608430;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82607f40
	ctx.lr = 0x82608428;
	sub_82607F40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82608434
	goto loc_82608434;
loc_82608430:
	// li r30,0
	r30.s64 = 0;
loc_82608434:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82608440;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82610468) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82610470;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82610494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f988
	ctx.lr = 0x8261049C;
	sub_8260F988(ctx, base);
	// bl 0x82793a84
	ctx.lr = 0x826104A0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lhz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 216);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826104c8
	if (!ctx.cr6.eq) goto loc_826104C8;
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r30,r11,-12
	r30.s64 = ctx.r11.s64 + -12;
loc_826104C8:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a2e60
	ctx.lr = 0x826104D8;
	sub_826A2E60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r11,r30
	ctx.r7.u64 = uint32_t(r30.u32 ? ctx.r11.u32 / r30.u32 : 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261052c
	if (ctx.cr6.eq) goto loc_8261052C;
	// divwu r10,r10,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82610530
	goto loc_82610530;
loc_8261052C:
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
loc_82610530:
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82610580
	if (ctx.cr6.eq) goto loc_82610580;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// divwu r9,r9,r30
	ctx.r9.u64 = uint32_t(r30.u32 ? ctx.r9.u32 / r30.u32 : 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x82610570
	if (ctx.cr6.eq) goto loc_82610570;
	// divwu r10,r10,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82610578
	goto loc_82610578;
loc_82610570:
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82610578:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
loc_82610580:
	// lwz r3,144(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261059C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x826105c4
	if (ctx.cr0.lt) goto loc_826105C4;
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8260f878
	ctx.lr = 0x826105B0;
	sub_8260F878(ctx, base);
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
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_826105C4:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826105DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82618C50) {
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
	// bl 0x82618bc0
	ctx.lr = 0x82618C68;
	sub_82618BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629d78
	ctx.lr = 0x82618C70;
	sub_82629D78(ctx, base);
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

DEFINE_REX_FUNC(sub_8261B0B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261b118
	goto loc_8261B118;
loc_8261B0DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261b120
	if (ctx.cr6.lt) goto loc_8261B120;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261b0fc
	if (ctx.cr6.eq) goto loc_8261B0FC;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261b100
	goto loc_8261B100;
loc_8261B0FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261B100:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261B118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8261b0dc
	if (!ctx.cr6.eq) goto loc_8261B0DC;
loc_8261B120:
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

DEFINE_REX_FUNC(sub_8261EF18) {
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
	ctx.lr = 0x8261EF20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// divwu r8,r9,r28
	ctx.r8.u64 = uint32_t(r28.u32 ? ctx.r9.u32 / r28.u32 : 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8261ef64
	if (!ctx.cr6.lt) goto loc_8261EF64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
loc_8261EF64:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8261f0c8
	if (!ctx.cr6.gt) goto loc_8261F0C8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r23,r10,r28
	r23.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r24,r11,r28
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
loc_8261EF88:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	r27.u64 = ctx.r11.u64 + r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
	// bctrl 
	ctx.lr = 0x8261EFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = r25.u64 + r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	r26.u64 = ctx.r11.u64 + r21.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// ble cr6,0x8261f058
	if (!ctx.cr6.gt) goto loc_8261F058;
loc_8261EFD4:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r17,r30
	r17.u64 = r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	r27.u64 = r27.u64 - ctx.r9.u64;
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8261F01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// srawi r10,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	ctx.r10.s64 = r17.s32 >> 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	r29.u64 = r29.u64 - ctx.r6.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bgt cr6,0x8261efd4
	if (ctx.cr6.gt) goto loc_8261EFD4;
loc_8261F058:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,344(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.u64 = r29.u64 - ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261F0A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,344(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 344);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// stwx r20,r22,r3
	REX_STORE_U32(r22.u32 + ctx.r3.u32, r20.u32);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// blt cr6,0x8261ef88
	if (ctx.cr6.lt) goto loc_8261EF88;
loc_8261F0C8:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_826311A0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x826311A8;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r27
	ctx.r8.s64 = r27.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// fsubs f30,f1,f10
	f30.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// beq cr6,0x82631228
	if (ctx.cr6.eq) goto loc_82631228;
	// lfs f13,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_82631228:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// bge cr6,0x82631290
	if (!ctx.cr6.lt) goto loc_82631290;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
loc_8263123C:
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bge cr6,0x8263128c
	if (!ctx.cr6.lt) goto loc_8263128C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82631284
	if (ctx.cr6.lt) goto loc_82631284;
loc_82631274:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82631274
	if (!ctx.cr6.lt) goto loc_82631274;
loc_82631284:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// blt cr6,0x8263123c
	if (ctx.cr6.lt) goto loc_8263123C;
loc_8263128C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82631290:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r11,r10,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82631304
	if (ctx.cr6.eq) goto loc_82631304;
	// subf r11,r30,r22
	ctx.r11.u64 = r22.u64 - r30.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82631340
	if (!ctx.cr6.gt) goto loc_82631340;
loc_826312B0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x826312f4
	if (ctx.cr6.lt) goto loc_826312F4;
loc_826312E4:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x826312e4
	if (!ctx.cr6.lt) goto loc_826312E4;
loc_826312F4:
	// rlwinm r11,r10,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826312b0
	if (!ctx.cr6.eq) goto loc_826312B0;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82631304:
	// subf r10,r30,r22
	ctx.r10.u64 = r22.u64 - r30.u64;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// ble cr6,0x82631340
	if (!ctx.cr6.gt) goto loc_82631340;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + r23.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82630e08
	ctx.lr = 0x82631334;
	sub_82630E08(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_82631340:
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bge cr6,0x8263139c
	if (!ctx.cr6.lt) goto loc_8263139C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r22
	ctx.r9.u64 = r22.u64 - r30.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8263135C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82631398
	if (ctx.cr6.lt) goto loc_82631398;
loc_82631388:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82631388
	if (!ctx.cr6.lt) goto loc_82631388;
loc_82631398:
	// bdnz 0x8263135c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263135C;
loc_8263139C:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826313ac
	if (!ctx.cr6.lt) goto loc_826313AC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_826313AC:
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
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r9,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r9.u32);
	// stw r10,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8263147c
	if (!ctx.cr6.lt) goto loc_8263147C;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82631440
	if (ctx.cr6.lt) goto loc_82631440;
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
loc_82631404:
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
	// lfsx f12,r3,r28
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82631404
	if (ctx.cr6.lt) goto loc_82631404;
loc_82631440:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8263147c
	if (!ctx.cr6.lt) goto loc_8263147C;
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
loc_82631470:
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
	// bdnz 0x82631470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82631470;
loc_8263147C:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x826314f4
	if (ctx.cr6.lt) goto loc_826314F4;
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r26,2
	ctx.r7.s64 = r26.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r26,3
	ctx.r6.s64 = r26.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r24
	ctx.r9.u64 = ctx.r8.u64 + r24.u64;
loc_826314BC:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f12,r4,r24
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r3,r24
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r24.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826314bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826314BC;
loc_826314F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8263151c
	if (!ctx.cr6.lt) goto loc_8263151C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// add r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x8263151C;
	sub_826A22F8(ctx, base);
loc_8263151C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8264C3C0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264C6C8) {
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
	// bl 0x8264c608
	ctx.lr = 0x8264C6E8;
	sub_8264C608(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264c6f8
	if (ctx.cr0.eq) goto loc_8264C6F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8264C6F8;
	sub_8264C3D0(ctx, base);
loc_8264C6F8:
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

DEFINE_REX_FUNC(sub_8264CE38) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8264cd88
	sub_8264CD88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CE78) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82794084
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CF68) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82794114
	ctx.lr = 0x8264CFAC;
	__imp__NetDll_WSARecvFrom(ctx, base);
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

DEFINE_REX_FUNC(sub_8264E3E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82794164
	ctx.lr = 0x8264E400;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8264e468
	if (!ctx.cr0.eq) goto loc_8264E468;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x8264E42C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264e43c
	if (!ctx.cr0.lt) goto loc_8264E43C;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x8264e460
	goto loc_8264E460;
loc_8264E43C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8264e45c
	if (!ctx.cr6.eq) goto loc_8264E45C;
	// bl 0x823f0058
	ctx.lr = 0x8264E448;
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
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264e460
	goto loc_8264E460;
loc_8264E45C:
	// li r31,997
	r31.s64 = 997;
loc_8264E460:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264E468;
	__imp__ObDereferenceObject(ctx, base);
loc_8264E468:
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

DEFINE_REX_FUNC(sub_8264FEB8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// b 0x8265d088
	sub_8265D088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82650248) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x82650278;
	sub_8265D7B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x82650294;
	sub_8265D7B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x826502B0;
	sub_8265D7B8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x826502D0;
	sub_8265D7B8(ctx, base);
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

DEFINE_REX_FUNC(sub_82653710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82653718;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82653744
	if (!ctx.cr6.lt) goto loc_82653744;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,1609
	r29.u64 = r29.u64 | 1609;
	// b 0x826537d4
	goto loc_826537D4;
loc_82653744:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82652710
	ctx.lr = 0x8265374C;
	sub_82652710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82653760
	if (!ctx.cr0.eq) goto loc_82653760;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,117
	r29.u64 = r29.u64 | 117;
	// b 0x826537d4
	goto loc_826537D4;
loc_82653760:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8265f828
	ctx.lr = 0x82653770;
	sub_8265F828(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82653784
	if (!ctx.cr0.eq) goto loc_82653784;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x826537d4
	goto loc_826537D4;
loc_82653784:
	// lwz r11,528(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 528);
	// addi r30,r29,528
	r30.s64 = r29.s64 + 528;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x826537b4
	if (!ctx.cr6.eq) goto loc_826537B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 32);
	// bl 0x8265f6f8
	ctx.lr = 0x826537A0;
	sub_8265F6F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x826537b4
	if (!ctx.cr0.lt) goto loc_826537B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f910
	ctx.lr = 0x826537B0;
	sub_8265F910(ctx, base);
	// b 0x826537d4
	goto loc_826537D4;
loc_826537B4:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_826537D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8265A0C0) {
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
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265a0ec
	if (!ctx.cr0.eq) goto loc_8265A0EC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x8265a138
	goto loc_8265A138;
loc_8265A0EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8265a104
	if (ctx.cr6.eq) goto loc_8265A104;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x8265a138
	goto loc_8265A138;
loc_8265A104:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a12c
	if (ctx.cr6.eq) goto loc_8265A12C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654278
	ctx.lr = 0x8265A124;
	sub_82654278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265a138
	if (ctx.cr0.lt) goto loc_8265A138;
loc_8265A12C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659f28
	ctx.lr = 0x8265A138;
	sub_82659F28(ctx, base);
loc_8265A138:
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

DEFINE_REX_FUNC(sub_8265CD40) {
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
	ctx.lr = 0x8265CD48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8265cd90
	if (ctx.cr6.eq) goto loc_8265CD90;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8265CD70:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8265cda4
	if (ctx.cr6.eq) goto loc_8265CDA4;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8265cd70
	if (ctx.cr6.lt) goto loc_8265CD70;
loc_8265CD90:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8265d060
	if (ctx.cr6.lt) goto loc_8265D060;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8265d07c
	goto loc_8265D07C;
loc_8265CDA4:
	// mulli r27,r10,24
	r27.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lbz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 8);
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + r27.u64;
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8265cdc8
	if (ctx.cr6.eq) goto loc_8265CDC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8265d07c
	goto loc_8265D07C;
loc_8265CDC8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8265d048
	if (ctx.cr6.eq) goto loc_8265D048;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8265d030
	if (ctx.cr6.eq) goto loc_8265D030;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8265d018
	if (ctx.cr6.eq) goto loc_8265D018;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8265ceec
	if (ctx.cr6.eq) goto loc_8265CEEC;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8265ced4
	if (ctx.cr6.eq) goto loc_8265CED4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8265ce10
	if (ctx.cr6.eq) goto loc_8265CE10;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
loc_8265CE04:
	// bne cr6,0x8265d040
	if (!ctx.cr6.eq) goto loc_8265D040;
loc_8265CE08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265d07c
	goto loc_8265D07C;
loc_8265CE10:
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8265ce64
	if (!ctx.cr6.eq) goto loc_8265CE64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8265ce58
	if (ctx.cr0.eq) goto loc_8265CE58;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8265CE38:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8265ce58
	if (!ctx.cr0.eq) goto loc_8265CE58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8265ce38
	if (!ctx.cr6.eq) goto loc_8265CE38;
loc_8265CE58:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8265ce08
	if (ctx.cr0.eq) goto loc_8265CE08;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
loc_8265CE64:
	// bgt cr6,0x8265ce9c
	if (ctx.cr6.gt) goto loc_8265CE9C;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826a1e70
	ctx.lr = 0x8265CE8C;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// b 0x8265d058
	goto loc_8265D058;
loc_8265CE9C:
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265ca10
	ctx.lr = 0x8265CEB8;
	sub_8265CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265d078
	if (!ctx.cr0.lt) goto loc_8265D078;
	// li r10,6
	ctx.r10.s64 = 6;
loc_8265CEC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x8265d07c
	goto loc_8265D07C;
loc_8265CED4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8265ce08
	if (ctx.cr6.eq) goto loc_8265CE08;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x8265d078
	goto loc_8265D078;
loc_8265CEEC:
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// bne cr6,0x8265cf3c
	if (!ctx.cr6.eq) goto loc_8265CF3C;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x8265cf34
	if (ctx.cr0.eq) goto loc_8265CF34;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
loc_8265CF14:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8265cf34
	if (!ctx.cr0.eq) goto loc_8265CF34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8265cf14
	if (!ctx.cr6.eq) goto loc_8265CF14;
loc_8265CF34:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8265ce08
	if (ctx.cr0.eq) goto loc_8265CE08;
loc_8265CF3C:
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x826b3de8
	ctx.lr = 0x8265CF68;
	sub_826B3DE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r28,r3,16
	r28.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8265cfec
	if (ctx.cr6.gt) goto loc_8265CFEC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x826b3de8
	ctx.lr = 0x8265CFB0;
	sub_826B3DE8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x826a1e70
	ctx.lr = 0x8265CFDC;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// b 0x8265d078
	goto loc_8265D078;
loc_8265CFEC:
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265ca10
	ctx.lr = 0x8265D008;
	sub_8265CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265d078
	if (!ctx.cr0.lt) goto loc_8265D078;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8265cec4
	goto loc_8265CEC4;
loc_8265D018:
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8265ce08
	if (ctx.cr6.eq) goto loc_8265CE08;
	// stfd f0,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// b 0x8265d078
	goto loc_8265D078;
loc_8265D030:
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// b 0x8265ce04
	goto loc_8265CE04;
loc_8265D040:
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// b 0x8265d078
	goto loc_8265D078;
loc_8265D048:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8265ce08
	if (ctx.cr6.eq) goto loc_8265CE08;
loc_8265D058:
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x8265d078
	goto loc_8265D078;
loc_8265D060:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265ca10
	ctx.lr = 0x8265D070;
	sub_8265CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265d07c
	if (ctx.cr0.lt) goto loc_8265D07C;
loc_8265D078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265D07C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82670648) {
	REX_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,265
	ctx.r3.s64 = 265;
	// b 0x8265d850
	sub_8265D850(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82670C20) {
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
	ctx.lr = 0x82670C28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82670C44:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// bdnz 0x82670c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82670C44;
	// addi r11,r31,37
	ctx.r11.s64 = r31.s64 + 37;
	// li r3,256
	ctx.r3.s64 = 256;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8265d838
	ctx.lr = 0x82670C60;
	sub_8265D838(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82670cc8
	if (ctx.cr0.eq) goto loc_82670CC8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670a08
	ctx.lr = 0x82670C7C;
	sub_82670A08(ctx, base);
	// addi r30,r27,296
	r30.s64 = r27.s64 + 296;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82670ca4
	if (ctx.cr6.eq) goto loc_82670CA4;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82670C90:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82767ab8
	ctx.lr = 0x82670C98;
	sub_82767AB8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82670c90
	if (!ctx.cr0.eq) goto loc_82670C90;
loc_82670CA4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// beq cr6,0x82670cc8
	if (ctx.cr6.eq) goto loc_82670CC8;
loc_82670CB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82767ab8
	ctx.lr = 0x82670CBC;
	sub_82767AB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82670cb4
	if (!ctx.cr0.eq) goto loc_82670CB4;
loc_82670CC8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82672E88) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82673098) {
	REX_FUNC_PROLOGUE();
	// lwz r9,100(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 100);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82673154
	if (!ctx.cr6.eq) goto loc_82673154;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826730f0
	if (ctx.cr6.eq) goto loc_826730F0;
	// addi r9,r8,61
	ctx.r9.s64 = ctx.r8.s64 + 61;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x826730e8
	if (ctx.cr0.eq) goto loc_826730E8;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_826730C8:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r4,r4,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826730e8
	if (!ctx.cr0.eq) goto loc_826730E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x826730c8
	if (!ctx.cr6.eq) goto loc_826730C8;
loc_826730E8:
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82673154
	if (!ctx.cr0.eq) goto loc_82673154;
loc_826730F0:
	// lwz r11,104(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267314c
	if (ctx.cr6.eq) goto loc_8267314C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82673154
	if (!ctx.cr6.eq) goto loc_82673154;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x8267313c
	if (ctx.cr0.eq) goto loc_8267313C;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_8267311C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267313c
	if (!ctx.cr0.eq) goto loc_8267313C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8267311c
	if (!ctx.cr6.eq) goto loc_8267311C;
loc_8267313C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82673154
	if (!ctx.cr0.eq) goto loc_82673154;
loc_82673144:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8267314C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82673144
	if (ctx.cr6.eq) goto loc_82673144;
loc_82673154:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82676EA8) {
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
	// addi r30,r3,172
	r30.s64 = ctx.r3.s64 + 172;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x82676ECC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x82676EE0;
	sub_82676D18(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x82676EFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x82676F04;
	sub_82676D18(ctx, base);
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

DEFINE_REX_FUNC(sub_82679038) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82676d18
	ctx.lr = 0x82679054;
	sub_82676D18(ctx, base);
	// lhz r11,1092(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1092);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,1092(r31)
	REX_STORE_U16(r31.u32 + 1092, ctx.r11.u16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82679074
	if (!ctx.cr6.eq) goto loc_82679074;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82679088
	goto loc_82679088;
loc_82679074:
	// bl 0x823ef900
	ctx.lr = 0x82679078;
	sub_823EF900(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x826829f0
	ctx.lr = 0x82679088;
	sub_826829F0(ctx, base);
loc_82679088:
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

DEFINE_REX_FUNC(sub_8267AA70) {
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
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,1184(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1184);
	// rlwinm r11,r11,0,12,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8FFFFF;
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1188(r3)
	REX_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// stb r10,1184(r3)
	REX_STORE_U8(ctx.r3.u32 + 1184, ctx.r10.u8);
	// beq 0x8267aad4
	if (ctx.cr0.eq) goto loc_8267AAD4;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,1188(r3)
	REX_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// bl 0x8267a6a0
	ctx.lr = 0x8267AAB4;
	sub_8267A6A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// beq 0x8267aad0
	if (ctx.cr0.eq) goto loc_8267AAD0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826829f0
	ctx.lr = 0x8267AACC;
	sub_826829F0(ctx, base);
	// b 0x8267aad4
	goto loc_8267AAD4;
loc_8267AAD0:
	// bl 0x82682a90
	ctx.lr = 0x8267AAD4;
	sub_82682A90(ctx, base);
loc_8267AAD4:
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

DEFINE_REX_FUNC(sub_8267D980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267D988;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267dbb8
	if (!ctx.cr6.eq) goto loc_8267DBB8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,44(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82680fb8
	ctx.lr = 0x8267D9B0;
	sub_82680FB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267dbb8
	if (ctx.cr0.eq) goto loc_8267DBB8;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,98
	ctx.r9.s64 = ctx.r1.s64 + 98;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r29,3(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r28,6(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r6,r6,8,22,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x300;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r29,r29,8,22,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0x300;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | r28.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r11,r29,r11
	ctx.r11.u64 = r29.u64 | ctx.r11.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8267aae8
	ctx.lr = 0x8267DA18;
	sub_8267AAE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267dbb8
	if (ctx.cr0.eq) goto loc_8267DBB8;
	// lwz r28,824(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 824);
	// stw r28,468(r31)
	REX_STORE_U32(r31.u32 + 468, r28.u32);
	// bl 0x823ef900
	ctx.lr = 0x8267DA2C;
	sub_823EF900(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8267da78
	if (ctx.cr6.lt) goto loc_8267DA78;
	// lhz r29,96(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d208
	ctx.lr = 0x8267DA58;
	sub_8267D208(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8267cd38
	ctx.lr = 0x8267DA74;
	sub_8267CD38(ctx, base);
	// b 0x8267da84
	goto loc_8267DA84;
loc_8267DA78:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x82684320
	ctx.lr = 0x8267DA84;
	sub_82684320(ctx, base);
loc_8267DA84:
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267daa0
	if (ctx.cr6.eq) goto loc_8267DAA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lhz r4,98(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// bl 0x8267acb8
	ctx.lr = 0x8267DAA0;
	sub_8267ACB8(ctx, base);
loc_8267DAA0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267dac8
	if (ctx.cr0.eq) goto loc_8267DAC8;
	// lwz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7);
	// lbz r10,1184(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stb r10,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r10.u8);
	// b 0x8267dbb8
	goto loc_8267DBB8;
loc_8267DAC8:
	// lwz r10,1188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267dbb8
	if (ctx.cr0.eq) goto loc_8267DBB8;
	// lwz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7);
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267db08
	if (ctx.cr6.eq) goto loc_8267DB08;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8267dbb8
	if (ctx.cr6.gt) goto loc_8267DBB8;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8267dbb8
	if (!ctx.cr6.gt) goto loc_8267DBB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// b 0x8267dbb8
	goto loc_8267DBB8;
loc_8267DB08:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// subf r4,r11,r28
	ctx.r4.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// blt cr6,0x8267db20
	if (ctx.cr6.lt) goto loc_8267DB20;
	// lwz r4,700(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 700);
loc_8267DB20:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r5,456(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82684020
	ctx.lr = 0x8267DB40;
	sub_82684020(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// stw r30,472(r31)
	REX_STORE_U32(r31.u32 + 472, r30.u32);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267db8c
	if (ctx.cr0.eq) goto loc_8267DB8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// rlwimi r11,r10,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267db7c
	if (ctx.cr0.eq) goto loc_8267DB7C;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x8267dbb8
	if (ctx.cr6.lt) goto loc_8267DBB8;
loc_8267DB7C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826829f0
	ctx.lr = 0x8267DB88;
	sub_826829F0(ctx, base);
	// b 0x8267dbb8
	goto loc_8267DBB8;
loc_8267DB8C:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8267dbb0
	if (ctx.cr0.eq) goto loc_8267DBB0;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x82679830
	ctx.lr = 0x8267DBAC;
	sub_82679830(ctx, base);
	// b 0x8267dbb8
	goto loc_8267DBB8;
loc_8267DBB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8267aa70
	ctx.lr = 0x8267DBB8;
	sub_8267AA70(ctx, base);
loc_8267DBB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268ADC8) {
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
	ctx.lr = 0x8268ADD0;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r21,r26
	r21.u64 = r26.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8268ADFC;
	sub_826A2E60(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r20,68(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r24,72(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8268f878
	ctx.lr = 0x8268AE0C;
	sub_8268F878(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r27,r31,52
	r27.s64 = r31.s64 + 52;
	// b 0x8268ae5c
	goto loc_8268AE5C;
loc_8268AE18:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8268ae64
	if (ctx.cr6.eq) goto loc_8268AE64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ae50
	if (ctx.cr6.eq) goto loc_8268AE50;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268ae44
	if (!ctx.cr6.eq) goto loc_8268AE44;
	// stw r26,4(r27)
	REX_STORE_U32(r27.u32 + 4, r26.u32);
loc_8268AE44:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8268AE50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268ab68
	ctx.lr = 0x8268AE58;
	sub_8268AB68(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8268AE5C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8268ae18
	if (!ctx.cr6.eq) goto loc_8268AE18;
loc_8268AE64:
	// lwz r28,44(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r25,r31,44
	r25.s64 = r31.s64 + 44;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8268ae7c
	if (ctx.cr6.eq) goto loc_8268AE7C;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8268AE7C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268ee00
	ctx.lr = 0x8268AE84;
	sub_8268EE00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8268aea0
	if (ctx.cr6.eq) goto loc_8268AEA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x8268aef4
	if (!ctx.cr6.eq) goto loc_8268AEF4;
loc_8268AEA0:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bgt cr6,0x8268aef4
	if (ctx.cr6.gt) goto loc_8268AEF4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268aef4
	if (!ctx.cr6.eq) goto loc_8268AEF4;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r22,68(r31)
	REX_STORE_U32(r31.u32 + 68, r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AEE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8268aef4
	if (ctx.cr0.lt) goto loc_8268AEF4;
	// stw r26,64(r31)
	REX_STORE_U32(r31.u32 + 64, r26.u32);
loc_8268AEF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8268af68
	if (!ctx.cr6.eq) goto loc_8268AF68;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bgt cr6,0x8268af20
	if (ctx.cr6.gt) goto loc_8268AF20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// lfs f1,11192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11192);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8268af44
	goto loc_8268AF44;
loc_8268AF20:
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(r29.u32, 9, ctx.xer);
	// blt cr6,0x8268af3c
	if (ctx.cr6.lt) goto loc_8268AF3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lfs f1,-28488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28488);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8268af44
	goto loc_8268AF44;
loc_8268AF3C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r22,72(r31)
	REX_STORE_U32(r31.u32 + 72, r22.u32);
loc_8268AF44:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8268af68
	if (ctx.cr6.eq) goto loc_8268AF68;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268AF68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8268b048
	if (ctx.cr6.eq) goto loc_8268B048;
loc_8268AF70:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8268b048
	if (ctx.cr6.eq) goto loc_8268B048;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8268b048
	if (!ctx.cr6.lt) goto loc_8268B048;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268ee00
	ctx.lr = 0x8268AF90;
	sub_8268EE00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8268b048
	if (!ctx.cr6.lt) goto loc_8268B048;
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AFD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8268b040
	if (ctx.cr0.lt) goto loc_8268B040;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268b008
	if (ctx.cr6.eq) goto loc_8268B008;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268affc
	if (!ctx.cr6.eq) goto loc_8268AFFC;
	// stw r26,4(r25)
	REX_STORE_U32(r25.u32 + 4, r26.u32);
loc_8268AFFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8268B008:
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268b020
	if (ctx.cr6.eq) goto loc_8268B020;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8268b024
	goto loc_8268B024;
loc_8268B020:
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
loc_8268B024:
	// stw r28,4(r27)
	REX_STORE_U32(r27.u32 + 4, r28.u32);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8268b048
	if (ctx.cr6.eq) goto loc_8268B048;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8268af70
	goto loc_8268AF70;
loc_8268B040:
	// mr r23,r26
	r23.u64 = r26.u64;
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
loc_8268B048:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268b0cc
	if (!ctx.cr6.eq) goto loc_8268B0CC;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// bne cr6,0x8268b0cc
	if (!ctx.cr6.eq) goto loc_8268B0CC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268ee00
	ctx.lr = 0x8268B064;
	sub_8268EE00(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8268b0cc
	if (ctx.cr6.lt) goto loc_8268B0CC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268b0c8
	if (!ctx.cr6.eq) goto loc_8268B0C8;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8268b0c8
	if (ctx.cr0.lt) goto loc_8268B0C8;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,72(r31)
	REX_STORE_U32(r31.u32 + 72, r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8268b0c8
	if (ctx.cr0.lt) goto loc_8268B0C8;
	// stw r22,64(r31)
	REX_STORE_U32(r31.u32 + 64, r22.u32);
loc_8268B0C8:
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
loc_8268B0CC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8269EB80) {
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
	ctx.lr = 0x8269EB88;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x826a9928
	ctx.lr = 0x8269EBAC;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r29,r11,31540
	r29.s64 = ctx.r11.s64 + 31540;
	// addi r10,r10,31544
	ctx.r10.s64 = ctx.r10.s64 + 31544;
loc_8269EBC0:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8269ec7c
	if (!ctx.cr6.lt) goto loc_8269EC7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8269ec70
	if (ctx.cr6.eq) goto loc_8269EC70;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269ec70
	if (ctx.cr0.eq) goto loc_8269EC70;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e190
	ctx.lr = 0x8269EC00;
	sub_8269E190(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269ec64
	if (ctx.cr0.eq) goto loc_8269EC64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x8269ec40
	if (!ctx.cr6.eq) goto loc_8269EC40;
	// bl 0x8269eb00
	ctx.lr = 0x8269EC28;
	sub_8269EB00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8269ec64
	if (ctx.cr6.eq) goto loc_8269EC64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x8269ec64
	goto loc_8269EC64;
loc_8269EC40:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8269ec64
	if (!ctx.cr6.eq) goto loc_8269EC64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269ec64
	if (ctx.cr0.eq) goto loc_8269EC64;
	// bl 0x8269eb00
	ctx.lr = 0x8269EC54;
	sub_8269EB00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8269ec64
	if (!ctx.cr6.eq) goto loc_8269EC64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_8269EC64:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x8269ecf4
	ctx.lr = 0x8269EC70;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269ECF4(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_8269EC70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8269ebc0
	goto loc_8269EBC0;
loc_8269EC7C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x8269eca4
	ctx.lr = 0x8269EC88;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269ECA4(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x8269ec9c
	if (ctx.cr6.eq) goto loc_8269EC9C;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_8269EC9C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(__savevmx_79) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826ADF00) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AEA38) {
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
	ctx.lr = 0x826AEA40;
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x826a23f8
	ctx.lr = 0x826AEA70;
	sub_826A23F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2420
	ctx.lr = 0x826AEA80;
	sub_826A2420(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// li r21,0
	r21.s64 = 0;
	// bne 0x826aeaa8
	if (!ctx.cr0.eq) goto loc_826AEAA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
loc_826AEAA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826aeac4
	if (ctx.cr6.eq) goto loc_826AEAC4;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826ae908
	ctx.lr = 0x826AEAC4;
	sub_826AE908(ctx, base);
loc_826AEAC4:
	// bl 0x826a3a68
	ctx.lr = 0x826AEAC8;
	sub_826A3A68(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a2830
	ctx.lr = 0x826AEADC;
	sub_826A2830(ctx, base);
	// lwz r11,2916(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2916);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x826aeaf4
	if (!ctx.cr6.eq) goto loc_826AEAF4;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_826AEAF4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b2790
	ctx.lr = 0x826AEB00;
	sub_826B2790(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ae2d8
	ctx.lr = 0x826AEB14;
	sub_826AE2D8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x826ae178
	ctx.lr = 0x826AEB2C;
	sub_826AE178(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x826a3a68
	ctx.lr = 0x826AEB34;
	sub_826A3A68(ctx, base);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r7,12(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b283c
	ctx.lr = 0x826AEB58;
	sub_826B283C(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aeb74
	if (ctx.cr0.eq) goto loc_826AEB74;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x826aeb6c
	if (!ctx.cr6.eq) goto loc_826AEB6C;
	// stw r21,0(r30)
	REX_STORE_U32(r30.u32 + 0, r21.u32);
loc_826AEB6C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x826b26ac
	ctx.lr = 0x826AEB74;
	sub_826B26AC(ctx, base);
loc_826AEB74:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826B7A18) {
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
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826B7A58;
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

DEFINE_REX_FUNC(sub_826BA098) {
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
	// bl 0x826bc110
	ctx.lr = 0x826BA0B0;
	sub_826BC110(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// addi r10,r11,28080
	ctx.r10.s64 = ctx.r11.s64 + 28080;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c1cb0
	ctx.lr = 0x826BA0C4;
	sub_826C1CB0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x826c1cb0
	ctx.lr = 0x826BA0CC;
	sub_826C1CB0(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x826c1cb0
	ctx.lr = 0x826BA0D4;
	sub_826C1CB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,304(r31)
	REX_STORE_U64(r31.u32 + 304, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// lfs f13,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826BF578) {
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
	// bl 0x826c8b40
	ctx.lr = 0x826BF590;
	sub_826C8B40(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// addi r10,r11,29712
	ctx.r10.s64 = ctx.r11.s64 + 29712;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826BF5AC;
	sub_826A2E60(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826BF5BC;
	sub_826A2E60(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// bl 0x826c8ab8
	ctx.lr = 0x826BF5CC;
	sub_826C8AB8(ctx, base);
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

DEFINE_REX_FUNC(sub_826C1F68) {
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
	// addi r10,r11,29896
	ctx.r10.s64 = ctx.r11.s64 + 29896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826c18c8
	ctx.lr = 0x826C1F94;
	sub_826C18C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc158
	ctx.lr = 0x826C1F9C;
	sub_826BC158(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c1fbc
	if (ctx.cr6.eq) goto loc_826C1FBC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x823f0350
	ctx.lr = 0x826C1FB8;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826C1FBC:
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

DEFINE_REX_FUNC(sub_826C6130) {
	REX_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6158) {
	REX_FUNC_PROLOGUE();
	// std r4,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6478) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x826c64a0
	if (ctx.cr6.lt) goto loc_826C64A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_826C64A0:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C8240) {
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
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lhz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x826c82b4
	if (ctx.cr6.eq) goto loc_826C82B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r5,64(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// bl 0x826c80a8
	ctx.lr = 0x826C8280;
	sub_826C80A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c82b4
	if (!ctx.cr6.eq) goto loc_826C82B4;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c82b4
	if (ctx.cr6.eq) goto loc_826C82B4;
	// lbz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826c82b8
	if (ctx.cr6.eq) goto loc_826C82B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stb r10,96(r31)
	REX_STORE_U8(r31.u32 + 96, ctx.r10.u8);
	// b 0x826c82b8
	goto loc_826C82B8;
loc_826C82B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C82B8:
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

DEFINE_REX_FUNC(sub_826CEB30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826ceb60
	if (!ctx.cr6.eq) goto loc_826CEB60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
loc_826CEB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826CEB60:
	// lhz r11,580(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ceb50
	if (!ctx.cr6.gt) goto loc_826CEB50;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CEB7C:
	// lwz r8,584(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 584);
	// lwz r11,320(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 320);
	// lwz r31,256(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// lhzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mulli r10,r10,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r10,114(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r30,8(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + r30.u32);
	// lhz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// blt cr6,0x826cebec
	if (ctx.cr6.lt) goto loc_826CEBEC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r3,216(r5)
	REX_STORE_U32(ctx.r5.u32 + 216, ctx.r3.u32);
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u16);
	// b 0x826cec60
	goto loc_826CEC60;
loc_826CEBEC:
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sth r4,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r4.u16);
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lhzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// lhz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,256(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// lwz r31,12(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x826cec8c
	if (ctx.cr6.gt) goto loc_826CEC8C;
	// lwz r10,424(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
loc_826CEC60:
	// lhz r10,580(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 580);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826ceb7c
	if (ctx.cr6.lt) goto loc_826CEB7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826CEC8C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826DC890) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826dc90c
	if (ctx.cr6.eq) goto loc_826DC90C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,31312
	ctx.r4.s64 = ctx.r11.s64 + 31312;
	// bl 0x826c67f0
	ctx.lr = 0x826DC8C8;
	sub_826C67F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826dc90c
	if (!ctx.cr6.eq) goto loc_826DC90C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,29704
	ctx.r4.s64 = ctx.r11.s64 + 29704;
	// bl 0x826c67f0
	ctx.lr = 0x826DC8E0;
	sub_826C67F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826dc90c
	if (!ctx.cr6.eq) goto loc_826DC90C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,31308
	ctx.r4.s64 = ctx.r11.s64 + 31308;
	// bl 0x826c67f0
	ctx.lr = 0x826DC8F8;
	sub_826C67F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826dc90c
	if (!ctx.cr6.eq) goto loc_826DC90C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x826dc96c
	goto loc_826DC96C;
loc_826DC90C:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// addi r4,r11,11480
	ctx.r4.s64 = ctx.r11.s64 + 11480;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r10,-27184
	ctx.r11.s64 = ctx.r10.s64 + -27184;
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// lis r6,-32147
	ctx.r6.s64 = -2106785792;
	// addi r10,r9,-15552
	ctx.r10.s64 = ctx.r9.s64 + -15552;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r5,-32147
	ctx.r5.s64 = -2106785792;
	// addi r9,r8,-26608
	ctx.r9.s64 = ctx.r8.s64 + -26608;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r8,r7,-26200
	ctx.r8.s64 = ctx.r7.s64 + -26200;
	// addi r7,r6,14088
	ctx.r7.s64 = ctx.r6.s64 + 14088;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r6,r5,14536
	ctx.r6.s64 = ctx.r5.s64 + 14536;
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// stw r5,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r5.u32);
loc_826DC96C:
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

DEFINE_REX_FUNC(sub_826DF168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826DF170;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826DF188:
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826df1b4
	if (ctx.cr6.eq) goto loc_826DF1B4;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_826DF1B4:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x826df220
	if (!ctx.cr6.lt) goto loc_826DF220;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DF1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df220
	if (ctx.cr6.lt) goto loc_826DF220;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826de9e0
	ctx.lr = 0x826DF1F8;
	sub_826DE9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df220
	if (ctx.cr6.lt) goto loc_826DF220;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x826df188
	if (ctx.cr6.lt) goto loc_826DF188;
loc_826DF220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E20B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subfic r9,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r9.u64 = static_cast<uint64_t>(4) - ctx.r4.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// subf r30,r5,r8
	r30.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e2110
	if (!ctx.cr6.gt) goto loc_826E2110;
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x826a22f8
	ctx.lr = 0x826E2110;
	sub_826A22F8(ctx, base);
loc_826E2110:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// sraw r3,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
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

DEFINE_REX_FUNC(sub_826E5C48) {
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
	ctx.lr = 0x826E5C50;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r15,r20
	r15.u64 = r20.u64;
	// lhz r29,34(r25)
	r29.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mr r14,r20
	r14.u64 = r20.u64;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 228);
	// mullw r23,r26,r29
	r23.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826e5cec
	if (!ctx.cr6.eq) goto loc_826E5CEC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826e5ce0
	if (!ctx.cr6.gt) goto loc_826E5CE0;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// li r17,1
	r17.s64 = 1;
loc_826E5CA0:
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// lwz r7,256(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 256);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r10,424(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 424);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// sth r7,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// sth r20,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r20.u16);
	// sth r17,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r17.u16);
	// lhz r6,34(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826e5ca0
	if (ctx.cr6.lt) goto loc_826E5CA0;
loc_826E5CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_826E5CEC:
	// lwz r10,176(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 176);
	// li r17,1
	r17.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826e5d80
	if (!ctx.cr6.eq) goto loc_826E5D80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826e5d14
	if (!ctx.cr6.eq) goto loc_826E5D14;
	// mr r15,r17
	r15.u64 = r17.u64;
	// mr r14,r17
	r14.u64 = r17.u64;
	// add r18,r17,r17
	r18.u64 = r17.u64 + r17.u64;
	// b 0x826e5da4
	goto loc_826E5DA4;
loc_826E5D14:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x826e5d2c
	if (!ctx.cr6.eq) goto loc_826E5D2C;
	// li r14,2
	r14.s64 = 2;
	// mr r15,r17
	r15.u64 = r17.u64;
	// add r18,r14,r17
	r18.u64 = r14.u64 + r17.u64;
	// b 0x826e5da4
	goto loc_826E5DA4;
loc_826E5D2C:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826e5d48
	if (!ctx.cr6.gt) goto loc_826E5D48;
loc_826E5D38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826e5d38
	if (ctx.cr6.gt) goto loc_826E5D38;
loc_826E5D48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826e5d70
	if (!ctx.cr6.gt) goto loc_826E5D70;
loc_826E5D60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826e5d60
	if (ctx.cr6.gt) goto loc_826E5D60;
loc_826E5D70:
	// addi r14,r11,1
	r14.s64 = ctx.r11.s64 + 1;
	// mr r15,r20
	r15.u64 = r20.u64;
	// add r18,r14,r20
	r18.u64 = r14.u64 + r20.u64;
	// b 0x826e5da4
	goto loc_826E5DA4;
loc_826E5D80:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826e5da0
	if (!ctx.cr6.gt) goto loc_826E5DA0;
loc_826E5D90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826e5d90
	if (ctx.cr6.gt) goto loc_826E5D90;
loc_826E5DA0:
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
loc_826E5DA4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826e5e50
	if (!ctx.cr6.gt) goto loc_826E5E50;
	// lwz r28,320(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r27,r16,28
	r27.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r30,r20
	r30.u64 = r20.u64;
loc_826E5DB8:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// lhzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x826e5e1c
	if (ctx.cr6.lt) goto loc_826E5E1C;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_826E5DF0:
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzx r24,r7,r11
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r24,r24
	r24.s64 = r24.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r9,r24,r9
	ctx.r9.u64 = ctx.r9.u64 - r24.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// blt cr6,0x826e5df0
	if (ctx.cr6.lt) goto loc_826E5DF0;
loc_826E5E1C:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x826e5e38
	if (!ctx.cr6.lt) goto loc_826E5E38;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subf r23,r6,r23
	r23.u64 = r23.u64 - ctx.r6.u64;
loc_826E5E38:
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x826e5db8
	if (ctx.cr6.lt) goto loc_826E5DB8;
loc_826E5E50:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x826e623c
	if (!ctx.cr6.gt) goto loc_826E623C;
	// addi r21,r22,224
	r21.s64 = r22.s64 + 224;
loc_826E5E5C:
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// rotlwi r11,r26,1
	ctx.r11.u64 = __builtin_rotateleft32(r26.u32, 1);
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// add r10,r29,r18
	ctx.r10.u64 = r29.u64 + r18.u64;
	// lwz r9,228(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 228);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// divw r7,r26,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(r26.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? r26.s32 / ctx.r9.s32 : 0);
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r27,r7
	r27.s64 = ctx.r7.s16;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r19,r23
	r19.u64 = r23.u64;
	// bl 0x826f1f78
	ctx.lr = 0x826E5EA4;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lhz r11,34(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826e5ef0
	if (!ctx.cr6.eq) goto loc_826E5EF0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E5ED0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e5eec
	if (ctx.cr6.eq) goto loc_826E5EEC;
	// stw r17,128(r22)
	REX_STORE_U32(r22.u32 + 128, r17.u32);
	// b 0x826e5ef0
	goto loc_826E5EF0;
loc_826E5EEC:
	// stw r20,128(r22)
	REX_STORE_U32(r22.u32 + 128, r20.u32);
loc_826E5EF0:
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lwz r6,320(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 320);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// extsh r22,r11
	r22.s64 = ctx.r11.s16;
	// ble cr6,0x826e5f4c
	if (!ctx.cr6.gt) goto loc_826E5F4C;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_826E5F14:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r7,r22
	ctx.r7.s64 = r22.s16;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x826e5f38
	if (!ctx.cr6.gt) goto loc_826E5F38;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
loc_826E5F38:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826e5f14
	if (ctx.cr6.lt) goto loc_826E5F14;
loc_826E5F4C:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826e5fbc
	if (!ctx.cr6.eq) goto loc_826E5FBC;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826e5fc0
	if (!ctx.cr6.gt) goto loc_826E5FC0;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// extsh r7,r22
	ctx.r7.s64 = r22.s16;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_826E5F78:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826e5f9c
	if (!ctx.cr6.eq) goto loc_826E5F9C;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
loc_826E5F9C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826e5f78
	if (ctx.cr6.lt) goto loc_826E5F78;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bgt cr6,0x826e5fc4
	if (ctx.cr6.gt) goto loc_826E5FC4;
	// b 0x826e5fc0
	goto loc_826E5FC0;
loc_826E5FBC:
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
loc_826E5FC0:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_826E5FC4:
	// rotlwi r11,r23,1
	ctx.r11.u64 = __builtin_rotateleft32(r23.u32, 1);
	// divw r10,r23,r24
	ctx.r10.u64 = uint32_t((r24.s32 && !(r23.s32 == INT32_MIN && r24.s32 == -1)) ? r23.s32 / r24.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// andc r7,r24,r9
	ctx.r7.u64 = r24.u64 & ~ctx.r9.u64;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne cr6,0x826e5ff0
	if (!ctx.cr6.eq) goto loc_826E5FF0;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_826E5FF0:
	// li r28,-1
	r28.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x826e6060
	if (!ctx.cr6.eq) goto loc_826E6060;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r24,24
	ctx.cr6.compare<int32_t>(r24.s32, 24, ctx.xer);
	// li r31,24
	r31.s64 = 24;
	// bgt cr6,0x826e6010
	if (ctx.cr6.gt) goto loc_826E6010;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_826E6010:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x826e6060
	if (ctx.cr6.eq) goto loc_826E6060;
loc_826E601C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E602C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// li r31,24
	r31.s64 = 24;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// or r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 | r28.u64;
	// bgt cr6,0x826e6050
	if (ctx.cr6.gt) goto loc_826E6050;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_826E6050:
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sld r28,r11,r10
	r28.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// bne cr6,0x826e601c
	if (!ctx.cr6.eq) goto loc_826E601C;
loc_826E6060:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x826e6130
	if (!ctx.cr6.eq) goto loc_826E6130;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bne cr6,0x826e6090
	if (!ctx.cr6.eq) goto loc_826E6090;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E6080;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826e60d4
	goto loc_826E60D4;
loc_826E6090:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E6098;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r15,16
	ctx.r10.u64 = r15.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826e60d4
	if (ctx.cr6.lt) goto loc_826E60D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E60C0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e627c
	if (ctx.cr6.lt) goto loc_826E627C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826E60D4:
	// lwz r10,176(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826e6104
	if (!ctx.cr6.eq) goto loc_826E6104;
	// lwz r9,256(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 256);
	// slw r8,r17,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// extsh r27,r7
	r27.s64 = ctx.r7.s16;
	// andc r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x826e612c
	goto loc_826E612C;
loc_826E6104:
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,228(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 228);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// extsh r27,r5
	r27.s64 = ctx.r5.s16;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_826E612C:
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
loc_826E6130:
	// lwz r11,236(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 236);
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e622c
	if (ctx.cr6.lt) goto loc_826E622C;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// bgt cr6,0x826e622c
	if (ctx.cr6.gt) goto loc_826E622C;
	// lhz r10,34(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r11,320(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e622c
	if (ctx.cr6.eq) goto loc_826E622C;
	// mulli r4,r16,28
	ctx.r4.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,424
	ctx.r7.s64 = ctx.r11.s64 + 424;
loc_826E6168:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x826e622c
	if (ctx.cr6.gt) goto loc_826E622C;
	// lhz r31,0(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r30,r22
	r30.s64 = r22.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bne cr6,0x826e61f8
	if (!ctx.cr6.eq) goto loc_826E61F8;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// extsw r31,r24
	r31.s64 = r24.s32;
	// sld r31,r17,r31
	r31.u64 = r31.u8 & 0x40 ? 0 : (r17.u64 << (r31.u8 & 0x7F));
	// and r31,r31,r28
	r31.u64 = r31.u64 & r28.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x826e61f8
	if (ctx.cr6.eq) goto loc_826E61F8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x826e622c
	if (!ctx.cr6.lt) goto loc_826E622C;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r23,r6,r23
	r23.u64 = r23.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// sthx r27,r31,r8
	REX_STORE_U16(r31.u32 + ctx.r8.u32, r27.u16);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blt 0x826e622c
	if (ctx.cr0.lt) goto loc_826E622C;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bgt cr6,0x826e622c
	if (ctx.cr6.gt) goto loc_826E622C;
loc_826E61F8:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lhz r29,34(r25)
	r29.u64 = REX_LOAD_U16(r25.u32 + 34);
	// addi r7,r7,1776
	ctx.r7.s64 = ctx.r7.s64 + 1776;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r29.s32, ctx.xer);
	// blt cr6,0x826e6168
	if (ctx.cr6.lt) goto loc_826E6168;
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// bge cr6,0x826e622c
	if (!ctx.cr6.lt) goto loc_826E622C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x826e623c
	if (!ctx.cr6.gt) goto loc_826E623C;
	// lwz r22,276(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x826e5e5c
	goto loc_826E5E5C;
loc_826E622C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_826E623C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826e627c
	if (!ctx.cr6.gt) goto loc_826E627C;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_826E624C:
	// lwz r9,320(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r10,424(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// sth r20,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r20.u16);
	// lhz r4,34(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826e624c
	if (ctx.cr6.lt) goto loc_826E624C;
loc_826E627C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82722EC0) {
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
	ctx.lr = 0x82722EC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// ori r8,r8,13392
	ctx.r8.u64 = ctx.r8.u64 | 13392;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8272313c
	if (ctx.cr6.gt) goto loc_8272313C;
	// beq cr6,0x827230ec
	if (ctx.cr6.eq) goto loc_827230EC;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82722f58
	if (ctx.cr6.gt) goto loc_82722F58;
	// beq cr6,0x82722f78
	if (ctx.cr6.eq) goto loc_82722F78;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82722f14
	if (ctx.cr6.eq) goto loc_82722F14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82722f20
	if (!ctx.cr6.eq) goto loc_82722F20;
loc_82722F14:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8272318c
	if (!ctx.cr6.gt) goto loc_8272318C;
loc_82722F1C:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82722F20:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mullw r8,r31,r11
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r3,r8,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r26,r3,r6
	r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x82723194
	if (!ctx.cr6.eq) goto loc_82723194;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// b 0x827231c0
	goto loc_827231C0;
loc_82722F58:
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r3,r8,13392
	ctx.r3.u64 = ctx.r8.u64 | 13392;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82722fec
	if (ctx.cr6.eq) goto loc_82722FEC;
	// lis r8,12849
	ctx.r8.s64 = 842072064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82722f20
	if (!ctx.cr6.eq) goto loc_82722F20;
loc_82722F78:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r21,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r21.s64 = r20.s32 >> 1;
	// srawi r19,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r19.s64 = ctx.r6.s32 >> 1;
	// lwz r27,308(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r11,r29
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// srawi r23,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r23.s64 = r27.s32 >> 1;
	// add r9,r25,r24
	ctx.r9.u64 = r25.u64 + r24.u64;
	// add r24,r7,r8
	r24.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r23,r28
	ctx.r7.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// srawi r22,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r22.s64 = r26.s32 >> 1;
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r24,r9
	r24.u64 = r24.u64 + ctx.r9.u64;
	// add r9,r7,r22
	ctx.r9.u64 = ctx.r7.u64 + r22.u64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r23.s64 = ctx.r11.s32 >> 2;
	// mullw r7,r31,r3
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r30,r27
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// add r27,r23,r11
	r27.u64 = r23.u64 + ctx.r11.u64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// b 0x82723054
	goto loc_82723054;
loc_82722FEC:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r29.s64 = r31.s32 >> 2;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r28.s64 = r30.s32 >> 2;
	// srawi r21,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r21.s64 = r20.s32 >> 2;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r27.s64 = ctx.r10.s32 >> 2;
	// mullw r25,r29,r3
	r25.s64 = int64_t(r29.s32) * int64_t(ctx.r3.s32);
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// srawi r24,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r24.s64 = ctx.r8.s32 >> 2;
	// add r9,r25,r27
	ctx.r9.u64 = r25.u64 + r27.u64;
	// srawi r22,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r22.s64 = r26.s32 >> 2;
	// add r24,r24,r8
	r24.u64 = r24.u64 + ctx.r8.u64;
	// mullw r23,r28,r7
	r23.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r27.s64 = ctx.r11.s32 >> 2;
loc_82723038:
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// add r24,r24,r9
	r24.u64 = r24.u64 + ctx.r9.u64;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// add r9,r23,r22
	ctx.r9.u64 = r23.u64 + r22.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
loc_82723054:
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r27,r9
	ctx.r11.u64 = r27.u64 + ctx.r9.u64;
	// add r23,r24,r5
	r23.u64 = r24.u64 + ctx.r5.u64;
	// add r22,r11,r4
	r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r24,r8,r4
	r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r26,r7,r26
	r26.u64 = ctx.r7.u64 + r26.u64;
	// add r25,r25,r5
	r25.u64 = r25.u64 + ctx.r5.u64;
	// add r27,r3,r10
	r27.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827230a4
	if (!ctx.cr6.gt) goto loc_827230A4;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
loc_82723084:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82723094;
	sub_826A1E70(ctx, base);
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r30
	r26.u64 = r26.u64 + r30.u64;
	// bne 0x82723084
	if (!ctx.cr0.eq) goto loc_82723084;
loc_827230A4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x82723280
	if (!ctx.cr6.gt) goto loc_82723280;
loc_827230AC:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x827230BC;
	sub_826A1E70(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r25,r29,r25
	r25.u64 = r29.u64 + r25.u64;
	// add r24,r28,r24
	r24.u64 = r28.u64 + r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x827230D4;
	sub_826A1E70(ctx, base);
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r23,r29,r23
	r23.u64 = r29.u64 + r23.u64;
	// add r22,r28,r22
	r22.u64 = r28.u64 + r22.u64;
	// bne 0x827230ac
	if (!ctx.cr0.eq) goto loc_827230AC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_827230EC:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r21,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r21.s64 = r20.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r29,r3
	r25.s64 = int64_t(r29.s32) * int64_t(ctx.r3.s32);
	// srawi r27,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r27.s64 = ctx.r8.s32 >> 1;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r9,r25,r24
	ctx.r9.u64 = r25.u64 + r24.u64;
	// add r24,r27,r8
	r24.u64 = r27.u64 + ctx.r8.u64;
	// srawi r22,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r22.s64 = r26.s32 >> 1;
	// mullw r23,r28,r7
	r23.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r27.s64 = ctx.r11.s32 >> 1;
	// b 0x82723038
	goto loc_82723038;
loc_8272313C:
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r8,r8,22857
	ctx.r8.u64 = ctx.r8.u64 | 22857;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82723174
	if (ctx.cr6.gt) goto loc_82723174;
	// beq cr6,0x82722f78
	if (ctx.cr6.eq) goto loc_82722F78;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r3,r8,21849
	ctx.r3.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82723184
	if (ctx.cr6.eq) goto loc_82723184;
	// lis r8,21849
	ctx.r8.s64 = 1431896064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82723184
	if (ctx.cr6.eq) goto loc_82723184;
	// b 0x82722f20
	goto loc_82722F20;
loc_82723174:
	// lis r8,22870
	ctx.r8.s64 = 1498808320;
	// ori r3,r8,22869
	ctx.r3.u64 = ctx.r8.u64 | 22869;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82722f20
	if (!ctx.cr6.eq) goto loc_82722F20;
loc_82723184:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82722f1c
	if (!ctx.cr6.gt) goto loc_82722F1C;
loc_8272318C:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82722f20
	goto loc_82722F20;
loc_82723194:
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subfic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// srawi r29,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r26.s32 >> 31;
	// xor r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// xor r7,r26,r29
	ctx.r7.u64 = r26.u64 ^ r29.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r3,r29,r7
	ctx.r3.u64 = ctx.r7.u64 - r29.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r8.s64 = r31.s32 >> 3;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
loc_827231C0:
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// rlwinm r8,r10,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r3,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r28,r10,r6
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x827231fc
	if (!ctx.cr6.eq) goto loc_827231FC;
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// b 0x82723230
	goto loc_82723230;
loc_827231FC:
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subfic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r10.u64;
	// srawi r31,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r28.s32 >> 31;
	// xor r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r9,r28,r31
	ctx.r9.u64 = r28.u64 ^ r31.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r6,r31,r9
	ctx.r6.u64 = ctx.r9.u64 - r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82723230:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r7,r5
	r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r29,324(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r27,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r27.s64 = temp.s64;
	// ble cr6,0x82723280
	if (!ctx.cr6.gt) goto loc_82723280;
loc_82723260:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82723270;
	sub_826A1E70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// bne 0x82723260
	if (!ctx.cr0.eq) goto loc_82723260;
loc_82723280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82743B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// ble 0x82743bb4
	if (!ctx.cr0.gt) goto loc_82743BB4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82743B5C:
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v12,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v11,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v10,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vxor128 v13,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vaddsbs v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vxor128 v59,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vxor128 v58,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v57,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v59,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v56,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v58,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82743b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743B5C;
loc_82743BB4:
	// srawi. r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82743BC4:
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v12,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vaddsbs v12,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vxor128 v53,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v52,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v53,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x82743bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743BC4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274B4F8) {
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
	ctx.lr = 0x8274B500;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r3,r7
	r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r18,92(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r30,r10
	r30.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r7,30044(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 30044);
	// addi r28,r29,-1
	r28.s64 = r29.s64 + -1;
	// clrlwi r22,r30,29
	r22.u64 = r30.u32 & 0x7;
	// rlwinm r29,r7,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r10
	r30.u64 = r31.u64 + ctx.r10.u64;
	// subf r20,r7,r31
	r20.u64 = r31.u64 - ctx.r7.u64;
	// add r31,r29,r22
	r31.u64 = r29.u64 + r22.u64;
	// subf r21,r7,r11
	r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r27.s64 = ctx.r10.s32 >> 2;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r27,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, r27.u32);
	// mr r15,r20
	r15.u64 = r20.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r25,r21
	r25.u64 = r21.u64;
	// rlwinm r31,r9,0,28,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// subf r19,r7,r10
	r19.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// addi r29,r31,10
	r29.s64 = r31.s64 + 10;
	// stw r29,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// bge cr6,0x8274b69c
	if (!ctx.cr6.lt) goto loc_8274B69C;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// subf r17,r4,r3
	r17.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r16,r21,r20
	r16.u64 = r20.u64 - r21.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_8274B58C:
	// lbzx r10,r17,r24
	ctx.r10.u64 = REX_LOAD_U8(r17.u32 + r24.u32);
	// add r3,r19,r25
	ctx.r3.u64 = r19.u64 + r25.u64;
	// lbz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,0(r28)
	r29.u64 = REX_LOAD_U8(r28.u32 + 0);
	// rldicr r31,r10,8,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U8(r24.u32 + 0);
	// rldicr r26,r4,8,63
	r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r14,r29,8,63
	r14.u64 = __builtin_rotateleft64(r29.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r27,r5,8,63
	r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// or r4,r26,r4
	ctx.r4.u64 = r26.u64 | ctx.r4.u64;
	// or r31,r14,r29
	r31.u64 = r14.u64 | r29.u64;
	// or r5,r27,r5
	ctx.r5.u64 = r27.u64 | ctx.r5.u64;
	// rldicr r26,r4,16,47
	r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r14,r31,16,47
	r14.u64 = __builtin_rotateleft64(r31.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r29,r10,16,47
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r27,r5,16,47
	r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r4,r26,r4
	ctx.r4.u64 = r26.u64 | ctx.r4.u64;
	// or r10,r29,r10
	ctx.r10.u64 = r29.u64 | ctx.r10.u64;
	// or r5,r27,r5
	ctx.r5.u64 = r27.u64 | ctx.r5.u64;
	// or r26,r14,r31
	r26.u64 = r14.u64 | r31.u64;
	// rldicr r27,r4,32,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r31,r10,32,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r29,r5,32,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r14,r26,32,31
	r14.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// or r27,r27,r4
	r27.u64 = r27.u64 | ctx.r4.u64;
	// or r31,r31,r10
	r31.u64 = r31.u64 | ctx.r10.u64;
	// or r29,r29,r5
	r29.u64 = r29.u64 | ctx.r5.u64;
	// or r26,r14,r26
	r26.u64 = r14.u64 | r26.u64;
	// add r4,r16,r3
	ctx.r4.u64 = r16.u64 + ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8274b638
	if (!ctx.cr6.gt) goto loc_8274B638;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r7,r28,1
	ctx.r7.s64 = r28.s64 + 1;
loc_8274B61C:
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 0);
	// stbx r5,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274b61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274B61C;
	// lwz r7,30044(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 30044);
loc_8274B638:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8274b678
	if (!ctx.cr6.gt) goto loc_8274B678;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r5,r25,r15
	ctx.r5.u64 = r15.u64 - r25.u64;
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - r25.u64;
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - r25.u64;
loc_8274B654:
	// stdx r31,r5,r11
	REX_STORE_U64(ctx.r5.u32 + ctx.r11.u32, r31.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// stdx r27,r4,r11
	REX_STORE_U64(ctx.r4.u32 + ctx.r11.u32, r27.u64);
	// stdx r26,r3,r11
	REX_STORE_U64(ctx.r3.u32 + ctx.r11.u32, r26.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,30044(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 30044);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8274b654
	if (ctx.cr6.lt) goto loc_8274B654;
loc_8274B678:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r15,r15,r18
	r15.u64 = r15.u64 + r18.u64;
	// add r25,r25,r18
	r25.u64 = r25.u64 + r18.u64;
	// add r24,r24,r18
	r24.u64 = r24.u64 + r18.u64;
	// add r30,r30,r18
	r30.u64 = r30.u64 + r18.u64;
	// add r28,r28,r18
	r28.u64 = r28.u64 + r18.u64;
	// bne 0x8274b58c
	if (!ctx.cr0.eq) goto loc_8274B58C;
	// lwz r29,-160(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r27,-156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
loc_8274B69C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8274b710
	if (ctx.cr6.eq) goto loc_8274B710;
	// mullw r11,r29,r18
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r18.s32);
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8274b710
	if (!ctx.cr6.gt) goto loc_8274B710;
	// subf r11,r20,r8
	ctx.r11.u64 = ctx.r8.u64 - r20.u64;
	// neg r30,r18
	r30.s64 = static_cast<int64_t>(-r18.u64);
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + r21.u64;
	// subf r10,r8,r21
	ctx.r10.u64 = r21.u64 - ctx.r8.u64;
	// subf r31,r21,r20
	r31.u64 = r20.u64 - r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8274B6CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8274b6fc
	if (!ctx.cr6.gt) goto loc_8274B6FC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// add r5,r31,r10
	ctx.r5.u64 = r31.u64 + ctx.r10.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_8274B6E4:
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8274b6e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274B6E4;
loc_8274B6FC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 + r18.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// bne 0x8274b6cc
	if (!ctx.cr0.eq) goto loc_8274B6CC;
loc_8274B710:
	// lwz r11,68(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274b7a0
	if (ctx.cr6.eq) goto loc_8274B7A0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r18,r15
	ctx.r8.u64 = r15.u64 - r18.u64;
	// subf r9,r18,r25
	ctx.r9.u64 = r25.u64 - r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// beq cr6,0x8274b73c
	if (ctx.cr6.eq) goto loc_8274B73C;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x8274b740
	goto loc_8274B740;
loc_8274B73C:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_8274B740:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8274b7a0
	if (!ctx.cr6.gt) goto loc_8274B7A0;
	// neg r5,r18
	ctx.r5.s64 = static_cast<int64_t>(-r18.u64);
	// subf r10,r15,r9
	ctx.r10.u64 = ctx.r9.u64 - r15.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8274B75C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8274b78c
	if (!ctx.cr6.gt) goto loc_8274B78C;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r8,r15,r25
	ctx.r8.u64 = r25.u64 - r15.u64;
loc_8274B774:
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8274b774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274B774;
loc_8274B78C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r15,r15,r18
	r15.u64 = r15.u64 + r18.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r25,r25,r18
	r25.u64 = r25.u64 + r18.u64;
	// bne 0x8274b75c
	if (!ctx.cr0.eq) goto loc_8274B75C;
loc_8274B7A0:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8275C7D0) {
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
	ctx.lr = 0x8275C7D8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r10,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275c81c
	if (ctx.cr6.eq) goto loc_8275C81C;
	// lwz r11,15916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15916);
	// lwz r31,388(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r30,380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bctrl 
	ctx.lr = 0x8275C814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_8275C81C:
	// lwz r30,52(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r29,48(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,404(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r15,56(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r27,r29,1,0,30
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r14,60(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// srawi. r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// rlwinm r24,r15,1,0,30
	r24.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r30,r29
	r26.u64 = r30.u64 + r29.u64;
	// add r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 + r25.u64;
	// ble 0x8275c9b8
	if (!ctx.cr0.gt) goto loc_8275C9B8;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
loc_8275C874:
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8275c978
	if (!ctx.cr6.gt) goto loc_8275C978;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r25,r7,-2
	r25.s64 = ctx.r7.s64 + -2;
	// subf r21,r10,r7
	r21.u64 = ctx.r7.u64 - ctx.r10.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r23,r11,r22
	r23.u64 = ctx.r11.u64 + r22.u64;
	// add r7,r14,r15
	ctx.r7.u64 = r14.u64 + r15.u64;
	// add r11,r23,r14
	ctx.r11.u64 = r23.u64 + r14.u64;
	// subf r18,r23,r22
	r18.u64 = r22.u64 - r23.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// add r3,r15,r22
	ctx.r3.u64 = r15.u64 + r22.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// subf r20,r14,r7
	r20.u64 = ctx.r7.u64 - r14.u64;
	// subf r19,r14,r15
	r19.u64 = r15.u64 - r14.u64;
	// subf r17,r9,r8
	r17.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r16,r15,r7
	r16.u64 = ctx.r7.u64 - r15.u64;
	// subf r23,r22,r23
	r23.u64 = r23.u64 - r22.u64;
loc_8275C8C8:
	// lbzu r7,2(r25)
	ea = 2 + r25.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r25.u32 = ea;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// stbx r7,r5,r26
	REX_STORE_U8(ctx.r5.u32 + r26.u32, ctx.r7.u8);
	// stbx r7,r5,r30
	REX_STORE_U8(ctx.r5.u32 + r30.u32, ctx.r7.u8);
	// stbx r7,r5,r29
	REX_STORE_U8(ctx.r5.u32 + r29.u32, ctx.r7.u8);
	// stb r7,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// add r7,r5,r27
	ctx.r7.u64 = ctx.r5.u64 + r27.u64;
	// lbz r10,-1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// stbx r10,r6,r26
	REX_STORE_U8(ctx.r6.u32 + r26.u32, ctx.r10.u8);
	// stbx r10,r6,r30
	REX_STORE_U8(ctx.r6.u32 + r30.u32, ctx.r10.u8);
	// stbx r10,r6,r29
	REX_STORE_U8(ctx.r6.u32 + r29.u32, ctx.r10.u8);
	// stb r10,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lbzx r10,r21,r4
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + ctx.r4.u32);
	// stbx r10,r7,r26
	REX_STORE_U8(ctx.r7.u32 + r26.u32, ctx.r10.u8);
	// stbx r10,r7,r30
	REX_STORE_U8(ctx.r7.u32 + r30.u32, ctx.r10.u8);
	// stbx r10,r7,r29
	REX_STORE_U8(ctx.r7.u32 + r29.u32, ctx.r10.u8);
	// stbx r10,r5,r27
	REX_STORE_U8(ctx.r5.u32 + r27.u32, ctx.r10.u8);
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + r27.u64;
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stbx r7,r6,r26
	REX_STORE_U8(ctx.r6.u32 + r26.u32, ctx.r7.u8);
	// stbx r7,r6,r30
	REX_STORE_U8(ctx.r6.u32 + r30.u32, ctx.r7.u8);
	// stbx r7,r6,r29
	REX_STORE_U8(ctx.r6.u32 + r29.u32, ctx.r7.u8);
	// stb r7,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lbzx r7,r17,r31
	ctx.r7.u64 = REX_LOAD_U8(r17.u32 + r31.u32);
	// stbx r7,r16,r3
	REX_STORE_U8(r16.u32 + ctx.r3.u32, ctx.r7.u8);
	// stbx r7,r18,r11
	REX_STORE_U8(r18.u32 + ctx.r11.u32, ctx.r7.u8);
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + r24.u64;
	// stb r7,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r7.u8);
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stbx r7,r20,r11
	REX_STORE_U8(r20.u32 + ctx.r11.u32, ctx.r7.u8);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stbx r7,r19,r11
	REX_STORE_U8(r19.u32 + ctx.r11.u32, ctx.r7.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// stbx r7,r23,r28
	REX_STORE_U8(r23.u32 + r28.u32, ctx.r7.u8);
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// ld r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// bdnz 0x8275c8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275C8C8;
	// lwz r25,364(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_8275C978:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r31,r6,r11
	r31.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// add r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 + r25.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r22,r6,r22
	r22.u64 = ctx.r6.u64 + r22.u64;
	// bne 0x8275c874
	if (!ctx.cr0.eq) goto loc_8275C874;
loc_8275C9B8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82769858) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82769884
	if (ctx.cr6.eq) goto loc_82769884;
	// bl 0x8271b1a0
	ctx.lr = 0x8276987C;
	sub_8271B1A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82769884:
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

DEFINE_REX_FUNC(sub_8276ACE8) {
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
	ctx.lr = 0x8276ACF0;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r10,r5,-16
	ctx.r10.s64 = ctx.r5.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8276AD0C:
	// lhz r7,22(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r6,26(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r9,18(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r8,30(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,20(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,24(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r27,28(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzu r4,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mulli r31,r3,2408
	r31.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r5,r5,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(565));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// mulli r9,r9,2276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// subf r3,r6,r31
	ctx.r3.u64 = r31.u64 - ctx.r6.u64;
	// subf r30,r8,r5
	r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r31,r7,r31
	r31.u64 = r31.u64 - ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r5,r31,r30
	ctx.r5.u64 = r30.u64 - r31.u64;
	// extsh r7,r29
	ctx.r7.s64 = r29.s16;
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// add r27,r5,r8
	r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r24,r5,r8
	r24.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r5,r28
	ctx.r5.s64 = r28.s16;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// mulli r4,r29,1108
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1108));
	// mulli r7,r7,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1568));
	// rlwinm r5,r5,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// mulli r23,r6,3784
	r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3784));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r28,r27,181
	r28.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(181));
	// subf r29,r5,r8
	r29.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mulli r27,r24,181
	r27.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(181));
	// subf r8,r23,r4
	ctx.r8.u64 = ctx.r4.u64 - r23.u64;
	// addi r4,r28,128
	ctx.r4.s64 = r28.s64 + 128;
	// subf r28,r6,r7
	r28.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r29,r8
	ctx.r6.u64 = r29.u64 + ctx.r8.u64;
	// subf r3,r8,r29
	ctx.r3.u64 = r29.u64 - ctx.r8.u64;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// add r8,r30,r31
	ctx.r8.u64 = r30.u64 + r31.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// add r31,r9,r7
	r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r29,r3,r4
	r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r28,r8
	r27.u64 = r28.u64 + ctx.r8.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r30.u16);
	// srawi r3,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = r27.s32 >> 8;
	// subf r8,r8,r28
	ctx.r8.u64 = r28.u64 - ctx.r8.u64;
	// sth r29,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r29.u16);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// sth r8,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// sth r5,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r5.u16);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// bdnz 0x8276ad0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276AD0C;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r26,r11
	ctx.r10.u64 = r26.u64 + ctx.r11.u64;
	// subf r5,r11,r25
	ctx.r5.u64 = r25.u64 - ctx.r11.u64;
	// add r8,r26,r10
	ctx.r8.u64 = r26.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_8276AE78:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// lhzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// lhzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r6,r31,1892
	ctx.r6.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r7,r30,784
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(784));
	// subf r28,r8,r9
	r28.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r30,r30,1892
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1892));
	// mulli r31,r31,784
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(784));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r8,r29,1448
	ctx.r8.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r28,1448
	ctx.r6.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1448));
	// subf r7,r30,r31
	ctx.r7.u64 = r31.u64 - r30.u64;
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r30,r6,r7
	r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r31,r10
	ctx.r6.u64 = r31.u64 + ctx.r10.u64;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// sthx r6,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u16);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthx r7,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r9,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8276ae78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276AE78;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8277B8A0) {
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
	ctx.lr = 0x8277B8A8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c9c
	ctx.lr = 0x8277B8B0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// li r27,0
	r27.s64 = 0;
	// fsub f25,f10,f11
	f25.f64 = ctx.f10.f64 - ctx.f11.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8277bad8
	if (!ctx.cr6.gt) goto loc_8277BAD8;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r21,404(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lwz r20,396(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r17,r11,r8
	r17.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f28,-22784(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -22784);
	// fneg f26,f30
	f26.u64 = f30.u64 ^ 0x8000000000000000;
	// lfd f29,32424(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// li r25,0
	r25.s64 = 0;
	// subf r15,r8,r16
	r15.u64 = r16.u64 - ctx.r8.u64;
	// lfd f27,-3744(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8277B960:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f13,f25
	f31.f64 = ctx.f13.f64 - f25.f64;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// bge cr6,0x8277b98c
	if (!ctx.cr6.lt) goto loc_8277B98C;
loc_8277B97C:
	// add r11,r17,r15
	ctx.r11.u64 = r17.u64 + r15.u64;
	// li r30,0
	r30.s64 = 0;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// b 0x8277b99c
	goto loc_8277B99C;
loc_8277B98C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8277b9f4
	if (!ctx.cr6.gt) goto loc_8277B9F4;
loc_8277B994:
	// li r30,2
	r30.s64 = 2;
	// add r4,r17,r26
	ctx.r4.u64 = r17.u64 + r26.u64;
loc_8277B99C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B9A8;
	sub_826A1E70(ctx, base);
	// clrlwi r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277bac4
	if (!ctx.cr6.eq) goto loc_8277BAC4;
	// srawi r11,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r11.s64 = r27.s32 >> 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// mullw r31,r11,r29
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// bne cr6,0x8277ba78
	if (!ctx.cr6.eq) goto loc_8277BA78;
	// add r11,r24,r27
	ctx.r11.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8277ba70
	if (!ctx.cr6.lt) goto loc_8277BA70;
	// srawi r11,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r11.s64 = r24.s32 >> 1;
loc_8277B9D4:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r30,r19
	ctx.r4.u64 = r30.u64 + r19.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B9EC;
	sub_826A1E70(ctx, base);
	// add r4,r30,r18
	ctx.r4.u64 = r30.u64 + r18.u64;
	// b 0x8277bab8
	goto loc_8277BAB8;
loc_8277B9F4:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277B9FC;
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
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r24,r27
	ctx.r11.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8277ba48
	if (!ctx.cr6.lt) goto loc_8277BA48;
	// mullw r11,r24,r28
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + r16.u64;
	// b 0x8277b99c
	goto loc_8277B99C;
loc_8277BA48:
	// add r11,r22,r27
	ctx.r11.u64 = r22.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8277b994
	if (!ctx.cr6.lt) goto loc_8277B994;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x8277b97c
	if (!ctx.cr6.gt) goto loc_8277B97C;
	// mullw r11,r22,r28
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + r16.u64;
	// b 0x8277b99c
	goto loc_8277B99C;
loc_8277BA70:
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
	// b 0x8277b9d4
	goto loc_8277B9D4;
loc_8277BA78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8277ba98
	if (!ctx.cr6.eq) goto loc_8277BA98;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r19
	ctx.r4.u64 = r31.u64 + r19.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BA90;
	sub_826A1E70(ctx, base);
	// add r4,r31,r18
	ctx.r4.u64 = r31.u64 + r18.u64;
	// b 0x8277bab8
	goto loc_8277BAB8;
loc_8277BA98:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8277bac4
	if (!ctx.cr6.eq) goto loc_8277BAC4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BAB0;
	sub_826A1E70(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
loc_8277BAB8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BAC4;
	sub_826A1E70(ctx, base);
loc_8277BAC4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// blt cr6,0x8277b960
	if (ctx.cr6.lt) goto loc_8277B960;
loc_8277BAD8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce8
	ctx.lr = 0x8277BAE4;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82789B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82789B68;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82789bf4
	if (!ctx.cr6.gt) goto loc_82789BF4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82789bf4
	if (!ctx.cr6.gt) goto loc_82789BF4;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82789b9c
	if (ctx.cr6.eq) goto loc_82789B9C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x82789bb0
	if (!ctx.cr6.eq) goto loc_82789BB0;
loc_82789B9C:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82789d54
	if (ctx.cr6.eq) goto loc_82789D54;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82789d54
	if (ctx.cr6.eq) goto loc_82789D54;
loc_82789BB0:
	// lwz r11,14580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82789bfc
	if (ctx.cr6.eq) goto loc_82789BFC;
	// lwz r11,14572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14572);
	// lwz r9,14564(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,14576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14576);
	// srawi r9,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r31.s32 >> 31;
	// lwz r7,14568(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// xor r6,r31,r9
	ctx.r6.u64 = r31.u64 ^ ctx.r9.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82789c2c
	if (ctx.cr6.eq) goto loc_82789C2C;
loc_82789BF4:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x826a1d08
	return;
loc_82789BFC:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r31.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r31,r7
	ctx.r5.u64 = r31.u64 ^ ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
loc_82789C2C:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82789c50
	if (!ctx.cr6.eq) goto loc_82789C50;
	// srawi r9,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r9.s64 = r30.s32 >> 2;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r30
	ctx.r5.u64 = r30.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82789bf4
	if (!ctx.cr0.eq) goto loc_82789BF4;
loc_82789C50:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82789c70
	if (!ctx.cr6.eq) goto loc_82789C70;
	// srawi r11,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r11.s64 = r29.s32 >> 2;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r7,r29
	ctx.r6.u64 = r29.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82789bf4
	if (!ctx.cr0.eq) goto loc_82789BF4;
loc_82789C70:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r9,22870
	ctx.r9.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r7,21849
	ctx.r7.s64 = 1431896064;
	// lis r6,22101
	ctx.r6.s64 = 1448411136;
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// ori r9,r9,22869
	ctx.r9.u64 = ctx.r9.u64 | 22869;
	// ori r7,r7,22105
	ctx.r7.u64 = ctx.r7.u64 | 22105;
	// ori r6,r6,22857
	ctx.r6.u64 = ctx.r6.u64 | 22857;
	// ori r5,r5,13385
	ctx.r5.u64 = ctx.r5.u64 | 13385;
	// ori r4,r4,13392
	ctx.r4.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82789cd0
	if (ctx.cr6.eq) goto loc_82789CD0;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82789cd0
	if (ctx.cr6.eq) goto loc_82789CD0;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82789cd0
	if (ctx.cr6.eq) goto loc_82789CD0;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82789cd0
	if (ctx.cr6.eq) goto loc_82789CD0;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82789cd0
	if (ctx.cr6.eq) goto loc_82789CD0;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82789cdc
	if (!ctx.cr6.eq) goto loc_82789CDC;
loc_82789CD0:
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
loc_82789CDC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82789d0c
	if (ctx.cr6.eq) goto loc_82789D0C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82789d0c
	if (ctx.cr6.eq) goto loc_82789D0C;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82789d0c
	if (ctx.cr6.eq) goto loc_82789D0C;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82789d0c
	if (ctx.cr6.eq) goto loc_82789D0C;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82789d0c
	if (ctx.cr6.eq) goto loc_82789D0C;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82789d18
	if (!ctx.cr6.eq) goto loc_82789D18;
loc_82789D0C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
loc_82789D18:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82789d28
	if (ctx.cr6.eq) goto loc_82789D28;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82789d38
	if (!ctx.cr6.eq) goto loc_82789D38;
loc_82789D28:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
loc_82789D38:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82789d48
	if (ctx.cr6.eq) goto loc_82789D48;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82789d54
	if (!ctx.cr6.eq) goto loc_82789D54;
loc_82789D48:
	// clrlwi r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82789bf4
	if (!ctx.cr6.eq) goto loc_82789BF4;
loc_82789D54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82792A78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826a2e60
	sub_826A2E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792C08) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x8269c348
	ctx.lr = 0x82792C24;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8888(r11)
	REX_STORE_U32(ctx.r11.u32 + 8888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792F08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,980
	ctx.r3.s64 = ctx.r11.s64 + 980;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793180) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// b 0x8215f0f0
	sub_8215F0F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827933B8) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,-13040
	r30.s64 = ctx.r11.s64 + -13040;
	// lwz r31,24(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827933f0
	if (ctx.cr6.eq) goto loc_827933F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c18e8
	ctx.lr = 0x827933E8;
	sub_822C18E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x827933F0;
	sub_8269CE98(ctx, base);
loc_827933F0:
	// lwz r31,28(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8279340c
	if (ctx.cr6.eq) goto loc_8279340C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c18e8
	ctx.lr = 0x82793404;
	sub_822C18E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8279340C;
	sub_8269CE98(ctx, base);
loc_8279340C:
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

DEFINE_REX_FUNC(sub_82794068) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000003
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794278) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010195
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799788) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// lwz r10,1456(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1456);
	// lwz r8,1368(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r11,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r3,r8,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r5,0,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE0000;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827AD720) {
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
	ctx.lr = 0x827AD728;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r10,3744(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r8,3752(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r10,3756(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// li r24,0
	r24.s64 = 0;
	// lwz r9,3748(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r3,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r28,268(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 268);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r27,1312(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// beq cr6,0x827ad784
	if (ctx.cr6.eq) goto loc_827AD784;
	// lwz r26,3780(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 3780);
	// b 0x827ad788
	goto loc_827AD788;
loc_827AD784:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
loc_827AD788:
	// lwz r11,3760(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ad7a0
	if (ctx.cr6.eq) goto loc_827AD7A0;
	// lwz r10,224(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 224);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827ad7a4
	goto loc_827AD7A4;
loc_827AD7A0:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_827AD7A4:
	// lwz r11,3764(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ad7bc
	if (ctx.cr6.eq) goto loc_827AD7BC;
	// lwz r10,224(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 224);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827ad7c0
	goto loc_827AD7C0;
loc_827AD7BC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_827AD7C0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r20,r25,20
	r20.s64 = r25.s64 + 20;
	// bne cr6,0x827ad7f0
	if (!ctx.cr6.eq) goto loc_827AD7F0;
	// lwz r11,22488(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 22488);
	// stw r11,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r11.u32);
	// lwz r10,22500(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 22500);
	// stw r10,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r10.u32);
	// lwz r9,22492(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 22492);
	// stw r9,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r9.u32);
	// lwz r8,22504(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 22504);
	// stw r8,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r8.u32);
	// b 0x827ad81c
	goto loc_827AD81C;
loc_827AD7F0:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r9,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r6.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r11.u32);
loc_827AD81C:
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 616);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r11,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r11.u32);
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 428);
	// stw r10,40(r25)
	REX_STORE_U32(r25.u32 + 40, ctx.r10.u32);
	// lwz r9,1164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// stw r9,44(r25)
	REX_STORE_U32(r25.u32 + 44, ctx.r9.u32);
	// lhz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 76);
	// lhz r9,74(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 74);
	// lhz r6,50(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 50);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r23,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + r28.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + r26.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + r27.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bge cr6,0x827adda0
	if (!ctx.cr6.lt) goto loc_827ADDA0;
	// li r15,16
	r15.s64 = 16;
	// li r14,32
	r14.s64 = 32;
	// li r16,80
	r16.s64 = 80;
	// li r17,96
	r17.s64 = 96;
	// li r18,112
	r18.s64 = 112;
loc_827AD8C8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x827add2c
	if (ctx.cr6.eq) goto loc_827ADD2C;
loc_827AD8F8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r6,0,21,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// beq cr6,0x827adcd8
	if (ctx.cr6.eq) goto loc_827ADCD8;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rldicl r9,r11,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// rlwinm r6,r6,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r27,8
	ctx.r8.s64 = r27.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// clrlwi r21,r9,26
	r21.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r10,74(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827ad978
	if (ctx.cr6.eq) goto loc_827AD978;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// b 0x827ad980
	goto loc_827AD980;
loc_827AD978:
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
loc_827AD980:
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// lis r7,-32119
	ctx.r7.s64 = -2104950784;
	// lwz r8,14292(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 14292);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x827adae0
	if (ctx.cr6.gt) goto loc_827ADAE0;
	// lis r12,-32133
	ctx.r12.s64 = -2105868288;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9800
	ctx.r12.s64 = ctx.r12.s64 + -9800;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_827AD9E0;
	case 1:
		goto loc_827ADA34;
	case 2:
		goto loc_827ADA88;
	case 3:
		goto loc_827ADA90;
	case 4:
		goto loc_827ADAE0;
	case 5:
		goto loc_827ADAE0;
	case 6:
		goto loc_827ADAE0;
	case 7:
		goto loc_827ADAE0;
	case 8:
		goto loc_827AD9E0;
	case 9:
		goto loc_827ADA34;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_827AD9E0:
	// addi r11,r27,128
	ctx.r11.s64 = r27.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x827adae0
	goto loc_827ADAE0;
loc_827ADA34:
	// addi r11,r9,128
	ctx.r11.s64 = ctx.r9.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x827adae0
	goto loc_827ADAE0;
loc_827ADA88:
	// addi r10,r23,128
	ctx.r10.s64 = r23.s64 + 128;
	// b 0x827ada94
	goto loc_827ADA94;
loc_827ADA90:
	// addi r10,r22,128
	ctx.r10.s64 = r22.s64 + 128;
loc_827ADA94:
	// dcbt r0,r10
	// dcbt r11,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r10
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_827ADAE0:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r28,0
	r28.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,14292(r7)
	REX_STORE_U32(ctx.r7.u32 + 14292, ctx.r11.u32);
loc_827ADAFC:
	// clrlwi r10,r21,31
	ctx.r10.u64 = r21.u32 & 0x1;
	// rldicl r9,r26,20,44
	ctx.r9.u64 = __builtin_rotateleft64(r26.u64, 20) & 0xFFFFF;
	// srawi r24,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r24.s64 = r28.s32 >> 2;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827adcc0
	if (ctx.cr6.eq) goto loc_827ADCC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827adc54
	if (!ctx.cr6.eq) goto loc_827ADC54;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r5,r30,168
	ctx.r5.s64 = r30.s64 + 168;
	// lwz r4,444(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// stw r3,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827adb70
	if (ctx.cr6.lt) goto loc_827ADB70;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82731930
	ctx.lr = 0x827ADB68;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827adbd0
	goto loc_827ADBD0;
loc_827ADB70:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827adbcc
	if (!ctx.cr6.gt) goto loc_827ADBCC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827ADB7C:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r15,r3,24,8,31
	r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r15,r7
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// lbzx r15,r10,r4
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r14,r15,r5
	r14.u64 = REX_LOAD_U8(r15.u32 + ctx.r5.u32);
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rotlwi r15,r15,1
	r15.u64 = __builtin_rotateleft32(r15.u32, 1);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// or r9,r14,r9
	ctx.r9.u64 = r14.u64 | ctx.r9.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r3,r15,r31
	REX_STORE_U16(r15.u32 + r31.u32, ctx.r3.u16);
	// bdnz 0x827adb7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827ADB7C;
	// li r14,32
	r14.s64 = 32;
	// li r15,16
	r15.s64 = 16;
loc_827ADBCC:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_827ADBD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827adc44
	if (!ctx.cr6.eq) goto loc_827ADC44;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r15
	ea = (r31.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r14
	ea = (r31.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r18
	ea = (r31.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827adc98
	goto loc_827ADC98;
loc_827ADC44:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ae860
	ctx.lr = 0x827ADC50;
	sub_827AE860(ctx, base);
	// b 0x827adc98
	goto loc_827ADC98;
loc_827ADC54:
	// rldicl r10,r26,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r26.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827ADC98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827ADC98:
	// lwz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 960);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x827ADCC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827ADCC0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r21,r21,31,1,31
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r26,r26,8,55
	r26.u64 = __builtin_rotateleft64(r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// blt cr6,0x827adafc
	if (ctx.cr6.lt) goto loc_827ADAFC;
	// lwz r21,356(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_827ADCD8:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// cmplw cr6,r19,r5
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r5.u32, ctx.xer);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// blt cr6,0x827ad8f8
	if (ctx.cr6.lt) goto loc_827AD8F8;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_827ADD2C:
	// lwz r11,232(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 232);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,228(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 228);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r29,104(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r7,396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// blt cr6,0x827ad8c8
	if (ctx.cr6.lt) goto loc_827AD8C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_827ADDA0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827BD658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827bd6bc
	if (!ctx.cr6.eq) goto loc_827BD6BC;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ldx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r9,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r9,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r5.u32 = ea;
	// ldx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r8,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u64);
loc_827BD6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827BD6BC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvlx128 v62,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lvrx128 v61,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvrx128 v60,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v53,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v52,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v52,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v50,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v48,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v46,v51,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v48,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v45,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v40,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// stvx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvx128 v40,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x827bd6b0
	if (!ctx.cr6.eq) goto loc_827BD6B0;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v39,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v37,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvlx128 v36,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v34,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// stvx128 v37,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvrx128 v32,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lvrx128 v33,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v62,v33
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v61,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// stvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v57,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v50,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v48,v53,v49
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

