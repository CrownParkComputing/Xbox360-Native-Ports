#include "hydrothunder_funcs.39.h"

DEFINE_REX_FUNC(sub_82121F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821269A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821269B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,6044(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821269D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6100(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6100);
	// bl 0x821687a8
	ctx.lr = 0x821269E4;
	sub_821687A8(ctx, base);
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// b 0x821269fc
	goto loc_821269FC;
loc_821269EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82163690
	ctx.lr = 0x821269F8;
	sub_82163690(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_821269FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821269ec
	if (!ctx.cr6.eq) goto loc_821269EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6100(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6100);
	// bl 0x821687a8
	ctx.lr = 0x82126A14;
	sub_821687A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,6044(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6044);
	// stb r11,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82126A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212AFC8) {
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
	ctx.lr = 0x8212AFEC;
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
	ctx.lr = 0x8212B004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6040(r10)
	REX_STORE_U32(ctx.r10.u32 + 6040, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8212D4D0) {
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
	ctx.lr = 0x8212D4F4;
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
	ctx.lr = 0x8212D50C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6052(r10)
	REX_STORE_U32(ctx.r10.u32 + 6052, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82130AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82130AB8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823ed3a8
	ctx.lr = 0x82130AD0;
	sub_823ED3A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821711b8
	ctx.lr = 0x82130AE0;
	sub_821711B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82130af0
	if (!ctx.cr0.eq) goto loc_82130AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82130c50
	goto loc_82130C50;
loc_82130AF0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130c4c
	if (ctx.cr6.eq) goto loc_82130C4C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,-21864
	ctx.r4.s64 = ctx.r11.s64 + -21864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120c08
	ctx.lr = 0x82130B14;
	sub_82120C08(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82130b28
	if (ctx.cr6.lt) goto loc_82130B28;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82130b2c
	goto loc_82130B2C;
loc_82130B28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82130B2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3f8
	ctx.lr = 0x82130B34;
	sub_823ED3F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82123288
	ctx.lr = 0x82130B40;
	sub_82123288(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-21844
	ctx.r4.s64 = ctx.r11.s64 + -21844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821235c8
	ctx.lr = 0x82130B54;
	sub_821235C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82130c3c
	if (ctx.cr6.eq) goto loc_82130C3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82130B6C;
	sub_82120AC0(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120b20
	ctx.lr = 0x82130B84;
	sub_82120B20(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120700
	ctx.lr = 0x82130B90;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82130BA0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-24460
	ctx.r4.s64 = ctx.r11.s64 + -24460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821235c8
	ctx.lr = 0x82130BB4;
	sub_821235C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82130BC8;
	sub_82120AC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120b20
	ctx.lr = 0x82130BDC;
	sub_82120B20(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120700
	ctx.lr = 0x82130BE8;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82130BF8;
	sub_82120AC0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82130C0C;
	sub_82121DD0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-21832
	ctx.r4.s64 = ctx.r11.s64 + -21832;
	// bl 0x82121928
	ctx.lr = 0x82130C1C;
	sub_82121928(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82130c30
	if (ctx.cr6.lt) goto loc_82130C30;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82130c34
	goto loc_82130C34;
loc_82130C30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82130C34:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3f8
	ctx.lr = 0x82130C3C;
	sub_823ED3F8(ctx, base);
loc_82130C3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82130C4C;
	sub_82120AC0(ctx, base);
loc_82130C4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82130C50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213B010) {
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
	ctx.lr = 0x8213B018;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// beq cr6,0x8213b044
	if (ctx.cr6.eq) goto loc_8213B044;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-18644
	ctx.r4.s64 = ctx.r11.s64 + -18644;
	// addi r3,r10,-18456
	ctx.r3.s64 = ctx.r10.s64 + -18456;
	// li r5,179
	ctx.r5.s64 = 179;
	// bl 0x821231d0
	ctx.lr = 0x8213B044;
	sub_821231D0(ctx, base);
loc_8213B044:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82120600
	ctx.lr = 0x8213B054;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x8213b430
	ctx.lr = 0x8213B064;
	sub_8213B430(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8213B078;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8213b108
	if (ctx.cr6.eq) goto loc_8213B108;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r27,96
	r30.s64 = r27.s64 + 96;
	// addi r29,r11,-18676
	r29.s64 = ctx.r11.s64 + -18676;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213B098;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-18664
	r28.s64 = ctx.r11.s64 + -18664;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213B0A8;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-18652
	ctx.r4.s64 = ctx.r11.s64 + -18652;
	// bl 0x8215f338
	ctx.lr = 0x8213B0B4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213B0B8;
	sub_8215FA30(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x8213ae28
	ctx.lr = 0x8213B0C8;
	sub_8213AE28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213b108
	if (ctx.cr0.eq) goto loc_8213B108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213B0DC;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213B0E4;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x8215f338
	ctx.lr = 0x8213B0F0;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178528
	ctx.lr = 0x8213B0FC;
	sub_82178528(ctx, base);
	// stw r27,108(r31)
	REX_STORE_U32(r31.u32 + 108, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821793a0
	ctx.lr = 0x8213B108;
	sub_821793A0(ctx, base);
loc_8213B108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82144110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82144118;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214417c
	if (!ctx.cr6.gt) goto loc_8214417C;
	// addi r28,r3,244
	r28.s64 = ctx.r3.s64 + 244;
loc_82144134:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82144140;
	sub_8228CA78(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214416c
	if (ctx.cr6.eq) goto loc_8214416C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82120ac0
	ctx.lr = 0x8214415C;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82144164;
	sub_8269D1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214416C;
	sub_8269CE98(ctx, base);
loc_8214416C:
	// lwz r11,248(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 248);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82144134
	if (ctx.cr6.lt) goto loc_82144134;
loc_8214417C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,248(r29)
	REX_STORE_U32(r29.u32 + 248, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82147E68) {
	REX_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
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

DEFINE_REX_FUNC(sub_82148358) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821483c8
	if (ctx.cr0.eq) goto loc_821483C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214839C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821483BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
loc_821483C8:
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

DEFINE_REX_FUNC(sub_8214BFD8) {
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
	// addi r31,r11,1136
	r31.s64 = ctx.r11.s64 + 1136;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8214c014
	if (ctx.cr6.gt) goto loc_8214C014;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21756
	ctx.r3.s64 = ctx.r10.s64 + -21756;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x8214C014;
	sub_821231D0(ctx, base);
loc_8214C014:
	// bl 0x8214c038
	ctx.lr = 0x8214C018;
	sub_8214C038(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214E908) {
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
	// addi r11,r11,-11772
	ctx.r11.s64 = ctx.r11.s64 + -11772;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8214e934
	if (ctx.cr0.eq) goto loc_8214E934;
	// bl 0x8269ce98
	ctx.lr = 0x8214E934;
	sub_8269CE98(ctx, base);
loc_8214E934:
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

DEFINE_REX_FUNC(sub_82150940) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,89(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82150960
	if (!ctx.cr0.eq) goto loc_82150960;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82150960:
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
	// bne cr6,0x82150980
	if (!ctx.cr6.eq) goto loc_82150980;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8215099c
	goto loc_8215099C;
loc_82150980:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82150998
	if (!ctx.cr6.eq) goto loc_82150998;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215099c
	goto loc_8215099C;
loc_82150998:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8215099C:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82153020) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82154318) {
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
	ctx.lr = 0x82154320;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82154334;
	sub_8212E8B0(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82154360
	if (ctx.cr6.eq) goto loc_82154360;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215435C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
loc_82154360:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82154384
	if (ctx.cr6.eq) goto loc_82154384;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_82154384:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821543b0
	if (ctx.cr6.eq) goto loc_821543B0;
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
	ctx.lr = 0x821543AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
loc_821543B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821543dc
	if (ctx.cr6.eq) goto loc_821543DC;
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
	ctx.lr = 0x821543D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
loc_821543DC:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821543fc
	if (ctx.cr6.eq) goto loc_821543FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821543F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
loc_821543FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154448
	if (ctx.cr6.eq) goto loc_82154448;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
	// mulli r10,r9,1064
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1064));
	// addic. r30,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	r30.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x82154440
	if (ctx.cr0.lt) goto loc_82154440;
	// addi r29,r11,1056
	r29.s64 = ctx.r11.s64 + 1056;
loc_82154424:
	// addi r29,r29,-1064
	r29.s64 = r29.s64 + -1064;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8269d6a0
	ctx.lr = 0x82154430;
	sub_8269D6A0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d6a0
	ctx.lr = 0x82154438;
	sub_8269D6A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82154424
	if (!ctx.cr0.lt) goto loc_82154424;
loc_82154440:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x82154448;
	sub_8269D6A0(ctx, base);
loc_82154448:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
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
	ctx.lr = 0x8215446C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215DC10) {
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
	ctx.lr = 0x8215DC18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8215dca0
	if (!ctx.cr6.gt) goto loc_8215DCA0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// beq cr6,0x8215dd24
	if (ctx.cr6.eq) goto loc_8215DD24;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(r31.u32, r31.u32, ctx.xer);
	// beq cr6,0x8215dc74
	if (ctx.cr6.eq) goto loc_8215DC74;
loc_8215DC58:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215efb0
	ctx.lr = 0x8215DC64;
	sub_8215EFB0(ctx, base);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// bne cr6,0x8215dc58
	if (!ctx.cr6.eq) goto loc_8215DC58;
loc_8215DC74:
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x8215dc98
	if (ctx.cr6.eq) goto loc_8215DC98;
loc_8215DC84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215DC8C;
	sub_8215F0F0(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8215dc84
	if (!ctx.cr6.eq) goto loc_8215DC84;
loc_8215DC98:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// b 0x8215dd24
	goto loc_8215DD24;
loc_8215DCA0:
	// bge cr6,0x8215dd24
	if (!ctx.cr6.lt) goto loc_8215DD24;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215e000
	ctx.lr = 0x8215DCB0;
	sub_8215E000(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// subf. r28,r11,r29
	r28.u64 = r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8215dd04
	if (ctx.cr0.eq) goto loc_8215DD04;
	// li r27,0
	r27.s64 = 0;
loc_8215DCD0:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// std r27,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// beq cr6,0x8215dcf0
	if (ctx.cr6.eq) goto loc_8215DCF0;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215efb0
	ctx.lr = 0x8215DCF0;
	sub_8215EFB0(ctx, base);
loc_8215DCF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8215DCF8;
	sub_8215F0F0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8215dcd0
	if (!ctx.cr0.eq) goto loc_8215DCD0;
loc_8215DD04:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8215DD24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82169660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82169668;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821696b0
	if (!ctx.cr0.eq) goto loc_821696B0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82169688:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216969c
	if (!ctx.cr6.lt) goto loc_8216969C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821696a4
	goto loc_821696A4;
loc_8216969C:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821696A4:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82169688
	if (ctx.cr0.eq) goto loc_82169688;
loc_821696B0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821696d0
	if (ctx.cr6.eq) goto loc_821696D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216977c
	if (!ctx.cr6.lt) goto loc_8216977C;
loc_821696D0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r10,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// bl 0x82169ca0
	ctx.lr = 0x821696FC;
	sub_82169CA0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x82169704;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82169788
	if (ctx.cr0.eq) goto loc_82169788;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addic. r11,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	ctx.r11.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r30,32(r31)
	REX_STORE_U8(r31.u32 + 32, r30.u8);
	// stb r30,33(r31)
	REX_STORE_U8(r31.u32 + 33, r30.u8);
	// beq 0x82169748
	if (ctx.cr0.eq) goto loc_82169748;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82169ca0
	ctx.lr = 0x82169748;
	sub_82169CA0(ctx, base);
loc_82169748:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169da0
	ctx.lr = 0x8216975C;
	sub_82169DA0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq 0x82169774
	if (ctx.cr0.eq) goto loc_82169774;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8269d1b8
	ctx.lr = 0x82169774;
	sub_8269D1B8(ctx, base);
loc_82169774:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216977C;
	sub_8269D1B8(ctx, base);
loc_8216977C:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
loc_82169788:
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
	ctx.lr = 0x821697A0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821727F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce50
	ctx.lr = 0x82172824;
	sub_8264CE50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82172838
	if (!ctx.cr6.eq) goto loc_82172838;
loc_82172830:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82172894
	goto loc_82172894;
loc_82172838:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x8264ce78
	ctx.lr = 0x82172850;
	sub_8264CE78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82172830
	if (ctx.cr6.eq) goto loc_82172830;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// sth r9,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// sth r30,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r30.u16);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8264ceb0
	ctx.lr = 0x82172888;
	sub_8264CEB0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82172894:
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

DEFINE_REX_FUNC(sub_821789A8) {
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
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178a10
	if (ctx.cr6.eq) goto loc_82178A10;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-18472
	ctx.r4.s64 = ctx.r10.s64 + -18472;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// bl 0x82120600
	ctx.lr = 0x821789E0;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121dd0
	ctx.lr = 0x821789F0;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120670
	ctx.lr = 0x821789FC;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82178A0C;
	sub_82120AC0(ctx, base);
	// b 0x82178a34
	goto loc_82178A34;
loc_82178A10:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82178A34;
	sub_82120600(ctx, base);
loc_82178A34:
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

DEFINE_REX_FUNC(sub_8217BB48) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r10,28512
	ctx.r5.s64 = ctx.r10.s64 + 28512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269f340
	ctx.lr = 0x8217BB78;
	sub_8269F340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217bb8c
	if (!ctx.cr0.eq) goto loc_8217BB8C;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217bb98
	if (!ctx.cr6.eq) goto loc_8217BB98;
loc_8217BB8C:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217bc04
	if (ctx.cr6.eq) goto loc_8217BC04;
loc_8217BB98:
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217bbc8
	if (ctx.cr0.eq) goto loc_8217BBC8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,239
	ctx.r3.s64 = 239;
	// bl 0x8269db20
	ctx.lr = 0x8217BBB0;
	sub_8269DB20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,187
	ctx.r3.s64 = 187;
	// bl 0x8269db20
	ctx.lr = 0x8217BBBC;
	sub_8269DB20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,191
	ctx.r3.s64 = 191;
	// bl 0x8269db20
	ctx.lr = 0x8217BBC8;
	sub_8269DB20(ctx, base);
loc_8217BBC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217BBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1200
	ctx.lr = 0x8217BBEC;
	sub_826A1200(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8269ef08
	ctx.lr = 0x8217BBFC;
	sub_8269EF08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217bc08
	goto loc_8217BC08;
loc_8217BC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217BC08:
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

DEFINE_REX_FUNC(sub_82182560) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x82182568;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x82182570;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f4,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f10,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f29,f10,f0
	f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f8,f0
	f27.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f30.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f2,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f26,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f26.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmadds f8,f0,f8,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f5.f64)));
	// lfs f23,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f23.f64 = double(temp.f32);
	// fmadds f5,f11,f30,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f3.f64)));
	// lfs f25,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f25.f64 = double(temp.f32);
	// fmadds f3,f1,f2,f29
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, f29.f64)));
	// lfs f24,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f24.f64 = double(temp.f32);
	// fmadds f7,f7,f2,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, f27.f64)));
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmadds f12,f1,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// fmadds f13,f4,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f2.f64, ctx.f13.f64)));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmadds f10,f11,f26,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f8.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f0,f0,f6,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f5.f64)));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmadds f8,f11,f28,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f3.f64)));
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// fmadds f7,f11,f26,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f7.f64)));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fmadds f12,f11,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f12.f64)));
	// fmadds f13,f11,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f13.f64)));
	// fadds f11,f10,f24
	ctx.f11.f64 = double(float(ctx.f10.f64 + f24.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f8,f25
	ctx.f0.f64 = double(float(ctx.f8.f64 + f25.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fadds f0,f7,f24
	ctx.f0.f64 = double(float(ctx.f7.f64 + f24.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f0,f13,f23
	ctx.f0.f64 = double(float(ctx.f13.f64 + f23.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fadds f0,f12,f25
	ctx.f0.f64 = double(float(ctx.f12.f64 + f25.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bctrl 
	ctx.lr = 0x8218267C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f9,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f5,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f10,f6,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f10.f64)));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f10,368(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f1,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f30,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f30.f64 = double(temp.f32);
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f29,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f29.f64 = double(temp.f32);
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f27,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f27.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f13,f13,f8,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f12.f64)));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fmadds f2,f1,f9,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f2.f64)));
	// fmadds f11,f30,f9,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f12,f1,f9,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f10,f30,f9,f3
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f3.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f13,f6,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f8,f0,f29,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f2.f64)));
	// fmadds f0,f0,f28,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f11.f64)));
	// fmadds f12,f4,f29,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f12.f64)));
	// fmadds f11,f4,f28,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, f28.f64, ctx.f10.f64)));
	// fadds f10,f8,f27
	ctx.f10.f64 = double(float(ctx.f8.f64 + f27.f64));
	// stfs f10,372(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fadds f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 + f27.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f11,f26
	ctx.f0.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bctrl 
	ctx.lr = 0x82182764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f29,f13,f9
	f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f27,f13,f8
	f27.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f11,f11,f5,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f4,f7,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, f29.f64)));
	// fmadds f9,f4,f6,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f9.f64)));
	// fmadds f29,f3,f7,f27
	f29.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, f27.f64)));
	// fmadds f10,f13,f5,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64)));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f26,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f26.f64 = double(temp.f32);
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmadds f11,f2,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f11.f64)));
	// lfs f25,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f25.f64 = double(temp.f32);
	// lfs f24,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f1.f64)));
	// fmadds f9,f0,f30,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f9.f64)));
	// fmadds f12,f12,f28,f29
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f29.f64)));
	// fmadds f10,f2,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f10.f64)));
	// fadds f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f11,304(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmadds f13,f3,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f13.f64)));
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fadds f12,f10,f26
	ctx.f12.f64 = double(float(ctx.f10.f64 + f26.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f11,f7,f25
	ctx.f11.f64 = double(float(ctx.f7.f64 + f25.f64));
	// stfs f11,308(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fadds f12,f9,f25
	ctx.f12.f64 = double(float(ctx.f9.f64 + f25.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmadds f0,f0,f28,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f13.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bctrl 
	ctx.lr = 0x8218284C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f29,f13,f9
	f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f27,f13,f8
	f27.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// fmadds f1,f7,f5,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmadds f10,f6,f5,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f5.f64, ctx.f10.f64)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmadds f29,f4,f0,f29
	f29.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, f29.f64)));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fmadds f12,f3,f12,f27
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, f27.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f9,f4,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f0,f3,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f8.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmadds f11,f11,f2,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f1.f64)));
	// lfs f26,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f26.f64 = double(temp.f32);
	// fmadds f13,f13,f2,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f10.f64)));
	// lfs f25,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f25.f64 = double(temp.f32);
	// fmadds f8,f7,f30,f29
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, f29.f64)));
	// lfs f24,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmadds f12,f7,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f12.f64)));
	// fmadds f10,f6,f30,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f9.f64)));
	// fmadds f0,f6,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f0.f64)));
	// fadds f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f11,432(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f11,f8,f25
	ctx.f11.f64 = double(float(ctx.f8.f64 + f25.f64));
	// stfs f11,436(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// stfs f12,440(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// fadds f13,f10,f25
	ctx.f13.f64 = double(float(ctx.f10.f64 + f25.f64));
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bctrl 
	ctx.lr = 0x82182934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f6,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f29,f9,f0
	f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f2,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// lfs f27,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f27.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f30,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmadds f5,f2,f0,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f5.f64)));
	// lfs f28,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f28.f64 = double(temp.f32);
	// fmadds f7,f2,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f7.f64)));
	// lfs f24,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f24.f64 = double(temp.f32);
	// lfs f26,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f26.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f0,f1,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f6.f64)));
	// lfs f25,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f25.f64 = double(temp.f32);
	// fmadds f6,f10,f3,f29
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, f29.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f13,f1,f13,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f9,f10,f3,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f9.f64)));
	// fmadds f5,f10,f28,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f5.f64)));
	// fmadds f8,f10,f28,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f7.f64)));
	// fmadds f0,f10,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f0.f64)));
	// fmadds f12,f12,f30,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f6.f64)));
	// fmadds f13,f10,f27,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f13.f64)));
	// fmadds f11,f11,f30,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f9.f64)));
	// fadds f10,f5,f25
	ctx.f10.f64 = double(float(ctx.f5.f64 + f25.f64));
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f0,f12,f26
	ctx.f0.f64 = double(float(ctx.f12.f64 + f26.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fadds f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 + f24.f64));
	// stfs f13,344(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fadds f13,f8,f25
	ctx.f13.f64 = double(float(ctx.f8.f64 + f25.f64));
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f0,f11,f26
	ctx.f0.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// bctrl 
	ctx.lr = 0x82182A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f29,f10,f0
	f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f11,f8
	f27.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f7,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// lfs f6,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f25,f11,f7
	f25.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f30,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f30.f64 = double(temp.f32);
	// lfs f28,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f28.f64 = double(temp.f32);
	// lfs f26,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f26.f64 = double(temp.f32);
	// lfs f24,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fmadds f29,f13,f5,f29
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f29.f64)));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// fmadds f27,f4,f0,f27
	f27.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, f27.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f12,f3,f12,f25
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, f25.f64)));
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// fmadds f10,f13,f5,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmadds f8,f4,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f8.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f0,f3,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f7.f64)));
	// fmadds f11,f11,f2,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, f29.f64)));
	// fmadds f7,f13,f1,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f27.f64)));
	// fmadds f12,f13,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f12.f64)));
	// fmadds f10,f6,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f10.f64)));
	// fmadds f9,f13,f1,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f8.f64)));
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// fadds f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f13,400(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fadds f13,f7,f26
	ctx.f13.f64 = double(float(ctx.f7.f64 + f26.f64));
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fadds f13,f12,f24
	ctx.f13.f64 = double(float(ctx.f12.f64 + f24.f64));
	// stfs f13,408(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fadds f13,f10,f28
	ctx.f13.f64 = double(float(ctx.f10.f64 + f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f9,f26
	ctx.f13.f64 = double(float(ctx.f9.f64 + f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82182B04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f3,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f5,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmadds f7,f4,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f7.f64)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f6.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f11,f4,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f11.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f10,f3,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f0,f1,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f1,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// lfs f30,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f29.f64 = double(temp.f32);
	// fmadds f12,f5,f30,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f7.f64)));
	// lfs f8,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f5,f29,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, f29.f64, ctx.f6.f64)));
	// lfs f27,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f27.f64 = double(temp.f32);
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmadds f11,f5,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f11.f64)));
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f10,f5,f29,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, f29.f64, ctx.f10.f64)));
	// fmadds f0,f5,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f28.f64, ctx.f0.f64)));
	// fmadds f13,f5,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, f28.f64, ctx.f13.f64)));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f9,f27
	ctx.f12.f64 = double(float(ctx.f9.f64 + f27.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f13,f26
	ctx.f0.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bctrl 
	ctx.lr = 0x82182BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f5,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmadds f7,f12,f4,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f7.f64)));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f6.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f11,f12,f4,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f11.f64)));
	// fmadds f10,f3,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f13,f2,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lfs f29,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f29.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// fmadds f12,f5,f8,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f7.f64)));
	// fmadds f9,f5,f30,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f6.f64)));
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f0,f5,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f29.f64, ctx.f0.f64)));
	// lfs f28,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f28.f64 = double(temp.f32);
	// fmadds f11,f5,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f11.f64)));
	// lfs f27,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f27.f64 = double(temp.f32);
	// fmadds f10,f5,f30,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f10.f64)));
	// fmadds f13,f5,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, f29.f64, ctx.f13.f64)));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f12,f9,f27
	ctx.f12.f64 = double(float(ctx.f9.f64 + f27.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f0,f13,f26
	ctx.f0.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bctrl 
	ctx.lr = 0x82182CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f10,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lfs f9,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f2,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f25,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f25.f64 = double(temp.f32);
	// lfs f27,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f27.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f26,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f26.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fmadds f13,f3,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f10,f9,f6,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f1.f64)));
	// fmadds f1,f4,f9,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, f29.f64)));
	// fmadds f12,f8,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f12.f64)));
	// fmadds f11,f4,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f0,f3,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f0.f64)));
	// fmadds f13,f7,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f13.f64)));
	// fmadds f10,f7,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f10.f64)));
	// fmadds f9,f7,f30,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f1.f64)));
	// fmadds f12,f7,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmadds f11,f7,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f11.f64)));
	// fmadds f0,f7,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f0.f64)));
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f10,f9,f26
	ctx.f10.f64 = double(float(ctx.f9.f64 + f26.f64));
	// stfs f10,228(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 + f27.f64));
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fadds f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bctrl 
	ctx.lr = 0x82182DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f5,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f7,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f3,f13,f5,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmadds f1,f13,f4,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f1.f64)));
	// fmadds f11,f13,f5,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f11.f64)));
	// lfs f30,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f29.f64 = double(temp.f32);
	// fmadds f12,f13,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f12.f64)));
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// lfs f27,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f27.f64 = double(temp.f32);
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f0,f13,f2,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f0.f64)));
	// fmadds f10,f13,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f13,f7,f30,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f3.f64)));
	// fmadds f9,f7,f29,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f1.f64)));
	// fmadds f12,f7,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f12.f64)));
	// fmadds f11,f6,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f11.f64)));
	// fmadds f0,f6,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f0.f64)));
	// fmadds f10,f6,f29,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f10.f64)));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fadds f13,f12,f26
	ctx.f13.f64 = double(float(ctx.f12.f64 + f26.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fadds f13,f11,f27
	ctx.f13.f64 = double(float(ctx.f11.f64 + f27.f64));
	// stfs f13,320(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// bctrl 
	ctx.lr = 0x82182EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f29,f0,f7
	f29.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f4,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f10,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f6,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lfs f3,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmadds f5,f11,f9,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// fmadds f1,f11,f4,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, f29.f64)));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f28,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmadds f13,f11,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f13.f64)));
	// lfs f27,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f27.f64 = double(temp.f32);
	// fmadds f11,f10,f6,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// fmadds f12,f28,f9,f12
	ctx.f12.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, ctx.f12.f64)));
	// lfs f25,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f25.f64 = double(temp.f32);
	// fmadds f0,f28,f2,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f2.f64, ctx.f0.f64)));
	// lfs f26,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f26.f64 = double(temp.f32);
	// fmadds f5,f10,f30,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f1.f64)));
	// fmadds f13,f10,f27,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f13.f64)));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f11,352(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f11,f28,f4,f7
	ctx.f11.f64 = double(float(std::fma(f28.f64, ctx.f4.f64, ctx.f7.f64)));
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// fmadds f0,f10,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f0.f64)));
	// fadds f9,f5,f26
	ctx.f9.f64 = double(float(ctx.f5.f64 + f26.f64));
	// stfs f9,356(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// stfs f13,360(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmadds f11,f10,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f11.f64)));
	// fadds f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fadds f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f13,388(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// bctrl 
	ctx.lr = 0x82182F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,428(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f30,f0,f10
	f30.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f29,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f29.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f3,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f2,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f31.f64 = double(temp.f32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// fmadds f8,f12,f7,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f1.f64)));
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f1,f12,f6,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, f30.f64)));
	// lfs f28,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f28.f64 = double(temp.f32);
	// fmadds f11,f12,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f11.f64)));
	// lfs f27,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f27.f64 = double(temp.f32);
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f10.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f0,f12,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f13.f64)));
	// fmadds f12,f4,f2,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f2.f64, ctx.f8.f64)));
	// fmadds f9,f4,f31,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, ctx.f1.f64)));
	// fmadds f11,f2,f3,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f11.f64)));
	// fmadds f10,f31,f3,f10
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmadds f0,f29,f3,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f3.f64, ctx.f0.f64)));
	// fmadds f13,f4,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f13.f64)));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f12,416(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// fadds f12,f9,f27
	ctx.f12.f64 = double(float(ctx.f9.f64 + f27.f64));
	// stfs f12,420(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,424(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// fadds f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f13,448(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// fadds f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f13,452(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// bctrl 
	ctx.lr = 0x82183074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x82183080;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821F3DB8) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,22380
	ctx.r4.s64 = ctx.r11.s64 + 22380;
	// bl 0x82120600
	ctx.lr = 0x821F3DDC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,22400
	ctx.r4.s64 = ctx.r11.s64 + 22400;
	// bl 0x82120600
	ctx.lr = 0x821F3DEC;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r6,r11,-23120
	ctx.r6.s64 = ctx.r11.s64 + -23120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a300
	ctx.lr = 0x821F3E0C;
	sub_8219A300(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821F3E1C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x821F3E2C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,22428
	ctx.r4.s64 = ctx.r11.s64 + 22428;
	// bl 0x82120600
	ctx.lr = 0x821F3E3C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,22448
	ctx.r4.s64 = ctx.r11.s64 + 22448;
	// bl 0x82120600
	ctx.lr = 0x821F3E4C;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// addi r6,r10,-22752
	ctx.r6.s64 = ctx.r10.s64 + -22752;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a300
	ctx.lr = 0x821F3E68;
	sub_8219A300(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821F3E78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82120ac0
	ctx.lr = 0x821F3E88;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,22476
	ctx.r4.s64 = ctx.r11.s64 + 22476;
	// bl 0x82120600
	ctx.lr = 0x821F3E98;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r30,r11,22496
	r30.s64 = ctx.r11.s64 + 22496;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x821F3EAC;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r6,r10,-22488
	ctx.r6.s64 = ctx.r10.s64 + -22488;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a300
	ctx.lr = 0x821F3EC8;
	sub_8219A300(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821F3ED8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82120ac0
	ctx.lr = 0x821F3EE8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-12312
	ctx.r4.s64 = ctx.r11.s64 + -12312;
	// bl 0x82120600
	ctx.lr = 0x821F3EF8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,-12104
	ctx.r4.s64 = ctx.r11.s64 + -12104;
	// bl 0x82120600
	ctx.lr = 0x821F3F08;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120600
	ctx.lr = 0x821F3F14;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r7,r10,-2648
	ctx.r7.s64 = ctx.r10.s64 + -2648;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a4a8
	ctx.lr = 0x821F3F34;
	sub_8219A4A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821F3F44;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x821F3F54;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x821F3F64;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,22524
	ctx.r4.s64 = ctx.r11.s64 + 22524;
	// bl 0x82120600
	ctx.lr = 0x821F3F74;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22540
	ctx.r4.s64 = ctx.r11.s64 + 22540;
	// bl 0x82120600
	ctx.lr = 0x821F3F84;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r30,r11,-12332
	r30.s64 = ctx.r11.s64 + -12332;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x821F3F98;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r7,r10,-28136
	ctx.r7.s64 = ctx.r10.s64 + -28136;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a4a8
	ctx.lr = 0x821F3FB8;
	sub_8219A4A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82120ac0
	ctx.lr = 0x821F3FC8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F3FD8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821F3FE8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,22560
	ctx.r4.s64 = ctx.r11.s64 + 22560;
	// bl 0x82120600
	ctx.lr = 0x821F3FF8;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,22592
	ctx.r4.s64 = ctx.r11.s64 + 22592;
	// bl 0x82120600
	ctx.lr = 0x821F4008;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120600
	ctx.lr = 0x821F4014;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r7,r10,-29560
	ctx.r7.s64 = ctx.r10.s64 + -29560;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a4a8
	ctx.lr = 0x821F4034;
	sub_8219A4A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821F4044;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x821F4054;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x821F4064;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,22624
	ctx.r4.s64 = ctx.r11.s64 + 22624;
	// bl 0x82120600
	ctx.lr = 0x821F4074;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,22648
	ctx.r4.s64 = ctx.r11.s64 + 22648;
	// bl 0x82120600
	ctx.lr = 0x821F4084;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x821F4094;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r7,r10,-28984
	ctx.r7.s64 = ctx.r10.s64 + -28984;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a4a8
	ctx.lr = 0x821F40B4;
	sub_8219A4A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x821F40C4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x821F40D4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120ac0
	ctx.lr = 0x821F40E4;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,22676
	ctx.r4.s64 = ctx.r11.s64 + 22676;
	// bl 0x82120600
	ctx.lr = 0x821F40F4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,22708
	ctx.r4.s64 = ctx.r11.s64 + 22708;
	// bl 0x82120600
	ctx.lr = 0x821F4104;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120600
	ctx.lr = 0x821F4110;
	sub_82120600(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6180);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r1,720
	ctx.r6.s64 = ctx.r1.s64 + 720;
	// addi r7,r10,-30056
	ctx.r7.s64 = ctx.r10.s64 + -30056;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219a4a8
	ctx.lr = 0x821F4130;
	sub_8219A4A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120ac0
	ctx.lr = 0x821F4140;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82120ac0
	ctx.lr = 0x821F4150;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82120ac0
	ctx.lr = 0x821F4160;
	sub_82120AC0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

DEFINE_REX_FUNC(sub_82207478) {
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
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822074a4
	if (ctx.cr0.eq) goto loc_822074A4;
	// bl 0x8269ce98
	ctx.lr = 0x822074A4;
	sub_8269CE98(ctx, base);
loc_822074A4:
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

DEFINE_REX_FUNC(sub_82208770) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,31560
	ctx.r11.s64 = ctx.r11.s64 + 31560;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822087cc
	if (ctx.cr6.eq) goto loc_822087CC;
	// bl 0x82179fd8
	ctx.lr = 0x822087AC;
	sub_82179FD8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822087C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_822087CC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8216bb58
	ctx.lr = 0x822087D4;
	sub_8216BB58(ctx, base);
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

DEFINE_REX_FUNC(sub_8220C1E0) {
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
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x822f6280
	ctx.lr = 0x8220C1F8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220c21c
	if (ctx.cr0.eq) goto loc_8220C21C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268f38
	ctx.lr = 0x8220C208;
	sub_82268F38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-32416
	ctx.r11.s64 = ctx.r11.s64 + -32416;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220c220
	goto loc_8220C220;
loc_8220C21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C220:
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

DEFINE_REX_FUNC(sub_8220DED0) {
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
	ctx.lr = 0x8220DEE8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220df1c
	if (ctx.cr0.eq) goto loc_8220DF1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220DEF8;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-30608
	ctx.r11.s64 = ctx.r11.s64 + -30608;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120ac0
	ctx.lr = 0x8220DF14;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220df20
	goto loc_8220DF20;
loc_8220DF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220DF20:
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

DEFINE_REX_FUNC(sub_82211A80) {
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
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r11,r11,38527
	ctx.r11.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82211ac0
	if (!ctx.cr6.lt) goto loc_82211AC0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82211AC0:
	// stw r11,872(r31)
	REX_STORE_U32(r31.u32 + 872, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82213BE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14052
	ctx.r3.s64 = ctx.r11.s64 + -14052;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82213C28) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82213C48;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82213C5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82213c7c
	if (ctx.cr0.eq) goto loc_82213C7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x82213C74;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82213c80
	goto loc_82213C80;
loc_82213C7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82213C80:
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82213C88;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82213C90;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82213d04
	if (ctx.cr0.eq) goto loc_82213D04;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82213CB8;
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
	ctx.lr = 0x82213CCC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82213cf8
	if (ctx.cr0.eq) goto loc_82213CF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,15768
	ctx.r10.s64 = ctx.r10.s64 + 15768;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82213cfc
	goto loc_82213CFC;
loc_82213CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82213CFC:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82213d08
	goto loc_82213D08;
loc_82213D04:
	// li r31,0
	r31.s64 = 0;
loc_82213D08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x82213D14;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x82213D24;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_822206C0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,488
	ctx.r3.s64 = ctx.r3.s64 + 488;
	// lwz r4,484(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// b 0x82213de8
	sub_82213DE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82220A30) {
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
	ctx.lr = 0x82220A38;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// bl 0x8216b740
	ctx.lr = 0x82220A54;
	sub_8216B740(ctx, base);
	// lbz r10,704(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 704);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82220e14
	if (ctx.cr0.eq) goto loc_82220E14;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,-26772
	ctx.r9.s64 = ctx.r9.s64 + -26772;
loc_82220A70:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220a94
	if (ctx.cr0.eq) goto loc_82220A94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220a70
	if (ctx.cr6.eq) goto loc_82220A70;
loc_82220A94:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220aa8
	if (!ctx.cr0.eq) goto loc_82220AA8;
	// lwz r11,708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 708);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x82220b78
	goto loc_82220B78;
loc_82220AA8:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-26764
	ctx.r9.s64 = ctx.r9.s64 + -26764;
loc_82220AB4:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220ad8
	if (ctx.cr0.eq) goto loc_82220AD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220ab4
	if (ctx.cr6.eq) goto loc_82220AB4;
loc_82220AD8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220aec
	if (!ctx.cr0.eq) goto loc_82220AEC;
	// lwz r11,708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 708);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x82220b78
	goto loc_82220B78;
loc_82220AEC:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-26736
	ctx.r9.s64 = ctx.r9.s64 + -26736;
loc_82220AF8:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220b1c
	if (ctx.cr0.eq) goto loc_82220B1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220af8
	if (ctx.cr6.eq) goto loc_82220AF8;
loc_82220B1C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220b34
	if (!ctx.cr0.eq) goto loc_82220B34;
	// lwz r11,708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 708);
	// lwz r10,484(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 484);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82220b78
	goto loc_82220B78;
loc_82220B34:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-26720
	ctx.r9.s64 = ctx.r9.s64 + -26720;
loc_82220B40:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220b64
	if (ctx.cr0.eq) goto loc_82220B64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220b40
	if (ctx.cr6.eq) goto loc_82220B40;
loc_82220B64:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220b84
	if (!ctx.cr0.eq) goto loc_82220B84;
	// lwz r10,708(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 708);
	// lwz r11,484(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 484);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82220B78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822208d8
	ctx.lr = 0x82220B80;
	sub_822208D8(ctx, base);
	// b 0x82220e14
	goto loc_82220E14;
loc_82220B84:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-26824
	ctx.r9.s64 = ctx.r9.s64 + -26824;
loc_82220B90:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220bb4
	if (ctx.cr0.eq) goto loc_82220BB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220b90
	if (ctx.cr6.eq) goto loc_82220B90;
loc_82220BB4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220cf0
	if (!ctx.cr0.eq) goto loc_82220CF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220e14
	if (ctx.cr0.eq) goto loc_82220E14;
	// lwz r31,708(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 708);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82220c00
	if (ctx.cr6.lt) goto loc_82220C00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-25432
	ctx.r4.s64 = ctx.r11.s64 + -25432;
	// addi r3,r10,-25384
	ctx.r3.s64 = ctx.r10.s64 + -25384;
	// li r5,299
	ctx.r5.s64 = 299;
	// bl 0x821231d0
	ctx.lr = 0x82220C00;
	sub_821231D0(ctx, base);
loc_82220C00:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x8228ca78
	ctx.lr = 0x82220C0C;
	sub_8228CA78(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r30,r11,1624
	r30.s64 = ctx.r11.s64 + 1624;
	// addi r4,r9,30636
	ctx.r4.s64 = ctx.r9.s64 + 30636;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x82220C2C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x8215f670
	ctx.lr = 0x82220C3C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25312
	ctx.r4.s64 = ctx.r11.s64 + -25312;
	// bl 0x8215fbf8
	ctx.lr = 0x82220C48;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x8215f670
	ctx.lr = 0x82220C70;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82220C78;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x8215f338
	ctx.lr = 0x82220C94;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x8215f338
	ctx.lr = 0x82220CA0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82220CA4;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82220CB8;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// bl 0x8215f670
	ctx.lr = 0x82220CC4;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82220CCC;
	sub_8215F0F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r10,-25300
	ctx.r3.s64 = ctx.r10.s64 + -25300;
	// bl 0x8216bc98
	ctx.lr = 0x82220CEC;
	sub_8216BC98(ctx, base);
	// b 0x82220e14
	goto loc_82220E14;
loc_82220CF0:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-26800
	ctx.r9.s64 = ctx.r9.s64 + -26800;
loc_82220CFC:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82220d20
	if (ctx.cr0.eq) goto loc_82220D20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220cfc
	if (ctx.cr6.eq) goto loc_82220CFC;
loc_82220D20:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82220d34
	if (!ctx.cr0.eq) goto loc_82220D34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82220ed0
	ctx.lr = 0x82220D30;
	sub_82220ED0(ctx, base);
	// b 0x82220e14
	goto loc_82220E14;
loc_82220D34:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,-26688
	ctx.r10.s64 = ctx.r10.s64 + -26688;
loc_82220D3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82220d60
	if (ctx.cr0.eq) goto loc_82220D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82220d3c
	if (ctx.cr6.eq) goto loc_82220D3C;
loc_82220D60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82220e14
	if (!ctx.cr0.eq) goto loc_82220E14;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220e14
	if (ctx.cr0.eq) goto loc_82220E14;
	// lwz r31,708(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 708);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82220dac
	if (ctx.cr6.lt) goto loc_82220DAC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-25432
	ctx.r4.s64 = ctx.r11.s64 + -25432;
	// addi r3,r10,-25384
	ctx.r3.s64 = ctx.r10.s64 + -25384;
	// li r5,322
	ctx.r5.s64 = 322;
	// bl 0x821231d0
	ctx.lr = 0x82220DAC;
	sub_821231D0(ctx, base);
loc_82220DAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x8228ca78
	ctx.lr = 0x82220DB8;
	sub_8228CA78(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220E14:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223AA40) {
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
	ctx.lr = 0x8223AA48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// ble cr6,0x8223aba0
	if (!ctx.cr6.gt) goto loc_8223ABA0;
loc_8223AA70:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8223ab00
	if (!ctx.cr6.gt) goto loc_8223AB00;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223abc0
	ctx.lr = 0x8223AA8C;
	sub_8223ABC0(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8223aadc
	if (!ctx.cr6.lt) goto loc_8223AADC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223aa40
	ctx.lr = 0x8223AAD4;
	sub_8223AA40(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8223aaec
	goto loc_8223AAEC;
loc_8223AADC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223aa40
	ctx.lr = 0x8223AAE8;
	sub_8223AA40(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8223AAEC:
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x8223aa70
	if (ctx.cr6.gt) goto loc_8223AA70;
loc_8223AB00:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8223aba0
	if (!ctx.cr6.gt) goto loc_8223ABA0;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x8223abb8
	if (!ctx.cr6.gt) goto loc_8223ABB8;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8223ab50
	if (!ctx.cr0.gt) goto loc_8223AB50;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_8223AB24:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223afc8
	ctx.lr = 0x8223AB48;
	sub_8223AFC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8223ab24
	if (ctx.cr6.gt) goto loc_8223AB24;
loc_8223AB50:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x8223abb8
	if (!ctx.cr6.gt) goto loc_8223ABB8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_8223AB60:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8223afc8
	ctx.lr = 0x8223AB8C;
	sub_8223AFC8(ctx, base);
	// rlwinm r10,r30,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x8223ab60
	if (ctx.cr6.gt) goto loc_8223AB60;
	// b 0x8223abb8
	goto loc_8223ABB8;
loc_8223ABA0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8223abb8
	if (!ctx.cr6.gt) goto loc_8223ABB8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223ae80
	ctx.lr = 0x8223ABB8;
	sub_8223AE80(ctx, base);
loc_8223ABB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82246068) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13364
	ctx.r3.s64 = ctx.r11.s64 + -13364;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246280) {
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
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822462AC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822462B4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822462c4
	if (ctx.cr0.eq) goto loc_822462C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822462C4;
	sub_8269CE98(ctx, base);
loc_822462C4:
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

DEFINE_REX_FUNC(sub_82249D98) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8224a1e0
	sub_8224A1E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224AFA8) {
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
	// bl 0x8224b070
	ctx.lr = 0x8224AFC8;
	sub_8224B070(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224afd8
	if (ctx.cr0.eq) goto loc_8224AFD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224AFD8;
	sub_8269CE98(ctx, base);
loc_8224AFD8:
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

DEFINE_REX_FUNC(sub_8224D238) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,472(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,620(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 620, temp.u32);
	// lwz r11,436(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 436);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8224d3a4
	if (!ctx.cr6.gt) goto loc_8224D3A4;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// lfs f0,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x8224d3a4
	if (!ctx.cr6.gt) goto loc_8224D3A4;
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,564(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 564);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lfs f12,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8224D2E0;
	sub_823FBD18(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// addi r8,r8,-12732
	ctx.r8.s64 = ctx.r8.s64 + -12732;
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// std r9,140(r1)
	REX_STORE_U64(ctx.r1.u32 + 140, ctx.r9.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,132(r1)
	REX_STORE_U64(ctx.r1.u32 + 132, ctx.r11.u64);
	// lwz r3,6168(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 6168);
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224d39c
	if (!ctx.cr0.eq) goto loc_8224D39C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8214a280
	ctx.lr = 0x8224D344;
	sub_8214A280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224d39c
	if (ctx.cr0.eq) goto loc_8224D39C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r10,-13300
	ctx.r10.s64 = ctx.r10.s64 + -13300;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185dc0
	ctx.lr = 0x8224D39C;
	sub_82185DC0(ctx, base);
loc_8224D39C:
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 620, temp.u32);
loc_8224D3A4:
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8224d448
	if (!ctx.cr6.gt) goto loc_8224D448;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8224c840
	ctx.lr = 0x8224D3DC;
	sub_8224C840(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8224d448
	if (!ctx.cr6.gt) goto loc_8224D448;
	// lfs f12,672(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 672);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,668(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 668);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8224d44c
	if (!ctx.cr6.lt) goto loc_8224D44C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8224d44c
	if (ctx.cr6.lt) goto loc_8224D44C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-13284
	ctx.r5.s64 = ctx.r10.s64 + -13284;
	// lwz r3,6296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224d44c
	goto loc_8224D44C;
loc_8224D448:
	// stfs f31,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
loc_8224D44C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

DEFINE_REX_FUNC(sub_8225F418) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8225F420;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8226f580
	ctx.lr = 0x8225F444;
	sub_8226F580(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-2544
	ctx.r9.s64 = ctx.r11.s64 + -2544;
	// li r29,0
	r29.s64 = 0;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8225F460:
	// lwzu r10,272(r9)
	ea = 272 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8225f460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225F460;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f58c
	if (ctx.cr6.eq) goto loc_8225F58C;
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
	ctx.lr = 0x8225F48C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8225f520
	if (!ctx.cr6.eq) goto loc_8225F520;
	// bl 0x8226fd68
	ctx.lr = 0x8225F498;
	sub_8226FD68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8225f58c
	if (ctx.cr0.eq) goto loc_8225F58C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F4C0;
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
	ctx.lr = 0x8225F4D8;
	sub_8216B6A8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x8225f4f8
	if (!ctx.cr6.eq) goto loc_8225F4F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r11,-26236
	ctx.r5.s64 = ctx.r11.s64 + -26236;
	// b 0x8225f504
	goto loc_8225F504;
loc_8225F4F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r11,-26200
	ctx.r5.s64 = ctx.r11.s64 + -26200;
loc_8225F504:
	// bl 0x8216b6a8
	ctx.lr = 0x8225F508;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8225F518;
	sub_8216BC98(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8225f584
	goto loc_8225F584;
loc_8225F520:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F540;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-8076
	ctx.r5.s64 = ctx.r11.s64 + -8076;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F558;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r11,-8056
	ctx.r5.s64 = ctx.r11.s64 + -8056;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F570;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8225F580;
	sub_8216BC98(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
loc_8225F584:
	// stw r11,1596(r30)
	REX_STORE_U32(r30.u32 + 1596, ctx.r11.u32);
	// b 0x8225f59c
	goto loc_8225F59C;
loc_8225F58C:
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225F59C;
	sub_8225B1C8(ctx, base);
loc_8225F59C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82267678) {
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
	ctx.lr = 0x82267680;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24588
	ctx.r4.s64 = ctx.r11.s64 + -24588;
	// bl 0x8215f338
	ctx.lr = 0x82267690;
	sub_8215F338(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a6a80
	ctx.lr = 0x8226769C;
	sub_821A6A80(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// lis r26,-32106
	r26.s64 = -2104098816;
loc_822676A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822676bc
	if (!ctx.cr6.eq) goto loc_822676BC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822676c0
	goto loc_822676C0;
loc_822676BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822676C0:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82267794
	if (!ctx.cr6.lt) goto loc_82267794;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f530
	ctx.lr = 0x822676D4;
	sub_8215F530(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822676E4;
	sub_8215F2D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
loc_822676EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82267710
	if (!ctx.cr6.eq) goto loc_82267710;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82267714
	goto loc_82267714;
loc_82267710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82267714:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226778c
	if (!ctx.cr6.lt) goto loc_8226778C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82267728;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8226772C;
	sub_8215FA30(ctx, base);
	// lwz r11,6040(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6040);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267784
	if (ctx.cr0.eq) goto loc_82267784;
	// lwz r3,6040(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6040);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82124e10
	ctx.lr = 0x82267784;
	sub_82124E10(ctx, base);
loc_82267784:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x822676ec
	goto loc_822676EC;
loc_8226778C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x822676a4
	goto loc_822676A4;
loc_82267794:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822677bc
	goto loc_822677BC;
loc_822677A0:
	// lwz r3,6040(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6040);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822677B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822677BC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x822677a0
	if (!ctx.cr6.eq) goto loc_822677A0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a6af8
	ctx.lr = 0x822677CC;
	sub_821A6AF8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269ce98
	ctx.lr = 0x822677D4;
	sub_8269CE98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82270F08) {
	REX_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822718E8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,668(r3)
	REX_STORE_U8(ctx.r3.u32 + 668, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82272558
	ctx.lr = 0x8227190C;
	sub_82272558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,668(r31)
	REX_STORE_U8(r31.u32 + 668, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822725E0) {
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
	ctx.lr = 0x822725E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// li r20,0
	r20.s64 = 0;
	// addi r23,r9,-7312
	r23.s64 = ctx.r9.s64 + -7312;
	// addi r19,r8,-17164
	r19.s64 = ctx.r8.s64 + -17164;
	// addi r25,r10,-17148
	r25.s64 = ctx.r10.s64 + -17148;
	// addi r21,r11,-17296
	r21.s64 = ctx.r11.s64 + -17296;
loc_8227261C:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82272640
	if (!ctx.cr6.eq) goto loc_82272640;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82272644
	goto loc_82272644;
loc_82272640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272644:
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272838
	if (!ctx.cr6.lt) goto loc_82272838;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82272658;
	sub_8215F1B0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272664;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272668;
	sub_8215FA30(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f270
	ctx.lr = 0x82272670;
	sub_8215F270(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
loc_82272678:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82272690
	if (!ctx.cr6.eq) goto loc_82272690;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82272694
	goto loc_82272694;
loc_82272690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272694:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822726e8
	if (!ctx.cr6.lt) goto loc_822726E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x822726A8;
	sub_8215F530(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x822726B4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822726e0
	if (ctx.cr0.eq) goto loc_822726E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822726C8;
	sub_8215F2D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x822726D8;
	sub_8215F5F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215efb0
	ctx.lr = 0x822726E0;
	sub_8215EFB0(ctx, base);
loc_822726E0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82272678
	goto loc_82272678;
loc_822726E8:
	// li r26,0
	r26.s64 = 0;
loc_822726EC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x822726F8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8227271c
	if (!ctx.cr6.eq) goto loc_8227271C;
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
	// b 0x82272720
	goto loc_82272720;
loc_8227271C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272720:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272830
	if (!ctx.cr6.lt) goto loc_82272830;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272734;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8227273C;
	sub_8215F1B0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272748;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227274C;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272828
	if (!ctx.cr0.eq) goto loc_82272828;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8227277C;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x82272780;
	sub_8215F270(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
loc_82272788:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822727a0
	if (!ctx.cr6.eq) goto loc_822727A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822727a4
	goto loc_822727A4;
loc_822727A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822727A4:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272828
	if (!ctx.cr6.lt) goto loc_82272828;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f530
	ctx.lr = 0x822727B8;
	sub_8215F530(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x822727C4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822727fc
	if (!ctx.cr0.eq) goto loc_822727FC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x822727D8;
	sub_8215F670(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822727E8;
	sub_8215F2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bl 0x822725e0
	ctx.lr = 0x822727F8;
	sub_822725E0(ctx, base);
	// b 0x82272820
	goto loc_82272820;
loc_822727FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82272808;
	sub_8215F2D0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82272818;
	sub_8215F5F8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82272820;
	sub_8215EFB0(ctx, base);
loc_82272820:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x82272788
	goto loc_82272788;
loc_82272828:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x822726ec
	goto loc_822726EC;
loc_82272830:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8227261c
	goto loc_8227261C;
loc_82272838:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_822840D0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lfs f0,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// li r3,288
	ctx.r3.s64 = 288;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r11,84(r31)
	REX_STORE_U8(r31.u32 + 84, ctx.r11.u8);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// stb r30,108(r31)
	REX_STORE_U8(r31.u32 + 108, r30.u8);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// std r10,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r10.u64);
	// std r9,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r9.u64);
	// std r8,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r8.u64);
	// bl 0x822f6280
	ctx.lr = 0x822841C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822841d8
	if (ctx.cr0.eq) goto loc_822841D8;
	// bl 0x821e5978
	ctx.lr = 0x822841D4;
	sub_821E5978(ctx, base);
	// b 0x822841dc
	goto loc_822841DC;
loc_822841D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822841DC:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8228A618) {
	REX_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228AA10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228ADF0) {
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
	ctx.lr = 0x8228ADF8;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-27304
	r29.s64 = ctx.r11.s64 + -27304;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x8228ae90
	if (ctx.cr6.eq) goto loc_8228AE90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8228ae90
	if (!ctx.cr6.gt) goto loc_8228AE90;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AE4C;
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
	ctx.lr = 0x8228AE64;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,29
	ctx.r6.s64 = 29;
	// addi r5,r11,3236
	ctx.r5.s64 = ctx.r11.s64 + 3236;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AE7C;
	sub_8216B6A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8216bc98
	ctx.lr = 0x8228AE88;
	sub_8216BC98(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_8228AE90:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228af4c
	if (ctx.cr6.eq) goto loc_8228AF4C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8228aed4
	if (!ctx.cr6.eq) goto loc_8228AED4;
	// stw r30,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r11,-26364
	ctx.r3.s64 = ctx.r11.s64 + -26364;
	// bl 0x8216bc98
	ctx.lr = 0x8228AED4;
	sub_8216BC98(ctx, base);
loc_8228AED4:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8228af44
	if (!ctx.cr6.eq) goto loc_8228AF44;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AEFC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AF14;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r5,r11,-844
	ctx.r5.s64 = ctx.r11.s64 + -844;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8228AF2C;
	sub_8216B6A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x8216bc98
	ctx.lr = 0x8228AF38;
	sub_8216BC98(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// b 0x8228af4c
	goto loc_8228AF4C;
loc_8228AF44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b258
	ctx.lr = 0x8228AF4C;
	sub_8228B258(ctx, base);
loc_8228AF4C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82292E40) {
	REX_FUNC_PROLOGUE();
	// li r3,248
	ctx.r3.s64 = 248;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293220) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229325c
	if (ctx.cr6.eq) goto loc_8229325C;
	// lwz r4,36(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x82293220
	ctx.lr = 0x82293250;
	sub_82293220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bl 0x82293220
	ctx.lr = 0x8229325C;
	sub_82293220(ctx, base);
loc_8229325C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82293270
	if (!ctx.cr6.eq) goto loc_82293270;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82293270:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822932a0
	if (ctx.cr6.eq) goto loc_822932A0;
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
	ctx.lr = 0x822932A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822932A0:
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

DEFINE_REX_FUNC(sub_82299F58) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229C868) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r9,r10,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8229c8f8
	if (!ctx.cr6.lt) goto loc_8229C8F8;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229c8f8
	if (ctx.cr6.eq) goto loc_8229C8F8;
	// lwz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
loc_8229C8D0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8229c8f0
	if (ctx.cr6.eq) goto loc_8229C8F0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229c8d0
	if (!ctx.cr6.eq) goto loc_8229C8D0;
loc_8229C8F0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229c900
	if (!ctx.cr6.eq) goto loc_8229C900;
loc_8229C8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229C900:
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3710) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A3734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4678) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x822A4680;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A46AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
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
	ctx.lr = 0x822A4724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1100(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f13,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 + f29.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f11,f10,f10
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822B33A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f10,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f6,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x822b34a4
	if (!ctx.cr6.gt) goto loc_822B34A4;
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f9,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f4.f64)));
	// fmadds f4,f8,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// fdivs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x822b3438
	if (ctx.cr6.lt) goto loc_822B3438;
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f5,f5,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f0.f64)));
	// blr 
	return;
loc_822B3438:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x822b3468
	if (ctx.cr6.gt) goto loc_822B3468;
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f10,f10,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// blr 
	return;
loc_822B3468:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r11,3
	ctx.r11.s64 = 3;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// blr 
	return;
loc_822B34A4:
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BD200) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822BD208;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r31,r3,248
	r31.s64 = ctx.r3.s64 + 248;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822bd2e4
	if (!ctx.cr6.eq) goto loc_822BD2E4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822bd234
	if (!ctx.cr0.eq) goto loc_822BD234;
	// li r29,1
	r29.s64 = 1;
loc_822BD234:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822bd2e4
	if (!ctx.cr6.lt) goto loc_822BD2E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822bd254
	if (ctx.cr6.eq) goto loc_822BD254;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822BD24C;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822bd258
	goto loc_822BD258;
loc_822BD254:
	// li r30,0
	r30.s64 = 0;
loc_822BD258:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bd290
	if (!ctx.cr6.gt) goto loc_822BD290;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822BD270:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd284
	if (ctx.cr6.eq) goto loc_822BD284;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822BD284:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bd270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BD270;
loc_822BD290:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd2d4
	if (ctx.cr6.eq) goto loc_822BD2D4;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bd2cc
	if (ctx.cr0.eq) goto loc_822BD2CC;
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
	ctx.lr = 0x822BD2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BD2CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822BD2D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822BD2E4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd2fc
	if (ctx.cr0.eq) goto loc_822BD2FC;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_822BD2FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C2528) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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

DEFINE_REX_FUNC(sub_822C2EC0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3028) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12068(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3300) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
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

DEFINE_REX_FUNC(sub_822C3A98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4368) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5568) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5E78) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_822C5E8C:
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
	// bne 0x822c5e8c
	if (!ctx.cr0.eq) goto loc_822C5E8C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822c5ed4
	if (!ctx.cr6.eq) goto loc_822C5ED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x822c5ed4
	if (!ctx.cr6.eq) goto loc_822C5ED4;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5ed4
	if (ctx.cr0.eq) goto loc_822C5ED4;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x822c5e78
	ctx.lr = 0x822C5ED4;
	sub_822C5E78(ctx, base);
loc_822C5ED4:
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

DEFINE_REX_FUNC(sub_822CB780) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x822cb7f8
	goto loc_822CB7F8;
loc_822CB7B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andi. r9,r9,24702
	ctx.r9.u64 = ctx.r9.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822cb7f4
	if (ctx.cr0.eq) goto loc_822CB7F4;
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cb7f4
	if (!ctx.cr0.eq) goto loc_822CB7F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822cb7f4
	if (ctx.cr6.gt) goto loc_822CB7F4;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822cb804
	if (ctx.cr6.lt) goto loc_822CB804;
loc_822CB7F4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_822CB7F8:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822cb7b0
	if (ctx.cr6.lt) goto loc_822CB7B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822CB804:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb8cc
	if (ctx.cr6.eq) goto loc_822CB8CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// beq cr6,0x822cb840
	if (ctx.cr6.eq) goto loc_822CB840;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,16,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r9.u64 & 0xFFF0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x822cb858
	goto loc_822CB858;
loc_822CB840:
	// lis r8,-4096
	ctx.r8.s64 = -268435456;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// rlwimi r8,r9,16,4,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFF0000) | (ctx.r8.u64 & 0xFFFFFFFFF000FFFF);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822CB858:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cb8cc
	if (ctx.cr0.eq) goto loc_822CB8CC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822cb8cc
	if (ctx.cr6.eq) goto loc_822CB8CC;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cb8cc
	if (!ctx.cr6.eq) goto loc_822CB8CC;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r7,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r7.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x826a2e60
	ctx.lr = 0x822CB89C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x822CB8AC;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x826a2e60
	ctx.lr = 0x822CB8BC;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826a2e60
	ctx.lr = 0x822CB8CC;
	sub_826A2E60(ctx, base);
loc_822CB8CC:
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

DEFINE_REX_FUNC(sub_822D58C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822D58D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,10941(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10941);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,15140(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 15140);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// bne 0x822d5a08
	if (!ctx.cr0.eq) goto loc_822D5A08;
	// lbz r11,10940(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d5964
	if (ctx.cr0.eq) goto loc_822D5964;
	// lwz r11,13728(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d5a08
	if (ctx.cr6.eq) goto loc_822D5A08;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d5a08
	if (!ctx.cr6.eq) goto loc_822D5A08;
	// subf r11,r30,r28
	ctx.r11.u64 = r28.u64 - r30.u64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822d5a08
	if (ctx.cr0.eq) goto loc_822D5A08;
	// lwz r11,13752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13752);
	// lwz r3,13748(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 13748);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d5938
	if (ctx.cr6.lt) goto loc_822D5938;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8e60
	ctx.lr = 0x822D5938;
	sub_822D8E60(ctx, base);
loc_822D5938:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13748(r31)
	REX_STORE_U32(r31.u32 + 13748, ctx.r8.u32);
	// b 0x822d5a08
	goto loc_822D5A08;
loc_822D5964:
	// lwz r11,13408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d59c8
	if (ctx.cr6.eq) goto loc_822D59C8;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x822d5a08
	if (ctx.cr0.eq) goto loc_822D5A08;
	// lwz r11,13580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13580);
	// addi r3,r31,13568
	ctx.r3.s64 = r31.s64 + 13568;
	// lwz r10,13584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13584);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d59b0
	if (!ctx.cr6.gt) goto loc_822D59B0;
	// bl 0x822d4978
	ctx.lr = 0x822D59AC;
	sub_822D4978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D59B0:
	// oris r10,r30,33024
	ctx.r10.u64 = r30.u64 | 2164260864;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13580(r31)
	REX_STORE_U32(r31.u32 + 13580, ctx.r9.u32);
	// b 0x822d5a08
	goto loc_822D5A08;
loc_822D59C8:
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d57d8
	ctx.lr = 0x822D59D4;
	sub_822D57D8(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r4
	ctx.r9.u64 = ctx.r4.u64 - r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13568
	ctx.r8.s64 = r31.s64 + 13568;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5a50
	ctx.lr = 0x822D5A04;
	sub_822D5A50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822D5A08:
	// addi r11,r28,31
	ctx.r11.s64 = r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d5a34
	if (!ctx.cr6.gt) goto loc_822D5A34;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5048
	ctx.lr = 0x822D5A30;
	sub_822D5048(ctx, base);
	// b 0x822d5a44
	goto loc_822D5A44;
loc_822D5A34:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,15140(r31)
	REX_STORE_U32(r31.u32 + 15140, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_822D5A44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822E2928) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x822E2930;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c84
	ctx.lr = 0x822E2938;
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwinm r31,r4,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f21,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f21.f64 = double(temp.f32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f22,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f22.f64 = double(temp.f32);
	// beq cr6,0x822e2d20
	if (ctx.cr6.eq) goto loc_822E2D20;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822e2c18
	if (ctx.cr6.eq) goto loc_822E2C18;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x822e2b9c
	if (ctx.cr6.eq) goto loc_822E2B9C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822e2b3c
	if (ctx.cr6.eq) goto loc_822E2B3C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x822e2a90
	if (ctx.cr6.eq) goto loc_822E2A90;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x822e2a00
	if (ctx.cr6.eq) goto loc_822E2A00;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822e2a00
	if (!ctx.cr6.eq) goto loc_822E2A00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e29c8
	if (ctx.cr6.eq) goto loc_822E29C8;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822e29c8
	if (ctx.cr0.eq) goto loc_822E29C8;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_822E29C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822e29c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E29C0;
loc_822E29C8:
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e2e14
	if (!ctx.cr6.lt) goto loc_822E2E14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822E29EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f22,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e29ec
	if (ctx.cr6.lt) goto loc_822E29EC;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2A00:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_822E2A18:
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e2a44
	if (ctx.cr6.lt) goto loc_822E2A44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e2a44
	if (!ctx.cr6.lt) goto loc_822E2A44;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822e2a6c
	goto loc_822E2A6C;
loc_822E2A44:
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822e2a7c
	if (!ctx.cr6.lt) goto loc_822E2A7C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e2a7c
	if (ctx.cr6.lt) goto loc_822E2A7C;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_822E2A6C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x822e2a80
	goto loc_822E2A80;
loc_822E2A7C:
	// stfs f21,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_822E2A80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822e2a18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E2A18;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2A90:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	f29.f64 = double(temp.f32);
	// fdivs f28,f22,f31
	f28.f64 = double(float(f22.f64 / f31.f64));
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822E2AC4:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// fmuls f31,f0,f20
	f31.f64 = double(float(ctx.f0.f64 * f20.f64));
	// fcmpu cr6,f31,f21
	ctx.cr6.compare(f31.f64, f21.f64);
	// bne cr6,0x822e2af0
	if (!ctx.cr6.eq) goto loc_822E2AF0;
	// fmr f30,f22
	f30.f64 = f22.f64;
	// b 0x822e2b00
	goto loc_822E2B00;
loc_822E2AF0:
	// fmuls f30,f31,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f31.f64 * f29.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82139c28
	ctx.lr = 0x822E2AFC;
	sub_82139C28(ctx, base);
	// fdivs f30,f1,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 / f30.f64));
loc_822E2B00:
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 * f31.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// bne cr6,0x822e2b14
	if (!ctx.cr6.eq) goto loc_822E2B14;
	// fmr f0,f22
	ctx.f0.f64 = f22.f64;
	// b 0x822e2b24
	goto loc_822E2B24;
loc_822E2B14:
	// fmuls f31,f0,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82139c28
	ctx.lr = 0x822E2B20;
	sub_82139C28(ctx, base);
	// fdivs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / f31.f64));
loc_822E2B24:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsu f0,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// blt cr6,0x822e2ac4
	if (ctx.cr6.lt) goto loc_822E2AC4;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2B3C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822E2B68:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f1,f0,f20
	ctx.f1.f64 = double(float(ctx.f0.f64 * f20.f64));
	// bl 0x822e2838
	ctx.lr = 0x822E2B88;
	sub_822E2838(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822e2b68
	if (ctx.cr6.lt) goto loc_822E2B68;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2B9C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fdivs f31,f22,f31
	f31.f64 = double(float(f22.f64 / f31.f64));
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// lfs f29,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	f29.f64 = double(temp.f32);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822E2BD4:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * f20.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x822e2048
	ctx.lr = 0x822E2C04;
	sub_822E2048(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822e2bd4
	if (ctx.cr6.lt) goto loc_822E2BD4;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2C18:
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// lfs f27,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	f27.f64 = double(temp.f32);
	// stfs f21,84(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f28,f22,f30
	f28.f64 = double(float(f22.f64 / f30.f64));
	// stfs f21,88(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// stfs f21,92(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
loc_822E2C60:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// vor128 v11,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f6,f30
	ctx.f0.f64 = double(float(ctx.f6.f64 - f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fnmsubs f0,f0,f0,f22
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -f22.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v127.f32)));
	// vcmpeqfp128 v62,v0,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsel v13,v0,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822e2670
	ctx.lr = 0x822E2CD0;
	sub_822E2670(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822e2670
	ctx.lr = 0x822E2CDC;
	sub_822E2670(ctx, base);
	// fsubs f0,f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - f30.f64));
	// fdivs f29,f5,f1
	f29.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * f20.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// bne cr6,0x822e2cf8
	if (!ctx.cr6.eq) goto loc_822E2CF8;
	// fmr f0,f22
	ctx.f0.f64 = f22.f64;
	// b 0x822e2d08
	goto loc_822E2D08;
loc_822E2CF8:
	// fmuls f26,f0,f27
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x82139c28
	ctx.lr = 0x822E2D04;
	sub_82139C28(ctx, base);
	// fdivs f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / f26.f64));
loc_822E2D08:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822e2c60
	if (ctx.cr6.lt) goto loc_822E2C60;
	// b 0x822e2e14
	goto loc_822E2E14;
loc_822E2D20:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 716);
	f27.f64 = double(temp.f32);
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f26,712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 712);
	f26.f64 = double(temp.f32);
	// lfs f25,708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 708);
	f25.f64 = double(temp.f32);
	// lfs f28,576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 576);
	f28.f64 = double(temp.f32);
	// lfs f24,168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	f24.f64 = double(temp.f32);
	// lfs f29,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f29.f64 = double(temp.f32);
	// lfs f30,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	f30.f64 = double(temp.f32);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822E2D6C:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - f23.f64));
	// fmuls f31,f0,f20
	f31.f64 = double(float(ctx.f0.f64 * f20.f64));
	// fabs f0,f31
	ctx.f0.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, f22.f64);
	// bge cr6,0x822e2dc0
	if (!ctx.cr6.lt) goto loc_822E2DC0;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// bl 0x822e2048
	ctx.lr = 0x822E2DA0;
	sub_822E2048(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	f19.f64 = ctx.f1.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822e2048
	ctx.lr = 0x822E2DB0;
	sub_822E2048(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// fmsubs f0,f19,f25,f0
	ctx.f0.f64 = double(float(std::fma(f19.f64, f25.f64, -ctx.f0.f64)));
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// b 0x822e2e04
	goto loc_822E2E04;
loc_822E2DC0:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x822e2e00
	if (!ctx.cr6.lt) goto loc_822E2E00;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822e2048
	ctx.lr = 0x822E2DD8;
	sub_822E2048(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	f19.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// bl 0x822e2048
	ctx.lr = 0x822E2DE8;
	sub_822E2048(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fabs f13,f31
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// fmsubs f0,f19,f28,f0
	ctx.f0.f64 = double(float(std::fma(f19.f64, f28.f64, -ctx.f0.f64)));
	// fnmsubs f0,f13,f26,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f26.f64, -ctx.f0.f64)));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// b 0x822e2e04
	goto loc_822E2E04;
loc_822E2E00:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f21.f64;
loc_822E2E04:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfsu f0,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// blt cr6,0x822e2d6c
	if (ctx.cr6.lt) goto loc_822E2D6C;
loc_822E2E14:
	// stfs f21,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_822E2E20:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f21.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822e2e5c
	if (ctx.cr6.eq) goto loc_822E2E5C;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822E2E34:
	// lfsu f13,64(r10)
	ctx.fpscr.disableFlushMode();
	ea = 64 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x822e2e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E2E34;
	// fdivs f0,f22,f0
	ctx.f0.f64 = double(float(f22.f64 / ctx.f0.f64));
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822E2E4C:
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f13,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e2e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E2E4C;
loc_822E2E5C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822e2e20
	if (!ctx.cr0.eq) goto loc_822E2E20;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cd0
	ctx.lr = 0x822E2E7C;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8230CA10) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lbz r11,-10792(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -10792);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8230cbb4
	if (!ctx.cr0.eq) goto loc_8230CBB4;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-10792(r9)
	REX_STORE_U8(ctx.r9.u32 + -10792, ctx.r11.u8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,-10804(r8)
	REX_STORE_U32(ctx.r8.u32 + -10804, ctx.r10.u32);
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// bl 0x8233e6b8
	ctx.lr = 0x8230CA58;
	sub_8233E6B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230cbb8
	if (!ctx.cr0.eq) goto loc_8230CBB8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-10812
	ctx.r3.s64 = ctx.r11.s64 + -10812;
	// bl 0x8233e6b8
	ctx.lr = 0x8230CA70;
	sub_8233E6B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230cbb8
	if (!ctx.cr0.eq) goto loc_8230CBB8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r4,r11,-10796
	ctx.r4.s64 = ctx.r11.s64 + -10796;
	// addi r3,r10,-6376
	ctx.r3.s64 = ctx.r10.s64 + -6376;
	// bl 0x82342028
	ctx.lr = 0x8230CA8C;
	sub_82342028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230cbb8
	if (!ctx.cr0.eq) goto loc_8230CBB8;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x8230CAA4;
	sub_823EF5F0(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-10820(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10820);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f340
	ctx.lr = 0x8230CAC0;
	sub_8232F340(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8230cad8
	if (ctx.cr6.eq) goto loc_8230CAD8;
	// stw r8,820(r30)
	REX_STORE_U32(r30.u32 + 820, ctx.r8.u32);
	// b 0x8230cadc
	goto loc_8230CADC;
loc_8230CAD8:
	// lwz r8,820(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 820);
loc_8230CADC:
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r7,r9,824
	ctx.r7.s64 = ctx.r9.s64 + 824;
	// addi r31,r11,868
	r31.s64 = ctx.r11.s64 + 868;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// stw r7,824(r9)
	REX_STORE_U32(ctx.r9.u32 + 824, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5068
	ctx.r5.s64 = ctx.r10.s64 + 5068;
	// li r6,1808
	ctx.r6.s64 = 1808;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mulli r4,r8,44
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(44));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8230CB38;
	sub_82330E40(ctx, base);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-10816(r8)
	REX_STORE_U32(ctx.r8.u32 + -10816, ctx.r3.u32);
	// bne 0x8230cb50
	if (!ctx.cr0.eq) goto loc_8230CB50;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8230cbb8
	goto loc_8230CBB8;
loc_8230CB50:
	// lwz r11,820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 820);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230cbb4
	if (!ctx.cr6.gt) goto loc_8230CBB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8230cb6c
	goto loc_8230CB6C;
loc_8230CB68:
	// lwz r3,-10816(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + -10816);
loc_8230CB6C:
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,-10816(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -10816);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 820);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230cb68
	if (ctx.cr6.lt) goto loc_8230CB68;
loc_8230CBB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230CBB8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_82315F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82315F90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82315fc0
	if (ctx.cr6.eq) goto loc_82315FC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82315fc0
	if (ctx.cr6.eq) goto loc_82315FC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82315ff0
	if (!ctx.cr6.eq) goto loc_82315FF0;
loc_82315FC0:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r3.u64);
loc_82315FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82318440) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318B80) {
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
	// beq cr6,0x82318bb4
	if (ctx.cr6.eq) goto loc_82318BB4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82331a00
	ctx.lr = 0x82318BB4;
	sub_82331A00(ctx, base);
loc_82318BB4:
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

DEFINE_REX_FUNC(sub_8231A5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8231A5F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A614;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a6b0
	if (!ctx.cr0.eq) goto loc_8231A6B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A634;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a6b0
	if (!ctx.cr0.eq) goto loc_8231A6B0;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,6576
	ctx.r5.s64 = ctx.r9.s64 + 6576;
	// li r6,2709
	ctx.r6.s64 = 2709;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231A66C;
	sub_82330E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// bne 0x8231a680
	if (!ctx.cr0.eq) goto loc_8231A680;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231a6b0
	goto loc_8231A6B0;
loc_8231A680:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A694;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a6b0
	if (!ctx.cr0.eq) goto loc_8231A6B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82315050
	ctx.lr = 0x8231A6AC;
	sub_82315050(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A6B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82320E40) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320e74
	if (ctx.cr6.eq) goto loc_82320E74;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82320e78
	goto loc_82320E78;
loc_82320E74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320E78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320e94
	if (!ctx.cr6.eq) goto loc_82320E94;
	// li r6,20
	ctx.r6.s64 = 20;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82320E94;
	sub_82331A00(ctx, base);
loc_82320E94:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320ec0
	if (ctx.cr6.eq) goto loc_82320EC0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82320ec4
	if (!ctx.cr0.eq) goto loc_82320EC4;
loc_82320EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82320EC4:
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

DEFINE_REX_FUNC(sub_82326470) {
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
	ctx.lr = 0x82326478;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823264cc
	if (ctx.cr6.lt) goto loc_823264CC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823264cc
	if (ctx.cr6.eq) goto loc_823264CC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823264c0
	if (!ctx.cr6.gt) goto loc_823264C0;
loc_823264B0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823264cc
	if (ctx.cr6.eq) goto loc_823264CC;
	// bdnz 0x823264b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823264B0;
loc_823264C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823264d0
	if (!ctx.cr6.eq) goto loc_823264D0;
loc_823264CC:
	// li r30,0
	r30.s64 = 0;
loc_823264D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823264e0
	if (!ctx.cr6.eq) goto loc_823264E0;
loc_823264D8:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82326550
	goto loc_82326550;
loc_823264E0:
	// lwz r31,52(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x82326530
	if (ctx.cr6.eq) goto loc_82326530;
	// lis r28,-32126
	r28.s64 = -2105409536;
loc_823264F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// bne cr6,0x82326508
	if (!ctx.cr6.eq) goto loc_82326508;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82326508:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-10820(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -10820);
	// bl 0x823041e0
	ctx.lr = 0x82326514;
	sub_823041E0(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r26.s32, ctx.xer);
	// beq cr6,0x8232652c
	if (ctx.cr6.eq) goto loc_8232652C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x823264f8
	if (!ctx.cr6.eq) goto loc_823264F8;
	// b 0x82326530
	goto loc_82326530;
loc_8232652C:
	// li r27,1
	r27.s64 = 1;
loc_82326530:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823264d8
	if (ctx.cr0.eq) goto loc_823264D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x82326548
	if (!ctx.cr6.eq) goto loc_82326548;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326548:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8232D0C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ld r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232EF38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232EF40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8232ef6c
	if (ctx.cr6.eq) goto loc_8232EF6C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ef6c
	if (ctx.cr6.eq) goto loc_8232EF6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232ef70
	if (!ctx.cr6.eq) goto loc_8232EF70;
loc_8232EF6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232EF70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232f00c
	if (ctx.cr0.eq) goto loc_8232F00C;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r31,r29,72
	r31.s64 = r29.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EF94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232f010
	if (!ctx.cr0.eq) goto loc_8232F010;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,96(r29)
	REX_STORE_U64(r29.u32 + 96, ctx.r11.u64);
	// bl 0x8232e4e0
	ctx.lr = 0x8232EFAC;
	sub_8232E4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232f010
	if (!ctx.cr0.eq) goto loc_8232F010;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232eb68
	ctx.lr = 0x8232EFBC;
	sub_8232EB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232f010
	if (!ctx.cr0.eq) goto loc_8232F010;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232efe0
	if (ctx.cr6.eq) goto loc_8232EFE0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232efe4
	goto loc_8232EFE4;
loc_8232EFE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232EFE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232f00c
	if (!ctx.cr6.eq) goto loc_8232F00C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8232e2a0
	ctx.lr = 0x8232EFF4;
	sub_8232E2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232f004
	if (!ctx.cr0.eq) goto loc_8232F004;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r11.u32);
loc_8232F004:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f010
	if (!ctx.cr6.eq) goto loc_8232F010;
loc_8232F00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232F010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823367D0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x823367D8;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r23,r21
	r23.u64 = r21.u64;
	// beq cr6,0x8233681c
	if (ctx.cr6.eq) goto loc_8233681C;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x8233681c
	if (!ctx.cr6.eq) goto loc_8233681C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8234aac0
	ctx.lr = 0x8233681C;
	sub_8234AAC0(ctx, base);
loc_8233681C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82336840
	if (!ctx.cr6.eq) goto loc_82336840;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82336830
	if (ctx.cr6.eq) goto loc_82336830;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
loc_82336830:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_82336840:
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336868
	if (ctx.cr6.eq) goto loc_82336868;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82336858
	if (ctx.cr6.eq) goto loc_82336858;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
loc_82336858:
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_82336868:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82336884
	if (!ctx.cr6.eq) goto loc_82336884;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_82336884:
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336968
	if (ctx.cr6.eq) goto loc_82336968;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82336968
	if (ctx.cr6.lt) goto loc_82336968;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82357f00
	ctx.lr = 0x823368A4;
	sub_82357F00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336a58
	if (!ctx.cr6.eq) goto loc_82336A58;
	// lwz r11,224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 224);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82336968
	if (ctx.cr6.lt) goto loc_82336968;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8233699c
	if (ctx.cr6.lt) goto loc_8233699C;
	// beq cr6,0x82336964
	if (ctx.cr6.eq) goto loc_82336964;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82336968
	if (!ctx.cr6.lt) goto loc_82336968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,320(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 320);
	// addi r29,r25,320
	r29.s64 = r25.s64 + 320;
	// addi r28,r25,312
	r28.s64 = r25.s64 + 312;
	// lfs f31,8996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8996);
	f31.f64 = double(temp.f32);
loc_823368EC:
	// subfic r11,r28,0
	ctx.xer.ca = r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r28.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 & r29.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82336968
	if (ctx.cr6.eq) goto loc_82336968;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-8
	r31.s64 = r30.s64 + -8;
	// bne cr6,0x82336910
	if (!ctx.cr6.eq) goto loc_82336910;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82336910:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233695c
	if (ctx.cr6.eq) goto loc_8233695C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233695c
	if (ctx.cr6.eq) goto loc_8233695C;
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r10,224(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 224);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233695c
	if (!ctx.cr6.eq) goto loc_8233695C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d560
	ctx.lr = 0x82336944;
	sub_8234D560(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8233695c
	if (!ctx.cr6.lt) goto loc_8233695C;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// lwz r24,56(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 56);
loc_8233695C:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x823368ec
	goto loc_823368EC;
loc_82336964:
	// li r23,1
	r23.s64 = 1;
loc_82336968:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82335990
	ctx.lr = 0x8233697C;
	sub_82335990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823369ac
	if (ctx.cr6.eq) goto loc_823369AC;
loc_82336984:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82336a58
	if (ctx.cr6.eq) goto loc_82336A58;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_8233699C:
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_823369AC:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823500a8
	ctx.lr = 0x823369C4;
	sub_823500A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823369f8
	if (ctx.cr6.eq) goto loc_823369F8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823369dc
	if (ctx.cr6.eq) goto loc_823369DC;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
loc_823369DC:
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234f290
	ctx.lr = 0x823369E8;
	sub_8234F290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_823369F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82350620
	ctx.lr = 0x82336A00;
	sub_82350620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336984
	if (!ctx.cr6.eq) goto loc_82336984;
	// cmpwi cr6,r24,-2
	ctx.cr6.compare<int32_t>(r24.s32, -2, ctx.xer);
	// bne cr6,0x82336a2c
	if (!ctx.cr6.eq) goto loc_82336A2C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336a2c
	if (ctx.cr6.eq) goto loc_82336A2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// b 0x82336a40
	goto loc_82336A40;
loc_82336A2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234ac70
	ctx.lr = 0x82336A38;
	sub_8234AC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336984
	if (!ctx.cr6.eq) goto loc_82336984;
loc_82336A40:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82336a54
	if (ctx.cr6.eq) goto loc_82336A54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82336A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336A58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8234E760) {
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
	ctx.lr = 0x8234E768;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,112(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8234e7e8
	if (ctx.cr6.eq) goto loc_8234E7E8;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r3,116
	ctx.r11.s64 = ctx.r3.s64 + 116;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234e7a4
	if (!ctx.cr6.eq) goto loc_8234E7A4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8234e7a8
	if (ctx.cr6.eq) goto loc_8234E7A8;
loc_8234E7A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8234E7A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234ea0c
	if (!ctx.cr6.eq) goto loc_8234EA0C;
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,56(r27)
	REX_STORE_U32(r27.u32 + 56, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8234E7E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234e7f8
	if (!ctx.cr6.eq) goto loc_8234E7F8;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r4,21816(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
loc_8234E7F8:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 + 44;
	// lwz r9,44(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// addi r25,r31,76
	r25.s64 = r31.s64 + 76;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,120(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r31,124(r31)
	REX_STORE_U32(r31.u32 + 124, r31.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234e850
	if (!ctx.cr6.eq) goto loc_8234E850;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1cf8
	return;
loc_8234E850:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ea0c
	if (ctx.cr6.eq) goto loc_8234EA0C;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234e8ac
	if (!ctx.cr6.eq) goto loc_8234E8AC;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234e8ac
	if (!ctx.cr6.gt) goto loc_8234E8AC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r29,1196(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lwz r28,1200(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
loc_8234E88C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234c800
	ctx.lr = 0x8234E89C;
	sub_8234C800(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x8234e88c
	if (ctx.cr6.lt) goto loc_8234E88C;
loc_8234E8AC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e900
	if (!ctx.cr6.gt) goto loc_8234E900;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8234E8C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E8E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8234e8ec
	if (!ctx.cr6.eq) goto loc_8234E8EC;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8234E8EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e8c0
	if (ctx.cr6.lt) goto loc_8234E8C0;
loc_8234E900:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x8234cba0
	ctx.lr = 0x8234E910;
	sub_8234CBA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234ea10
	if (!ctx.cr6.eq) goto loc_8234EA10;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x8234e340
	ctx.lr = 0x8234E928;
	sub_8234E340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234ea10
	if (!ctx.cr6.eq) goto loc_8234EA10;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234bbc8
	ctx.lr = 0x8234E940;
	sub_8234BBC8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234ea00
	if (!ctx.cr6.eq) goto loc_8234EA00;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e974
	if (!ctx.cr6.eq) goto loc_8234E974;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234be00
	ctx.lr = 0x8234E970;
	sub_8234BE00(ctx, base);
	// b 0x8234ea00
	goto loc_8234EA00;
loc_8234E974:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234e9ac
	if (!ctx.cr6.eq) goto loc_8234E9AC;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
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
	ctx.lr = 0x8234E9A8;
	sub_8234C1B8(ctx, base);
	// b 0x8234ea00
	goto loc_8234EA00;
loc_8234E9AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234ea00
	if (!ctx.cr6.eq) goto loc_8234EA00;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ea00
	if (!ctx.cr6.gt) goto loc_8234EA00;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_8234E9CC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,1196(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// bl 0x8234c3b8
	ctx.lr = 0x8234E9E8;
	sub_8234C3B8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// lwz r9,1200(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234e9cc
	if (ctx.cr6.lt) goto loc_8234E9CC;
loc_8234EA00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234e480
	ctx.lr = 0x8234EA0C;
	sub_8234E480(ctx, base);
loc_8234EA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234EA10:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82360838) {
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
	ctx.lr = 0x82360840;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823608ec
	if (ctx.cr6.eq) goto loc_823608EC;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// mr r26,r27
	r26.u64 = r27.u64;
	// addi r29,r11,10928
	r29.s64 = ctx.r11.s64 + 10928;
	// lwz r9,304(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823608cc
	if (!ctx.cr6.gt) goto loc_823608CC;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8236087C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823608b4
	if (ctx.cr6.eq) goto loc_823608B4;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,166
	ctx.r6.s64 = 166;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823608A8;
	sub_82330D00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_823608B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236087c
	if (ctx.cr6.lt) goto loc_8236087C;
loc_823608CC:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,171
	ctx.r6.s64 = 171;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823608E8;
	sub_82330D00(ctx, base);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
loc_823608EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82364FB8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82364fc8
	if (!ctx.cr6.eq) goto loc_82364FC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364FC8:
	// b 0x82364e00
	sub_82364E00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82365D28) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82365d38
	if (!ctx.cr6.eq) goto loc_82365D38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365D38:
	// b 0x82365a40
	sub_82365A40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82367550) {
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
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82367574;
	sub_823EF5F0(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16384
	ctx.r3.s64 = r31.s64 + 16384;
	// bl 0x823ef5f0
	ctx.lr = 0x82367584;
	sub_823EF5F0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236759C;
	sub_823EF5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-24560
	ctx.r3.s64 = ctx.r3.s64 + -24560;
	// bl 0x823ef5f0
	ctx.lr = 0x823675B0;
	sub_823EF5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-16352
	ctx.r3.s64 = ctx.r3.s64 + -16352;
	// bl 0x823ef5f0
	ctx.lr = 0x823675C4;
	sub_823EF5F0(ctx, base);
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r10,24840
	ctx.r3.s64 = ctx.r10.s64 + 24840;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823675D8;
	sub_823EF5F0(ctx, base);
	// lis r9,-32125
	ctx.r9.s64 = -2105344000;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r9,-32768
	ctx.r3.s64 = ctx.r9.s64 + -32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823675EC;
	sub_823EF5F0(ctx, base);
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r8,-16384
	ctx.r3.s64 = ctx.r8.s64 + -16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82367600;
	sub_823EF5F0(ctx, base);
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r7,16384
	ctx.r3.s64 = ctx.r7.s64 + 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82367614;
	sub_823EF5F0(ctx, base);
	// lis r6,-32125
	ctx.r6.s64 = -2105344000;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r6,8192
	ctx.r3.s64 = ctx.r6.s64 + 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82367628;
	sub_823EF5F0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r5,16420
	ctx.r3.u64 = ctx.r5.u64 | 16420;
	// stwx r4,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_8236E6F0) {
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
	// bl 0x826a1c84
	ctx.lr = 0x8236E6F8;
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	r15.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// lhz r10,384(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 384);
	// li r16,1
	r16.s64 = 1;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8236e7b8
	if (ctx.cr6.eq) goto loc_8236E7B8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x8236e7b0
	if (ctx.cr6.eq) goto loc_8236E7B0;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
loc_8236E760:
	// slw r11,r16,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r16.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236e7a4
	if (ctx.cr6.eq) goto loc_8236E7A4;
	// lwz r11,364(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 364);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mullw r9,r11,r26
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236e7a4
	if (!ctx.cr6.lt) goto loc_8236E7A4;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_8236E78C:
	// lwz r3,348(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 348);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// sthx r15,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, r15.u16);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// blt cr6,0x8236e78c
	if (ctx.cr6.lt) goto loc_8236E78C;
loc_8236E7A4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, ctx.xer);
	// blt cr6,0x8236e760
	if (ctx.cr6.lt) goto loc_8236E760;
loc_8236E7B0:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// sth r11,384(r25)
	REX_STORE_U16(r25.u32 + 384, ctx.r11.u16);
loc_8236E7B8:
	// lwz r10,376(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 376);
	// lfs f0,320(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// bgt cr6,0x8236f484
	if (ctx.cr6.gt) goto loc_8236F484;
	// lwz r10,348(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236f484
	if (ctx.cr6.eq) goto loc_8236F484;
	// slw r10,r16,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (r16.u32 << (r26.u8 & 0x3F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236f484
	if (ctx.cr6.eq) goto loc_8236F484;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x8236e840
	if (!ctx.cr6.eq) goto loc_8236E840;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8236e854
	if (!ctx.cr6.eq) goto loc_8236E854;
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8236e9b0
	goto loc_8236E9B0;
loc_8236E840:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// bne cr6,0x8236e89c
	if (!ctx.cr6.eq) goto loc_8236E89C;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x8236edf4
	if (ctx.cr6.eq) goto loc_8236EDF4;
loc_8236E854:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8236e890
	if (!ctx.cr6.eq) goto loc_8236E890;
	// mullw r11,r27,r26
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r5
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8236E870;
	sub_826A2D14(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8236E888;
	sub_823EF2F8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// b 0x8236e8a0
	goto loc_8236E8A0;
loc_8236E890:
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// b 0x8236e8a0
	goto loc_8236E8A0;
loc_8236E89C:
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8236E8A0:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x8236e9a8
	if (!ctx.cr6.eq) goto loc_8236E9A8;
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236f07c
	if (ctx.cr6.eq) goto loc_8236F07C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// li r18,16
	r18.s64 = 16;
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8236E8E0:
	// lwz r10,360(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 360);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r11,348(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 348);
	// lwz r9,364(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 364);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236e908
	if (!ctx.cr6.gt) goto loc_8236E908;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8236E908:
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236e978
	if (ctx.cr6.eq) goto loc_8236E978;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8236E91C:
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v61,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v62.s16), simde_mm_load_si128((simde__m128i*)ctx.v62.s16))));
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v60,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s16)));
	// lvx128 v13,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// vcsxwfp128 v12,v61,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v11,v60,15
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v8,v12,v9,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v11,v9,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v11,v63
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v59,v8,15
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v58,v7,15
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_set1_ps(32768))));
	// vmaddfp v0,v0,v10,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vpkswss128 v57,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r29,r18
	ea = (r29.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// stvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8236e91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E91C;
loc_8236E978:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,360(r25)
	REX_STORE_U32(r25.u32 + 360, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236e994
	if (ctx.cr6.lt) goto loc_8236E994;
	// stw r15,360(r25)
	REX_STORE_U32(r25.u32 + 360, r15.u32);
loc_8236E994:
	// subf. r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8236e8e0
	if (!ctx.cr0.eq) goto loc_8236E8E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
loc_8236E9A8:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x8236eb1c
	if (!ctx.cr6.eq) goto loc_8236EB1C;
loc_8236E9B0:
	// clrlwi r26,r4,24
	r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8236e9d0
	if (ctx.cr6.eq) goto loc_8236E9D0;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8236e9d0
	if (!ctx.cr6.eq) goto loc_8236E9D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8236E9D0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// li r18,16
	r18.s64 = 16;
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8236E9F8:
	// lwz r10,360(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 360);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,348(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 348);
	// lwz r9,364(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 364);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236ea20
	if (!ctx.cr6.gt) goto loc_8236EA20;
	// subf r4,r10,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8236EA20:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ea90
	if (ctx.cr6.eq) goto loc_8236EA90;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8236EA34:
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v55,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v54,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// lvx128 v13,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// vcsxwfp128 v12,v55,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v11,v54,15
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vmaddfp v8,v12,v9,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v11,v9,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v11,v63
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v53,v8,15
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v52,v7,15
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_set1_ps(32768))));
	// vmaddfp v0,v0,v10,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vpkswss128 v51,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r29,r18
	ea = (r29.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// stvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8236ea34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EA34;
loc_8236EA90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8236eaec
	if (ctx.cr6.eq) goto loc_8236EAEC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236eaec
	if (ctx.cr6.eq) goto loc_8236EAEC;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_8236EAA4:
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236EAB8:
	// lhz r9,36(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 36);
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236ead0
	if (!ctx.cr6.eq) goto loc_8236EAD0;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8236EAD0:
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236eab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EAB8;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x8236eaa4
	if (!ctx.cr0.eq) goto loc_8236EAA4;
loc_8236EAEC:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,360(r25)
	REX_STORE_U32(r25.u32 + 360, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236eb08
	if (ctx.cr6.lt) goto loc_8236EB08;
	// stw r15,360(r25)
	REX_STORE_U32(r25.u32 + 360, r15.u32);
loc_8236EB08:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8236e9f8
	if (!ctx.cr0.eq) goto loc_8236E9F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
loc_8236EB1C:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// beq cr6,0x8236edf8
	if (ctx.cr6.eq) goto loc_8236EDF8;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// bne cr6,0x8236f07c
	if (!ctx.cr6.eq) goto loc_8236F07C;
	// clrlwi r17,r4,24
	r17.u64 = ctx.r4.u32 & 0xFF;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r24,r29
	r24.u64 = r29.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8236eb4c
	if (ctx.cr6.eq) goto loc_8236EB4C;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8236eb4c
	if (!ctx.cr6.eq) goto loc_8236EB4C;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_8236EB4C:
	// mr r19,r27
	r19.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// li r18,16
	r18.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r21,-32
	r21.s64 = -32;
	// li r22,-16
	r22.s64 = -16;
	// li r23,80
	r23.s64 = 80;
	// li r28,96
	r28.s64 = 96;
	// li r3,112
	ctx.r3.s64 = 112;
loc_8236EB94:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// mr r20,r19
	r20.u64 = r19.u64;
	// lwz r6,348(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 348);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236ebbc
	if (!ctx.cr6.gt) goto loc_8236EBBC;
	// subf r20,r11,r10
	r20.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236EBBC:
	// rlwinm r10,r20,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ed0c
	if (ctx.cr6.eq) goto loc_8236ED0C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8236EBD4:
	// lvx128 v32,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v61,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16))));
	// lvx128 v60,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v62.s16), simde_mm_load_si128((simde__m128i*)ctx.v62.s16))));
	// vupklsb128 v58,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// lvx128 v57,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v56,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// lvx128 v31,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v9,v61,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v59,15
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v55,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s16)));
	// vcsxwfp128 v12,v58,15
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v4,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v2,v56,15
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v54,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s16)));
	// vupkhsb128 v53,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// lvx128 v29,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v55,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v1,r30,r23
	ea = (r30.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v5,v54,15
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v7,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v3,v53,15
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v30,r30,r28
	ea = (r30.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// vmaddfp v19,v9,v13,v31
	simde_mm_store_ps(v19.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v31.f32)));
	// vmulfp128 v25,v9,v63
	simde_mm_store_ps(v25.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v27,v6,v63
	simde_mm_store_ps(v27.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v9,v12,v63
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v21,v6,v13,v11
	simde_mm_store_ps(v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v24,v2,v13,v4
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v6,v2,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v20,v8,v13,v1
	simde_mm_store_ps(v20.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v26,v8,v63
	simde_mm_store_ps(v26.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v8,v12,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v22,v5,v13,v10
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v23,v3,v13,v7
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v28,v5,v63
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v5,v3,v63
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v2,v11,v0,v27
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v27.f32)));
	// vmaddfp v11,v29,v0,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v52,v21,15
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v21.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v51,v24,15
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v24.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v50,v19,15
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v19.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v49,v20,15
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v20.f32), simde_mm_set1_ps(32768))));
	// vmaddfp v31,v31,v0,v25
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v25.f32)));
	// vmaddfp v1,v1,v0,v26
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v26.f32)));
	// vcfpsxws128 v48,v22,15
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v22.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v47,v23,15
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v23.f32), simde_mm_set1_ps(32768))));
	// vmaddfp v3,v10,v0,v28
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v28.f32)));
	// vmaddfp v5,v7,v0,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v7,v4,v0,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r29,r3
	ea = (r29.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v12,v13,v29
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v29.f32)));
	// vmaddfp v12,v12,v13,v30
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v30.f32)));
	// vmaddfp v10,v30,v0,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vpkswss128 v46,v50,v49
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// stvx128 v31,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r29,r23
	ea = (r29.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v45,v52,v48
	simde_mm_store_si128((simde__m128i*)ctx.v45.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vpkswss128 v44,v47,v51
	simde_mm_store_si128((simde__m128i*)ctx.v44.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// stvx128 v3,r29,r18
	ea = (r29.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v43,v11,15
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v42,v12,15
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_set1_ps(32768))));
	// stvx128 v10,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// stvx128 v45,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// stvx128 v41,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8236ebd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EBD4;
loc_8236ED0C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8236edc4
	if (ctx.cr6.eq) goto loc_8236EDC4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8236edc4
	if (ctx.cr6.eq) goto loc_8236EDC4;
	// mr r27,r20
	r27.u64 = r20.u64;
loc_8236ED20:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r5,r26,12
	ctx.r5.s64 = r26.s64 + 12;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// subf r4,r24,r26
	ctx.r4.u64 = r26.u64 - r24.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8236ED38:
	// lhz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 36);
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236ed50
	if (!ctx.cr6.eq) goto loc_8236ED50;
	// lfs f0,-12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_8236ED50:
	// lhz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236ed6c
	if (!ctx.cr6.eq) goto loc_8236ED6C;
	// lfsx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8236ED6C:
	// lhz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236ed88
	if (!ctx.cr6.eq) goto loc_8236ED88;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_8236ED88:
	// lhz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236eda4
	if (!ctx.cr6.eq) goto loc_8236EDA4;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8236EDA4:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x8236ed38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236ED38;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r26,r26,32
	r26.s64 = r26.s64 + 32;
	// addi r24,r24,32
	r24.s64 = r24.s64 + 32;
	// bne 0x8236ed20
	if (!ctx.cr0.eq) goto loc_8236ED20;
loc_8236EDC4:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// stw r11,360(r25)
	REX_STORE_U32(r25.u32 + 360, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236ede0
	if (ctx.cr6.lt) goto loc_8236EDE0;
	// stw r15,360(r25)
	REX_STORE_U32(r25.u32 + 360, r15.u32);
loc_8236EDE0:
	// subf. r19,r20,r19
	r19.u64 = r19.u64 - r20.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne 0x8236eb94
	if (!ctx.cr0.eq) goto loc_8236EB94;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
loc_8236EDF4:
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8236EDF8:
	// clrlwi r24,r4,24
	r24.u64 = ctx.r4.u32 & 0xFF;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8236ee18
	if (ctx.cr6.eq) goto loc_8236EE18;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8236ee18
	if (!ctx.cr6.eq) goto loc_8236EE18;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_8236EE18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// li r18,16
	r18.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r21,-32
	r21.s64 = -32;
	// li r22,-16
	r22.s64 = -16;
	// li r23,80
	r23.s64 = 80;
loc_8236EE54:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r5,348(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 348);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// ble cr6,0x8236ee84
	if (!ctx.cr6.gt) goto loc_8236EE84;
	// subf r28,r11,r10
	r28.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236EE84:
	// rlwinm r10,r28,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ef90
	if (ctx.cr6.eq) goto loc_8236EF90;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8236EE9C:
	// lvx128 v50,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v48,v50,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v50.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16))));
	// lvx128 v47,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v46,v50,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// vupkhsb128 v45,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v44,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s16)));
	// lvx128 v11,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v43,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v47.s16))));
	// vcsxwfp128 v10,v48,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v42,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// vcsxwfp128 v9,v46,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v6,v45,15
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v3,r30,r23
	ea = (r30.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v4,v44,15
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v8,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v2,v43,15
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v7,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v1,v42,15
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v5,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// vmaddfp v31,v10,v13,v5
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v30,v9,v13,v3
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v29,v6,v13,v12
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v28,v4,v13,v11
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v27,v2,v13,v8
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v26,v1,v13,v7
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v23,v6,v63
	simde_mm_store_ps(v23.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v24,v9,v63
	simde_mm_store_ps(v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v25,v10,v63
	simde_mm_store_ps(v25.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v6,v4,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v9,v2,v63
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v10,v1,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v41,v31,15
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v40,v30,15
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v39,v29,15
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v38,v28,15
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v28.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v37,v27,15
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_set1_ps(32768))));
	// vcfpsxws128 v36,v26,15
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(v26.f32), simde_mm_set1_ps(32768))));
	// vmaddfp v4,v3,v0,v24
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v24.f32)));
	// vmaddfp v3,v12,v0,v23
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v23.f32)));
	// vmaddfp v6,v11,v0,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v5,v5,v0,v25
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v25.f32)));
	// vmaddfp v11,v8,v0,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v7,v0,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v35,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// vpkswss128 v34,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vpkswss128 v33,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v33.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// stvx128 v4,r29,r23
	ea = (r29.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r29,r18
	ea = (r29.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// stvx128 v34,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x8236ee9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EE9C;
loc_8236EF90:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8236f04c
	if (ctx.cr6.eq) goto loc_8236F04C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8236f04c
	if (ctx.cr6.eq) goto loc_8236F04C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8236EFA4:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236efbc
	if (!ctx.cr6.eq) goto loc_8236EFBC;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8236EFBC:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236efd4
	if (!ctx.cr6.eq) goto loc_8236EFD4;
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_8236EFD4:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236efec
	if (!ctx.cr6.eq) goto loc_8236EFEC;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_8236EFEC:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236f004
	if (!ctx.cr6.eq) goto loc_8236F004;
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_8236F004:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8236F018:
	// lhz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 36);
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236f030
	if (!ctx.cr6.eq) goto loc_8236F030;
	// lfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8236F030:
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236f018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236F018;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bne 0x8236efa4
	if (!ctx.cr0.eq) goto loc_8236EFA4;
loc_8236F04C:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,360(r25)
	REX_STORE_U32(r25.u32 + 360, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236f068
	if (ctx.cr6.lt) goto loc_8236F068;
	// stw r15,360(r25)
	REX_STORE_U32(r25.u32 + 360, r15.u32);
loc_8236F068:
	// subf. r27,r28,r27
	r27.u64 = r27.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8236ee54
	if (!ctx.cr0.eq) goto loc_8236EE54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
loc_8236F07C:
	// mr r22,r27
	r22.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f498
	if (ctx.cr6.eq) goto loc_8236F498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,13256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3800(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3800);
	ctx.f13.f64 = double(temp.f32);
loc_8236F0A8:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// mr r23,r22
	r23.u64 = r22.u64;
	// lwz r9,348(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 348);
	// mullw r8,r11,r26
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r22,r11
	ctx.r7.u64 = r22.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236f0d4
	if (!ctx.cr6.gt) goto loc_8236F0D4;
	// subf r23,r11,r10
	r23.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236F0D4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8236f454
	if (ctx.cr6.eq) goto loc_8236F454;
	// rlwinm r27,r26,2,0,29
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r26,1,0,30
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8236F0E8:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8236f37c
	if (ctx.cr6.lt) goto loc_8236F37C;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// addi r7,r30,12
	ctx.r7.s64 = r30.s64 + 12;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236F11C:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8236f138
	if (!ctx.cr6.eq) goto loc_8236F138;
	// lfs f0,-12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// b 0x8236f1ac
	goto loc_8236F1AC;
loc_8236F138:
	// lhz r11,-4(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -4);
	// lfs f0,324(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,-12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfs f8,320(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f2,-4(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f1,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8236f184
	if (!ctx.cr6.gt) goto loc_8236F184;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8236f1a8
	goto loc_8236F1A8;
loc_8236F184:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236f194
	if (!ctx.cr6.lt) goto loc_8236F194;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x8236f1a8
	goto loc_8236F1A8;
loc_8236F194:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.f9.u64);
	// lhz r11,94(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 94);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8236F1A8:
	// sth r11,-4(r9)
	REX_STORE_U16(ctx.r9.u32 + -4, ctx.r11.u16);
loc_8236F1AC:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// and r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236f1cc
	if (!ctx.cr6.eq) goto loc_8236F1CC;
	// lfsx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8236f240
	goto loc_8236F240;
loc_8236F1CC:
	// lhz r11,-2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// lfs f0,324(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f9,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfs f8,320(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// lfd f7,96(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f1,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8236f218
	if (!ctx.cr6.gt) goto loc_8236F218;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8236f23c
	goto loc_8236F23C;
loc_8236F218:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236f228
	if (!ctx.cr6.lt) goto loc_8236F228;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x8236f23c
	goto loc_8236F23C;
loc_8236F228:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.f9.u64);
	// lhz r11,94(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 94);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8236F23C:
	// sth r11,-2(r9)
	REX_STORE_U16(ctx.r9.u32 + -2, ctx.r11.u16);
loc_8236F240:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236f260
	if (!ctx.cr6.eq) goto loc_8236F260;
	// lfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x8236f2d4
	goto loc_8236F2D4;
loc_8236F260:
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lfs f0,324(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfs f8,320(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// lfd f7,112(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f1,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8236f2ac
	if (!ctx.cr6.gt) goto loc_8236F2AC;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8236f2d0
	goto loc_8236F2D0;
loc_8236F2AC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236f2bc
	if (!ctx.cr6.lt) goto loc_8236F2BC;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x8236f2d0
	goto loc_8236F2D0;
loc_8236F2BC:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.f9.u64);
	// lhz r11,94(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 94);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8236F2D0:
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
loc_8236F2D4:
	// lhz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 36);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236f2f4
	if (!ctx.cr6.eq) goto loc_8236F2F4;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x8236f368
	goto loc_8236F368;
loc_8236F2F4:
	// lhz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lfs f0,324(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfs f8,320(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// lfd f7,128(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f1,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8236f340
	if (!ctx.cr6.gt) goto loc_8236F340;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8236f364
	goto loc_8236F364;
loc_8236F340:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236f350
	if (!ctx.cr6.lt) goto loc_8236F350;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x8236f364
	goto loc_8236F364;
loc_8236F350:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.f9.u64);
	// lhz r11,94(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 94);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8236F364:
	// sth r11,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r11.u16);
loc_8236F368:
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8236f11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236F11C;
loc_8236F37C:
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r26.s32, ctx.xer);
	// bge cr6,0x8236f440
	if (!ctx.cr6.lt) goto loc_8236F440;
	// subf r7,r5,r26
	ctx.r7.u64 = r26.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + r29.u64;
	// subf r8,r29,r30
	ctx.r8.u64 = r30.u64 - r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8236F3A0:
	// lhz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 36);
	// and r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8236f3bc
	if (!ctx.cr6.eq) goto loc_8236F3BC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8236f430
	goto loc_8236F430;
loc_8236F3BC:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lfs f0,324(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f9,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lfs f8,320(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// std r5,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r5.u64);
	// lfd f7,144(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 144);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,316(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f4,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8236f408
	if (!ctx.cr6.gt) goto loc_8236F408;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x8236f42c
	goto loc_8236F42C;
loc_8236F408:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236f418
	if (!ctx.cr6.lt) goto loc_8236F418;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// b 0x8236f42c
	goto loc_8236F42C;
loc_8236F418:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.f9.u64);
	// lhz r10,94(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 94);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_8236F42C:
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
loc_8236F430:
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x8236f3a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236F3A0;
loc_8236F440:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r27,r30
	r30.u64 = r27.u64 + r30.u64;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// add r3,r24,r3
	ctx.r3.u64 = r24.u64 + ctx.r3.u64;
	// bne 0x8236f0e8
	if (!ctx.cr0.eq) goto loc_8236F0E8;
loc_8236F454:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// stw r11,360(r25)
	REX_STORE_U32(r25.u32 + 360, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236f470
	if (ctx.cr6.lt) goto loc_8236F470;
	// stw r15,360(r25)
	REX_STORE_U32(r25.u32 + 360, r15.u32);
loc_8236F470:
	// subf. r22,r23,r22
	r22.u64 = r22.u64 - r23.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne 0x8236f0a8
	if (!ctx.cr0.eq) goto loc_8236F0A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
loc_8236F484:
	// mullw r11,r27,r8
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8236F498;
	sub_823EF2F8(ctx, base);
loc_8236F498:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824084E0) {
	REX_FUNC_PROLOGUE();
	// b 0x82407f60
	sub_82407F60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82409168) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,20188
	ctx.r11.s64 = ctx.r11.s64 + 20188;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x82409194;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x823f0350
	ctx.lr = 0x824091A0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x823f0350
	ctx.lr = 0x824091AC;
	sub_823F0350(ctx, base);
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

DEFINE_REX_FUNC(sub_82409F98) {
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
	ctx.lr = 0x82409FA0;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// beq cr6,0x82409fd8
	if (ctx.cr6.eq) goto loc_82409FD8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x82409FD4;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82409FD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409ff4
	if (ctx.cr6.eq) goto loc_82409FF4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x82409FF0;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82409FF4:
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
	// bne 0x8240a060
	if (!ctx.cr0.eq) goto loc_8240A060;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240a068
	goto loc_8240A068;
loc_8240A060:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240A068:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240a080
	if (ctx.cr6.eq) goto loc_8240A080;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240A080;
	sub_82409A88(ctx, base);
loc_8240A080:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240a348
	if (!ctx.cr6.gt) goto loc_8240A348;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lfd f10,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,15196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,20328(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,20204(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20204);
	ctx.f6.f64 = double(temp.f32);
loc_8240A0E4:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfsx f5,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8240a294
	if (ctx.cr6.eq) goto loc_8240A294;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmul f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f5,f8,f10
	ctx.f5.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f30,f4
	f30.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f5
	f31.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 * ctx.f10.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f5
	f29.f64 = double(float(ctx.f5.f64));
loc_8240A294:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240a2a4
	if (ctx.cr6.lt) goto loc_8240A2A4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240A2A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a2bc
	if (!ctx.cr6.gt) goto loc_8240A2BC;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x8240a2c0
	if (ctx.cr6.lt) goto loc_8240A2C0;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x8240a2c0
	goto loc_8240A2C0;
loc_8240A2BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240A2C0:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240a2d0
	if (ctx.cr6.lt) goto loc_8240A2D0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240A2D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a2e8
	if (!ctx.cr6.gt) goto loc_8240A2E8;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x8240a2ec
	if (ctx.cr6.lt) goto loc_8240A2EC;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x8240a2ec
	goto loc_8240A2EC;
loc_8240A2E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240A2EC:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240a2fc
	if (ctx.cr6.lt) goto loc_8240A2FC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240A2FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a314
	if (!ctx.cr6.gt) goto loc_8240A314;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x8240a318
	if (ctx.cr6.lt) goto loc_8240A318;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x8240a318
	goto loc_8240A318;
loc_8240A314:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240A318:
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stwux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240a0e4
	if (ctx.cr6.lt) goto loc_8240A0E4;
loc_8240A348:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_8241EDA0) {
	REX_FUNC_PROLOGUE();
	// b 0x8241c940
	sub_8241C940(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8241F528) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,23844
	ctx.r10.s64 = ctx.r10.s64 + 23844;
loc_8241F55C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241f580
	if (ctx.cr0.eq) goto loc_8241F580;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241f55c
	if (ctx.cr6.eq) goto loc_8241F55C;
loc_8241F580:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241f5f4
	if (!ctx.cr0.eq) goto loc_8241F5F4;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8241a9d8
	ctx.lr = 0x8241F59C;
	sub_8241A9D8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8241f628
	if (!ctx.cr6.eq) goto loc_8241F628;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,2023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2023, ctx.xer);
	// bne cr6,0x8241f5d0
	if (!ctx.cr6.eq) goto loc_8241F5D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,2023
	ctx.r5.s64 = 2023;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,-26720
	ctx.r6.s64 = ctx.r11.s64 + -26720;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x8241F5D0;
	sub_8241A4F0(ctx, base);
loc_8241F5D0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,2024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2024, ctx.xer);
	// bne cr6,0x8241f628
	if (!ctx.cr6.eq) goto loc_8241F628;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,2024
	ctx.r5.s64 = 2024;
	// addi r6,r11,-26756
	ctx.r6.s64 = ctx.r11.s64 + -26756;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8241f620
	goto loc_8241F620;
loc_8241F5F4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824009e0
	ctx.lr = 0x8241F604;
	sub_824009E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r11,4175(r1)
	REX_STORE_U8(ctx.r1.u32 + 4175, ctx.r11.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,28576
	ctx.r6.s64 = ctx.r10.s64 + 28576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
loc_8241F620:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a4f0
	ctx.lr = 0x8241F628;
	sub_8241A4F0(ctx, base);
loc_8241F628:
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
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

DEFINE_REX_FUNC(sub_82437384) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82437410) {
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
	ctx.lr = 0x82437418;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824374a4
	if (ctx.cr0.eq) goto loc_824374A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82437514
	if (ctx.cr6.eq) goto loc_82437514;
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
loc_8243745C:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243748c
	if (ctx.cr6.eq) goto loc_8243748C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 8);
	// mullw r6,r11,r28
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// bl 0x82437410
	ctx.lr = 0x8243748C;
	sub_82437410(ctx, base);
loc_8243748C:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243745c
	if (ctx.cr6.lt) goto loc_8243745C;
	// b 0x82437514
	goto loc_82437514;
loc_824374A4:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824374bc
	if (!ctx.cr0.eq) goto loc_824374BC;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x824374e4
	goto loc_824374E4;
loc_824374BC:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824374d4
	if (ctx.cr6.eq) goto loc_824374D4;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x824374dc
	goto loc_824374DC;
loc_824374D4:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
loc_824374DC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_824374E4:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_82437514:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8243C410) {
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
	// lwz r11,1344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1344);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243c438
	if (ctx.cr6.eq) goto loc_8243C438;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243C438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243C438:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a4440
	ctx.lr = 0x8243C444;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_8243EA10) {
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
	ctx.lr = 0x8243EA18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ea5c
	if (!ctx.cr6.eq) goto loc_8243EA5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243EA40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8243ea54
	if (!ctx.cr6.eq) goto loc_8243EA54;
loc_8243EA48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8243EA54:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243EA5C:
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8243ea8c
	if (!ctx.cr0.eq) goto loc_8243EA8C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243EA7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243ea48
	if (ctx.cr6.eq) goto loc_8243EA48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243EA8C:
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(r28.s32, 255, ctx.xer);
	// bne cr6,0x8243eaa8
	if (!ctx.cr6.eq) goto loc_8243EAA8;
	// cmpwi cr6,r30,216
	ctx.cr6.compare<int32_t>(r30.s32, 216, ctx.xer);
	// beq cr6,0x8243ead8
	if (ctx.cr6.eq) goto loc_8243EAD8;
loc_8243EAA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,53
	ctx.r10.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r28,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r28.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r30.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243EAD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243EAD8:
	// stw r30,420(r29)
	REX_STORE_U32(r29.u32 + 420, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82443C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82443C60;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82443c94
	if (ctx.cr6.eq) goto loc_82443C94;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82443C8C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82443c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443C8C;
loc_82443C94:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lis r30,-32255
	r30.s64 = -2113863680;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f8,20208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lfs f10,-8120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -8120);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// lfs f11,20244(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,15196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15196);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,3720(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20240);
	ctx.f13.f64 = double(temp.f32);
loc_82443CDC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82443cf0
	if (ctx.cr6.eq) goto loc_82443CF0;
	// lfs f6,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_82443CF0:
	// fmadds f6,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// rlwinm r11,r9,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r10,28,0,3
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// beq cr6,0x82443d8c
	if (ctx.cr6.eq) goto loc_82443D8C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f6,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f0.f64)));
	// beq cr6,0x82443d50
	if (ctx.cr6.eq) goto loc_82443D50;
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82443D50:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x82443d8c
	if (!ctx.cr6.lt) goto loc_82443D8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82443d6c
	if (ctx.cr6.eq) goto loc_82443D6C;
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,8(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_82443D6C:
	// lfs f6,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f6,f0,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// beq cr6,0x82443d8c
	if (ctx.cr6.eq) goto loc_82443D8C;
	// lfs f6,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_82443D8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82443cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443CDC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// bl 0x82442b20
	ctx.lr = 0x82443DC0;
	sub_82442B20(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824499F0) {
	REX_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x824498f8
	sub_824498F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82449B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82449B78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82449fe4
	if (!ctx.cr6.eq) goto loc_82449FE4;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82449B98:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82449b98
	if (!ctx.cr6.eq) goto loc_82449B98;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82449fe4
	if (!ctx.cr6.lt) goto loc_82449FE4;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1e70
	ctx.lr = 0x82449BC8;
	sub_826A1E70(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// b 0x82449bec
	goto loc_82449BEC;
loc_82449BD4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x82449BE0;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82449bf4
	if (ctx.cr0.eq) goto loc_82449BF4;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_82449BEC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82449bd4
	if (!ctx.cr0.eq) goto loc_82449BD4;
loc_82449BF4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82449c10
	if (ctx.cr0.eq) goto loc_82449C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a08a0
	ctx.lr = 0x82449C0C;
	sub_826A08A0(ctx, base);
	// b 0x82449c14
	goto loc_82449C14;
loc_82449C10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82449C14:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x82449fe4
	if (ctx.cr6.gt) goto loc_82449FE4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82449c34
	if (ctx.cr0.eq) goto loc_82449C34;
	// stb r30,0(r31)
	REX_STORE_U8(r31.u32 + 0, r30.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82449C34:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// b 0x82449c4c
	goto loc_82449C4C;
loc_82449C3C:
	// bl 0x826a0820
	ctx.lr = 0x82449C40;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82449c54
	if (ctx.cr0.eq) goto loc_82449C54;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_82449C4C:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82449c3c
	if (!ctx.cr0.eq) goto loc_82449C3C;
loc_82449C54:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82449fe4
	if (!ctx.cr0.eq) goto loc_82449FE4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15908
	ctx.r10.s64 = ctx.r10.s64 + 15908;
loc_82449C70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449c94
	if (ctx.cr0.eq) goto loc_82449C94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449c70
	if (ctx.cr6.eq) goto loc_82449C70;
loc_82449C94:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449ca4
	if (!ctx.cr0.eq) goto loc_82449CA4;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82449fdc
	goto loc_82449FDC;
loc_82449CA4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15896
	ctx.r10.s64 = ctx.r10.s64 + 15896;
loc_82449CB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449cd4
	if (ctx.cr0.eq) goto loc_82449CD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449cb0
	if (ctx.cr6.eq) goto loc_82449CB0;
loc_82449CD4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449ce4
	if (!ctx.cr0.eq) goto loc_82449CE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449CE4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15880
	ctx.r10.s64 = ctx.r10.s64 + 15880;
loc_82449CF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449d14
	if (ctx.cr0.eq) goto loc_82449D14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449cf0
	if (ctx.cr6.eq) goto loc_82449CF0;
loc_82449D14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449d24
	if (!ctx.cr0.eq) goto loc_82449D24;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449D24:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15872
	ctx.r10.s64 = ctx.r10.s64 + 15872;
loc_82449D30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449d54
	if (ctx.cr0.eq) goto loc_82449D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449d30
	if (ctx.cr6.eq) goto loc_82449D30;
loc_82449D54:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449d64
	if (!ctx.cr0.eq) goto loc_82449D64;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449D64:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15864
	ctx.r10.s64 = ctx.r10.s64 + 15864;
loc_82449D70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449d94
	if (ctx.cr0.eq) goto loc_82449D94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449d70
	if (ctx.cr6.eq) goto loc_82449D70;
loc_82449D94:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449da4
	if (!ctx.cr0.eq) goto loc_82449DA4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449DA4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
loc_82449DB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449dd4
	if (ctx.cr0.eq) goto loc_82449DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449db0
	if (ctx.cr6.eq) goto loc_82449DB0;
loc_82449DD4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449de4
	if (!ctx.cr0.eq) goto loc_82449DE4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449DE4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15844
	ctx.r10.s64 = ctx.r10.s64 + 15844;
loc_82449DF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449e14
	if (ctx.cr0.eq) goto loc_82449E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449df0
	if (ctx.cr6.eq) goto loc_82449DF0;
loc_82449E14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449e24
	if (!ctx.cr0.eq) goto loc_82449E24;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449E24:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15832
	ctx.r10.s64 = ctx.r10.s64 + 15832;
loc_82449E30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449e54
	if (ctx.cr0.eq) goto loc_82449E54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449e30
	if (ctx.cr6.eq) goto loc_82449E30;
loc_82449E54:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449e64
	if (!ctx.cr0.eq) goto loc_82449E64;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449E64:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15820
	ctx.r10.s64 = ctx.r10.s64 + 15820;
loc_82449E70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449e94
	if (ctx.cr0.eq) goto loc_82449E94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449e70
	if (ctx.cr6.eq) goto loc_82449E70;
loc_82449E94:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449ea4
	if (!ctx.cr0.eq) goto loc_82449EA4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449EA4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15808
	ctx.r10.s64 = ctx.r10.s64 + 15808;
loc_82449EB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449ed4
	if (ctx.cr0.eq) goto loc_82449ED4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449eb0
	if (ctx.cr6.eq) goto loc_82449EB0;
loc_82449ED4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82449fe4
	if (ctx.cr0.eq) goto loc_82449FE4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15800
	ctx.r10.s64 = ctx.r10.s64 + 15800;
loc_82449EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449f0c
	if (ctx.cr0.eq) goto loc_82449F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449ee8
	if (ctx.cr6.eq) goto loc_82449EE8;
loc_82449F0C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449f1c
	if (!ctx.cr0.eq) goto loc_82449F1C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449F1C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15796
	ctx.r10.s64 = ctx.r10.s64 + 15796;
loc_82449F28:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449f4c
	if (ctx.cr0.eq) goto loc_82449F4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449f28
	if (ctx.cr6.eq) goto loc_82449F28;
loc_82449F4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449f5c
	if (!ctx.cr0.eq) goto loc_82449F5C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449F5C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15788
	ctx.r10.s64 = ctx.r10.s64 + 15788;
loc_82449F68:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449f8c
	if (ctx.cr0.eq) goto loc_82449F8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449f68
	if (ctx.cr6.eq) goto loc_82449F68;
loc_82449F8C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449f9c
	if (!ctx.cr0.eq) goto loc_82449F9C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82449fd8
	goto loc_82449FD8;
loc_82449F9C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15780
	ctx.r10.s64 = ctx.r10.s64 + 15780;
loc_82449FA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82449fcc
	if (ctx.cr0.eq) goto loc_82449FCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82449fa8
	if (ctx.cr6.eq) goto loc_82449FA8;
loc_82449FCC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82449fe4
	if (!ctx.cr0.eq) goto loc_82449FE4;
	// li r11,13
	ctx.r11.s64 = 13;
loc_82449FD8:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82449FDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82449fe8
	goto loc_82449FE8;
loc_82449FE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82449FE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8246BEC8) {
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
	ctx.lr = 0x8246BED0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8246c12c
	if (ctx.cr6.eq) goto loc_8246C12C;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824777d8
	ctx.lr = 0x8246BF14;
	sub_824777D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246c12c
	if (!ctx.cr0.eq) goto loc_8246C12C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r17,24576
	r17.s64 = 1610612736;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, ctx.xer);
	// beq cr6,0x8246c12c
	if (ctx.cr6.eq) goto loc_8246C12C;
	// lis r18,4352
	r18.s64 = 285212672;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x8246c12c
	if (ctx.cr6.eq) goto loc_8246C12C;
	// addic. r25,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r25.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt 0x8246c11c
	if (ctx.cr0.lt) goto loc_8246C11C;
	// rlwinm r24,r25,2,0,29
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246BF4C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r31,r24,r11
	r31.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8246c110
	if (ctx.cr6.eq) goto loc_8246C110;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246c110
	if (ctx.cr0.eq) goto loc_8246C110;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x8246c11c
	if (ctx.cr6.eq) goto loc_8246C11C;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// beq cr6,0x8246c11c
	if (ctx.cr6.eq) goto loc_8246C11C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245fa18
	ctx.lr = 0x8246BF94;
	sub_8245FA18(ctx, base);
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246bfb4
	if (!ctx.cr6.eq) goto loc_8246BFB4;
	// li r29,1
	r29.s64 = 1;
loc_8246BFB4:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8246c038
	if (ctx.cr6.eq) goto loc_8246C038;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
loc_8246BFDC:
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bne cr6,0x8246c010
	if (!ctx.cr6.eq) goto loc_8246C010;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8246c014
	goto loc_8246C014;
loc_8246C010:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_8246C014:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8246c024
	if (!ctx.cr6.eq) goto loc_8246C024;
	// li r28,1
	r28.s64 = 1;
	// b 0x8246c028
	goto loc_8246C028;
loc_8246C024:
	// li r29,1
	r29.s64 = 1;
loc_8246C028:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8246bfdc
	if (ctx.cr6.lt) goto loc_8246BFDC;
loc_8246C038:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// beq cr6,0x8246c110
	if (ctx.cr6.eq) goto loc_8246C110;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(r28.s32, r19.s32, ctx.xer);
	// beq cr6,0x8246c110
	if (ctx.cr6.eq) goto loc_8246C110;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824664d8
	ctx.lr = 0x8246C058;
	sub_824664D8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8246c11c
	if (ctx.cr0.lt) goto loc_8246C11C;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246c124
	if (!ctx.cr0.eq) goto loc_8246C124;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248efc0
	ctx.lr = 0x8246C07C;
	sub_8248EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246c0fc
	if (ctx.cr0.lt) goto loc_8246C0FC;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8246c0ec
	if (ctx.cr6.eq) goto loc_8246C0EC;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,20(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_8246C0A4:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8246c0d8
	if (!ctx.cr6.eq) goto loc_8246C0D8;
	// li r28,1
	r28.s64 = 1;
	// b 0x8246c0dc
	goto loc_8246C0DC;
loc_8246C0D8:
	// li r29,1
	r29.s64 = 1;
loc_8246C0DC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8246c0a4
	if (ctx.cr6.lt) goto loc_8246C0A4;
loc_8246C0EC:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// beq cr6,0x8246c0fc
	if (ctx.cr6.eq) goto loc_8246C0FC;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(r28.s32, r19.s32, ctx.xer);
	// bne cr6,0x8246c124
	if (!ctx.cr6.eq) goto loc_8246C124;
loc_8246C0FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8246C110;
	sub_826A1E70(ctx, base);
loc_8246C110:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// bge 0x8246bf4c
	if (!ctx.cr0.lt) goto loc_8246BF4C;
loc_8246C11C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8246c130
	goto loc_8246C130;
loc_8246C124:
	// li r23,0
	r23.s64 = 0;
	// b 0x8246c11c
	goto loc_8246C11C;
loc_8246C12C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8246C130:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82479560) {
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
	// bl 0x824782f0
	ctx.lr = 0x82479580;
	sub_824782F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,30492
	ctx.r9.s64 = ctx.r9.s64 + 30492;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// stw r10,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r10.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r10,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r10.u32);
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82480798) {
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
	ctx.lr = 0x824807A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824807e4
	if (!ctx.cr6.gt) goto loc_824807E4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824807C0:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824807c0
	if (ctx.cr6.lt) goto loc_824807C0;
loc_824807E4:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824809e4
	if (!ctx.cr6.gt) goto loc_824809E4;
	// li r28,0
	r28.s64 = 0;
loc_824807F8:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r31,r28,r11
	r31.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824809d0
	if (ctx.cr0.eq) goto loc_824809D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// b 0x824808f0
	goto loc_824808F0;
loc_82480818:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824808e8
	if (ctx.cr6.eq) goto loc_824808E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x824808ac
	if (!ctx.cr6.gt) goto loc_824808AC;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
loc_82480848:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r5,48(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x824808a4
	if (ctx.cr6.eq) goto loc_824808A4;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,48(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824808a4
	if (!ctx.cr6.eq) goto loc_824808A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82480848
	if (ctx.cr6.lt) goto loc_82480848;
loc_824808A4:
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x824808e8
	if (ctx.cr6.lt) goto loc_824808E8;
loc_824808AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824808e4
	if (ctx.cr6.eq) goto loc_824808E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// b 0x824808c4
	goto loc_824808C4;
loc_824808C0:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824808C4:
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824808c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824808C0;
loc_824808E4:
	// li r26,1
	r26.s64 = 1;
loc_824808E8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824808F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477448
	ctx.lr = 0x824808FC;
	sub_82477448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82480818
	if (!ctx.cr0.eq) goto loc_82480818;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824809d0
	if (!ctx.cr6.eq) goto loc_824809D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824809d0
	if (!ctx.cr6.gt) goto loc_824809D0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248092C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824809bc
	if (!ctx.cr6.eq) goto loc_824809BC;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
loc_824809BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248092c
	if (ctx.cr6.lt) goto loc_8248092C;
loc_824809D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824807f8
	if (ctx.cr6.lt) goto loc_824807F8;
loc_824809E4:
	// cntlzw r11,r26
	ctx.r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824996F8) {
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
	ctx.lr = 0x82499700;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// b 0x82499718
	goto loc_82499718;
loc_82499714:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82499718:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82499714
	if (!ctx.cr6.eq) goto loc_82499714;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x8249972C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499758
	if (ctx.cr0.eq) goto loc_82499758;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x82499750;
	sub_824474C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8249975c
	goto loc_8249975C;
loc_82499758:
	// li r29,0
	r29.s64 = 0;
loc_8249975C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8249976c
	if (!ctx.cr6.eq) goto loc_8249976C;
loc_82499764:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82499840
	goto loc_82499840;
loc_8249976C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82499794
	if (ctx.cr6.eq) goto loc_82499794;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82499788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499764
	if (ctx.cr0.eq) goto loc_82499764;
loc_82499794:
	// lwz r28,32(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82499830
	if (ctx.cr6.eq) goto loc_82499830;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-11392
	r27.s64 = ctx.r11.s64 + -11392;
loc_824997AC:
	// lwz r31,8(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82499824
	if (ctx.cr6.eq) goto loc_82499824;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82499824
	if (!ctx.cr6.eq) goto loc_82499824;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82499824
	if (ctx.cr6.eq) goto loc_82499824;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824997D8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824997f4
	if (ctx.cr0.eq) goto loc_824997F4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824997F0;
	sub_82444918(ctx, base);
	// b 0x824997f8
	goto loc_824997F8;
loc_824997F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824997F8:
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499764
	if (ctx.cr6.eq) goto loc_82499764;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82444890
	ctx.lr = 0x8249980C;
	sub_82444890(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x82499764
	if (ctx.cr0.eq) goto loc_82499764;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
loc_82499824:
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824997ac
	if (!ctx.cr6.eq) goto loc_824997AC;
loc_82499830:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824974b0
	ctx.lr = 0x8249983C;
	sub_824974B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82499840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824A7FD8) {
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
	ctx.lr = 0x824A7FE0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r26,r10,12
	r26.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824a8050
	if (!ctx.cr6.eq) goto loc_824A8050;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824a806c
	if (ctx.cr6.eq) goto loc_824A806C;
loc_824A8050:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a8154
	if (!ctx.cr6.eq) goto loc_824A8154;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a8154
	if (!ctx.cr6.eq) goto loc_824A8154;
loc_824A806C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A8094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a818c
	if (ctx.cr0.lt) goto loc_824A818C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824a80e0
	if (ctx.cr6.eq) goto loc_824A80E0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
loc_824A80B8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824a80b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A80B8;
loc_824A80E0:
	// li r31,0
	r31.s64 = 0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A811C;
	sub_82471828(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A8150;
	sub_82471828(ctx, base);
	// b 0x824a818c
	goto loc_824A818C;
loc_824A8154:
	// li r31,0
	r31.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A818C;
	sub_82471828(ctx, base);
loc_824A818C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824B2690) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824B2698;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b2758
	if (!ctx.cr6.gt) goto loc_824B2758;
	// li r30,0
	r30.s64 = 0;
loc_824B26B4:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b2744
	if (ctx.cr6.eq) goto loc_824B2744;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,24656
	ctx.r9.s64 = 1615855616;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r10,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b26fc
	if (ctx.cr6.eq) goto loc_824B26FC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b2744
	if (!ctx.cr6.eq) goto loc_824B2744;
loc_824B26FC:
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b2744
	if (!ctx.cr6.eq) goto loc_824B2744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x824b2230
	ctx.lr = 0x824B273C;
	sub_824B2230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b275c
	if (ctx.cr0.lt) goto loc_824B275C;
loc_824B2744:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b26b4
	if (ctx.cr6.lt) goto loc_824B26B4;
loc_824B2758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B275C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824B9110) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x824B9118;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824786b8
	ctx.lr = 0x824B913C;
	sub_824786B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x824B9160;
	sub_82478758(ctx, base);
	// stw r3,1092(r31)
	REX_STORE_U32(r31.u32 + 1092, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bl 0x82478758
	ctx.lr = 0x824B9180;
	sub_82478758(ctx, base);
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// li r21,0
	r21.s64 = 0;
	// stw r3,1096(r31)
	REX_STORE_U32(r31.u32 + 1096, ctx.r3.u32);
	// lis r25,24688
	r25.s64 = 1617952768;
	// stw r21,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, r21.u32);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bne cr6,0x824b9204
	if (!ctx.cr6.eq) goto loc_824B9204;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b91f4
	if (!ctx.cr6.gt) goto loc_824B91F4;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B91B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b91e0
	if (!ctx.cr6.eq) goto loc_824B91E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aae28
	ctx.lr = 0x824B91D8;
	sub_824AAE28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B91E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b91b0
	if (ctx.cr6.lt) goto loc_824B91B0;
loc_824B91F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B91FC;
	sub_8245FCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824B9204;
	sub_82482568(ctx, base);
loc_824B9204:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b935c
	if (!ctx.cr6.gt) goto loc_824B935C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r27,r11,12952
	r27.s64 = ctx.r11.s64 + 12952;
	// addi r29,r10,2880
	r29.s64 = ctx.r10.s64 + 2880;
loc_824B922C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824b92ec
	if (!ctx.cr6.gt) goto loc_824B92EC;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_824B9254:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r4,r8,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824b92b4
	if (ctx.cr0.eq) goto loc_824B92B4;
	// rlwinm. r8,r8,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824b92b4
	if (!ctx.cr0.eq) goto loc_824B92B4;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x824b92b4
	if (!ctx.cr6.eq) goto loc_824B92B4;
	// lbz r9,111(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 111);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x824b92b4
	if (!ctx.cr6.eq) goto loc_824B92B4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b92d0
	if (!ctx.cr6.eq) goto loc_824B92D0;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x824b92d0
	if (!ctx.cr6.eq) goto loc_824B92D0;
loc_824B92B4:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b9254
	if (ctx.cr6.lt) goto loc_824B9254;
	// b 0x824b92ec
	goto loc_824B92EC;
loc_824B92D0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lbz r7,203(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 203);
	// li r5,4512
	ctx.r5.s64 = 4512;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82489c30
	ctx.lr = 0x824B92EC;
	sub_82489C30(ctx, base);
loc_824B92EC:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r9,24672
	ctx.r9.s64 = 1616904192;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b9328
	if (ctx.cr6.eq) goto loc_824B9328;
	// lis r9,24752
	ctx.r9.s64 = 1622147072;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b9328
	if (ctx.cr6.eq) goto loc_824B9328;
	// lis r9,24592
	ctx.r9.s64 = 1611661312;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b9328
	if (ctx.cr6.eq) goto loc_824B9328;
	// lis r9,24832
	ctx.r9.s64 = 1627389952;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b9340
	if (!ctx.cr6.eq) goto loc_824B9340;
loc_824B9328:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B933C;
	sub_82489C30(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_824B9340:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b922c
	if (ctx.cr6.lt) goto loc_824B922C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x824b9d70
	if (!ctx.cr6.eq) goto loc_824B9D70;
loc_824B935C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r25,-1
	r25.s64 = -1;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b93e4
	if (!ctx.cr6.gt) goto loc_824B93E4;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824B9378:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r25.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b93d0
	if (!ctx.cr6.eq) goto loc_824B93D0;
	// lbz r8,111(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x824b93ac
	if (!ctx.cr6.eq) goto loc_824B93AC;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_824B93AC:
	// lhz r10,202(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r10,260
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 260, ctx.xer);
	// bge cr6,0x824b93d0
	if (!ctx.cr6.lt) goto loc_824B93D0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,111(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x824b93d0
	if (!ctx.cr6.eq) goto loc_824B93D0;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_824B93D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b9378
	if (ctx.cr6.lt) goto loc_824B9378;
loc_824B93E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lis r22,24816
	r22.s64 = 1626341376;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b94a4
	if (!ctx.cr6.gt) goto loc_824B94A4;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_824B93FC:
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824b9440
	if (ctx.cr6.eq) goto loc_824B9440;
	// lis r6,24656
	ctx.r6.s64 = 1615855616;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824b9440
	if (ctx.cr6.eq) goto loc_824B9440;
	// lis r6,24736
	ctx.r6.s64 = 1621098496;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824b9440
	if (ctx.cr6.eq) goto loc_824B9440;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bne cr6,0x824b9488
	if (!ctx.cr6.eq) goto loc_824B9488;
loc_824B9440:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b9488
	if (!ctx.cr6.gt) goto loc_824B9488;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824B9454:
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b9454
	if (ctx.cr6.lt) goto loc_824B9454;
loc_824B9488:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r21,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r21.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b93fc
	if (ctx.cr6.lt) goto loc_824B93FC;
loc_824B94A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// lis r27,12288
	r27.s64 = 805306368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b951c
	if (!ctx.cr6.gt) goto loc_824B951C;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B94BC:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b94f4
	if (ctx.cr6.eq) goto loc_824B94F4;
	// lis r10,8208
	ctx.r10.s64 = 537919488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b94f4
	if (ctx.cr6.eq) goto loc_824B94F4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x824b9508
	if (!ctx.cr6.eq) goto loc_824B9508;
loc_824B94F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a828
	ctx.lr = 0x824B94FC;
	sub_8246A828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b9ec4
	if (ctx.cr6.lt) goto loc_824B9EC4;
loc_824B9508:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b94bc
	if (ctx.cr6.lt) goto loc_824B94BC;
loc_824B951C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b9574
	if (!ctx.cr6.gt) goto loc_824B9574;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B9530:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x824b9560
	if (!ctx.cr6.eq) goto loc_824B9560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824adca0
	ctx.lr = 0x824B9558;
	sub_824ADCA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9560:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b9530
	if (ctx.cr6.lt) goto loc_824B9530;
loc_824B9574:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// lis r27,4112
	r27.s64 = 269484032;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b95ec
	if (!ctx.cr6.gt) goto loc_824B95EC;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B958C:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b95c4
	if (ctx.cr6.eq) goto loc_824B95C4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x824b95d8
	if (!ctx.cr6.eq) goto loc_824B95D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ab540
	ctx.lr = 0x824B95C0;
	sub_824AB540(ctx, base);
	// b 0x824b95cc
	goto loc_824B95CC;
loc_824B95C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ab3d8
	ctx.lr = 0x824B95CC;
	sub_824AB3D8(ctx, base);
loc_824B95CC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b9ec4
	if (ctx.cr6.lt) goto loc_824B9EC4;
loc_824B95D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b958c
	if (ctx.cr6.lt) goto loc_824B958C;
loc_824B95EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B95F4;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// lis r26,8256
	r26.s64 = 541065216;
	// lis r23,8272
	r23.s64 = 542113792;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b96c0
	if (!ctx.cr6.gt) goto loc_824B96C0;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B9610:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x824b968c
	if (ctx.cr6.eq) goto loc_824B968C;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824b9664
	if (ctx.cr6.eq) goto loc_824B9664;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x824b9658
	if (ctx.cr6.eq) goto loc_824B9658;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b96ac
	if (!ctx.cr6.eq) goto loc_824B96AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824618b8
	ctx.lr = 0x824B9654;
	sub_824618B8(ctx, base);
	// b 0x824b96a0
	goto loc_824B96A0;
loc_824B9658:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e1b0
	ctx.lr = 0x824B9660;
	sub_8246E1B0(ctx, base);
	// b 0x824b9698
	goto loc_824B9698;
loc_824B9664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e618
	ctx.lr = 0x824B966C;
	sub_8246E618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246de00
	ctx.lr = 0x824B9674;
	sub_8246DE00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e350
	ctx.lr = 0x824B9680;
	sub_8246E350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e1b0
	ctx.lr = 0x824B9688;
	sub_8246E1B0(ctx, base);
	// b 0x824b96a0
	goto loc_824B96A0;
loc_824B968C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246dcd8
	ctx.lr = 0x824B9698;
	sub_8246DCD8(ctx, base);
loc_824B9698:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e538
	ctx.lr = 0x824B96A0;
	sub_8246E538(ctx, base);
loc_824B96A0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b9ec4
	if (ctx.cr6.lt) goto loc_824B9EC4;
loc_824B96AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b9610
	if (ctx.cr6.lt) goto loc_824B9610;
loc_824B96C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B96C8;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b972c
	if (!ctx.cr6.gt) goto loc_824B972C;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B96DC:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824b9704
	if (ctx.cr6.eq) goto loc_824B9704;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x824b9718
	if (!ctx.cr6.eq) goto loc_824B9718;
loc_824B9704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b6e60
	ctx.lr = 0x824B970C;
	sub_824B6E60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b9ec4
	if (ctx.cr6.lt) goto loc_824B9EC4;
loc_824B9718:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b96dc
	if (ctx.cr6.lt) goto loc_824B96DC;
loc_824B972C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B9734;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b97a4
	if (!ctx.cr6.gt) goto loc_824B97A4;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B9748:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x824b9790
	if (!ctx.cr6.eq) goto loc_824B9790;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad4a0
	ctx.lr = 0x824B9774;
	sub_824AD4A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad4a0
	ctx.lr = 0x824B9788;
	sub_824AD4A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9790:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b9748
	if (ctx.cr6.lt) goto loc_824B9748;
loc_824B97A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B97AC;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b9804
	if (!ctx.cr6.gt) goto loc_824B9804;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B97C0:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x824b97f0
	if (!ctx.cr6.eq) goto loc_824B97F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ae090
	ctx.lr = 0x824B97E8;
	sub_824AE090(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B97F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b97c0
	if (ctx.cr6.lt) goto loc_824B97C0;
loc_824B9804:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B980C;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b988c
	if (!ctx.cr6.gt) goto loc_824B988C;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B9820:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x824b9864
	if (ctx.cr6.eq) goto loc_824B9864;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b9878
	if (!ctx.cr6.eq) goto loc_824B9878;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246bca0
	ctx.lr = 0x824B9854;
	sub_8246BCA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82465a50
	ctx.lr = 0x824B9860;
	sub_82465A50(ctx, base);
	// b 0x824b986c
	goto loc_824B986C;
loc_824B9864:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464558
	ctx.lr = 0x824B986C;
	sub_82464558(ctx, base);
loc_824B986C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b9ec4
	if (ctx.cr6.lt) goto loc_824B9EC4;
loc_824B9878:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b9820
	if (ctx.cr6.lt) goto loc_824B9820;
loc_824B988C:
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824b98d0
	if (ctx.cr6.eq) goto loc_824B98D0;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824B98A0:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x824acd88
	ctx.lr = 0x824B98B8;
	sub_824ACD88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x824b98a0
	if (ctx.cr6.lt) goto loc_824B98A0;
loc_824B98D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824B98D8;
	sub_8245FCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c308
	ctx.lr = 0x824B98E0;
	sub_8246C308(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad9d8
	ctx.lr = 0x824B98F0;
	sub_824AD9D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824abd00
	ctx.lr = 0x824B9900;
	sub_824ABD00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,260
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 260, ctx.xer);
	// bne cr6,0x824b9d48
	if (!ctx.cr6.eq) goto loc_824B9D48;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x823f02b8
	ctx.lr = 0x824B9924;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// bne 0x824b993c
	if (!ctx.cr0.eq) goto loc_824B993C;
loc_824B9930:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824b9ec8
	goto loc_824B9EC8;
loc_824B993C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x823f02b8
	ctx.lr = 0x824B9948;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// beq 0x824b9930
	if (ctx.cr0.eq) goto loc_824B9930;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,552(r31)
	REX_STORE_U32(r31.u32 + 552, r21.u32);
	// stw r21,548(r31)
	REX_STORE_U32(r31.u32 + 548, r21.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824B996C;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x826a2e60
	ctx.lr = 0x824B997C;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af728
	ctx.lr = 0x824B9984;
	sub_824AF728(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824afd98
	ctx.lr = 0x824B9994;
	sub_824AFD98(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824affe8
	ctx.lr = 0x824B99A4;
	sub_824AFFE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b9d70
	if (!ctx.cr0.eq) goto loc_824B9D70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824afe78
	ctx.lr = 0x824B99B4;
	sub_824AFE78(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824b99d0
	if (!ctx.cr6.eq) goto loc_824B99D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,2816
	ctx.r6.s64 = ctx.r11.s64 + 2816;
	// b 0x824b9c98
	goto loc_824B9C98;
loc_824B99D0:
	// bl 0x824b7c48
	ctx.lr = 0x824B99D4;
	sub_824B7C48(ctx, base);
	// mr r29,r21
	r29.u64 = r21.u64;
	// addi r30,r31,776
	r30.s64 = r31.s64 + 776;
loc_824B99DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x824B99F4;
	sub_82478758(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824b9cb0
	if (ctx.cr6.eq) goto loc_824B9CB0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r21.u32);
	// blt cr6,0x824b99dc
	if (ctx.cr6.lt) goto loc_824B99DC;
	// addi r27,r31,712
	r27.s64 = r31.s64 + 712;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824B9A34;
	sub_826A2E60(ctx, base);
	// mr r24,r25
	r24.u64 = r25.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824b9c2c
	if (ctx.cr6.eq) goto loc_824B9C2C;
loc_824B9A44:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824B9A54;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x826a2e60
	ctx.lr = 0x824B9A64;
	sub_826A2E60(ctx, base);
	// stw r21,548(r31)
	REX_STORE_U32(r31.u32 + 548, r21.u32);
	// stw r21,552(r31)
	REX_STORE_U32(r31.u32 + 552, r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0388
	ctx.lr = 0x824B9A7C;
	sub_824B0388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b9c20
	if (ctx.cr0.eq) goto loc_824B9C20;
	// stw r21,1036(r31)
	REX_STORE_U32(r31.u32 + 1036, r21.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,1032(r31)
	REX_STORE_U32(r31.u32 + 1032, r21.u32);
	// bl 0x824af658
	ctx.lr = 0x824B9A94;
	sub_824AF658(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x824b59e8
	ctx.lr = 0x824B9AAC;
	sub_824B59E8(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b59e8
	ctx.lr = 0x824B9AC4;
	sub_824B59E8(ctx, base);
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
	// li r29,16
	r29.s64 = 16;
loc_824B9ACC:
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b9ae8
	if (ctx.cr6.eq) goto loc_824B9AE8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824B9AE0;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B9AE8;
	sub_82477B20(ctx, base);
loc_824B9AE8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwu r21,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r21.u32);
	r30.u32 = ea;
	// bne 0x824b9acc
	if (!ctx.cr0.eq) goto loc_824B9ACC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b7da8
	ctx.lr = 0x824B9AFC;
	sub_824B7DA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x824b9c20
	if (ctx.cr6.eq) goto loc_824B9C20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0840
	ctx.lr = 0x824B9B18;
	sub_824B0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b9c20
	if (ctx.cr0.lt) goto loc_824B9C20;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2768
	ctx.lr = 0x824B9B30;
	sub_824B2768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b9c20
	if (ctx.cr0.lt) goto loc_824B9C20;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B9B50;
	sub_824B59E8(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b59e8
	ctx.lr = 0x824B9B68;
	sub_824B59E8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
loc_824B9B84:
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b9b94
	if (ctx.cr6.eq) goto loc_824B9B94;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_824B9B94:
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b9ba4
	if (ctx.cr6.eq) goto loc_824B9BA4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_824B9BA4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824b9b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B9B84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x824b9bc4
	if (ctx.cr6.gt) goto loc_824B9BC4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_824B9BC4:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824b9bd8
	if (!ctx.cr6.gt) goto loc_824B9BD8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_824B9BD8:
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x824b9c00
	if (!ctx.cr6.gt) goto loc_824B9C00;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_824B9C00:
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// ble cr6,0x824b9c0c
	if (!ctx.cr6.gt) goto loc_824B9C0C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_824B9C0C:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x824b9c1c
	if (!ctx.cr6.lt) goto loc_824B9C1C;
	// mr r24,r26
	r24.u64 = r26.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_824B9C1C:
	// stw r21,1032(r31)
	REX_STORE_U32(r31.u32 + 1032, r21.u32);
loc_824B9C20:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(r26.u32, r23.u32, ctx.xer);
	// blt cr6,0x824b9a44
	if (ctx.cr6.lt) goto loc_824B9A44;
loc_824B9C2C:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824B9C3C;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x826a2e60
	ctx.lr = 0x824B9C4C;
	sub_826A2E60(ctx, base);
	// stw r21,548(r31)
	REX_STORE_U32(r31.u32 + 548, r21.u32);
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
	// stw r21,552(r31)
	REX_STORE_U32(r31.u32 + 552, r21.u32);
	// li r29,12
	r29.s64 = 12;
loc_824B9C5C:
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b9c78
	if (ctx.cr6.eq) goto loc_824B9C78;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824B9C70;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B9C78;
	sub_82477B20(ctx, base);
loc_824B9C78:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwu r21,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r21.u32);
	r30.u32 = ea;
	// bne 0x824b9c5c
	if (!ctx.cr0.eq) goto loc_824B9C5C;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824b9cbc
	if (!ctx.cr6.eq) goto loc_824B9CBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,2772
	ctx.r6.s64 = ctx.r11.s64 + 2772;
loc_824B9C98:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// li r5,4500
	ctx.r5.s64 = 4500;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// bl 0x82489c30
	ctx.lr = 0x824B9CAC;
	sub_82489C30(ctx, base);
	// b 0x824b9ec4
	goto loc_824B9EC4;
loc_824B9CB0:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824b9ec4
	goto loc_824B9EC4;
loc_824B9CBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824b0388
	ctx.lr = 0x824B9CC8;
	sub_824B0388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af658
	ctx.lr = 0x824B9CD0;
	sub_824AF658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b7da8
	ctx.lr = 0x824B9CD8;
	sub_824B7DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0840
	ctx.lr = 0x824B9CE4;
	sub_824B0840(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2768
	ctx.lr = 0x824B9CFC;
	sub_824B2768(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824B9D10:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824b9d2c
	if (!ctx.cr6.eq) goto loc_824B9D2C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x824b9d10
	if (ctx.cr6.lt) goto loc_824B9D10;
loc_824B9D2C:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x824b9e30
	if (!ctx.cr6.eq) goto loc_824B9E30;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x824b9e30
	if (!ctx.cr6.eq) goto loc_824B9E30;
	// stw r21,548(r31)
	REX_STORE_U32(r31.u32 + 548, r21.u32);
	// b 0x824b9e30
	goto loc_824B9E30;
loc_824B9D48:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// ble cr6,0x824b9d7c
	if (!ctx.cr6.gt) goto loc_824B9D7C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r10,2708
	ctx.r6.s64 = ctx.r10.s64 + 2708;
	// li r5,4500
	ctx.r5.s64 = 4500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824B9D70;
	sub_82489C30(ctx, base);
loc_824B9D70:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824b9ec4
	goto loc_824B9EC4;
loc_824B9D7C:
	// bl 0x824b7558
	ctx.lr = 0x824B9D80;
	sub_824B7558(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b9da4
	if (ctx.cr6.eq) goto loc_824B9DA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824abac8
	ctx.lr = 0x824B9D9C;
	sub_824ABAC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9DA4:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b9dcc
	if (ctx.cr6.eq) goto loc_824B9DCC;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824b9dcc
	if (ctx.cr6.eq) goto loc_824B9DCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b8360
	ctx.lr = 0x824B9DC4;
	sub_824B8360(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9DCC:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b9e14
	if (ctx.cr6.eq) goto loc_824B9E14;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824b9e14
	if (ctx.cr6.eq) goto loc_824B9E14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ac0d0
	ctx.lr = 0x824B9DEC;
	sub_824AC0D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b62a0
	ctx.lr = 0x824B9DFC;
	sub_824B62A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ac6d0
	ctx.lr = 0x824B9E0C;
	sub_824AC6D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9E14:
	// stw r21,220(r31)
	REX_STORE_U32(r31.u32 + 220, r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2768
	ctx.lr = 0x824B9E28;
	sub_824B2768(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9E30:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// bl 0x824b1940
	ctx.lr = 0x824B9E40;
	sub_824B1940(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B9E60;
	sub_824B59E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B9E80;
	sub_824B59E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ab798
	ctx.lr = 0x824B9E90;
	sub_824AB798(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b9ec0
	if (ctx.cr6.eq) goto loc_824B9EC0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824b9ec0
	if (ctx.cr6.eq) goto loc_824B9EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aad10
	ctx.lr = 0x824B9EB8;
	sub_824AAD10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b9ec4
	if (ctx.cr0.lt) goto loc_824B9EC4;
loc_824B9EC0:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_824B9EC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824B9EC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82510AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82510AB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82510b04
	if (ctx.cr6.eq) goto loc_82510B04;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82510b04
	if (ctx.cr6.eq) goto loc_82510B04;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82510b04
	if (ctx.cr6.eq) goto loc_82510B04;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82510b04
	if (ctx.cr6.eq) goto loc_82510B04;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82510b04
	if (ctx.cr6.eq) goto loc_82510B04;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82510b08
	if (!ctx.cr6.eq) goto loc_82510B08;
loc_82510B04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82510B08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510b38
	if (ctx.cr0.eq) goto loc_82510B38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x82510B1C;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82510b98
	if (ctx.cr6.eq) goto loc_82510B98;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82510b98
	if (ctx.cr6.eq) goto loc_82510B98;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_82510B38:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510b74
	if (!ctx.cr0.eq) goto loc_82510B74;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82510b74
	if (ctx.cr0.eq) goto loc_82510B74;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82510b80
	if (!ctx.cr6.gt) goto loc_82510B80;
loc_82510B74:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82510B80;
	sub_8251FE00(ctx, base);
loc_82510B80:
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
loc_82510B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8251EEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251EEC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8251e3d0
	ctx.lr = 0x8251EED8;
	sub_8251E3D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251eeec
	if (!ctx.cr6.eq) goto loc_8251EEEC;
loc_8251EEE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8251ef34
	goto loc_8251EF34;
loc_8251EEEC:
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8251ef20
	goto loc_8251EF20;
loc_8251EEF4:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251eb30
	ctx.lr = 0x8251EF04;
	sub_8251EB30(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251ef18
	if (!ctx.cr6.eq) goto loc_8251EF18;
	// clrlwi. r11,r31,30
	ctx.r11.u64 = r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251ef30
	if (ctx.cr0.eq) goto loc_8251EF30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251EF18:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_8251EF20:
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x8251eef4
	if (!ctx.cr6.gt) goto loc_8251EEF4;
	// b 0x8251eee4
	goto loc_8251EEE4;
loc_8251EF30:
	// rlwinm r3,r31,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
loc_8251EF34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82523288) {
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
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r31,12(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x825232e4
	goto loc_825232E4;
loc_825232B4:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x825232e4
	if (!ctx.cr6.eq) goto loc_825232E4;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825232e4
	if (ctx.cr0.eq) goto loc_825232E4;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825232e4
	if (!ctx.cr6.eq) goto loc_825232E4;
	// li r30,1
	r30.s64 = 1;
loc_825232E4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8250ae78
	ctx.lr = 0x825232EC;
	sub_8250AE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825232b4
	if (!ctx.cr0.eq) goto loc_825232B4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

DEFINE_REX_FUNC(sub_82528FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82528FE8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82529058
	if (ctx.cr6.eq) goto loc_82529058;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r7,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529008
	if (!ctx.cr0.eq) goto loc_82529008;
	// rlwinm. r11,r7,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8252900c
	if (ctx.cr0.eq) goto loc_8252900C;
loc_82529008:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8252900C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529050
	if (ctx.cr0.eq) goto loc_82529050;
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8252904c
	if (ctx.cr0.eq) goto loc_8252904C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82529028:
	// rlwinm r31,r7,27,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r31,r31,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r31,30
	r31.u64 = r31.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r31,r5,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r31.u8 & 0x3F));
	// or r9,r31,r9
	ctx.r9.u64 = r31.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82529028
	if (ctx.cr6.lt) goto loc_82529028;
loc_8252904C:
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_82529050:
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82528fe8
	goto loc_82528FE8;
loc_82529058:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82529074
	if (ctx.cr6.eq) goto loc_82529074;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82529074:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
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
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r9,r11,1,27,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r9,r11,1,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82533238) {
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
	ctx.lr = 0x82533240;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r23,0
	r23.s64 = 0;
	// bl 0x82533008
	ctx.lr = 0x82533280;
	sub_82533008(ctx, base);
	// lwz r25,332(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r19,308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// beq 0x82533300
	if (ctx.cr0.eq) goto loc_82533300;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82533008
	ctx.lr = 0x825332B4;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533300
	if (ctx.cr0.eq) goto loc_82533300;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825332f4
	if (ctx.cr6.eq) goto loc_825332F4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825332f4
	if (ctx.cr6.eq) goto loc_825332F4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r9,r9,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82533300
	if (!ctx.cr0.eq) goto loc_82533300;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r9,r9,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82533300
	if (!ctx.cr0.eq) goto loc_82533300;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82533300
	if (!ctx.cr6.eq) goto loc_82533300;
loc_825332F4:
	// stw r26,0(r19)
	REX_STORE_U32(r19.u32 + 0, r26.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r24,0(r20)
	REX_STORE_U32(r20.u32 + 0, r24.u32);
loc_82533300:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82533008
	ctx.lr = 0x82533320;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825333e4
	if (ctx.cr0.eq) goto loc_825333E4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82533008
	ctx.lr = 0x82533348;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825333e4
	if (ctx.cr0.eq) goto loc_825333E4;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x82533388
	if (ctx.cr0.eq) goto loc_82533388;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r6,28,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x7F;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r9,r7,28,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x7F;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r5,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x7F;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825333e4
	if (!ctx.cr6.lt) goto loc_825333E4;
loc_82533388:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825333b8
	if (ctx.cr6.eq) goto loc_825333B8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825333b8
	if (ctx.cr6.eq) goto loc_825333B8;
	// rlwinm. r9,r7,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825333e4
	if (!ctx.cr0.eq) goto loc_825333E4;
	// rlwinm. r9,r6,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825333e4
	if (!ctx.cr0.eq) goto loc_825333E4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825333e4
	if (!ctx.cr6.eq) goto loc_825333E4;
loc_825333B8:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,1
	r23.s64 = 1;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r24,0(r19)
	REX_STORE_U32(r19.u32 + 0, r24.u32);
	// stw r26,0(r20)
	REX_STORE_U32(r20.u32 + 0, r26.u32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r6,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// stw r8,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r8.u32);
	// stw r10,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r10.u32);
loc_825333E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,17,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFC7FFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x825335a8
	if (ctx.cr0.eq) goto loc_825335A8;
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825335a8
	if (!ctx.cr0.eq) goto loc_825335A8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825335a8
	if (!ctx.cr0.eq) goto loc_825335A8;
	// lwz r4,12(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 12);
	// lwz r29,12(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82533430
	if (ctx.cr6.eq) goto loc_82533430;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82533434
	if (!ctx.cr6.eq) goto loc_82533434;
loc_82533430:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82533434:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825335a8
	if (ctx.cr0.eq) goto loc_825335A8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82533458
	if (ctx.cr6.eq) goto loc_82533458;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8253345c
	if (!ctx.cr6.eq) goto loc_8253345C;
loc_82533458:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253345C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825335a8
	if (ctx.cr0.eq) goto loc_825335A8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,12(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// lwz r27,12(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 12);
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x82533488;
	sub_8252DEA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r3,15,14,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x38000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC7FFF);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x825334B4;
	sub_8252DEA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r3,15,14,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x38000;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// or r29,r10,r11
	r29.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r7,r10,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// bl 0x8252df78
	ctx.lr = 0x825334E4;
	sub_8252DF78(ctx, base);
	// rlwinm r11,r3,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwimi r11,r29,0,17,13
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFC7FFF) | (ctx.r11.u64 & 0x38000);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x82533518;
	sub_8252DEA8(ctx, base);
	// rlwinm r11,r3,15,14,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x38000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x82533544;
	sub_8252DEA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r3,15,14,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x38000;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// or r29,r10,r11
	r29.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r7,r10,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// bl 0x8252df78
	ctx.lr = 0x82533574;
	sub_8252DF78(ctx, base);
	// rlwinm r11,r3,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(r29.u32, 0);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwimi r11,r10,0,17,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFC7FFF) | (ctx.r11.u64 & 0x38000);
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// rlwinm r10,r11,0,14,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	r23.u64 = ctx.r11.u64 & r23.u64;
loc_825335A8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8255D480) {
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
	ctx.lr = 0x8255D488;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addic r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// and r30,r9,r11
	r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8255d4e0
	goto loc_8255D4E0;
loc_8255D4DC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8255D4E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d4fc
	if (ctx.cr6.eq) goto loc_8255D4FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8255d500
	if (!ctx.cr6.eq) goto loc_8255D500;
loc_8255D4FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255D500:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d5bc
	if (!ctx.cr0.eq) goto loc_8255D5BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553778
	ctx.lr = 0x8255D510;
	sub_82553778(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8255d54c
	if (ctx.cr6.eq) goto loc_8255D54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255d54c
	if (!ctx.cr6.eq) goto loc_8255D54C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255d54c
	if (!ctx.cr6.eq) goto loc_8255D54C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255d4dc
	if (ctx.cr6.eq) goto loc_8255D4DC;
loc_8255D54C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255d564
	if (ctx.cr6.eq) goto loc_8255D564;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8255d568
	if (!ctx.cr6.eq) goto loc_8255D568;
loc_8255D564:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255D568:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d5b4
	if (!ctx.cr0.eq) goto loc_8255D5B4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82553778
	ctx.lr = 0x8255D578;
	sub_82553778(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255d5b4
	if (!ctx.cr6.eq) goto loc_8255D5B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255d5b4
	if (!ctx.cr6.eq) goto loc_8255D5B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255d5b4
	if (!ctx.cr6.eq) goto loc_8255D5B4;
	// lwz r29,104(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8255d4dc
	goto loc_8255D4DC;
loc_8255D5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255d5e4
	goto loc_8255D5E4;
loc_8255D5BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255d5d4
	if (ctx.cr6.eq) goto loc_8255D5D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8255d5d8
	if (!ctx.cr6.eq) goto loc_8255D5D8;
loc_8255D5D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255D5D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8255D5E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8257CDF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8257CDF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257ce44
	if (ctx.cr6.eq) goto loc_8257CE44;
	// rlwinm. r30,r4,27,5,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r29,r4,0,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// beq 0x8257ce24
	if (ctx.cr0.eq) goto loc_8257CE24;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x826a2e60
	ctx.lr = 0x8257CE24;
	sub_826A2E60(ctx, base);
loc_8257CE24:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// beq cr6,0x8257ce44
	if (ctx.cr6.eq) goto loc_8257CE44;
	// subf r11,r29,r31
	ctx.r11.u64 = r31.u64 - r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r9,r28
	REX_STORE_U32(ctx.r9.u32 + r28.u32, ctx.r11.u32);
loc_8257CE44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8257E088) {
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
	ctx.lr = 0x8257E090;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-25880
	ctx.r5.s64 = ctx.r11.s64 + -25880;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528f28
	ctx.lr = 0x8257E0B0;
	sub_82528F28(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8257E0B8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r24,0
	r24.s64 = 0;
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
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// b 0x8257e0e0
	goto loc_8257E0E0;
loc_8257E0D8:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
loc_8257E0E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257e0d8
	if (!ctx.cr6.eq) goto loc_8257E0D8;
loc_8257E0E8:
	// not r11,r27
	ctx.r11.u64 = ~r27.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257e100
	if (!ctx.cr0.eq) goto loc_8257E100;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// b 0x8257e114
	goto loc_8257E114;
loc_8257E100:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8257E114;
	sub_826A2E60(ctx, base);
loc_8257E114:
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8257E118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257e188
	if (ctx.cr6.eq) goto loc_8257E188;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8257e180
	if (ctx.cr6.eq) goto loc_8257E180;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257e180
	if (!ctx.cr0.eq) goto loc_8257E180;
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r27,4
	ctx.r9.s64 = r27.s64 + 4;
	// bne 0x8257e154
	if (!ctx.cr0.eq) goto loc_8257E154;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8257E154:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r8,84
	ctx.r4.s64 = ctx.r8.s64 + 84;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8257ce50
	ctx.lr = 0x8257E17C;
	sub_8257CE50(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8257E180:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8257e118
	goto loc_8257E118;
loc_8257E188:
	// lwz r28,56(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 56);
	// b 0x8257e288
	goto loc_8257E288;
loc_8257E190:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257e284
	if (!ctx.cr0.eq) goto loc_8257E284;
	// addi r30,r28,84
	r30.s64 = r28.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8257E1A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b2a0
	ctx.lr = 0x8257E1AC;
	sub_8257B2A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8257E1B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257e1c8
	if (!ctx.cr0.eq) goto loc_8257E1C8;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8257e1d4
	goto loc_8257E1D4;
loc_8257E1C8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8257E1D4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8257e284
	if (ctx.cr6.gt) goto loc_8257E284;
	// lwz r11,96(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 96);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,52(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8257e244
	if (ctx.cr6.eq) goto loc_8257E244;
	// not r11,r27
	ctx.r11.u64 = ~r27.u64;
	// lwz r10,48(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r8,r27,4
	ctx.r8.s64 = r27.s64 + 4;
	// bne 0x8257e218
	if (!ctx.cr0.eq) goto loc_8257E218;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_8257E218:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,84
	ctx.r4.s64 = ctx.r9.s64 + 84;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x8257ce50
	ctx.lr = 0x8257E240;
	sub_8257CE50(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8257E244:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257e25c
	if (!ctx.cr0.eq) goto loc_8257E25C;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8257e268
	goto loc_8257E268;
loc_8257E25C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8257E268:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257e27c
	if (!ctx.cr6.eq) goto loc_8257E27C;
	// li r31,-1
	r31.s64 = -1;
	// b 0x8257e1b0
	goto loc_8257E1B0;
loc_8257E27C:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// b 0x8257e1a4
	goto loc_8257E1A4;
loc_8257E284:
	// lwz r28,60(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 60);
loc_8257E288:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8257e190
	if (!ctx.cr6.eq) goto loc_8257E190;
	// addi r31,r29,84
	r31.s64 = r29.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257cec8
	ctx.lr = 0x8257E2A0;
	sub_8257CEC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257e2b8
	if (!ctx.cr0.eq) goto loc_8257E2B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825040b8
	ctx.lr = 0x8257E2B4;
	sub_825040B8(ctx, base);
	// mr r24,r26
	r24.u64 = r26.u64;
loc_8257E2B8:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257e2e4
	if (ctx.cr6.eq) goto loc_8257E2E4;
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x8257e2d8
	goto loc_8257E2D8;
loc_8257E2D0:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
loc_8257E2D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257e2d0
	if (!ctx.cr6.eq) goto loc_8257E2D0;
	// b 0x8257e2e8
	goto loc_8257E2E8;
loc_8257E2E4:
	// lwz r29,52(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 52);
loc_8257E2E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8257e0e8
	if (!ctx.cr6.eq) goto loc_8257E0E8;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257e0b8
	if (!ctx.cr0.eq) goto loc_8257E0B8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82585B38) {
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
	// li r8,1
	ctx.r8.s64 = 1;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82585B6C;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82585B7C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82585B88;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82589840) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589884
	if (!ctx.cr0.eq) goto loc_82589884;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589884
	if (ctx.cr0.eq) goto loc_82589884;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82589890
	if (!ctx.cr6.gt) goto loc_82589890;
loc_82589884:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x8258988C;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82589890:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stdx r31,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, r31.u64);
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

DEFINE_REX_FUNC(sub_8259C738) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lhz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,20264(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f13,f0,f2
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fnmsubs f12,f12,f0,f1
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
loc_8259C798:
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f11,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fnmsubs f13,f13,f0,f1
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f1.f64)));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f11,f11,f0,f2
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8259c7e0
	if (!ctx.cr6.lt) goto loc_8259C7E0;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8259C7E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8259c798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259C798;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A1088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A1090;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-13304
	r29.s64 = ctx.r10.s64 + -13304;
	// bne cr6,0x825a10d0
	if (!ctx.cr6.eq) goto loc_825A10D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-13208
	ctx.r5.s64 = ctx.r11.s64 + -13208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A10D0;
	sub_824EA978(ctx, base);
loc_825A10D0:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// blt cr6,0x825a10f4
	if (ctx.cr6.lt) goto loc_825A10F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-13204
	ctx.r5.s64 = ctx.r11.s64 + -13204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,183
	ctx.r7.s64 = 183;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A10F4;
	sub_824EA978(ctx, base);
loc_825A10F4:
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A2C20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A2C28;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-11576
	r29.s64 = ctx.r10.s64 + -11576;
	// bne cr6,0x825a2c64
	if (!ctx.cr6.eq) goto loc_825A2C64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11856
	ctx.r5.s64 = ctx.r11.s64 + -11856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2C64;
	sub_824EA978(ctx, base);
loc_825A2C64:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a27b8
	ctx.lr = 0x825A2C6C;
	sub_825A27B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825a2c94
	if (!ctx.cr0.eq) goto loc_825A2C94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26464
	ctx.r5.s64 = ctx.r11.s64 + -26464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,417
	ctx.r7.s64 = 417;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2C90;
	sub_824EA978(ctx, base);
	// b 0x825a2cac
	goto loc_825A2CAC;
loc_825A2C94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x824eef20
	ctx.lr = 0x825A2CAC;
	sub_824EEF20(ctx, base);
loc_825A2CAC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A4F80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825A4F8C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r4,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// bdnz 0x825a4f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A4F8C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A5D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825A5D50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825a5d80
	if (!ctx.cr6.eq) goto loc_825A5D80;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-8736
	ctx.r6.s64 = ctx.r11.s64 + -8736;
	// addi r5,r10,-8568
	ctx.r5.s64 = ctx.r10.s64 + -8568;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,531
	ctx.r7.s64 = 531;
	// bl 0x824ea978
	ctx.lr = 0x825A5D80;
	sub_824EA978(ctx, base);
loc_825A5D80:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825a5db8
	if (!ctx.cr6.gt) goto loc_825A5DB8;
	// li r30,0
	r30.s64 = 0;
loc_825A5D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x825a2a78
	ctx.lr = 0x825A5DA4;
	sub_825A2A78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825a5d94
	if (ctx.cr6.lt) goto loc_825A5D94;
loc_825A5DB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825AB6A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// beq 0x825ab6dc
	if (ctx.cr0.eq) goto loc_825AB6DC;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB6DC:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ab6f4
	if (ctx.cr0.eq) goto loc_825AB6F4;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB6F4:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ab718
	if (ctx.cr0.eq) goto loc_825AB718;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB718:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ab730
	if (ctx.cr0.eq) goto loc_825AB730;
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB730:
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r9,0,29,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r8,0,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r8,0,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r8,r9,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,29,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r8.u64 & 0x8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r9,r8,0,25,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r9.u64 & 0x80);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,21,19
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r8.u64 & 0x800);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,17,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r8.u64 & 0x8000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B4298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B42A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r4,1444(r3)
	REX_STORE_U32(ctx.r3.u32 + 1444, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,1384(r3)
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r8.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r6,1436(r3)
	REX_STORE_U32(ctx.r3.u32 + 1436, ctx.r6.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r5,1440(r3)
	REX_STORE_U32(ctx.r3.u32 + 1440, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// ori r8,r4,61370
	ctx.r8.u64 = ctx.r4.u64 | 61370;
	// stb r10,1368(r3)
	REX_STORE_U8(ctx.r3.u32 + 1368, ctx.r10.u8);
	// li r29,0
	r29.s64 = 0;
	// stw r11,2712(r3)
	REX_STORE_U32(ctx.r3.u32 + 2712, ctx.r11.u32);
	// li r30,16
	r30.s64 = 16;
	// stb r10,2128(r3)
	REX_STORE_U8(ctx.r3.u32 + 2128, ctx.r10.u8);
	// stb r10,2129(r3)
	REX_STORE_U8(ctx.r3.u32 + 2129, ctx.r10.u8);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r29,2736(r3)
	REX_STORE_U32(ctx.r3.u32 + 2736, r29.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r8,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r8.u32);
	// stw r11,2716(r31)
	REX_STORE_U32(r31.u32 + 2716, ctx.r11.u32);
	// stw r11,2720(r31)
	REX_STORE_U32(r31.u32 + 2720, ctx.r11.u32);
	// stw r11,2724(r31)
	REX_STORE_U32(r31.u32 + 2724, ctx.r11.u32);
	// stw r30,2728(r31)
	REX_STORE_U32(r31.u32 + 2728, r30.u32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x825B4314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b436c
	if (ctx.cr0.eq) goto loc_825B436C;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r9,4095
	ctx.r9.s64 = 4095;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r11,r8,-4096
	ctx.r11.s64 = ctx.r8.s64 + -4096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// b 0x825b4370
	goto loc_825B4370;
loc_825B436C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_825B4370:
	// stw r11,1360(r31)
	REX_STORE_U32(r31.u32 + 1360, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,1448(r31)
	REX_STORE_U32(r31.u32 + 1448, r29.u32);
	// stw r29,1452(r31)
	REX_STORE_U32(r31.u32 + 1452, r29.u32);
	// stw r29,1456(r31)
	REX_STORE_U32(r31.u32 + 1456, r29.u32);
	// bl 0x825b4030
	ctx.lr = 0x825B4388;
	sub_825B4030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b40e0
	ctx.lr = 0x825B4390;
	sub_825B40E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B8558) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b82e0
	sub_825B82E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B8C00) {
	REX_FUNC_PROLOGUE();
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825B8C14:
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825b8c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B8C14;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B99F0) {
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
	ctx.lr = 0x825B99F8;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826a18c8
	ctx.lr = 0x825B9A20;
	sub_826A18C8(ctx, base);
	// lis r29,-128
	r29.s64 = -8388608;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b9a34
	if (!ctx.cr0.eq) goto loc_825B9A34;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
loc_825B9A34:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x826a18c8
	ctx.lr = 0x825B9A3C;
	sub_826A18C8(ctx, base);
	// lis r31,32640
	r31.s64 = 2139095040;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b9a50
	if (!ctx.cr0.eq) goto loc_825B9A50;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_825B9A50:
	// lhz r11,14(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 14);
	// rlwinm r10,r28,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r25,r11,28
	r25.u64 = ctx.r11.u32 & 0xF;
	// lfd f31,-3744(r9)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// bne cr6,0x825b9a88
	if (!ctx.cr6.eq) goto loc_825B9A88;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x825b9aa0
	if (!ctx.cr6.lt) goto loc_825B9AA0;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// b 0x825b9aa0
	goto loc_825B9AA0;
loc_825B9A88:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// bne cr6,0x825b9aa0
	if (!ctx.cr6.eq) goto loc_825B9AA0;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x825b9aa0
	if (!ctx.cr6.gt) goto loc_825B9AA0;
	// fmr f30,f31
	f30.f64 = f31.f64;
loc_825B9AA0:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// b 0x825b9ab8
	goto loc_825B9AB8;
loc_825B9AA8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825b9ac0
	if (ctx.cr6.eq) goto loc_825B9AC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825B9AB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9aa8
	if (!ctx.cr6.eq) goto loc_825B9AA8;
loc_825B9AC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b9b40
	if (!ctx.cr6.eq) goto loc_825B9B40;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x825b9af0
	if (!ctx.cr6.eq) goto loc_825B9AF0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x825b9af0
	if (!ctx.cr6.eq) goto loc_825B9AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b9be4
	goto loc_825B9BE4;
loc_825B9AF0:
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ff930
	ctx.lr = 0x825B9B00;
	sub_824FF930(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B9B20:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfd f0,-24(r9)
	REX_STORE_U64(ctx.r9.u32 + -24, ctx.f0.u64);
	// stfdu f13,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.f13.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x825b9b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B9B20;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
loc_825B9B40:
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x825b9b60
	if (ctx.cr6.eq) goto loc_825B9B60;
	// stfdx f30,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, f30.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825B9B60:
	// addi r10,r28,5
	ctx.r10.s64 = r28.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x825b9b7c
	if (ctx.cr6.eq) goto loc_825B9B7C;
	// stfdx f29,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, f29.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825B9B7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x825b9b8c
	if (ctx.cr6.lt) goto loc_825B9B8C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_825B9B8C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x825b9b98
	if (ctx.cr6.gt) goto loc_825B9B98;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_825B9B98:
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b9be4
	if (ctx.cr6.eq) goto loc_825B9BE4;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// slw r9,r9,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r26.u8 & 0x3F));
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b9bc8
	if (!ctx.cr6.eq) goto loc_825B9BC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825b9bd8
	goto loc_825B9BD8;
loc_825B9BC8:
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,14(r27)
	REX_STORE_U16(r27.u32 + 14, ctx.r10.u16);
loc_825B9BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_825B9BE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_825C92D0) {
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
	ctx.lr = 0x825C92D8;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c9308
	if (ctx.cr6.eq) goto loc_825C9308;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825C9304;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C9308:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825c9324
	if (ctx.cr6.eq) goto loc_825C9324;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825C9320;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C9324:
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
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
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
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,3716(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	f31.f64 = double(temp.f32);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x825c9384
	if (!ctx.cr0.eq) goto loc_825C9384;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// b 0x825c938c
	goto loc_825C938C;
loc_825C9384:
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r29,-1
	r29.s64 = -1;
loc_825C938C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c93a4
	if (ctx.cr6.eq) goto loc_825C93A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825C93A4;
	sub_82409A88(ctx, base);
loc_825C93A4:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825c94ec
	if (!ctx.cr6.gt) goto loc_825C94EC;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// subf r9,r29,r30
	ctx.r9.u64 = r30.u64 - r29.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// subf r3,r29,r28
	ctx.r3.u64 = r28.u64 - r29.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lis r25,-32255
	r25.s64 = -2113863680;
	// lfd f9,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f10,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,17280(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 17280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20328(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,20204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20204);
	ctx.f8.f64 = double(temp.f32);
loc_825C9404:
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfsx f7,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
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
	// beq cr6,0x825c94a0
	if (ctx.cr6.eq) goto loc_825C94A0;
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
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
loc_825C94A0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x825c94b0
	if (ctx.cr6.lt) goto loc_825C94B0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825C94B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825c94c8
	if (!ctx.cr6.gt) goto loc_825C94C8;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x825c94cc
	if (ctx.cr6.lt) goto loc_825C94CC;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x825c94cc
	goto loc_825C94CC;
loc_825C94C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825C94CC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbux r9,r3,r29
	ea = ctx.r3.u32 + r29.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825c9404
	if (ctx.cr6.lt) goto loc_825C9404;
loc_825C94EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825D21B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D21C0;
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
	// bne cr6,0x825d21fc
	if (!ctx.cr6.eq) goto loc_825D21FC;
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
	// li r7,1154
	ctx.r7.s64 = 1154;
	// bl 0x824ea978
	ctx.lr = 0x825D21FC;
	sub_824EA978(ctx, base);
loc_825D21FC:
	// li r4,934
	ctx.r4.s64 = 934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2208;
	sub_824F02C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x825d226c
	if (ctx.cr0.eq) goto loc_825D226C;
	// beq cr6,0x825d222c
	if (ctx.cr6.eq) goto loc_825D222C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D222C;
	sub_824F0950(ctx, base);
loc_825D222C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2264
	if (ctx.cr6.eq) goto loc_825D2264;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2264
	if (ctx.cr6.eq) goto loc_825D2264;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bctrl 
	ctx.lr = 0x825D2264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2264:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d22c0
	goto loc_825D22C0;
loc_825D226C:
	// beq cr6,0x825d2284
	if (ctx.cr6.eq) goto loc_825D2284;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2284;
	sub_824F0950(ctx, base);
loc_825D2284:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d22bc
	if (ctx.cr6.eq) goto loc_825D22BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d22bc
	if (ctx.cr6.eq) goto loc_825D22BC;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bctrl 
	ctx.lr = 0x825D22BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D22BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D22C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5360) {
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
	ctx.lr = 0x825D5368;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d53a8
	if (!ctx.cr6.eq) goto loc_825D53A8;
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
	// li r7,3688
	ctx.r7.s64 = 3688;
	// bl 0x824ea978
	ctx.lr = 0x825D53A8;
	sub_824EA978(ctx, base);
loc_825D53A8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6778
	ctx.lr = 0x825D53B8;
	sub_825A6778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d5400
	if (ctx.cr6.eq) goto loc_825D5400;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d5400
	if (ctx.cr6.eq) goto loc_825D5400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D53D4;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,73
	ctx.r6.s64 = 73;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,292(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// bctrl 
	ctx.lr = 0x825D5400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5400:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D8880) {
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
	ctx.lr = 0x825D8888;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825d5020
	ctx.lr = 0x825D88AC;
	sub_825D5020(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d50c0
	ctx.lr = 0x825D88C8;
	sub_825D50C0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5160
	ctx.lr = 0x825D88E4;
	sub_825D5160(ctx, base);
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
	// bl 0x825d58b0
	ctx.lr = 0x825D8900;
	sub_825D58B0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825fbfb8
	ctx.lr = 0x825D8914;
	sub_825FBFB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8924;
	sub_825F9F38(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D8934;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825faab8
	ctx.lr = 0x825D8954;
	sub_825FAAB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	ctx.lr = 0x825D8974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,154(r30)
	REX_STORE_U8(r30.u32 + 154, ctx.r11.u8);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x825fcc08
	ctx.lr = 0x825D8990;
	sub_825FCC08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x825e7538
	ctx.lr = 0x825D89A0;
	sub_825E7538(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fc028
	ctx.lr = 0x825D89B0;
	sub_825FC028(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D89C0;
	sub_825F9F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D89D0;
	sub_825F9F38(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_825D89D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D89F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x825d89d4
	if (ctx.cr6.lt) goto loc_825D89D4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8A10;
	sub_825F9F38(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825faab8
	ctx.lr = 0x825D8A30;
	sub_825FAAB8(ctx, base);
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
	ctx.lr = 0x825D8A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x825fcc08
	ctx.lr = 0x825D8A64;
	sub_825FCC08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825E9190) {
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
	// b 0x825e75f0
	sub_825E75F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E9C70) {
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
	ctx.lr = 0x825E9C78;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825e9488
	ctx.lr = 0x825E9C84;
	sub_825E9488(ctx, base);
	// lwz r9,2080(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2080);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r18,0
	r18.s64 = 0;
	// addi r16,r9,1
	r16.s64 = ctx.r9.s64 + 1;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,1524(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1524);
	// stw r18,20552(r11)
	REX_STORE_U32(ctx.r11.u32 + 20552, r18.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r24,r16,r6
	r24.u64 = r16.u64 + ctx.r6.u64;
	// lwz r10,2136(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2136);
	// rlwinm. r10,r10,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e9ce0
	if (ctx.cr0.eq) goto loc_825E9CE0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x825e9ce0
	if (!ctx.cr6.eq) goto loc_825E9CE0;
	// stw r18,20552(r11)
	REX_STORE_U32(ctx.r11.u32 + 20552, r18.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r4,r9,14560
	ctx.r4.s64 = ctx.r9.s64 + 14560;
	// bl 0x82130e88
	ctx.lr = 0x825E9CDC;
	sub_82130E88(ctx, base);
	// b 0x825ea330
	goto loc_825EA330;
loc_825E9CE0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r7,r11,-17760
	ctx.r7.s64 = ctx.r11.s64 + -17760;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// b 0x825e9d78
	goto loc_825E9D78;
loc_825E9CF4:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x825e9d68
	goto loc_825E9D68;
loc_825E9CFC:
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e9d64
	if (ctx.cr0.eq) goto loc_825E9D64;
	// rlwinm. r10,r9,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e9d64
	if (!ctx.cr0.eq) goto loc_825E9D64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825e9d40
	if (ctx.cr6.eq) goto loc_825E9D40;
	// rlwinm. r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e9d40
	if (!ctx.cr0.eq) goto loc_825E9D40;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x825e9d44
	if (!ctx.cr0.eq) goto loc_825E9D44;
loc_825E9D40:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_825E9D44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e9d64
	if (ctx.cr0.eq) goto loc_825E9D64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// stw r18,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r18.u32);
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + r16.u64;
	// stw r9,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_825E9D64:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825E9D68:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825e9cfc
	if (!ctx.cr6.eq) goto loc_825E9CFC;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_825E9D78:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e9cf4
	if (!ctx.cr6.eq) goto loc_825E9CF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r4,r11,14480
	ctx.r4.s64 = ctx.r11.s64 + 14480;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bl 0x82130e88
	ctx.lr = 0x825E9D9C;
	sub_82130E88(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607208
	ctx.lr = 0x825E9DA8;
	sub_82607208(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E9DBC;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825e9de4
	if (ctx.cr0.eq) goto loc_825E9DE4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82608138
	ctx.lr = 0x825E9DDC;
	sub_82608138(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825e9de8
	goto loc_825E9DE8;
loc_825E9DE4:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825E9DE8:
	// stw r11,2064(r31)
	REX_STORE_U32(r31.u32 + 2064, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r17,r18
	r17.u64 = r18.u64;
	// mr r14,r18
	r14.u64 = r18.u64;
	// mr r20,r18
	r20.u64 = r18.u64;
	// bl 0x825d7ff8
	ctx.lr = 0x825E9E0C;
	sub_825D7FF8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r19,r31,128
	r19.s64 = r31.s64 + 128;
loc_825E9E14:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r27,r18
	r27.u64 = r18.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// lwz r10,1492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1492);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1492(r11)
	REX_STORE_U32(ctx.r11.u32 + 1492, ctx.r10.u32);
	// ble cr6,0x825e9e44
	if (!ctx.cr6.gt) goto loc_825E9E44;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x826085a0
	ctx.lr = 0x825E9E3C;
	sub_826085A0(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82607e38
	ctx.lr = 0x825E9E44;
	sub_82607E38(ctx, base);
loc_825E9E44:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r4,2064(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9600
	ctx.lr = 0x825E9E5C;
	sub_825E9600(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r21,r18
	r21.u64 = r18.u64;
	// bl 0x825f74b8
	ctx.lr = 0x825E9E6C;
	sub_825F74B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825ea21c
	if (!ctx.cr0.gt) goto loc_825EA21C;
	// mr r22,r15
	r22.u64 = r15.u64;
loc_825E9E78:
	// lwz r23,0(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r25,28(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 28);
	// b 0x825ea1f8
	goto loc_825EA1F8;
loc_825E9E88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea1e8
	if (ctx.cr0.eq) goto loc_825EA1E8;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_825E9E98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ea1e8
	if (!ctx.cr0.eq) goto loc_825EA1E8;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea1c8
	if (ctx.cr0.eq) goto loc_825EA1C8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825ea1c8
	if (!ctx.cr0.eq) goto loc_825EA1C8;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea0c8
	if (ctx.cr0.eq) goto loc_825EA0C8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82607c58
	ctx.lr = 0x825E9EE4;
	sub_82607C58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E9EF0;
	sub_825D7AE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// bl 0x82607c58
	ctx.lr = 0x825E9F04;
	sub_82607C58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x825ea1c8
	if (ctx.cr6.eq) goto loc_825EA1C8;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea094
	if (ctx.cr0.eq) goto loc_825EA094;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea094
	if (ctx.cr0.eq) goto loc_825EA094;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r27,r24
	r27.u64 = r24.u64;
	// bl 0x825f9ad0
	ctx.lr = 0x825E9F38;
	sub_825F9AD0(ctx, base);
	// stw r24,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r24.u32);
	// stw r18,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r18.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825E9F50;
	sub_825D7C78(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// ori r11,r11,2176
	ctx.r11.u64 = ctx.r11.u64 | 2176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,228(r30)
	REX_STORE_U32(r30.u32 + 228, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825fcc08
	ctx.lr = 0x825E9F6C;
	sub_825FCC08(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// beq 0x825e9f90
	if (ctx.cr0.eq) goto loc_825E9F90;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r30.u32);
	// b 0x825e9fb0
	goto loc_825E9FB0;
loc_825E9F90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r30.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r28)
	REX_STORE_U32(r28.u32 + 228, ctx.r11.u32);
loc_825E9FB0:
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bl 0x826082e0
	ctx.lr = 0x825E9FBC;
	sub_826082E0(ctx, base);
	// lwz r29,136(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 136);
	// b 0x825ea028
	goto loc_825EA028;
loc_825E9FC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 104);
	// bl 0x825e9368
	ctx.lr = 0x825E9FD0;
	sub_825E9368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ea024
	if (!ctx.cr0.eq) goto loc_825EA024;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r30,104(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 104);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x825E9FEC;
	sub_825D8668(ctx, base);
	// stw r3,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r3.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ea024
	if (!ctx.cr6.gt) goto loc_825EA024;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r30
	ctx.r9.u64 = r30.u64 - ctx.r3.u64;
loc_825EA008:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825ea008
	if (ctx.cr6.lt) goto loc_825EA008;
loc_825EA024:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825EA028:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e9fc4
	if (!ctx.cr6.eq) goto loc_825E9FC4;
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x825ea1c8
	if (!ctx.cr6.gt) goto loc_825EA1C8;
loc_825EA040:
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,104(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 104);
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea084
	if (ctx.cr0.eq) goto loc_825EA084;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82607c58
	ctx.lr = 0x825EA074;
	sub_82607C58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82608450
	ctx.lr = 0x825EA084;
	sub_82608450(ctx, base);
loc_825EA084:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(r30.s32, r24.s32, ctx.xer);
	// blt cr6,0x825ea040
	if (ctx.cr6.lt) goto loc_825EA040;
	// b 0x825ea1c8
	goto loc_825EA1C8;
loc_825EA094:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82608610
	ctx.lr = 0x825EA0A0;
	sub_82608610(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x825ea0bc
	if (ctx.cr0.eq) goto loc_825EA0BC;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// b 0x825ea1c8
	goto loc_825EA1C8;
loc_825EA0BC:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x825ea1c8
	goto loc_825EA1C8;
loc_825EA0C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e3420
	ctx.lr = 0x825EA0D0;
	sub_825E3420(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea1c8
	if (ctx.cr0.eq) goto loc_825EA1C8;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ea1c8
	if (!ctx.cr0.eq) goto loc_825EA1C8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82607c58
	ctx.lr = 0x825EA0F4;
	sub_82607C58(ctx, base);
	// lwz r11,236(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 236);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825ea134
	if (ctx.cr6.eq) goto loc_825EA134;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ea134
	if (!ctx.cr0.eq) goto loc_825EA134;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x825ea138
	if (!ctx.cr0.eq) goto loc_825EA138;
loc_825EA134:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_825EA138:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ea1c8
	if (ctx.cr0.eq) goto loc_825EA1C8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82607c58
	ctx.lr = 0x825EA150;
	sub_82607C58(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,2712(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ea178
	if (!ctx.cr6.gt) goto loc_825EA178;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82608610
	ctx.lr = 0x825EA178;
	sub_82608610(ctx, base);
loc_825EA178:
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x825ea1b0
	if (ctx.cr0.eq) goto loc_825EA1B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA1AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825ea1c8
	goto loc_825EA1C8;
loc_825EA1B0:
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(r29.s32, r16.s32, ctx.xer);
	// blt cr6,0x825ea1c8
	if (ctx.cr6.lt) goto loc_825EA1C8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82608258
	ctx.lr = 0x825EA1C8;
	sub_82608258(ctx, base);
loc_825EA1C8:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x825e9e98
	if (!ctx.cr6.eq) goto loc_825E9E98;
loc_825EA1E8:
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 228);
	// lwz r25,8(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_825EA1F8:
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825e9e88
	if (!ctx.cr6.eq) goto loc_825E9E88;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// bl 0x825f74b8
	ctx.lr = 0x825EA214;
	sub_825F74B8(ctx, base);
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825e9e78
	if (ctx.cr6.lt) goto loc_825E9E78;
loc_825EA21C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// beq 0x825ea238
	if (ctx.cr0.eq) goto loc_825EA238;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,2712(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2712);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825e9e14
	if (ctx.cr6.lt) goto loc_825E9E14;
loc_825EA238:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bgt cr6,0x825ea250
	if (ctx.cr6.gt) goto loc_825EA250;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x825ea250
	if (ctx.cr6.gt) goto loc_825EA250;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x825ea294
	if (ctx.cr6.eq) goto loc_825EA294;
loc_825EA250:
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x825ea278
	if (!ctx.cr6.gt) goto loc_825EA278;
loc_825EA25C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82607c58
	ctx.lr = 0x825EA26C;
	sub_82607C58(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(r30.s32, r24.s32, ctx.xer);
	// blt cr6,0x825ea25c
	if (ctx.cr6.lt) goto loc_825EA25C;
loc_825EA278:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x825ea294
	if (ctx.cr6.eq) goto loc_825EA294;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,14400
	ctx.r4.s64 = ctx.r11.s64 + 14400;
	// bl 0x82130e88
	ctx.lr = 0x825EA294;
	sub_82130E88(ctx, base);
loc_825EA294:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x825ea2a4
	if (!ctx.cr6.eq) goto loc_825EA2A4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x825ea2bc
	if (ctx.cr6.eq) goto loc_825EA2BC;
loc_825EA2A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r6,r27,r14
	ctx.r6.u64 = r27.u64 + r14.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// bl 0x82130e88
	ctx.lr = 0x825EA2BC;
	sub_82130E88(ctx, base);
loc_825EA2BC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x825ea2dc
	if (!ctx.cr6.gt) goto loc_825EA2DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r4,r11,14276
	ctx.r4.s64 = ctx.r11.s64 + 14276;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x825EA2DC;
	sub_82130E88(ctx, base);
loc_825EA2DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x826070b0
	ctx.lr = 0x825EA2E8;
	sub_826070B0(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// bl 0x82608880
	ctx.lr = 0x825EA2F0;
	sub_82608880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9488
	ctx.lr = 0x825EA2F8;
	sub_825E9488(ctx, base);
	// lwz r11,2080(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2080);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,14224
	ctx.r4.s64 = ctx.r10.s64 + 14224;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82130e88
	ctx.lr = 0x825EA310;
	sub_82130E88(ctx, base);
	// lwz r31,2064(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 2064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825ea330
	if (ctx.cr6.eq) goto loc_825EA330;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82608f20
	ctx.lr = 0x825EA324;
	sub_82608F20(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825EA330;
	sub_825B3528(ctx, base);
loc_825EA330:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82616118) {
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82616CE0) {
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
	ctx.lr = 0x82616CE8;
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
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8260b5b8
	ctx.lr = 0x82616D18;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82616d2c
	if (!ctx.cr0.eq) goto loc_82616D2C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82616d6c
	goto loc_82616D6C;
loc_82616D2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// bl 0x82628898
	ctx.lr = 0x82616D5C;
	sub_82628898(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82616d6c
	if (!ctx.cr0.lt) goto loc_82616D6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82616D6C;
	sub_8264C3D0(ctx, base);
loc_82616D6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8261AFE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8261ac10
	sub_8261AC10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8261B320) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8261b34c
	if (!ctx.cr6.lt) goto loc_8261B34C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261b344
	if (ctx.cr6.eq) goto loc_8261B344;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8261B33C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x8261b33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261B33C;
loc_8261B344:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261b350
	goto loc_8261B350;
loc_8261B34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261B350:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
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

DEFINE_REX_FUNC(sub_8261CFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261CFF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8261cf68
	ctx.lr = 0x8261CFFC;
	sub_8261CF68(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8261d020
	if (ctx.cr6.eq) goto loc_8261D020;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261b3c0
	ctx.lr = 0x8261D014;
	sub_8261B3C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261D01C;
	sub_8264C3D0(ctx, base);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
loc_8261D020:
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261d038
	if (ctx.cr6.eq) goto loc_8261D038;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260b9b0
	ctx.lr = 0x8261D034;
	sub_8260B9B0(ctx, base);
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
loc_8261D038:
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261d050
	if (ctx.cr6.eq) goto loc_8261D050;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260b9b0
	ctx.lr = 0x8261D04C;
	sub_8260B9B0(ctx, base);
	// stw r29,132(r31)
	REX_STORE_U32(r31.u32 + 132, r29.u32);
loc_8261D050:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d07c
	if (ctx.cr6.eq) goto loc_8261D07C;
loc_8261D05C:
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
	// bne 0x8261d05c
	if (!ctx.cr0.eq) goto loc_8261D05C;
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
loc_8261D07C:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261d090
	if (ctx.cr6.eq) goto loc_8261D090;
	// bl 0x8264c3d0
	ctx.lr = 0x8261D08C;
	sub_8264C3D0(ctx, base);
	// stw r29,76(r31)
	REX_STORE_U32(r31.u32 + 76, r29.u32);
loc_8261D090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82626F08) {
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
	// bl 0x82626b50
	ctx.lr = 0x82626F28;
	sub_82626B50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82626f38
	if (ctx.cr0.eq) goto loc_82626F38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82626F38;
	sub_8264C3D0(ctx, base);
loc_82626F38:
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

DEFINE_REX_FUNC(sub_82628068) {
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
	ctx.lr = 0x82628070;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,152
	ctx.r4.s64 = 152;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826280AC;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826280d0
	if (ctx.cr0.eq) goto loc_826280D0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82627958
	ctx.lr = 0x826280C8;
	sub_82627958(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x826280d4
	goto loc_826280D4;
loc_826280D0:
	// li r29,0
	r29.s64 = 0;
loc_826280D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826280e8
	if (!ctx.cr6.eq) goto loc_826280E8;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82628138
	goto loc_82628138;
loc_826280E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262810C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8262811c
	if (ctx.cr0.lt) goto loc_8262811C;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x82628138
	goto loc_82628138;
loc_8262811C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x82628138;
	sub_8264C3D0(ctx, base);
loc_82628138:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8262EC28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8262EC30;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8262ec54
	if (ctx.cr6.eq) goto loc_8262EC54;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8262EC54:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8262eeb8
	if (ctx.cr6.gt) goto loc_8262EEB8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8262ecb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262ECB0;
	// bdzf 4*cr6+eq,0x8262ecf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262ECF0;
	// bdzf 4*cr6+eq,0x8262ed40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262ED40;
	// bdzf 4*cr6+eq,0x8262eda0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262EDA0;
	// bne cr6,0x8262ee10
	if (!ctx.cr6.eq) goto loc_8262EE10;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15504(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// b 0x8262eeb8
	goto loc_8262EEB8;
loc_8262ECB0:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-76(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// b 0x8262eeac
	goto loc_8262EEAC;
loc_8262ECF0:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f8,-104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f10,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,-72(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// b 0x8262eea4
	goto loc_8262EEA4;
loc_8262ED40:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f7,-104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f6,-100(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f8,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f6,-68(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// b 0x8262ee9c
	goto loc_8262EE9C;
loc_8262EDA0:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f7,-104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f5,-100(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f4,-96(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f6,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// stfs f4,-64(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// b 0x8262ee94
	goto loc_8262EE94;
loc_8262EE10:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,84(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,140(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f7,-104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f5,-100(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f3,-96(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f2,-92(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// beq cr6,0x8262eeb8
	if (ctx.cr6.eq) goto loc_8262EEB8;
	// lfs f6,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f3,-64(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f2,-60(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
loc_8262EE94:
	// fmuls f5,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,-68(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
loc_8262EE9C:
	// fmuls f7,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,-72(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
loc_8262EEA4:
	// fmuls f9,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
loc_8262EEAC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,-80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
loc_8262EEB8:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8262f0d0
	if (!ctx.cr6.eq) goto loc_8262F0D0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8262f04c
	if (ctx.cr6.lt) goto loc_8262F04C;
	// addi r4,r30,-3
	ctx.r4.s64 = r30.s64 + -3;
	// addi r7,r28,8
	ctx.r7.s64 = r28.s64 + 8;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
loc_8262EEE8:
	// lhz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// std r8,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r8.u64);
	// lfd f13,-144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x8262ef20
	if (ctx.cr6.eq) goto loc_8262EF20;
	// lfs f13,-8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-8(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// b 0x8262ef24
	goto loc_8262EF24;
loc_8262EF20:
	// stfs f0,-8(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
loc_8262EF24:
	// lhz r3,-2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// std r3,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r3.u64);
	// lfd f0,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r3,r8
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// beq cr6,0x8262ef74
	if (ctx.cr6.eq) goto loc_8262EF74;
	// lfs f13,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// b 0x8262ef78
	goto loc_8262EF78;
loc_8262EF74:
	// stfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
loc_8262EF78:
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// std r3,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r3.u64);
	// lfd f13,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r8
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x8262efc8
	if (ctx.cr6.eq) goto loc_8262EFC8;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8262efcc
	goto loc_8262EFCC;
loc_8262EFC8:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8262EFCC:
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// std r3,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r3.u64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r3,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,-120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// beq cr6,0x8262f01c
	if (ctx.cr6.eq) goto loc_8262F01C;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// b 0x8262f020
	goto loc_8262F020;
loc_8262F01C:
	// stfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_8262F020:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// blt cr6,0x8262eee8
	if (ctx.cr6.lt) goto loc_8262EEE8;
loc_8262F04C:
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bge cr6,0x8262f320
	if (!ctx.cr6.lt) goto loc_8262F320;
	// subf r7,r6,r30
	ctx.r7.u64 = r30.u64 - ctx.r6.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8262F06C:
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// std r3,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r3.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f0,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x8262f0ac
	if (ctx.cr6.eq) goto loc_8262F0AC;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8262f0b0
	goto loc_8262F0B0;
loc_8262F0AC:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8262F0B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r8,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bdnz 0x8262f06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262F06C;
	// b 0x826a1d04
	return;
loc_8262F0D0:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8262f290
	if (ctx.cr6.lt) goto loc_8262F290;
	// addi r4,r30,-3
	ctx.r4.s64 = r30.s64 + -3;
	// addi r7,r28,8
	ctx.r7.s64 = r28.s64 + 8;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
loc_8262F0E4:
	// lhz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// std r3,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r3.u64);
	// lfd f0,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r9,r27
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfsx f9,r9,r8
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// beq cr6,0x8262f134
	if (ctx.cr6.eq) goto loc_8262F134;
	// lfs f13,-8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-8(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// b 0x8262f138
	goto loc_8262F138;
loc_8262F134:
	// stfs f0,-8(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
loc_8262F138:
	// lhz r3,-2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subfc r8,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r5.u64;
	// std r3,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r3.u64);
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lfd f0,-128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// beq cr6,0x8262f198
	if (ctx.cr6.eq) goto loc_8262F198;
	// lfs f13,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// b 0x8262f19c
	goto loc_8262F19C;
loc_8262F198:
	// stfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
loc_8262F19C:
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r8,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r8.u64);
	// lfd f0,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// and r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 & ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfsx f11,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// beq cr6,0x8262f200
	if (ctx.cr6.eq) goto loc_8262F200;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8262f204
	goto loc_8262F204;
loc_8262F200:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8262F204:
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r8,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r8.u64);
	// lfd f11,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// and r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 & ctx.r11.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// beq cr6,0x8262f268
	if (ctx.cr6.eq) goto loc_8262F268;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// b 0x8262f26c
	goto loc_8262F26C;
loc_8262F268:
	// stfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_8262F26C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8262f0e4
	if (ctx.cr6.lt) goto loc_8262F0E4;
loc_8262F290:
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bge cr6,0x8262f320
	if (!ctx.cr6.lt) goto loc_8262F320;
	// subf r8,r6,r30
	ctx.r8.u64 = r30.u64 - ctx.r6.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262F2B0:
	// lhz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfd f11,-120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// beq cr6,0x8262f300
	if (ctx.cr6.eq) goto loc_8262F300;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8262f304
	goto loc_8262F304;
loc_8262F300:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8262F304:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subfc r10,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bdnz 0x8262f2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262F2B0;
loc_8262F320:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82662328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82662330;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82662480
	if (!ctx.cr0.eq) goto loc_82662480;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82675ee0
	ctx.lr = 0x82662358;
	sub_82675EE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266236c
	if (!ctx.cr0.eq) goto loc_8266236C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x826624d0
	goto loc_826624D0;
loc_8266236C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,70(r31)
	REX_STORE_U32(r31.u32 + 70, ctx.r11.u32);
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// stb r11,69(r31)
	REX_STORE_U8(r31.u32 + 69, ctx.r11.u8);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826623b8
	if (ctx.cr0.eq) goto loc_826623B8;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r30,61
	ctx.r9.s64 = r30.s64 + 61;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_826623B8:
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662418
	if (ctx.cr6.eq) goto loc_82662418;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_826623F8:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826623f8
	if (!ctx.cr0.eq) goto loc_826623F8;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82662418:
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x82662430;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x8266244C;
	sub_826715F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82662488
	if (!ctx.cr0.eq) goto loc_82662488;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662468
	if (!ctx.cr6.eq) goto loc_82662468;
	// li r30,0
	r30.s64 = 0;
	// b 0x82662488
	goto loc_82662488;
loc_82662468:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x82662478;
	sub_82671270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82662488
	goto loc_82662488;
loc_82662480:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4113
	r30.u64 = r30.u64 | 4113;
loc_82662488:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826624d0
	if (ctx.cr6.eq) goto loc_826624D0;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_82662494:
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
	// bne 0x82662494
	if (!ctx.cr0.eq) goto loc_82662494;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826624d0
	if (!ctx.cr6.eq) goto loc_826624D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826624D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826624D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82670628) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82670DF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r10.u32);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x82670d68
	sub_82670D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82671558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82671560;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82671580
	if (ctx.cr6.eq) goto loc_82671580;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82671594
	if (!ctx.cr6.eq) goto loc_82671594;
loc_82671580:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675cf0
	ctx.lr = 0x82671594;
	sub_82675CF0(ctx, base);
loc_82671594:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826715a8
	if (!ctx.cr6.eq) goto loc_826715A8;
	// li r31,0
	r31.s64 = 0;
	// b 0x826715c0
	goto loc_826715C0;
loc_826715A8:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x826715B8;
	sub_82671270(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x826715e4
	if (ctx.cr0.lt) goto loc_826715E4;
loc_826715C0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x826715d0
	if (ctx.cr6.eq) goto loc_826715D0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x826715e4
	if (!ctx.cr6.eq) goto loc_826715E4;
loc_826715D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675cf0
	ctx.lr = 0x826715E4;
	sub_82675CF0(ctx, base);
loc_826715E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82673160) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r11,r11,-10752
	ctx.r11.s64 = ctx.r11.s64 + -10752;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82670628
	ctx.lr = 0x8267318C;
	sub_82670628(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r8,r31,44
	ctx.r8.s64 = r31.s64 + 44;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826766B0) {
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
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82676704
	if (ctx.cr6.eq) goto loc_82676704;
loc_826766D0:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826766d0
	if (!ctx.cr0.eq) goto loc_826766D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826766fc
	if (!ctx.cr6.eq) goto loc_826766FC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x826766FC;
	sub_8265D850(ctx, base);
loc_826766FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_82676704:
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

DEFINE_REX_FUNC(sub_82678C68) {
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
	ctx.lr = 0x82678C70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// rlwinm. r10,r6,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// beq 0x82678ce0
	if (ctx.cr0.eq) goto loc_82678CE0;
	// lwz r10,896(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 896);
	// rlwinm. r9,r11,0,17,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82678d94
	if (!ctx.cr0.eq) goto loc_82678D94;
	// bl 0x82678af8
	ctx.lr = 0x82678CB4;
	sub_82678AF8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.u64 = r29.u64 - ctx.r3.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82678d94
	if (!ctx.cr0.gt) goto loc_82678D94;
	// lhz r10,1074(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 1074);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82678d94
	if (ctx.cr6.gt) goto loc_82678D94;
	// lbz r11,14(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 14);
	// sth r3,12(r25)
	REX_STORE_U16(r25.u32 + 12, ctx.r3.u16);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,14(r25)
	REX_STORE_U8(r25.u32 + 14, ctx.r11.u8);
	// b 0x82678d4c
	goto loc_82678D4C;
loc_82678CE0:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82678b50
	ctx.lr = 0x82678CF0;
	sub_82678B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82678d94
	if (ctx.cr0.eq) goto loc_82678D94;
	// lbz r11,14(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 14);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq 0x82678d58
	if (ctx.cr0.eq) goto loc_82678D58;
	// bge cr6,0x82678d94
	if (!ctx.cr6.lt) goto loc_82678D94;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr. r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82678d34
	if (ctx.cr0.eq) goto loc_82678D34;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stbx r10,r28,r26
	REX_STORE_U8(r28.u32 + r26.u32, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82678D34:
	// lbz r10,14(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 14);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// sth r11,12(r25)
	REX_STORE_U16(r25.u32 + 12, ctx.r11.u16);
	// stb r10,14(r25)
	REX_STORE_U8(r25.u32 + 14, ctx.r10.u8);
loc_82678D4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82678D50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82678D58:
	// bgt cr6,0x82678d94
	if (ctx.cr6.gt) goto loc_82678D94;
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82678d94
	if (!ctx.cr6.lt) goto loc_82678D94;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82678d34
	if (ctx.cr6.eq) goto loc_82678D34;
loc_82678D78:
	// lbzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82678d94
	if (!ctx.cr0.eq) goto loc_82678D94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82678d78
	if (ctx.cr6.lt) goto loc_82678D78;
	// b 0x82678d34
	goto loc_82678D34;
loc_82678D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82678d50
	goto loc_82678D50;
}

DEFINE_REX_FUNC(sub_82680AF0) {
	REX_FUNC_PROLOGUE();
	// stw r5,23(r3)
	REX_STORE_U32(ctx.r3.u32 + 23, ctx.r5.u32);
	// stw r4,19(r3)
	REX_STORE_U32(ctx.r3.u32 + 19, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82680C88) {
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
	ctx.lr = 0x82680C90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x82680cb4
	if (!ctx.cr6.lt) goto loc_82680CB4;
loc_82680CAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82680d84
	goto loc_82680D84;
loc_82680CB4:
	// li r27,0
	r27.s64 = 0;
	// addi r26,r31,24
	r26.s64 = r31.s64 + 24;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r30,r28,6
	r30.s64 = r28.s64 + 6;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// add r25,r28,r24
	r25.u64 = r28.u64 + r24.u64;
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680d0c
	if (ctx.cr0.eq) goto loc_82680D0C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82686908
	ctx.lr = 0x82680CF8;
	sub_82686908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82680cac
	if (ctx.cr0.eq) goto loc_82680CAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82680D0C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680d40
	if (ctx.cr0.eq) goto loc_82680D40;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82686608
	ctx.lr = 0x82680D2C;
	sub_82686608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82680cac
	if (ctx.cr0.eq) goto loc_82680CAC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
loc_82680D40:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r11,r28,r30
	ctx.r11.u64 = r30.u64 - r28.u64;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82680cac
	if (ctx.cr6.lt) goto loc_82680CAC;
	// subf. r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// beq 0x82680d74
	if (ctx.cr0.eq) goto loc_82680D74;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x82680d80
	goto loc_82680D80;
loc_82680D74:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82680cac
	if (ctx.cr6.gt) goto loc_82680CAC;
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
loc_82680D80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82680D84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82684C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82684C88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,172(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// addi r30,r3,172
	r30.s64 = ctx.r3.s64 + 172;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82684cf8
	if (ctx.cr6.eq) goto loc_82684CF8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82684cf8
	if (ctx.cr0.eq) goto loc_82684CF8;
loc_82684CA8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r8,r10,r30
	ctx.r8.u64 = r30.u64 - ctx.r10.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mulli r9,r9,20
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// and r31,r9,r10
	r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82684cf0
	if (!ctx.cr6.eq) goto loc_82684CF0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684cf0
	if (ctx.cr6.eq) goto loc_82684CF0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826864a0
	ctx.lr = 0x82684CF0;
	sub_826864A0(ctx, base);
loc_82684CF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82684ca8
	if (!ctx.cr6.eq) goto loc_82684CA8;
loc_82684CF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82687D08) {
	REX_FUNC_PROLOGUE();
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rldicl r9,r11,5,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 5) & 0x1F;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82687d30
	if (!ctx.cr6.lt) goto loc_82687D30;
	// clrldi r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldimi r11,r4,59,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u64, 59) & 0xF800000000000000) | (ctx.r11.u64 & 0x7FFFFFFFFFFFFFF);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// blr 
	return;
loc_82687D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826896A0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826896d4
	if (ctx.cr6.eq) goto loc_826896D4;
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
loc_826896B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x826896d4
	if (ctx.cr6.eq) goto loc_826896D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826896b4
	if (ctx.cr6.lt) goto loc_826896B4;
loc_826896D4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826896ec
	if (!ctx.cr6.lt) goto loc_826896EC;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_826896EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268BBD0) {
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
	// addi r11,r11,-10092
	ctx.r11.s64 = ctx.r11.s64 + -10092;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629cd8
	ctx.lr = 0x8268BBFC;
	sub_82629CD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268bc14
	if (ctx.cr0.eq) goto loc_8268BC14;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823f0350
	ctx.lr = 0x8268BC14;
	sub_823F0350(ctx, base);
loc_8268BC14:
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

DEFINE_REX_FUNC(sub_8268E5F8) {
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
	ctx.lr = 0x8268E600;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E61C;
	sub_823EF5F0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e68c
	if (!ctx.cr6.gt) goto loc_8268E68C;
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
loc_8268E630:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_8268E644:
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268e65c
	if (ctx.cr6.eq) goto loc_8268E65C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8268e694
	if (ctx.cr6.eq) goto loc_8268E694;
loc_8268E65C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8268e644
	if (ctx.cr6.lt) goto loc_8268E644;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268E670:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwx r3,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e630
	if (ctx.cr6.lt) goto loc_8268E630;
loc_8268E68C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8268E694:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8268ee00
	ctx.lr = 0x8268E6A0;
	sub_8268EE00(ctx, base);
	// b 0x8268e670
	goto loc_8268E670;
}

DEFINE_REX_FUNC(sub_82694788) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-5960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826947B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// bne 0x826947cc
	if (!ctx.cr0.eq) goto loc_826947CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82694820
	goto loc_82694820;
loc_826947CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32119
	r30.s64 = -2104950784;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lwz r11,-5952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5952);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-5952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5952);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269481C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82694820:
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

DEFINE_REX_FUNC(sub_82699008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi cr6,r11,84
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 84, ctx.xer);
	// bgt cr6,0x82699048
	if (ctx.cr6.gt) goto loc_82699048;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,8972(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8972);
	ctx.f0.f64 = double(temp.f32);
loc_82699020:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// ble cr6,0x82699020
	if (!ctx.cr6.gt) goto loc_82699020;
	// b 0x82699050
	goto loc_82699050;
loc_82699048:
	// li r11,84
	ctx.r11.s64 = 84;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
loc_82699050:
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269A9F8) {
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
	ctx.lr = 0x8269AA00;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82699a50
	ctx.lr = 0x8269AA18;
	sub_82699A50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269ab50
	if (!ctx.cr0.eq) goto loc_8269AB50;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r30,80(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82699af8
	ctx.lr = 0x8269AA3C;
	sub_82699AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269ab50
	if (!ctx.cr0.eq) goto loc_8269AB50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8269aa60
	if (ctx.cr6.eq) goto loc_8269AA60;
	// bl 0x82699930
	ctx.lr = 0x8269AA50;
	sub_82699930(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8269aa74
	if (!ctx.cr0.eq) goto loc_8269AA74;
	// li r3,170
	ctx.r3.s64 = 170;
	// b 0x8269ab50
	goto loc_8269AB50;
loc_8269AA60:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x826a2e60
	ctx.lr = 0x8269AA74;
	sub_826A2E60(ctx, base);
loc_8269AA74:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826999d0
	ctx.lr = 0x8269AA84;
	sub_826999D0(ctx, base);
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269aae4
	if (ctx.cr6.eq) goto loc_8269AAE4;
	// lis r11,24576
	ctx.r11.s64 = 1610612736;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269aaa8
	if (ctx.cr6.eq) goto loc_8269AAA8;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// b 0x8269ab50
	goto loc_8269AB50;
loc_8269AAA8:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// sth r30,50(r31)
	REX_STORE_U16(r31.u32 + 50, r30.u16);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r31,60(r31)
	REX_STORE_U32(r31.u32 + 60, r31.u32);
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// sth r10,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r10.u16);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// bl 0x8269a968
	ctx.lr = 0x8269AAE0;
	sub_8269A968(ctx, base);
	// b 0x8269ab1c
	goto loc_8269AB1C;
loc_8269AAE4:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// sth r30,50(r31)
	REX_STORE_U16(r31.u32 + 50, r30.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,52(r31)
	REX_STORE_U32(r31.u32 + 52, r31.u32);
	// addi r11,r11,-24448
	ctx.r11.s64 = ctx.r11.s64 + -24448;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// sth r10,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r10.u16);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// bl 0x8269a8d8
	ctx.lr = 0x8269AB1C;
	sub_8269A8D8(ctx, base);
loc_8269AB1C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8269ab4c
	if (!ctx.cr6.eq) goto loc_8269AB4C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8269ab4c
	if (!ctx.cr6.eq) goto loc_8269AB4C;
	// b 0x8269ab40
	goto loc_8269AB40;
loc_8269AB34:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ecc70
	ctx.lr = 0x8269AB40;
	sub_823ECC70(ctx, base);
loc_8269AB40:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8269ab34
	if (!ctx.cr6.eq) goto loc_8269AB34;
loc_8269AB4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8269AB50:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826A0820) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,27184
	ctx.r11.s64 = ctx.r11.s64 + 27184;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A14B8) {
	REX_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x826a1368
	sub_826A1368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A1930) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x826a1988
	if (!ctx.cr6.eq) goto loc_826A1988;
	// bl 0x826ab0e8
	ctx.lr = 0x826A1954;
	sub_826AB0E8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826a1980
	if (ctx.cr6.eq) goto loc_826A1980;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x826a1978
	if (ctx.cr6.eq) goto loc_826A1978;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x826a19f4
	goto loc_826A19F4;
loc_826A1978:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x826a19f4
	goto loc_826A19F4;
loc_826A1980:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x826a19f4
	goto loc_826A19F4;
loc_826A1988:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826a19c4
	if (!ctx.cr6.eq) goto loc_826A19C4;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a19ac
	if (!ctx.cr0.eq) goto loc_826A19AC;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a19c4
	if (ctx.cr6.eq) goto loc_826A19C4;
loc_826A19AC:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x826a19f4
	goto loc_826A19F4;
loc_826A19C4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x826a19e8
	if (!ctx.cr6.eq) goto loc_826A19E8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x826a19f4
	goto loc_826A19F4;
loc_826A19E8:
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
loc_826A19F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_121) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_75) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B6320) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,26128
	ctx.r10.s64 = ctx.r11.s64 + 26128;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826bc358
	sub_826BC358(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B63B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B6D50) {
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
	ctx.lr = 0x826B6D58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B6D7C:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x826b6d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B6D7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b6e5c
	if (ctx.cr6.lt) goto loc_826B6E5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63b8
	ctx.lr = 0x826B6DAC;
	sub_826B63B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82147138
	ctx.lr = 0x826B6DB8;
	sub_82147138(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63c0
	ctx.lr = 0x826B6DC4;
	sub_826B63C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x826b6a28
	ctx.lr = 0x826B6DDC;
	sub_826B6A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b6e5c
	if (ctx.cr6.lt) goto loc_826B6E5C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b6e5c
	if (ctx.cr6.eq) goto loc_826B6E5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B6E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 660);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lis r5,-32127
	ctx.r5.s64 = -2105475072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,31236
	ctx.r8.s64 = ctx.r5.s64 + 31236;
	// lfs f1,3704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// subfic r7,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x826B6E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6E5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BF4E0) {
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
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826BF504;
	sub_826A2E60(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826BF514;
	sub_826A2E60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bl 0x826c8ab8
	ctx.lr = 0x826BF524;
	sub_826C8AB8(ctx, base);
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

DEFINE_REX_FUNC(sub_826C1A08) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2310) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C33C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C33E4;
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

DEFINE_REX_FUNC(sub_826C3820) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C384C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// andc r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ~r30.u64;
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C386C;
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

DEFINE_REX_FUNC(sub_826C7A48) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C87B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826C87B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// li r29,0
	r29.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c8728
	ctx.lr = 0x826C87D4;
	sub_826C8728(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c87f8
	if (ctx.cr6.eq) goto loc_826C87F8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c68d8
	ctx.lr = 0x826C87F0;
	sub_826C68D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_826C87F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826CCA90) {
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
	// beq cr6,0x826ccacc
	if (ctx.cr6.eq) goto loc_826CCACC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82130e88
	ctx.lr = 0x826CCABC;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc898
	ctx.lr = 0x826CCAC4;
	sub_826CC898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82634e78
	ctx.lr = 0x826CCACC;
	sub_82634E78(ctx, base);
loc_826CCACC:
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

DEFINE_REX_FUNC(sub_826D12F8) {
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
	ctx.lr = 0x826D1300;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r28,360(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1398
	if (ctx.cr6.eq) goto loc_826D1398;
	// lhz r11,110(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 110);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r25,r11,-16
	r25.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x826d1398
	if (!ctx.cr6.gt) goto loc_826D1398;
	// rlwinm r23,r28,1,0,30
	r23.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
loc_826D1338:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x826d1380
	if (!ctx.cr6.gt) goto loc_826D1380;
	// addi r29,r24,-2
	r29.s64 = r24.s64 + -2;
loc_826D1348:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D1364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sraw r10,r3,r25
	temp.u32 = r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// sthu r9,2(r29)
	ea = 2 + r29.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	r29.u32 = ea;
	// blt cr6,0x826d1348
	if (ctx.cr6.lt) goto loc_826D1348;
loc_826D1380:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r24,r23,r24
	r24.u64 = r23.u64 + r24.u64;
	// mullw r11,r28,r11
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(ctx.r11.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x826d1338
	if (!ctx.cr0.eq) goto loc_826D1338;
loc_826D1398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826D80A0) {
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
	ctx.lr = 0x826D80A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x826d8128
	if (!ctx.cr6.gt) goto loc_826D8128;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826D8110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_826D8128:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D8140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lwz r31,52(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r28,2
	r28.s64 = 2;
	// lwz r27,48(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// bge cr6,0x826d818c
	if (!ctx.cr6.lt) goto loc_826D818C;
loc_826D817C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826D818C:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D81A4;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r11,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r8,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r8.u8);
	// bl 0x826d3a88
	ctx.lr = 0x826D81E0;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,128(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x826d2c38
	ctx.lr = 0x826D8204;
	sub_826D2C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lbz r11,25(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 25);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d82ac
	if (ctx.cr6.eq) goto loc_826D82AC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d8270
	if (ctx.cr6.eq) goto loc_826D8270;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d82e4
	if (!ctx.cr6.eq) goto loc_826D82E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x826d817c
	if (ctx.cr6.lt) goto loc_826D817C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,6
	r28.s64 = 6;
	// bl 0x826d3d18
	ctx.lr = 0x826D825C;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x826d82e4
	goto loc_826D82E4;
loc_826D8270:
	// sth r29,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r29.u16);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// blt cr6,0x826d817c
	if (ctx.cr6.lt) goto loc_826D817C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,4
	r28.s64 = 4;
	// bl 0x826d3b98
	ctx.lr = 0x826D829C;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// b 0x826d82e0
	goto loc_826D82E0;
loc_826D82AC:
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(r25.u32, 3, ctx.xer);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// blt cr6,0x826d817c
	if (ctx.cr6.lt) goto loc_826D817C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,3
	r28.s64 = 3;
	// bl 0x826d3a88
	ctx.lr = 0x826D82D4;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_826D82E0:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_826D82E4:
	// lbz r11,26(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 26);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d8318
	if (ctx.cr6.eq) goto loc_826D8318;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d830c
	if (ctx.cr6.eq) goto loc_826D830C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d8324
	if (!ctx.cr6.eq) goto loc_826D8324;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d8320
	goto loc_826D8320;
loc_826D830C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x826d8320
	goto loc_826D8320;
loc_826D8318:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826D8320:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_826D8324:
	// lbz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 24);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x826d817c
	if (ctx.cr6.gt) goto loc_826D817C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D8358;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8378
	if (ctx.cr6.lt) goto loc_826D8378;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_826D8378:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826E6B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e6b54
	if (ctx.cr6.lt) goto loc_826E6B54;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// b 0x826e6b78
	goto loc_826E6B78;
loc_826E6B54:
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_826E6B78:
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// bne cr6,0x826e6bc8
	if (!ctx.cr6.eq) goto loc_826E6BC8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
	// sth r3,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
	// blr 
	return;
loc_826E6BC8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// sth r4,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F11C0) {
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
	ctx.lr = 0x826F11C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r3,224
	r28.s64 = ctx.r3.s64 + 224;
	// addi r31,r3,516
	r31.s64 = ctx.r3.s64 + 516;
	// li r25,17
	r25.s64 = 17;
	// li r27,0
	r27.s64 = 0;
loc_826F11E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826f11e8
	if (ctx.cr6.gt) goto loc_826F11E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826f1328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F1328;
	// bdzf 4*cr6+eq,0x826f12f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F12F8;
	// bne cr6,0x826f1364
	if (!ctx.cr6.eq) goto loc_826F1364;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,24(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82641440
	ctx.lr = 0x826F1224;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82638ef0
	ctx.lr = 0x826F1238;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f1258
	if (!ctx.cr6.eq) goto loc_826F1258;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r27,24(r30)
	REX_STORE_U32(r30.u32 + 24, r27.u32);
	// b 0x826f11e8
	goto loc_826F11E8;
loc_826F1258:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826f128c
	if (!ctx.cr6.eq) goto loc_826F128C;
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 202);
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r9,36(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r27,24(r30)
	REX_STORE_U32(r30.u32 + 24, r27.u32);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826F128C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82638ef0
	ctx.lr = 0x826F1298;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lhzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r6.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826F12F8:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826f0ee8
	ctx.lr = 0x826F1310;
	sub_826F0EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_826F1328:
	// lhz r11,312(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 312);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826f10a0
	ctx.lr = 0x826F133C;
	sub_826F10A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_826F1364:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F1374;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1390
	if (ctx.cr6.lt) goto loc_826F1390;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_826F1390:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826FC9B0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fc9f8
	if (ctx.cr6.eq) goto loc_826FC9F8;
	// lwz r11,20700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fc9f8
	if (!ctx.cr6.eq) goto loc_826FC9F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x826FC9E0;
	sub_823ECC50(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,20700(r31)
	REX_STORE_U32(r31.u32 + 20700, ctx.r10.u32);
	// std r9,20680(r31)
	REX_STORE_U64(r31.u32 + 20680, ctx.r9.u64);
	// std r11,20688(r31)
	REX_STORE_U64(r31.u32 + 20688, ctx.r11.u64);
loc_826FC9F8:
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

DEFINE_REX_FUNC(sub_827030C8) {
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
	ctx.lr = 0x827030D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r21,0
	r21.s64 = 0;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r23,r10,128
	r23.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,183
	r22.u64 = ctx.r9.u64 | 183;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82703150
	if (ctx.cr6.eq) goto loc_82703150;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82703150
	if (ctx.cr6.eq) goto loc_82703150;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c65a8
	ctx.lr = 0x82703138;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82703198
	if (!ctx.cr6.lt) goto loc_82703198;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, ctx.xer);
	// bne cr6,0x8270331c
	if (!ctx.cr6.eq) goto loc_8270331C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82703150:
	// extsb r26,r27
	r26.s64 = r27.s8;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82703198
	if (!ctx.cr6.gt) goto loc_82703198;
loc_82703160:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c65a8
	ctx.lr = 0x82703178;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82703198
	if (!ctx.cr6.lt) goto loc_82703198;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, ctx.xer);
	// bne cr6,0x8270331c
	if (!ctx.cr6.eq) goto loc_8270331C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x82703160
	if (ctx.cr6.lt) goto loc_82703160;
loc_82703198:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82703314
	if (ctx.cr6.gt) goto loc_82703314;
	// lis r12,-32144
	ctx.r12.s64 = -2106589184;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12732
	ctx.r12.s64 = ctx.r12.s64 + 12732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82703240;
	case 1:
		goto loc_8270325C;
	case 2:
		goto loc_82703278;
	case 3:
		goto loc_82703294;
	case 4:
		goto loc_827032A8;
	case 5:
		goto loc_827032BC;
	case 6:
		goto loc_827032EC;
	case 7:
		goto loc_82703300;
	case 8:
		goto loc_82703208;
	case 9:
		goto loc_82703224;
	case 10:
		goto loc_827032D4;
	case 11:
		goto loc_827031EC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_827031EC:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703208:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22857
	ctx.r9.u64 = ctx.r11.u64 | 22857;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703224:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,13385
	ctx.r9.u64 = ctx.r11.u64 | 13385;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703240:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,21849
	ctx.r9.u64 = ctx.r11.u64 | 21849;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_8270325C:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22869
	ctx.r9.u64 = ctx.r11.u64 | 22869;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703278:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703294:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_827032A8:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_827032BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_827032D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_827032EC:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703300:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82703314:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
loc_8270331C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8271B7B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8271B7B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b844
	if (ctx.cr6.eq) goto loc_8271B844;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b7f0
	if (ctx.cr6.eq) goto loc_8271B7F0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823effa0
	ctx.lr = 0x8271B7EC;
	sub_823EFFA0(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8271B7F0:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b80c
	if (ctx.cr6.eq) goto loc_8271B80C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823effa0
	ctx.lr = 0x8271B808;
	sub_823EFFA0(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_8271B80C:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b828
	if (ctx.cr6.eq) goto loc_8271B828;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823effa0
	ctx.lr = 0x8271B824;
	sub_823EFFA0(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_8271B828:
	// lwz r3,620(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b844
	if (ctx.cr6.eq) goto loc_8271B844;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x823f0350
	ctx.lr = 0x8271B840;
	sub_823F0350(ctx, base);
	// stw r30,620(r31)
	REX_STORE_U32(r31.u32 + 620, r30.u32);
loc_8271B844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82721078) {
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
	ctx.lr = 0x82721080;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,268(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8272121c
	if (!ctx.cr6.gt) goto loc_8272121C;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r5,r25,4
	ctx.r5.s64 = r25.s64 + 4;
	// rlwinm r28,r9,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r7,1
	r29.s64 = ctx.r7.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r24,255
	r24.s64 = 255;
loc_827210C0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827210f8
	if (!ctx.cr6.gt) goto loc_827210F8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r5,-8
	ctx.r9.s64 = ctx.r5.s64 + -8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r30
	ctx.r11.u64 = r30.u64 - ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827210E4:
	// lbzux r6,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r3,r6,315
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(315));
	// srawi r6,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 4;
	// stwu r6,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x827210e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827210E4;
loc_827210F8:
	// lwzx r11,r28,r5
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// stwx r11,r27,r5
	REX_STORE_U32(r27.u32 + ctx.r5.u32, ctx.r11.u32);
	// ble cr6,0x82721138
	if (!ctx.cr6.gt) goto loc_82721138;
	// addi r9,r29,-2
	ctx.r9.s64 = r29.s64 + -2;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272111C:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r9,226
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(226));
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272111c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272111C;
loc_82721138:
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r9.u32);
	// ble cr6,0x82721188
	if (!ctx.cr6.gt) goto loc_82721188;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82721160:
	// lwz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mulli r6,r8,217
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(217));
	// srawi r8,r6,12
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 12;
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82721160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721160;
loc_82721188:
	// lwzx r9,r28,r5
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// stwx r9,r27,r5
	REX_STORE_U32(r27.u32 + ctx.r5.u32, ctx.r9.u32);
	// ble cr6,0x827211d0
	if (!ctx.cr6.gt) goto loc_827211D0;
	// addi r9,r29,-2
	ctx.r9.s64 = r29.s64 + -2;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827211A8:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r9,r3,406
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(406));
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x827211a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827211A8;
loc_827211D0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82721210
	if (!ctx.cr6.gt) goto loc_82721210;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r8,r10,r30
	ctx.r8.u64 = r30.u64 - ctx.r10.u64;
loc_827211E4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82721204
	if (!ctx.cr6.gt) goto loc_82721204;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r11,r3
	temp.u8 = (ctx.r3.u32 + 0xFFFFFFFFu < ctx.r3.u32) | (ctx.r3.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r3.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
loc_82721204:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbux r11,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x827211e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827211E4;
loc_82721210:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x827210c0
	if (!ctx.cr0.eq) goto loc_827210C0;
loc_8272121C:
	// lwz r7,260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82721274
	if (!ctx.cr6.gt) goto loc_82721274;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82721230:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82720a68
	ctx.lr = 0x82721240;
	sub_82720A68(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82721230
	if (!ctx.cr0.eq) goto loc_82721230;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82721274
	if (!ctx.cr6.gt) goto loc_82721274;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82721258:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82720a68
	ctx.lr = 0x82721268;
	sub_82720A68(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82721258
	if (!ctx.cr0.eq) goto loc_82721258;
loc_82721274:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8272E340) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8272e5e0
	if (!ctx.cr6.gt) goto loc_8272E5E0;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8272e5e0
	if (!ctx.cr6.gt) goto loc_8272E5E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,32424(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// fadd f11,f1,f12
	ctx.f11.f64 = ctx.f1.f64 + ctx.f12.f64;
	// lfs f0,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,3824(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// fsubs f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8272e3d0
	if (!ctx.cr6.gt) goto loc_8272E3D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8272E3D0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272e43c
	if (ctx.cr6.lt) goto loc_8272E43C;
	// fadd f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8272E400:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8272e400
	if (ctx.cr6.lt) goto loc_8272E400;
loc_8272E43C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272e474
	if (!ctx.cr6.lt) goto loc_8272E474;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8272E464:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272e464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272E464;
loc_8272E474:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8272e498
	if (ctx.cr6.gt) goto loc_8272E498;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8272E498:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8272e4d0
	if (!ctx.cr6.lt) goto loc_8272E4D0;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272E4BC:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272e4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272E4BC;
loc_8272E4D0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8272e50c
	if (!ctx.cr6.lt) goto loc_8272E50C;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8272E4F0:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272e4f0
	if (ctx.cr6.lt) goto loc_8272E4F0;
loc_8272E50C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272e548
	if (!ctx.cr6.gt) goto loc_8272E548;
	// fadd f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8272E52C:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272e52c
	if (ctx.cr6.lt) goto loc_8272E52C;
loc_8272E548:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272e670
	if (!ctx.cr6.gt) goto loc_8272E670;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8272E564:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadd f8,f9,f12
	ctx.f8.f64 = ctx.f9.f64 + ctx.f12.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadd f2,f3,f12
	ctx.f2.f64 = ctx.f3.f64 + ctx.f12.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8272e564
	if (ctx.cr6.lt) goto loc_8272E564;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8272E5E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272e670
	if (!ctx.cr6.gt) goto loc_8272E670;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfd f0,32424(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8272E63C:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8272e63c
	if (ctx.cr6.lt) goto loc_8272E63C;
loc_8272E670:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82746150) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3716(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	// lwz r8,3720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r10,3720(r3)
	REX_STORE_U32(ctx.r3.u32 + 3720, ctx.r10.u32);
	// stw r8,3716(r3)
	REX_STORE_U32(ctx.r3.u32 + 3716, ctx.r8.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,3756(r3)
	REX_STORE_U32(ctx.r3.u32 + 3756, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,3760(r3)
	REX_STORE_U32(ctx.r3.u32 + 3760, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r4,3764(r3)
	REX_STORE_U32(ctx.r3.u32 + 3764, ctx.r4.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,3784(r3)
	REX_STORE_U32(ctx.r3.u32 + 3784, ctx.r10.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,3784(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,3788(r3)
	REX_STORE_U32(ctx.r3.u32 + 3788, ctx.r5.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,3792(r3)
	REX_STORE_U32(ctx.r3.u32 + 3792, ctx.r8.u32);
	// stw r5,3796(r3)
	REX_STORE_U32(ctx.r3.u32 + 3796, ctx.r5.u32);
	// stw r4,3780(r3)
	REX_STORE_U32(ctx.r3.u32 + 3780, ctx.r4.u32);
	// stw r10,14792(r3)
	REX_STORE_U32(ctx.r3.u32 + 14792, ctx.r10.u32);
	// stw r7,14796(r3)
	REX_STORE_U32(ctx.r3.u32 + 14796, ctx.r7.u32);
	// stw r6,14800(r3)
	REX_STORE_U32(ctx.r3.u32 + 14800, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827495F0) {
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
	ctx.lr = 0x827495F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r25,8
	r25.s64 = 8;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r28,4
	r28.s64 = 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82749634
	if (ctx.cr6.eq) goto loc_82749634;
	// li r25,12
	r25.s64 = 12;
	// li r28,0
	r28.s64 = 0;
loc_82749634:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82749644
	if (ctx.cr6.eq) goto loc_82749644;
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// b 0x82749664
	goto loc_82749664;
loc_82749644:
	// lwz r11,15896(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82749660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82749664:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r11,3
	r28.s64 = ctx.r11.s64 + 3;
	// bne cr6,0x827496ec
	if (!ctx.cr6.eq) goto loc_827496EC;
	// addic. r29,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r29.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x827496c8
	if (!ctx.cr0.gt) goto loc_827496C8;
	// subf r28,r31,r28
	r28.u64 = r28.u64 - r31.u64;
loc_82749684:
	// lwz r11,15896(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15896);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827496A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827496BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82749684
	if (!ctx.cr0.eq) goto loc_82749684;
loc_827496C8:
	// lwz r11,15896(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827496E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827496E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827496EC:
	// addic. r31,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r31.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x827496e4
	if (!ctx.cr0.gt) goto loc_827496E4;
loc_827496F4:
	// lwz r11,15900(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82749710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x827496f4
	if (!ctx.cr0.eq) goto loc_827496F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8274CC48) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,14296(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14296);
	// ble cr6,0x8274cc7c
	if (!ctx.cr6.gt) goto loc_8274CC7C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8274CC60:
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cc60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CC60;
loc_8274CC7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8274cca8
	if (!ctx.cr6.gt) goto loc_8274CCA8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8274CC8C:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r6,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CC8C;
loc_8274CCA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8274CCB8:
	// lbzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274ccb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CCB8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274EC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8274EC10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,1780(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x8274ec88
	if (!ctx.cr6.eq) goto loc_8274EC88;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8274EC54:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r9,128
	ctx.r9.s64 = 128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8274EC70:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8274ec70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274EC70;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8274ec54
	if (ctx.cr6.lt) goto loc_8274EC54;
	// b 0x8274ecf0
	goto loc_8274ECF0;
loc_8274EC88:
	// lwz r9,1784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,15504(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bne cr6,0x8274eccc
	if (!ctx.cr6.eq) goto loc_8274ECCC;
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8274ecc8
	if (ctx.cr6.eq) goto loc_8274ECC8;
	// bl 0x827610b0
	ctx.lr = 0x8274ECC4;
	sub_827610B0(ctx, base);
	// b 0x8274eccc
	goto loc_8274ECCC;
loc_8274ECC8:
	// bl 0x827611a0
	ctx.lr = 0x8274ECCC;
	sub_827611A0(ctx, base);
loc_8274ECCC:
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x8274ECF0;
	sub_82761270(ctx, base);
loc_8274ECF0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8274ed18
	if (ctx.cr6.eq) goto loc_8274ED18;
	// lwz r11,3172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3172);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274ED18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274ED18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82759CA8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82759d40
	if (!ctx.cr6.eq) goto loc_82759D40;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// beq cr6,0x82759cd4
	if (ctx.cr6.eq) goto loc_82759CD4;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// addi r10,r10,29520
	ctx.r10.s64 = ctx.r10.s64 + 29520;
	// b 0x82759ce4
	goto loc_82759CE4;
loc_82759CD4:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r11,r11,13600
	ctx.r11.s64 = ctx.r11.s64 + 13600;
	// addi r10,r10,20528
	ctx.r10.s64 = ctx.r10.s64 + 20528;
loc_82759CE4:
	// stw r11,30064(r9)
	REX_STORE_U32(ctx.r9.u32 + 30064, ctx.r11.u32);
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,30060(r8)
	REX_STORE_U32(ctx.r8.u32 + 30060, ctx.r10.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r11,r11,32456
	ctx.r11.s64 = ctx.r11.s64 + 32456;
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// addi r10,r10,32384
	ctx.r10.s64 = ctx.r10.s64 + 32384;
	// stw r11,30056(r7)
	REX_STORE_U32(ctx.r7.u32 + 30056, ctx.r11.u32);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// lis r8,-32139
	ctx.r8.s64 = -2106261504;
	// lis r7,-32138
	ctx.r7.s64 = -2106195968;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// stw r10,30052(r6)
	REX_STORE_U32(ctx.r6.u32 + 30052, ctx.r10.u32);
	// lis r4,-32106
	ctx.r4.s64 = -2104098816;
	// lis r3,-32106
	ctx.r3.s64 = -2104098816;
	// addi r9,r9,12240
	ctx.r9.s64 = ctx.r9.s64 + 12240;
	// addi r11,r8,32104
	ctx.r11.s64 = ctx.r8.s64 + 32104;
	// addi r10,r7,-26016
	ctx.r10.s64 = ctx.r7.s64 + -26016;
	// stw r9,30036(r5)
	REX_STORE_U32(ctx.r5.u32 + 30036, ctx.r9.u32);
	// stw r11,30032(r4)
	REX_STORE_U32(ctx.r4.u32 + 30032, ctx.r11.u32);
	// stw r10,30028(r3)
	REX_STORE_U32(ctx.r3.u32 + 30028, ctx.r10.u32);
	// blr 
	return;
loc_82759D40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// beq cr6,0x82759d5c
	if (ctx.cr6.eq) goto loc_82759D5C;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r11,r11,-28632
	ctx.r11.s64 = ctx.r11.s64 + -28632;
	// stw r11,30040(r10)
	REX_STORE_U32(ctx.r10.u32 + 30040, ctx.r11.u32);
	// blr 
	return;
loc_82759D5C:
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// addi r11,r11,32744
	ctx.r11.s64 = ctx.r11.s64 + 32744;
	// stw r11,30040(r10)
	REX_STORE_U32(ctx.r10.u32 + 30040, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275C698) {
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
	ctx.lr = 0x8275C6A0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275c6dc
	if (ctx.cr6.eq) goto loc_8275C6DC;
	// lwz r11,15916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15916);
	// lwz r31,324(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r30,316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bctrl 
	ctx.lr = 0x8275C6D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
loc_8275C6DC:
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,52(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r26,r7,r10
	r26.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r25,r6,r4
	r25.u64 = ctx.r6.u64 + ctx.r4.u64;
	// ble 0x8275c7c4
	if (!ctx.cr0.gt) goto loc_8275C7C4;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// lwz r21,308(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r20,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r20.s64 = ctx.r6.s32 >> 1;
loc_8275C70C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8275c794
	if (!ctx.cr6.gt) goto loc_8275C794;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r29,r7,-2
	r29.s64 = ctx.r7.s64 + -2;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// subf r28,r26,r7
	r28.u64 = ctx.r7.u64 - r26.u64;
	// subf r27,r9,r8
	r27.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8275C73C:
	// lbzu r7,2(r29)
	ea = 2 + r29.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// stb r7,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stb r7,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// lbzx r19,r28,r11
	r19.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r19,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r19.u8);
	ctx.r6.u32 = ea;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbux r19,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r19.u8);
	ctx.r5.u32 = ea;
	// lbzx r19,r27,r4
	r19.u64 = REX_LOAD_U8(r27.u32 + ctx.r4.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r19,0(r31)
	REX_STORE_U8(r31.u32 + 0, r19.u8);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r7,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r7.u8);
	// lwz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r31,r7,r31
	r31.u64 = ctx.r7.u64 + r31.u64;
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// bdnz 0x8275c73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275C73C;
loc_8275C794:
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r7,r26,r10
	ctx.r7.u64 = r26.u64 + ctx.r10.u64;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// add r4,r5,r25
	ctx.r4.u64 = ctx.r5.u64 + r25.u64;
	// add r26,r7,r10
	r26.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + r21.u64;
	// add r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 + r21.u64;
	// add r25,r5,r4
	r25.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bne 0x8275c70c
	if (!ctx.cr0.eq) goto loc_8275C70C;
loc_8275C7C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82762640) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82762648;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,15952
	r30.s64 = ctx.r3.s64 + 15952;
	// li r31,2
	r31.s64 = 2;
loc_82762658:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82782ae0
	ctx.lr = 0x82762664;
	sub_82782AE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2336
	r30.s64 = r30.s64 + 2336;
	// bne 0x82762658
	if (!ctx.cr0.eq) goto loc_82762658;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// addi r8,r11,5744
	ctx.r8.s64 = ctx.r11.s64 + 5744;
	// addi r7,r10,17864
	ctx.r7.s64 = ctx.r10.s64 + 17864;
	// addi r6,r9,18408
	ctx.r6.s64 = ctx.r9.s64 + 18408;
	// stw r8,3232(r29)
	REX_STORE_U32(r29.u32 + 3232, ctx.r8.u32);
	// stw r7,3224(r29)
	REX_STORE_U32(r29.u32 + 3224, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r6,3228(r29)
	REX_STORE_U32(r29.u32 + 3228, ctx.r6.u32);
	// bl 0x8278cbd0
	ctx.lr = 0x8276269C;
	sub_8278CBD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827656D0) {
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
	ctx.lr = 0x827656D8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// beq cr6,0x82765730
	if (ctx.cr6.eq) goto loc_82765730;
	// lwz r11,-24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82765724
	if (!ctx.cr6.eq) goto loc_82765724;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82765734
	goto loc_82765734;
loc_82765724:
	// li r17,1
	r17.s64 = 1;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// b 0x82765738
	goto loc_82765738;
loc_82765730:
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r23.u32);
loc_82765734:
	// mr r17,r23
	r17.u64 = r23.u64;
loc_82765738:
	// lwz r30,372(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8276577c
	if (ctx.cr6.eq) goto loc_8276577C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82765770
	if (!ctx.cr6.eq) goto loc_82765770;
	// li r16,1
	r16.s64 = 1;
	// b 0x82765780
	goto loc_82765780;
loc_82765770:
	// mr r16,r23
	r16.u64 = r23.u64;
	// li r21,1
	r21.s64 = 1;
	// b 0x82765784
	goto loc_82765784;
loc_8276577C:
	// mr r16,r23
	r16.u64 = r23.u64;
loc_82765780:
	// mr r21,r23
	r21.u64 = r23.u64;
loc_82765784:
	// lwz r19,380(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x827657cc
	if (ctx.cr6.eq) goto loc_827657CC;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x827657c0
	if (!ctx.cr6.eq) goto loc_827657C0;
	// li r18,1
	r18.s64 = 1;
	// b 0x827657d0
	goto loc_827657D0;
loc_827657C0:
	// mr r18,r23
	r18.u64 = r23.u64;
	// li r22,1
	r22.s64 = 1;
	// b 0x827657d4
	goto loc_827657D4;
loc_827657CC:
	// mr r18,r23
	r18.u64 = r23.u64;
loc_827657D0:
	// mr r22,r23
	r22.u64 = r23.u64;
loc_827657D4:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82765804
	if (ctx.cr6.eq) goto loc_82765804;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
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
	// add r24,r10,r31
	r24.u64 = ctx.r10.u64 + r31.u64;
	// add r20,r11,r31
	r20.u64 = ctx.r11.u64 + r31.u64;
	// b 0x8276580c
	goto loc_8276580C;
loc_82765804:
	// addi r20,r31,2904
	r20.s64 = r31.s64 + 2904;
	// addi r24,r31,2916
	r24.s64 = r31.s64 + 2916;
loc_8276580C:
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
	ctx.lr = 0x82765824;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lbz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 20);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// rlwinm r30,r9,31,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82762730
	ctx.lr = 0x8276587C;
	sub_82762730(ctx, base);
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sth r7,0(r26)
	REX_STORE_U16(r26.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r30,296(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82762810
	ctx.lr = 0x827658D4;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// addi r27,r28,8
	r27.s64 = r28.s64 + 8;
	// addi r30,r26,32
	r30.s64 = r26.s64 + 32;
	// addi r26,r25,24
	r26.s64 = r25.s64 + 24;
	// li r28,1
	r28.s64 = 1;
loc_827658F0:
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
	ctx.lr = 0x82765908;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// addi r25,r28,1
	r25.s64 = r28.s64 + 1;
	// lbz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r25.u8 & 0x3F));
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sraw. r11,r8,r25
	temp.u32 = r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq 0x8276593c
	if (ctx.cr0.eq) goto loc_8276593C;
	// addi r10,r16,2
	ctx.r10.s64 = r16.s64 + 2;
loc_8276593C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r9,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r14,1760(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r7,296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82762810
	ctx.lr = 0x82765998;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x827659b4
	if (!ctx.cr6.eq) goto loc_827659B4;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_827659B4:
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(r25.u32, 3, ctx.xer);
	// blt cr6,0x827658f0
	if (ctx.cr6.lt) goto loc_827658F0;
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
	ctx.lr = 0x827659E4;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827626a8
	ctx.lr = 0x82765A0C;
	sub_827626A8(ctx, base);
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r28,116(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// lwz r7,296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82762810
	ctx.lr = 0x82765A68;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
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
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r28,r26,24
	r28.s64 = r26.s64 + 24;
	// bl 0x82769308
	ctx.lr = 0x82765A94;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// lbz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 20);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r3,300(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r26,332(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// lwz r25,372(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82762730
	ctx.lr = 0x82765AF4;
	sub_82762730(ctx, base);
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r27,300(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82762810
	ctx.lr = 0x82765B4C;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
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
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bl 0x82769308
	ctx.lr = 0x82765B74;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82765c28
	if (!ctx.cr6.eq) goto loc_82765C28;
	// lbz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 20);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r5,r28,24
	ctx.r5.s64 = r28.s64 + 24;
	// rlwinm r27,r8,26,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r28,340(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82762730
	ctx.lr = 0x82765BD0;
	sub_82762730(ctx, base);
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,300(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82762810
	ctx.lr = 0x82765C28;
	sub_82762810(ctx, base);
loc_82765C28:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82789128) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,14464(r3)
	REX_STORE_U32(ctx.r3.u32 + 14464, ctx.r11.u32);
	// stw r11,14468(r3)
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r11.u32);
	// stw r10,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r10.u32);
	// stw r10,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r10.u32);
	// stw r11,14480(r3)
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// stw r11,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// stw r11,14488(r3)
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// stw r11,14492(r3)
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r11,14496(r3)
	REX_STORE_U32(ctx.r3.u32 + 14496, ctx.r11.u32);
	// stw r11,14500(r3)
	REX_STORE_U32(ctx.r3.u32 + 14500, ctx.r11.u32);
	// stw r11,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r11,14516(r3)
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// stw r11,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// stw r11,14524(r3)
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r11.u32);
	// stw r11,14528(r3)
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
	// stw r11,14532(r3)
	REX_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// stw r11,14536(r3)
	REX_STORE_U32(ctx.r3.u32 + 14536, ctx.r11.u32);
	// stw r11,14540(r3)
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r11.u32);
	// stw r11,14544(r3)
	REX_STORE_U32(ctx.r3.u32 + 14544, ctx.r11.u32);
	// stw r11,14548(r3)
	REX_STORE_U32(ctx.r3.u32 + 14548, ctx.r11.u32);
	// stw r11,14552(r3)
	REX_STORE_U32(ctx.r3.u32 + 14552, ctx.r11.u32);
	// stw r11,14556(r3)
	REX_STORE_U32(ctx.r3.u32 + 14556, ctx.r11.u32);
	// stw r10,14560(r3)
	REX_STORE_U32(ctx.r3.u32 + 14560, ctx.r10.u32);
	// stw r11,14580(r3)
	REX_STORE_U32(ctx.r3.u32 + 14580, ctx.r11.u32);
	// stw r11,14584(r3)
	REX_STORE_U32(ctx.r3.u32 + 14584, ctx.r11.u32);
	// stw r11,14588(r3)
	REX_STORE_U32(ctx.r3.u32 + 14588, ctx.r11.u32);
	// stw r11,14592(r3)
	REX_STORE_U32(ctx.r3.u32 + 14592, ctx.r11.u32);
	// stw r11,14596(r3)
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r11.u32);
	// stw r11,14600(r3)
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r11.u32);
	// stw r11,14604(r3)
	REX_STORE_U32(ctx.r3.u32 + 14604, ctx.r11.u32);
	// stw r11,14608(r3)
	REX_STORE_U32(ctx.r3.u32 + 14608, ctx.r11.u32);
	// stw r11,14612(r3)
	REX_STORE_U32(ctx.r3.u32 + 14612, ctx.r11.u32);
	// stw r11,14616(r3)
	REX_STORE_U32(ctx.r3.u32 + 14616, ctx.r11.u32);
	// stw r11,14620(r3)
	REX_STORE_U32(ctx.r3.u32 + 14620, ctx.r11.u32);
	// stw r11,14624(r3)
	REX_STORE_U32(ctx.r3.u32 + 14624, ctx.r11.u32);
	// stw r11,14628(r3)
	REX_STORE_U32(ctx.r3.u32 + 14628, ctx.r11.u32);
	// stw r11,14632(r3)
	REX_STORE_U32(ctx.r3.u32 + 14632, ctx.r11.u32);
	// stw r11,14636(r3)
	REX_STORE_U32(ctx.r3.u32 + 14636, ctx.r11.u32);
	// stw r11,14640(r3)
	REX_STORE_U32(ctx.r3.u32 + 14640, ctx.r11.u32);
	// stw r11,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
	// stw r11,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r11.u32);
	// stw r11,14652(r3)
	REX_STORE_U32(ctx.r3.u32 + 14652, ctx.r11.u32);
	// stw r11,14656(r3)
	REX_STORE_U32(ctx.r3.u32 + 14656, ctx.r11.u32);
	// stw r11,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r11.u32);
	// stw r11,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278C178) {
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
	ctx.lr = 0x8278C180;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,-29640
	ctx.r10.s64 = ctx.r10.s64 + -29640;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278c444
	if (!ctx.cr6.eq) goto loc_8278C444;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278c1e0
	if (!ctx.cr6.eq) goto loc_8278C1E0;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278c9d8
	if (!ctx.cr6.gt) goto loc_8278C9D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_8278C1CC:
	// ldux r9,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8278c1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278C1CC;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278C1E0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// beq cr6,0x8278c1f0
	if (ctx.cr6.eq) goto loc_8278C1F0;
	// li r30,6
	r30.s64 = 6;
loc_8278C1F0:
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// lwz r11,1316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,1324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x8278c9d8
	if (!ctx.cr6.gt) goto loc_8278C9D8;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_8278C22C:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r4,3
	r27.s64 = ctx.r4.s64 + 3;
	// addi r26,r28,3
	r26.s64 = r28.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278C240:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r22,r4,r11
	r22.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r21,r31,r9
	r21.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lbzx r20,r3,r9
	r20.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r19,r9,r5
	r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r8,r21,r8
	ctx.r8.s64 = int64_t(r21.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r23,r22
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r9,r9,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c2a4
	if (!ctx.cr0.lt) goto loc_8278C2A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c2b0
	goto loc_8278C2B0;
loc_8278C2A4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c2b0
	if (!ctx.cr6.gt) goto loc_8278C2B0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C2B0:
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stbx r6,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r19,1(r8)
	r19.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbzx r22,r31,r9
	r22.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbzx r21,r3,r9
	r21.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r20,r9,r5
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r9,r21,r6
	ctx.r9.s64 = int64_t(r21.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r22,r8
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r23
	ctx.r6.s64 = r23.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r19
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r19.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r8,r9,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8278c320
	if (!ctx.cr0.lt) goto loc_8278C320;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8278c32c
	goto loc_8278C32C;
loc_8278C320:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8278c32c
	if (!ctx.cr6.gt) goto loc_8278C32C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8278C32C:
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stb r8,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// lhz r24,4(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r21,2(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r22,r31,r9
	r22.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbz r20,0(r9)
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r23,r6
	r23.s64 = ctx.r6.s16;
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r6,r3,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsh r21,r21
	r21.s64 = r21.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r9,r22,r24
	ctx.r9.s64 = int64_t(r22.s32) * int64_t(r24.s32);
	// mullw r8,r8,r21
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r21.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r20
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r8,r6,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r8.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8278c39c
	if (!ctx.cr0.lt) goto loc_8278C39C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8278c3a8
	goto loc_8278C3A8;
loc_8278C39C:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8278c3a8
	if (!ctx.cr6.gt) goto loc_8278C3A8;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8278C3A8:
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + ctx.r11.u64;
	// stb r8,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r8.u8);
	// lbzx r6,r3,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lhz r21,2(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r8,r27,r11
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// lhz r23,4(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbzx r24,r9,r5
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhz r22,6(r10)
	r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r22,r22
	r22.s64 = r22.s16;
	// extsh r23,r23
	r23.s64 = r23.s16;
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r22.s32);
	// extsh r22,r21
	r22.s64 = r21.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r24,r22
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r9,r8,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c414
	if (!ctx.cr0.lt) goto loc_8278C414;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c420
	goto loc_8278C420;
loc_8278C414:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c420
	if (!ctx.cr6.gt) goto loc_8278C420;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C420:
	// stbx r9,r26,r11
	REX_STORE_U8(r26.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8278c240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278C240;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r28,r7
	r28.u64 = r28.u64 + ctx.r7.u64;
	// bne 0x8278c22c
	if (!ctx.cr0.eq) goto loc_8278C22C;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278C444:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278c69c
	if (!ctx.cr6.eq) goto loc_8278C69C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x8278c45c
	if (ctx.cr6.eq) goto loc_8278C45C;
	// li r3,6
	ctx.r3.s64 = 6;
loc_8278C45C:
	// li r31,1
	r31.s64 = 1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,1324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r31,r8,r9
	r31.u64 = ctx.r9.u64 - ctx.r8.u64;
	// ble cr6,0x8278c9d8
	if (!ctx.cr6.gt) goto loc_8278C9D8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8278C484:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r4,2
	r29.s64 = ctx.r4.s64 + 2;
	// addi r28,r30,3
	r28.s64 = r30.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278C498:
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbzx r26,r4,r10
	r26.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r25,6(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lbz r22,2(r9)
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbz r21,-1(r9)
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r26,r6
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r22,r25
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r21,r24
	ctx.r8.s64 = int64_t(r21.s32) * int64_t(r24.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c4fc
	if (!ctx.cr0.lt) goto loc_8278C4FC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c508
	goto loc_8278C508;
loc_8278C4FC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c508
	if (!ctx.cr6.gt) goto loc_8278C508;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C508:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stbx r8,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r23,r4,r10
	r23.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbz r24,2(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r25,r6
	r25.s64 = ctx.r6.s16;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r26,r25
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c574
	if (!ctx.cr0.lt) goto loc_8278C574;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c580
	goto loc_8278C580;
loc_8278C574:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c580
	if (!ctx.cr6.gt) goto loc_8278C580;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C580:
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r25,2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// lbz r26,4(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r9,r25,r6
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r22
	ctx.r6.s64 = r22.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c5f0
	if (!ctx.cr0.lt) goto loc_8278C5F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c5fc
	goto loc_8278C5FC;
loc_8278C5F0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c5fc
	if (!ctx.cr6.gt) goto loc_8278C5FC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C5FC:
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// stb r6,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r6.u8);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r26,4(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r25,2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lbz r23,3(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// lbzx r26,r29,r10
	r26.u64 = REX_LOAD_U8(r29.u32 + ctx.r10.u32);
	// extsh r25,r24
	r25.s64 = r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r25.s32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c66c
	if (!ctx.cr0.lt) goto loc_8278C66C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c678
	goto loc_8278C678;
loc_8278C66C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c678
	if (!ctx.cr6.gt) goto loc_8278C678;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C678:
	// stbx r9,r28,r10
	REX_STORE_U8(r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8278c498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278C498;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r7
	r30.u64 = r30.u64 + ctx.r7.u64;
	// bne 0x8278c484
	if (!ctx.cr0.eq) goto loc_8278C484;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278C69C:
	// addi r9,r1,47
	ctx.r9.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r28,r9,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r22,r28
	r22.u64 = r28.u64;
	// beq cr6,0x8278c6b8
	if (ctx.cr6.eq) goto loc_8278C6B8;
	// li r8,6
	ctx.r8.s64 = 6;
loc_8278C6B8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x8278c6c8
	if (ctx.cr6.eq) goto loc_8278C6C8;
	// li r9,6
	ctx.r9.s64 = 6;
loc_8278C6C8:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,1316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r23,1324(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// addi r31,r9,-7
	r31.s64 = ctx.r9.s64 + -7;
	// subfic r26,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	r26.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x8278c9d8
	if (!ctx.cr6.gt) goto loc_8278C9D8;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r9,-1
	r25.s64 = ctx.r9.s64 + -1;
	// mr r24,r23
	r24.u64 = r23.u64;
loc_8278C710:
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r8,r22,-2
	ctx.r8.s64 = r22.s64 + -2;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8278C720:
	// lhz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbzx r21,r9,r29
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r20,r9,r30
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r19,2(r10)
	r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// lbzx r21,r9,r5
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r18,0(r10)
	r18.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r17,0(r9)
	r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// extsh r20,r19
	r20.s64 = r19.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r20
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// extsh r21,r18
	r21.s64 = r18.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r17,r21
	ctx.r3.s64 = int64_t(r17.s32) * int64_t(r21.s32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + r27.u64;
	// sraw r3,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// sthu r3,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8278c720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278C720;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r25,r5
	r25.u64 = r25.u64 + ctx.r5.u64;
	// addi r22,r22,64
	r22.s64 = r22.s64 + 64;
	// bne 0x8278c710
	if (!ctx.cr0.eq) goto loc_8278C710;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8278c9d8
	if (!ctx.cr6.gt) goto loc_8278C9D8;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
loc_8278C7A0:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278C7B8:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r30,6(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r28,-2(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,0(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r29,r25
	r29.s64 = r25.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c828
	if (!ctx.cr0.lt) goto loc_8278C828;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c834
	goto loc_8278C834;
loc_8278C828:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c834
	if (!ctx.cr6.gt) goto loc_8278C834;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C834:
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r9,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r9.u8);
	// lhz r28,0(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r30,-2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// extsh r30,r27
	r30.s64 = r27.s16;
	// extsh r29,r28
	r29.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// extsh r30,r25
	r30.s64 = r25.s16;
	// extsh r29,r24
	r29.s64 = r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c8ac
	if (!ctx.cr0.lt) goto loc_8278C8AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c8b8
	goto loc_8278C8B8;
loc_8278C8AC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c8b8
	if (!ctx.cr6.gt) goto loc_8278C8B8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C8B8:
	// stbx r9,r4,r6
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r30,4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// lhz r24,2(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lhz r29,4(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r25,r28
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(r28.s32);
	// extsh r28,r24
	r28.s64 = r24.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c92c
	if (!ctx.cr0.lt) goto loc_8278C92C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c938
	goto loc_8278C938;
loc_8278C92C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c938
	if (!ctx.cr6.gt) goto loc_8278C938;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C938:
	// stbx r9,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r30,6(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,4(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,6(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r29,r25
	r29.s64 = r25.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c9ac
	if (!ctx.cr0.lt) goto loc_8278C9AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c9b8
	goto loc_8278C9B8;
loc_8278C9AC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c9b8
	if (!ctx.cr6.gt) goto loc_8278C9B8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C9B8:
	// stbx r9,r3,r6
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8278c7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278C7B8;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// bne 0x8278c7a0
	if (!ctx.cr0.eq) goto loc_8278C7A0;
loc_8278C9D8:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_827BAB48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827BAB50;
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
	ctx.lr = 0x827BAB78;
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
	// bl 0x827b9620
	ctx.lr = 0x827BAB98;
	sub_827B9620(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BB998) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b8638
	ctx.lr = 0x827BB9E8;
	sub_827B8638(ctx, base);
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

DEFINE_REX_FUNC(sub_827BCC88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827BCC90;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x827b1d48
	ctx.lr = 0x827BCCDC;
	sub_827B1D48(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b9620
	ctx.lr = 0x827BCD00;
	sub_827B9620(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BE0F8) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cac
	ctx.lr = 0x827BE100;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// lwz r8,1148(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827BE178;
	sub_827AF878(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x827be264
	if (!ctx.cr6.eq) goto loc_827BE264;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827be35c
	if (!ctx.cr6.gt) goto loc_827BE35C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BE1D8:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827be1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BE1D8;
	// b 0x827be35c
	goto loc_827BE35C;
loc_827BE264:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827be35c
	if (!ctx.cr6.gt) goto loc_827BE35C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BE27C:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827be27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BE27C;
loc_827BE35C:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

