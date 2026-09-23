#include "hydrothunder_funcs.72.h"

DEFINE_REX_FUNC(sub_82124C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82124C30;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// bl 0x82120b20
	ctx.lr = 0x82124C64;
	sub_82120B20(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120b20
	ctx.lr = 0x82124C78;
	sub_82120B20(ctx, base);
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
	// lbz r11,62(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 62);
	// stb r11,62(r31)
	REX_STORE_U8(r31.u32 + 62, ctx.r11.u8);
	// lbz r11,63(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 63);
	// stb r11,63(r31)
	REX_STORE_U8(r31.u32 + 63, ctx.r11.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// bl 0x82120b20
	ctx.lr = 0x82124CC4;
	sub_82120B20(ctx, base);
	// lbz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 104);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// lbz r11,105(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 105);
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// lbz r11,106(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 106);
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// lbz r11,107(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 107);
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// bl 0x82120b20
	ctx.lr = 0x82124CF8;
	sub_82120B20(ctx, base);
	// lbz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 136);
	// stb r11,136(r31)
	REX_STORE_U8(r31.u32 + 136, ctx.r11.u8);
	// lbz r11,137(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 137);
	// stb r11,137(r31)
	REX_STORE_U8(r31.u32 + 137, ctx.r11.u8);
	// lbz r11,138(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 138);
	// stb r11,138(r31)
	REX_STORE_U8(r31.u32 + 138, ctx.r11.u8);
	// lbz r11,139(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 139);
	// stb r11,139(r31)
	REX_STORE_U8(r31.u32 + 139, ctx.r11.u8);
	// lbz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 140);
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// lbz r11,141(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 141);
	// stb r11,141(r31)
	REX_STORE_U8(r31.u32 + 141, ctx.r11.u8);
	// lbz r11,142(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 142);
	// stb r11,142(r31)
	REX_STORE_U8(r31.u32 + 142, ctx.r11.u8);
	// lbz r11,143(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 143);
	// stb r11,143(r31)
	REX_STORE_U8(r31.u32 + 143, ctx.r11.u8);
	// lbz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 144);
	// stb r11,144(r31)
	REX_STORE_U8(r31.u32 + 144, ctx.r11.u8);
	// lbz r11,145(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 145);
	// stb r11,145(r31)
	REX_STORE_U8(r31.u32 + 145, ctx.r11.u8);
	// lbz r11,146(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 146);
	// stb r11,146(r31)
	REX_STORE_U8(r31.u32 + 146, ctx.r11.u8);
	// lbz r11,147(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 147);
	// stb r11,147(r31)
	REX_STORE_U8(r31.u32 + 147, ctx.r11.u8);
	// lbz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 148);
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
	// lbz r11,149(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 149);
	// stb r11,149(r31)
	REX_STORE_U8(r31.u32 + 149, ctx.r11.u8);
	// lbz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 150);
	// stb r11,150(r31)
	REX_STORE_U8(r31.u32 + 150, ctx.r11.u8);
	// lbz r11,151(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 151);
	// stb r11,151(r31)
	REX_STORE_U8(r31.u32 + 151, ctx.r11.u8);
	// lbz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r11.u8);
	// lbz r11,153(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 153);
	// stb r11,153(r31)
	REX_STORE_U8(r31.u32 + 153, ctx.r11.u8);
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lbz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 160);
	// stb r11,160(r31)
	REX_STORE_U8(r31.u32 + 160, ctx.r11.u8);
	// lbz r11,161(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 161);
	// stb r11,161(r31)
	REX_STORE_U8(r31.u32 + 161, ctx.r11.u8);
	// lbz r11,162(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 162);
	// stb r11,162(r31)
	REX_STORE_U8(r31.u32 + 162, ctx.r11.u8);
	// lbz r11,163(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 163);
	// stb r11,163(r31)
	REX_STORE_U8(r31.u32 + 163, ctx.r11.u8);
	// lbz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 164);
	// stb r11,164(r31)
	REX_STORE_U8(r31.u32 + 164, ctx.r11.u8);
	// lbz r11,165(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 165);
	// stb r11,165(r31)
	REX_STORE_U8(r31.u32 + 165, ctx.r11.u8);
	// lbz r11,166(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 166);
	// stb r11,166(r31)
	REX_STORE_U8(r31.u32 + 166, ctx.r11.u8);
	// lbz r11,167(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 167);
	// stb r11,167(r31)
	REX_STORE_U8(r31.u32 + 167, ctx.r11.u8);
	// lbz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 168);
	// stb r11,168(r31)
	REX_STORE_U8(r31.u32 + 168, ctx.r11.u8);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lbz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 176);
	// stb r11,176(r31)
	REX_STORE_U8(r31.u32 + 176, ctx.r11.u8);
	// lbz r11,177(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 177);
	// stb r11,177(r31)
	REX_STORE_U8(r31.u32 + 177, ctx.r11.u8);
	// lbz r11,178(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 178);
	// stb r11,178(r31)
	REX_STORE_U8(r31.u32 + 178, ctx.r11.u8);
	// lbz r11,179(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 179);
	// stb r11,179(r31)
	REX_STORE_U8(r31.u32 + 179, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82135958) {
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
	// bl 0x821359f0
	ctx.lr = 0x82135978;
	sub_821359F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82135988
	if (ctx.cr0.eq) goto loc_82135988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82135988;
	sub_8269CE98(ctx, base);
loc_82135988:
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

DEFINE_REX_FUNC(sub_82138738) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x82138740;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x8212dd28
	ctx.lr = 0x8213877C;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8213878C;
	sub_826A1E70(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8213879C;
	sub_826A1E70(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r9,-30672
	ctx.r7.s64 = ctx.r9.s64 + -30672;
	// stb r11,128(r31)
	REX_STORE_U8(r31.u32 + 128, ctx.r11.u8);
	// lfs f1,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
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
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
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
	// bne cr6,0x82138814
	if (!ctx.cr6.eq) goto loc_82138814;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82139b18
	ctx.lr = 0x82138810;
	sub_82139B18(ctx, base);
	// b 0x8213881c
	goto loc_8213881C;
loc_82138814:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82139a08
	ctx.lr = 0x8213881C;
	sub_82139A08(ctx, base);
loc_8213881C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821401D8) {
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
	ctx.lr = 0x821401E0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// std r18,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r18.u64);
	// addi r21,r11,-17344
	r21.s64 = ctx.r11.s64 + -17344;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x82140210;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17360
	ctx.r4.s64 = ctx.r11.s64 + -17360;
	// bl 0x8215fbf8
	ctx.lr = 0x8214021C;
	sub_8215FBF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-17336
	r30.s64 = ctx.r11.s64 + -17336;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82140230;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82140234;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x82140244;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8214024C;
	sub_8215F0F0(ctx, base);
	// li r19,1
	r19.s64 = 1;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r19,0(r30)
	REX_STORE_U32(r30.u32 + 0, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r11,-17296
	r20.s64 = ctx.r11.s64 + -17296;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f338
	ctx.lr = 0x8214026C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82140270;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8217a160
	ctx.lr = 0x8214027C;
	sub_8217A160(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82140288;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8214028C;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217a1d8
	ctx.lr = 0x82140298;
	sub_8217A1D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17180
	ctx.r4.s64 = ctx.r11.s64 + -17180;
	// bl 0x82125d00
	ctx.lr = 0x821402A8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821402ec
	if (!ctx.cr0.eq) goto loc_821402EC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r3,6136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// bge cr6,0x821402cc
	if (!ctx.cr6.lt) goto loc_821402CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_821402CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821402DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821405e0
	if (ctx.cr0.eq) goto loc_821405E0;
	// addi r24,r3,80
	r24.s64 = ctx.r3.s64 + 80;
	// b 0x82140334
	goto loc_82140334;
loc_821402EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x82125d00
	ctx.lr = 0x821402FC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821405e0
	if (!ctx.cr0.eq) goto loc_821405E0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82140318
	if (!ctx.cr6.lt) goto loc_82140318;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82140318:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// bl 0x8214f8b8
	ctx.lr = 0x82140324;
	sub_8214F8B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r3,28
	r24.s64 = ctx.r3.s64 + 28;
	// bne 0x82140334
	if (!ctx.cr0.eq) goto loc_82140334;
	// mr r24,r18
	r24.u64 = r18.u64;
loc_82140334:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x821405e0
	if (ctx.cr6.eq) goto loc_821405E0;
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r22,r18
	r22.u64 = r18.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821405e0
	if (!ctx.cr0.gt) goto loc_821405E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r23,r18
	r23.u64 = r18.u64;
	// addi r26,r11,-17148
	r26.s64 = ctx.r11.s64 + -17148;
	// addi r28,r10,-17156
	r28.s64 = ctx.r10.s64 + -17156;
	// addi r27,r9,-17164
	r27.s64 = ctx.r9.s64 + -17164;
	// addi r25,r8,-17324
	r25.s64 = ctx.r8.s64 + -17324;
loc_82140378:
	// lwzx r31,r23,r7
	r31.u64 = REX_LOAD_U32(r23.u32 + ctx.r7.u32);
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821405c0
	if (ctx.cr0.eq) goto loc_821405C0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x82140394;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x82140398;
	sub_8215F270(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x8215f670
	ctx.lr = 0x821403A8;
	sub_8215F670(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821403bc
	if (ctx.cr6.lt) goto loc_821403BC;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x821403c0
	goto loc_821403C0;
loc_821403BC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821403C0:
	// bl 0x8215fbf8
	ctx.lr = 0x821403C4;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821403D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821403E8;
	sub_8215F670(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821403F0;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r15)
	REX_STORE_U32(r15.u32 + 8, r29.u32);
	// stw r19,0(r15)
	REX_STORE_U32(r15.u32 + 0, r19.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x82140408;
	sub_8215F670(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214041C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x8214042C;
	sub_8215F670(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x821405a0
	if (ctx.cr6.eq) goto loc_821405A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x821405a0
	if (ctx.cr6.eq) goto loc_821405A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214048C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82140510
	if (!ctx.cr6.eq) goto loc_82140510;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mr r29,r18
	r29.u64 = r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821404AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821405c0
	if (!ctx.cr0.gt) goto loc_821405C0;
loc_821404B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821404CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821404DC;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x821404E4;
	sub_8215F200(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x821404EC;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821404b4
	if (ctx.cr6.lt) goto loc_821404B4;
	// b 0x821405c0
	goto loc_821405C0;
loc_82140510:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214051C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x821405c0
	if (!ctx.cr6.eq) goto loc_821405C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214053C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821405c0
	if (!ctx.cr0.gt) goto loc_821405C0;
loc_82140544:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214055C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8214056C;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x82140574;
	sub_8215F200(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8214057C;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82140544
	if (ctx.cr6.lt) goto loc_82140544;
	// b 0x821405c0
	goto loc_821405C0;
loc_821405A0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821405AC;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821405B4;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r19,0(r31)
	REX_STORE_U32(r31.u32 + 0, r19.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821405C0:
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82140378
	if (ctx.cr6.lt) goto loc_82140378;
loc_821405E0:
	// lwz r3,4(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821405FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8214060C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8214061C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82140624;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8215D2F0) {
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
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d338
	if (ctx.cr6.eq) goto loc_8215D338;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215D338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215D338:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215d360
	if (!ctx.cr6.eq) goto loc_8215D360;
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d360
	if (ctx.cr6.eq) goto loc_8215D360;
	// bl 0x8215d238
	ctx.lr = 0x8215D360;
	sub_8215D238(ctx, base);
loc_8215D360:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82162650) {
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
	// blt cr6,0x82162680
	if (ctx.cr6.lt) goto loc_82162680;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82162698
	if (ctx.cr6.lt) goto loc_82162698;
loc_82162680:
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
	ctx.lr = 0x82162698;
	sub_821231D0(ctx, base);
loc_82162698:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r10,r31,44
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(44));
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

DEFINE_REX_FUNC(sub_82168810) {
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
	ctx.lr = 0x82168838;
	sub_821678F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82168858
	ctx.lr = 0x82168840;
	sub_82168858(ctx, base);
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

DEFINE_REX_FUNC(sub_82169C28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,165(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,165(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 165);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82169c84
	if (!ctx.cr0.eq) goto loc_82169C84;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82169c58
	goto loc_82169C58;
loc_82169C50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82169C58:
	// lbz r9,165(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82169c50
	if (ctx.cr0.eq) goto loc_82169C50;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82169C6C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82169c94
	if (!ctx.cr6.eq) goto loc_82169C94;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82169C84:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,165(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82169c6c
	if (ctx.cr0.eq) goto loc_82169C6C;
loc_82169C94:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216DA48) {
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
	// bl 0x8216d9e8
	ctx.lr = 0x8216DA60;
	sub_8216D9E8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r8,688(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 688);
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,688(r31)
	REX_STORE_U32(r31.u32 + 688, ctx.r8.u32);
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mulli r9,r7,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(24));
	// stw r7,684(r31)
	REX_STORE_U32(r31.u32 + 684, ctx.r7.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r10,544(r9)
	REX_STORE_U32(ctx.r9.u32 + 544, ctx.r10.u32);
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// mulli r9,r9,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r10,556(r9)
	REX_STORE_U32(ctx.r9.u32 + 556, ctx.r10.u32);
loc_8216DAAC:
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r10,592(r9)
	REX_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// bdnz 0x8216daac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216DAAC;
	// stw r10,696(r31)
	REX_STORE_U32(r31.u32 + 696, ctx.r10.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216DAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216df58
	ctx.lr = 0x8216DAF8;
	sub_8216DF58(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6120(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216db18
	if (ctx.cr6.eq) goto loc_8216DB18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216DB18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216DB18:
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

DEFINE_REX_FUNC(sub_821754A0) {
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
	ctx.lr = 0x821754A8;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca4
	ctx.lr = 0x821754B0;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,24
	r24.s64 = ctx.r3.s64 + 24;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8216fab8
	ctx.lr = 0x821754E4;
	sub_8216FAB8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x82175500
	if (!ctx.cr6.eq) goto loc_82175500;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x821759e8
	goto loc_821759E8;
loc_82175500:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fnmsubs f11,f11,f13,f28
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -f28.f64)));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x821759d4
	if (ctx.cr6.lt) goto loc_821759D4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r30,76
	r29.s64 = r30.s64 + 76;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fnmsubs f0,f0,f13,f28
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -f28.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821759d4
	if (ctx.cr6.gt) goto loc_821759D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f30,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// bl 0x8216fab8
	ctx.lr = 0x82175560;
	sub_8216FAB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217558c
	goto loc_8217558C;
loc_82175568:
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r4,65520
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65520, ctx.xer);
	// bge cr6,0x821755a4
	if (!ctx.cr6.lt) goto loc_821755A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82162650
	ctx.lr = 0x82175580;
	sub_82162650(ctx, base);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
loc_8217558C:
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82175568
	if (!ctx.cr6.eq) goto loc_82175568;
loc_821755A4:
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r10,r28,30
	ctx.r10.u64 = r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bne 0x821755cc
	if (!ctx.cr0.eq) goto loc_821755CC;
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821755fc
	goto loc_821755FC;
loc_821755CC:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821755e8
	if (ctx.cr0.eq) goto loc_821755E8;
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x821755fc
	goto loc_821755FC;
loc_821755E8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// fnmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
loc_821755FC:
	// fadds f31,f0,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821759d4
	if (ctx.cr6.lt) goto loc_821759D4;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x821759d4
	if (ctx.cr6.gt) goto loc_821759D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82126320
	ctx.lr = 0x82175628;
	sub_82126320(ctx, base);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f29,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f29.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x8217564C;
	sub_82173C20(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216cfa0
	ctx.lr = 0x82175664;
	sub_8216CFA0(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// addi r25,r11,-2544
	r25.s64 = ctx.r11.s64 + -2544;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lis r23,4
	r23.s64 = 262144;
	// li r22,0
	r22.s64 = 0;
	// addis r31,r25,4
	r31.s64 = r25.s64 + 262144;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f13,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// fdivs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 / ctx.f13.f64));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// fmuls f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bge cr6,0x821759e8
	if (!ctx.cr6.lt) goto loc_821759E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r21,r11,-25252
	r21.s64 = ctx.r11.s64 + -25252;
	// addi r20,r10,-25320
	r20.s64 = ctx.r10.s64 + -25320;
loc_821756C0:
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// bl 0x8216fab8
	ctx.lr = 0x821756D4;
	sub_8216FAB8(ctx, base);
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,65520
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65520, ctx.xer);
	// blt cr6,0x82175754
	if (ctx.cr6.lt) goto loc_82175754;
	// cmplwi cr6,r4,65534
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65534, ctx.xer);
	// beq cr6,0x82175974
	if (ctx.cr6.eq) goto loc_82175974;
	// cmplwi cr6,r4,65533
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65533, ctx.xer);
	// bne cr6,0x82175718
	if (!ctx.cr6.eq) goto loc_82175718;
	// lbz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 12);
	// addi r10,r19,12
	ctx.r10.s64 = r19.s64 + 12;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stb r11,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r11.u8);
	// lbz r11,13(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 13);
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lbz r11,14(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 14);
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
	// lbz r11,15(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 15);
	// b 0x8217574c
	goto loc_8217574C;
loc_82175718:
	// cmplwi cr6,r4,65529
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65529, ctx.xer);
	// bgt cr6,0x8217594c
	if (ctx.cr6.gt) goto loc_8217594C;
	// addis r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -65536;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bl 0x8228ca78
	ctx.lr = 0x82175730;
	sub_8228CA78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r11.u8);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
	// lbz r11,3(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
loc_8217574C:
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// b 0x8217594c
	goto loc_8217594C;
loc_82175754:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82162650
	ctx.lr = 0x82175760;
	sub_82162650(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f29.f64);
	// bgt cr6,0x82175960
	if (ctx.cr6.gt) goto loc_82175960;
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82175944
	if (ctx.cr6.lt) goto loc_82175944;
	// cmplwi cr6,r23,144
	ctx.cr6.compare<uint32_t>(r23.u32, 144, ctx.xer);
	// blt cr6,0x82175944
	if (ctx.cr6.lt) goto loc_82175944;
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f27,8(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f27,32(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f27,56(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f12,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f10,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f27,80(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f10,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f0,f10,f9,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f0.f64)));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,28(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f0,f0,f10,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f13.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f13,28(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f11.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821758A0;
	sub_826A1E70(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x826a1e70
	ctx.lr = 0x821758B0;
	sub_826A1E70(ctx, base);
	// lbz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82175938
	if (ctx.cr0.eq) goto loc_82175938;
	// lhz r28,42(r29)
	r28.u64 = REX_LOAD_U16(r29.u32 + 42);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi r28,0
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x821758d8
	if (ctx.cr0.lt) goto loc_821758D8;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821758e8
	if (ctx.cr6.lt) goto loc_821758E8;
loc_821758D8:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821758E8;
	sub_821231D0(ctx, base);
loc_821758E8:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821758F8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821758f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821758F8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82175914;
	sub_826A1E70(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r11,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x82175be0
	ctx.lr = 0x82175934;
	sub_82175BE0(ctx, base);
	// b 0x82175944
	goto loc_82175944;
loc_82175938:
	// addi r31,r31,144
	r31.s64 = r31.s64 + 144;
	// addi r23,r23,-144
	r23.s64 = r23.s64 + -144;
	// addi r22,r22,2
	r22.s64 = r22.s64 + 2;
loc_82175944:
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_8217594C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821756c0
	if (ctx.cr6.lt) goto loc_821756C0;
	// b 0x82175974
	goto loc_82175974;
loc_82175960:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821759f8
	ctx.lr = 0x82175970;
	sub_821759F8(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_82175974:
	// addis r11,r25,4
	ctx.r11.s64 = r25.s64 + 262144;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821759e8
	if (!ctx.cr6.gt) goto loc_821759E8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821759A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r7,24
	ctx.r7.s64 = 24;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addis r6,r25,4
	ctx.r6.s64 = r25.s64 + 262144;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821759D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821759e8
	goto loc_821759E8;
loc_821759D4:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821759f8
	ctx.lr = 0x821759E4;
	sub_821759F8(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_821759E8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x821759F4;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821A2538) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A255C;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821A2564;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a2590
	if (ctx.cr0.eq) goto loc_821A2590;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,9448
	ctx.r10.s64 = ctx.r10.s64 + 9448;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821a2594
	goto loc_821A2594;
loc_821A2590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A2594:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821A4710) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3c50
	sub_821A3C50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4B88) {
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
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x821a4bcc
	if (!ctx.cr6.gt) goto loc_821A4BCC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821A4BCC:
	// bl 0x822f6338
	ctx.lr = 0x821A4BD0;
	sub_822F6338(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821a4c60
	if (!ctx.cr6.gt) goto loc_821A4C60;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r8,r9,-12372
	ctx.r8.s64 = ctx.r9.s64 + -12372;
	// addi r7,r7,-12420
	ctx.r7.s64 = ctx.r7.s64 + -12420;
loc_821A4BF4:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// sth r9,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r9,6(r10)
	REX_STORE_U32(ctx.r10.u32 + 6, ctx.r9.u32);
	// stb r6,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r6.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r9.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stbu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821a4bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4BF4;
loc_821A4C60:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r9,-17376(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -17376);
	// addi r10,r10,-17376
	ctx.r10.s64 = ctx.r10.s64 + -17376;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821ABE98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821ABEA0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x821ABEB8;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r30,112
	r29.s64 = r30.s64 + 112;
	// addi r11,r11,-24176
	ctx.r11.s64 = ctx.r11.s64 + -24176;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821ABED8;
	sub_82120AC0(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821ABEE0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821abf4c
	if (ctx.cr0.eq) goto loc_821ABF4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24300
	ctx.r4.s64 = ctx.r11.s64 + -24300;
	// bl 0x82120600
	ctx.lr = 0x821ABEF8;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r28,1
	r28.s64 = 1;
	// lwz r4,-15296(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15296);
	// bl 0x82120600
	ctx.lr = 0x821ABF0C;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d58c8
	ctx.lr = 0x821ABF20;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821ABF30;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24136
	ctx.r9.s64 = ctx.r11.s64 + -24136;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x821abf50
	goto loc_821ABF50;
loc_821ABF4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ABF50:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821ABF60;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821abf78
	if (ctx.cr0.eq) goto loc_821ABF78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821ABF78;
	sub_82120AC0(ctx, base);
loc_821ABF78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B1B60) {
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
	ctx.lr = 0x821B1B68;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
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
	// bl 0x82178268
	ctx.lr = 0x821B1B80;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-22736
	ctx.r9.s64 = ctx.r9.s64 + -22736;
	// lfs f12,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r8.u32);
	// lfs f0,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// li r3,52
	ctx.r3.s64 = 52;
	// lfs f11,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r26,r31,128
	r26.s64 = r31.s64 + 128;
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// addi r25,r31,132
	r25.s64 = r31.s64 + 132;
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r24,r31,136
	r24.s64 = r31.s64 + 136;
	// stfs f11,132(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f10,136(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B1BE4;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b1c14
	if (ctx.cr0.eq) goto loc_821B1C14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22948
	ctx.r4.s64 = ctx.r11.s64 + -22948;
	// bl 0x82120600
	ctx.lr = 0x821B1BFC;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B1C10;
	sub_82196BA8(ctx, base);
	// b 0x821b1c18
	goto loc_821B1C18;
loc_821B1C14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1C18:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1C2C;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b23b0
	ctx.lr = 0x821B1C38;
	sub_821B23B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1c54
	if (ctx.cr0.eq) goto loc_821B1C54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B1C54;
	sub_82120AC0(ctx, base);
loc_821B1C54:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1C5C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b1c8c
	if (ctx.cr0.eq) goto loc_821B1C8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// bl 0x82120600
	ctx.lr = 0x821B1C74;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821B1C88;
	sub_82196BA8(ctx, base);
	// b 0x821b1c90
	goto loc_821B1C90;
loc_821B1C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1C90:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1CA0;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b23b0
	ctx.lr = 0x821B1CAC;
	sub_821B23B0(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1cc8
	if (ctx.cr0.eq) goto loc_821B1CC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B1CC8;
	sub_82120AC0(ctx, base);
loc_821B1CC8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1CD0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b1d00
	if (ctx.cr0.eq) goto loc_821B1D00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,19520
	ctx.r4.s64 = ctx.r11.s64 + 19520;
	// bl 0x82120600
	ctx.lr = 0x821B1CE8;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B1CFC;
	sub_82196BA8(ctx, base);
	// b 0x821b1d04
	goto loc_821B1D04;
loc_821B1D00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1D04:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1D14;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b23b0
	ctx.lr = 0x821B1D20;
	sub_821B23B0(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1d3c
	if (ctx.cr0.eq) goto loc_821B1D3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B1D3C;
	sub_82120AC0(ctx, base);
loc_821B1D3C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1D44;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b1d74
	if (ctx.cr0.eq) goto loc_821B1D74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22916
	ctx.r4.s64 = ctx.r11.s64 + -22916;
	// bl 0x82120600
	ctx.lr = 0x821B1D5C;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x8219e1a0
	ctx.lr = 0x821B1D70;
	sub_8219E1A0(ctx, base);
	// b 0x821b1d78
	goto loc_821B1D78;
loc_821B1D74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1D78:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1D88;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b23b0
	ctx.lr = 0x821B1D94;
	sub_821B23B0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1db0
	if (ctx.cr0.eq) goto loc_821B1DB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B1DB0;
	sub_82120AC0(ctx, base);
loc_821B1DB0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1DB8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b1de8
	if (ctx.cr0.eq) goto loc_821B1DE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-22900
	ctx.r4.s64 = ctx.r11.s64 + -22900;
	// bl 0x82120600
	ctx.lr = 0x821B1DD0;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B1DE4;
	sub_82196BA8(ctx, base);
	// b 0x821b1dec
	goto loc_821B1DEC;
loc_821B1DE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1DEC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1DFC;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b23b0
	ctx.lr = 0x821B1E08;
	sub_821B23B0(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1e20
	if (ctx.cr0.eq) goto loc_821B1E20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x821B1E20;
	sub_82120AC0(ctx, base);
loc_821B1E20:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B1E28;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1e40
	if (ctx.cr0.eq) goto loc_821B1E40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B1E38;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b1e44
	goto loc_821B1E44;
loc_821B1E40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B1E44:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B1E54;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B1E5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1e74
	if (ctx.cr0.eq) goto loc_821B1E74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b2430
	ctx.lr = 0x821B1E6C;
	sub_821B2430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b1e78
	goto loc_821B1E78;
loc_821B1E74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B1E78:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B1E84;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821B1E90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1ec0
	if (ctx.cr0.eq) goto loc_821B1EC0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,8240
	ctx.r9.s64 = ctx.r9.s64 + 8240;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x821b1ec4
	goto loc_821B1EC4;
loc_821B1EC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B1EC4:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821a1ff8
	ctx.lr = 0x821B1ED4;
	sub_821A1FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b2030
	ctx.lr = 0x821B1EDC;
	sub_821B2030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821CA690) {
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
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r4,112
	ctx.r5.s64 = ctx.r4.s64 + 112;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821ca6c4
	if (ctx.cr6.lt) goto loc_821CA6C4;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_821CA6C4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821CA6C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ca6c8
	if (!ctx.cr6.eq) goto loc_821CA6C8;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x821CA6F4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// bl 0x8216bc98
	ctx.lr = 0x821CA704;
	sub_8216BC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_821CF408) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf470
	ctx.lr = 0x821CF42C;
	sub_821CF470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf44c
	if (ctx.cr0.eq) goto loc_821CF44C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CF44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821CF44C:
	// li r11,0
	ctx.r11.s64 = 0;
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
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D38E8) {
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
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d391c
	goto loc_821D391C;
loc_821D390C:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821357c8
	ctx.lr = 0x821D3914;
	sub_821357C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821D391C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d390c
	if (!ctx.cr6.eq) goto loc_821D390C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x821d3964
	if (ctx.cr6.eq) goto loc_821D3964;
loc_821D394C:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821D3954;
	sub_8269CE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d394c
	if (!ctx.cr6.eq) goto loc_821D394C;
loc_821D3964:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821D396C;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_821D8030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D8038;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821ea7d8
	ctx.lr = 0x821D804C;
	sub_821EA7D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d805c
	if (!ctx.cr0.eq) goto loc_821D805C;
loc_821D8054:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d8168
	goto loc_821D8168;
loc_821D805C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10768
	ctx.r4.s64 = ctx.r11.s64 + 10768;
	// bl 0x8215f338
	ctx.lr = 0x821D806C;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_821D8074:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821d8098
	if (!ctx.cr6.eq) goto loc_821D8098;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821d809c
	goto loc_821D809C;
loc_821D8098:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D809C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821d80fc
	if (!ctx.cr6.lt) goto loc_821D80FC;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x821D80AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d80c0
	if (ctx.cr0.eq) goto loc_821D80C0;
	// bl 0x821eb768
	ctx.lr = 0x821D80B8;
	sub_821EB768(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x821d80c4
	goto loc_821D80C4;
loc_821D80C0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_821D80C4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821D80D4;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821eb900
	ctx.lr = 0x821D80E0;
	sub_821EB900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8054
	if (ctx.cr0.eq) goto loc_821D8054;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,144
	ctx.r3.s64 = r28.s64 + 144;
	// bl 0x82124e10
	ctx.lr = 0x821D80F4;
	sub_82124E10(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821d8074
	goto loc_821D8074;
loc_821D80FC:
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d8124
	goto loc_821D8124;
loc_821D8108:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821ebcd8
	ctx.lr = 0x821D8114;
	sub_821EBCD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8054
	if (ctx.cr0.eq) goto loc_821D8054;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
loc_821D8124:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d8108
	if (!ctx.cr6.eq) goto loc_821D8108;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d8164
	if (ctx.cr6.eq) goto loc_821D8164;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// addi r30,r11,160
	r30.s64 = ctx.r11.s64 + 160;
loc_821D8144:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ebdb0
	ctx.lr = 0x821D8154;
	sub_821EBDB0(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d8144
	if (!ctx.cr6.eq) goto loc_821D8144;
loc_821D8164:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D8168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DEF40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f9,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f13,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fadds f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f5,-44(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f5,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f5,-40(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f9,-32(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsubs f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f9,-24(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fsubs f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r7.u64);
	// std r3,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r3.u64);
	// std r5,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// std r9,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r9.u64);
	// std r11,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r11.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// std r6,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r6.u64);
	// std r10,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9D88) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E9DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821E9DD4;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e9de4
	if (ctx.cr0.eq) goto loc_821E9DE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821E9DE4;
	sub_8269CE98(ctx, base);
loc_821E9DE4:
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

DEFINE_REX_FUNC(sub_821ECAC0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ecae4
	if (!ctx.cr6.eq) goto loc_821ECAE4;
	// lbz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ecaec
	goto loc_821ECAEC;
loc_821ECAE4:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ECAEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ecb60
	if (ctx.cr0.eq) goto loc_821ECB60;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821ecb60
	if (ctx.cr6.eq) goto loc_821ECB60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x821ecb30
	if (ctx.cr6.eq) goto loc_821ECB30;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x821ecb34
	goto loc_821ECB34;
loc_821ECB30:
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
loc_821ECB34:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ecb60
	if (ctx.cr0.eq) goto loc_821ECB60;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ecb60
	if (ctx.cr6.eq) goto loc_821ECB60;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ECB60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821ECB60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F57C0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f5800
	if (ctx.cr6.eq) goto loc_821F5800;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,380
	ctx.r5.s64 = 380;
	// bl 0x821231d0
	ctx.lr = 0x821F5800;
	sub_821231D0(ctx, base);
loc_821F5800:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23200
	ctx.r4.s64 = ctx.r11.s64 + 23200;
	// bl 0x82120600
	ctx.lr = 0x821F5810;
	sub_82120600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821F5824;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// bl 0x8215f338
	ctx.lr = 0x821F5830;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23236
	ctx.r4.s64 = ctx.r11.s64 + 23236;
	// bl 0x8215f338
	ctx.lr = 0x821F583C;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F5848;
	sub_821F6130(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F585C;
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

DEFINE_REX_FUNC(sub_821F9C48) {
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
	ctx.lr = 0x821F9C50;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r28,r11,24572
	r28.s64 = ctx.r11.s64 + 24572;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// addi r11,r10,1640
	ctx.r11.s64 = ctx.r10.s64 + 1640;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mulli r10,r6,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9CA0;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9CA8;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9CAC;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9CBC;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9CC4;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9CCC;
	sub_8215F0F0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821f9d30
	if (!ctx.cr6.eq) goto loc_821F9D30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24592
	r22.s64 = ctx.r11.s64 + 24592;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9CF8;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9D00;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9D04;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9D14;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9D1C;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9D24;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821F9D30:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x821f9d84
	if (!ctx.cr6.eq) goto loc_821F9D84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24612
	r22.s64 = ctx.r11.s64 + 24612;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9D4C;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9D54;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9D58;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9D68;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9D70;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9D78;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821F9D84:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x821f9dd8
	if (!ctx.cr6.eq) goto loc_821F9DD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24632
	r22.s64 = ctx.r11.s64 + 24632;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9DA0;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9DA8;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9DAC;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9DBC;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9DC4;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9DCC;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821F9DD8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9e7c
	if (ctx.cr0.eq) goto loc_821F9E7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x821f9e1c
	if (!ctx.cr6.lt) goto loc_821F9E1C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_821F9E1C:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f10,f30,f12
	ctx.f10.f64 = double(float(f30.f64 - ctx.f12.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
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
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f31,f0,f13,f31
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsel f30,f11,f12,f30
	f30.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f30.f64;
loc_821F9E7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x8215f670
	ctx.lr = 0x821F9E8C;
	sub_8215F670(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9E94;
	sub_8215F5F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// bl 0x8215f670
	ctx.lr = 0x821F9EA0;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9EA8;
	sub_8215F5F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9EB0;
	sub_8215F5F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// bl 0x8215f670
	ctx.lr = 0x821F9EC0;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9EC8;
	sub_8215F0F0(ctx, base);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// bl 0x8215f670
	ctx.lr = 0x821F9EE0;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9EE8;
	sub_8215F0F0(ctx, base);
	// li r31,2
	r31.s64 = 2;
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24564
	ctx.r4.s64 = ctx.r11.s64 + 24564;
	// bl 0x8215f670
	ctx.lr = 0x821F9F04;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9F0C;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8220FA00) {
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
	// bl 0x822e8790
	ctx.lr = 0x8220FA1C;
	sub_822E8790(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-29868
	ctx.r11.s64 = ctx.r11.s64 + -29868;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,-28804
	ctx.r10.s64 = ctx.r10.s64 + -28804;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-1912
	ctx.r11.s64 = ctx.r11.s64 + -1912;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8220FA54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220fa7c
	if (ctx.cr0.eq) goto loc_8220FA7C;
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
	// b 0x8220fa80
	goto loc_8220FA80;
loc_8220FA7C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8220FA80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-29888
	ctx.r5.s64 = ctx.r11.s64 + -29888;
	// bl 0x8216be80
	ctx.lr = 0x8220FA90;
	sub_8216BE80(ctx, base);
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

DEFINE_REX_FUNC(sub_822156B8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x822156C0;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r25,r11,-26856
	r25.s64 = ctx.r11.s64 + -26856;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822156f4
	if (!ctx.cr6.eq) goto loc_822156F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27844
	ctx.r4.s64 = ctx.r11.s64 + -27844;
	// b 0x8221572c
	goto loc_8221572C;
loc_822156F4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82215708
	if (!ctx.cr6.eq) goto loc_82215708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27816
	ctx.r4.s64 = ctx.r11.s64 + -27816;
	// b 0x8221572c
	goto loc_8221572C;
loc_82215708:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221571c
	if (!ctx.cr6.eq) goto loc_8221571C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27788
	ctx.r4.s64 = ctx.r11.s64 + -27788;
	// b 0x8221572c
	goto loc_8221572C;
loc_8221571C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221572c
	if (!ctx.cr6.eq) goto loc_8221572C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27760
	ctx.r4.s64 = ctx.r11.s64 + -27760;
loc_8221572C:
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82215758
	if (ctx.cr6.lt) goto loc_82215758;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221575c
	goto loc_8221575C;
loc_82215758:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8221575C:
	// lfs f12,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,428(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,444
	ctx.r5.s64 = r31.s64 + 444;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r27,r31,288
	r27.s64 = r31.s64 + 288;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82215f60
	ctx.lr = 0x822157AC;
	sub_82215F60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x82125d00
	ctx.lr = 0x822157C4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822157d8
	if (!ctx.cr0.eq) goto loc_822157D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-27732
	r30.s64 = ctx.r11.s64 + -27732;
	// b 0x82215878
	goto loc_82215878;
loc_822157D8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x822157E8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82215858
	if (!ctx.cr0.eq) goto loc_82215858;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,180
	r29.s64 = r31.s64 + 180;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x82215804;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82215814
	if (!ctx.cr0.eq) goto loc_82215814;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-27708
	r30.s64 = ctx.r11.s64 + -27708;
loc_82215814:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82125d00
	ctx.lr = 0x82215824;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82215834
	if (!ctx.cr0.eq) goto loc_82215834;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-27680
	r30.s64 = ctx.r11.s64 + -27680;
loc_82215834:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82125d00
	ctx.lr = 0x82215844;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82215878
	if (!ctx.cr0.eq) goto loc_82215878;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-27652
	r30.s64 = ctx.r11.s64 + -27652;
	// b 0x82215878
	goto loc_82215878;
loc_82215858:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82125d00
	ctx.lr = 0x82215868;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82215878
	if (!ctx.cr0.eq) goto loc_82215878;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-27624
	r30.s64 = ctx.r11.s64 + -27624;
loc_82215878:
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822158a4
	if (ctx.cr6.lt) goto loc_822158A4;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_822158A4:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,544(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,548(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,552
	ctx.r5.s64 = r31.s64 + 552;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82215f60
	ctx.lr = 0x822158F0;
	sub_82215F60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r28,r11,-7880
	r28.s64 = ctx.r11.s64 + -7880;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82215908;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221592c
	if (!ctx.cr6.eq) goto loc_8221592C;
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
	// b 0x82215930
	goto loc_82215930;
loc_8221592C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82215930:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r10,16592
	r26.s64 = ctx.r10.s64 + 16592;
	// lfs f31,16592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16592);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82215a84
	if (!ctx.cr6.eq) goto loc_82215A84;
	// lbz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 248);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82215960
	if (ctx.cr0.eq) goto loc_82215960;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27596
	ctx.r4.s64 = ctx.r11.s64 + -27596;
	// b 0x822159a4
	goto loc_822159A4;
loc_82215960:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82215978
	if (!ctx.cr6.eq) goto loc_82215978;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27572
	ctx.r4.s64 = ctx.r11.s64 + -27572;
	// b 0x822159a4
	goto loc_822159A4;
loc_82215978:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221599c
	if (ctx.cr6.eq) goto loc_8221599C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82215994
	if (!ctx.cr6.eq) goto loc_82215994;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27520
	ctx.r4.s64 = ctx.r11.s64 + -27520;
	// b 0x822159a4
	goto loc_822159A4;
loc_82215994:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822159a4
	if (!ctx.cr6.eq) goto loc_822159A4;
loc_8221599C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27548
	ctx.r4.s64 = ctx.r11.s64 + -27548;
loc_822159A4:
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822159B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,644(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,648(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lfs f0,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f9,652(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 652);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,656(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 656);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// blt cr6,0x82215a30
	if (ctx.cr6.lt) goto loc_82215A30;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82215a34
	goto loc_82215A34;
loc_82215A30:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82215A34:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,676
	ctx.r3.s64 = r31.s64 + 676;
	// addi r29,r31,720
	r29.s64 = r31.s64 + 720;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f13,f31,f0
	f30.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822e6ff8
	ctx.lr = 0x82215A5C;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,160
	ctx.r9.s64 = 160;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82215A80;
	sub_82174318(ctx, base);
	// b 0x82215c10
	goto loc_82215C10;
loc_82215A84:
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82215A90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82215A9C;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82215ac0
	if (!ctx.cr6.eq) goto loc_82215AC0;
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
	// b 0x82215ac4
	goto loc_82215AC4;
loc_82215AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82215AC4:
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82215ad4
	if (!ctx.cr6.lt) goto loc_82215AD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82215AD4:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82215b28
	if (!ctx.cr6.lt) goto loc_82215B28;
	// lwz r11,1064(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r25,r30,r11
	r25.u64 = ctx.r11.u64 - r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82215AF0;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82215AF8;
	sub_8215F200(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82215c50
	ctx.lr = 0x82215B10;
	sub_82215C50(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82215a90
	goto loc_82215A90;
loc_82215B28:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215c10
	if (ctx.cr6.eq) goto loc_82215C10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82215c10
	if (ctx.cr6.eq) goto loc_82215C10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7920
	ctx.r4.s64 = ctx.r11.s64 + -7920;
	// bl 0x8215f670
	ctx.lr = 0x82215B4C;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82215B50;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826a0568
	ctx.lr = 0x82215B64;
	sub_826A0568(ctx, base);
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27488
	ctx.r4.s64 = ctx.r11.s64 + -27488;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-26960
	ctx.r5.s64 = ctx.r11.s64 + -26960;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x82215B94;
	sub_82121610(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121928
	ctx.lr = 0x82215BA0;
	sub_82121928(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82215bb4
	if (!ctx.cr6.lt) goto loc_82215BB4;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_82215BB4:
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82215f60
	ctx.lr = 0x82215C00;
	sub_82215F60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82215C10;
	sub_82120AC0(ctx, base);
loc_82215C10:
	// lbz r11,880(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 880);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82215c3c
	if (ctx.cr0.eq) goto loc_82215C3C;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lfs f0,1552(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,280
	ctx.r5.s64 = r31.s64 + 280;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,884
	ctx.r3.s64 = r31.s64 + 884;
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82215C3C;
	sub_8226BF68(ctx, base);
loc_82215C3C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82244AC8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// bne cr6,0x82244ad8
	if (!ctx.cr6.eq) goto loc_82244AD8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82244AD8:
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

DEFINE_REX_FUNC(sub_82244F68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82244F88;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-15732
	ctx.r11.s64 = ctx.r11.s64 + -15732;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82244F9C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244fbc
	if (ctx.cr0.eq) goto loc_82244FBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82244FB4;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244fc0
	goto loc_82244FC0;
loc_82244FBC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82244FC0:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82244FCC;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82244FD4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82245010
	if (ctx.cr0.eq) goto loc_82245010;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82244FFC;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82245014
	goto loc_82245014;
loc_82245010:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82245014:
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
	ctx.lr = 0x8224502C;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82245034;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245060
	if (ctx.cr0.eq) goto loc_82245060;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,19760
	ctx.r10.s64 = ctx.r10.s64 + 19760;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82245064
	goto loc_82245064;
loc_82245060:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245064:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,17196
	ctx.r5.s64 = ctx.r11.s64 + 17196;
	// bl 0x8216be80
	ctx.lr = 0x82245074;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8224E990) {
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
	ctx.lr = 0x8224E998;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224eb4c
	if (!ctx.cr0.eq) goto loc_8224EB4C;
	// lbz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224eb4c
	if (!ctx.cr0.eq) goto loc_8224EB4C;
	// lwz r11,464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r10,768(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 768);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8224e9e0
	if (!ctx.cr6.eq) goto loc_8224E9E0;
	// lbz r11,824(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 824);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8224e9e4
	if (ctx.cr0.eq) goto loc_8224E9E4;
loc_8224E9E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E9E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ea0c
	if (ctx.cr0.eq) goto loc_8224EA0C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 744);
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// lbz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8224ea10
	if (ctx.cr6.eq) goto loc_8224EA10;
loc_8224EA0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224EA10:
	// lbz r10,696(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 696);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224eaf8
	if (!ctx.cr0.eq) goto loc_8224EAF8;
	// lbz r10,697(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 697);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224eaf8
	if (!ctx.cr0.eq) goto loc_8224EAF8;
	// lbz r10,705(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8224eaf8
	if (!ctx.cr0.eq) goto loc_8224EAF8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224eaf8
	if (!ctx.cr0.eq) goto loc_8224EAF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224EA50:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8224ea50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224EA50;
	// ld r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1024);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,1032(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 1032);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,1024
	ctx.r8.s64 = r31.s64 + 1024;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x8216cfa0
	ctx.lr = 0x8224EA80;
	sub_8216CFA0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8224ead8
	if (!ctx.cr6.gt) goto loc_8224EAD8;
	// lwz r3,936(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 936);
	// bl 0x821d5c80
	ctx.lr = 0x8224EAD4;
	sub_821D5C80(ctx, base);
	// b 0x8224eaf8
	goto loc_8224EAF8;
loc_8224EAD8:
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8224eaf0
	if (!ctx.cr6.gt) goto loc_8224EAF0;
	// lwz r3,932(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 932);
	// b 0x8224eaf4
	goto loc_8224EAF4;
loc_8224EAF0:
	// lwz r3,928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 928);
loc_8224EAF4:
	// bl 0x821e8500
	ctx.lr = 0x8224EAF8;
	sub_821E8500(ctx, base);
loc_8224EAF8:
	// lwz r30,488(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lbz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 148);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224eb4c
	if (ctx.cr0.eq) goto loc_8224EB4C;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224eb4c
	if (!ctx.cr6.gt) goto loc_8224EB4C;
	// addi r29,r30,156
	r29.s64 = r30.s64 + 156;
loc_8224EB1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8224EB28;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821d5c80
	ctx.lr = 0x8224EB3C;
	sub_821D5C80(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224eb1c
	if (ctx.cr6.lt) goto loc_8224EB1C;
loc_8224EB4C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822580E0) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x82258108;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x8215f670
	ctx.lr = 0x82258114;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-10220
	ctx.r4.s64 = ctx.r11.s64 + -10220;
	// bl 0x8215fbf8
	ctx.lr = 0x82258120;
	sub_8215FBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82289480
	ctx.lr = 0x82258128;
	sub_82289480(ctx, base);
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

DEFINE_REX_FUNC(sub_8225C840) {
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
	ctx.lr = 0x8225C848;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r29,1573(r3)
	REX_STORE_U8(ctx.r3.u32 + 1573, r29.u8);
	// bl 0x822626a8
	ctx.lr = 0x8225C85C;
	sub_822626A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8348
	ctx.r4.s64 = ctx.r11.s64 + -8348;
	// bl 0x82120600
	ctx.lr = 0x8225C86C;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82262608
	ctx.lr = 0x8225C878;
	sub_82262608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8225C888;
	sub_82120AC0(ctx, base);
	// addi r3,r30,1572
	ctx.r3.s64 = r30.s64 + 1572;
	// bl 0x82270580
	ctx.lr = 0x8225C890;
	sub_82270580(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// li r26,-1
	r26.s64 = -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225c924
	if (!ctx.cr6.gt) goto loc_8225C924;
	// addi r27,r30,192
	r27.s64 = r30.s64 + 192;
loc_8225C8A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225C8B4;
	sub_8228C340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c914
	if (ctx.cr0.eq) goto loc_8225C914;
	// lbz r11,97(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 97);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c914
	if (ctx.cr0.eq) goto loc_8225C914;
	// stb r29,101(r31)
	REX_STORE_U8(r31.u32 + 101, r29.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r29,100(r31)
	REX_STORE_U8(r31.u32 + 100, r29.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r29,98(r31)
	REX_STORE_U8(r31.u32 + 98, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,99(r31)
	REX_STORE_U8(r31.u32 + 99, r29.u8);
	// stb r29,102(r31)
	REX_STORE_U8(r31.u32 + 102, r29.u8);
	// stb r29,103(r31)
	REX_STORE_U8(r31.u32 + 103, r29.u8);
	// stb r29,104(r31)
	REX_STORE_U8(r31.u32 + 104, r29.u8);
	// stw r26,112(r31)
	REX_STORE_U32(r31.u32 + 112, r26.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x8227d560
	ctx.lr = 0x8225C914;
	sub_8227D560(ctx, base);
loc_8225C914:
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225c8a8
	if (ctx.cr6.lt) goto loc_8225C8A8;
loc_8225C924:
	// std r26,1576(r30)
	REX_STORE_U64(r30.u32 + 1576, r26.u64);
	// std r26,1584(r30)
	REX_STORE_U64(r30.u32 + 1584, r26.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82264298) {
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
	ctx.lr = 0x822642A0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// addi r17,r11,22808
	r17.s64 = ctx.r11.s64 + 22808;
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// addi r3,r10,96
	ctx.r3.s64 = ctx.r10.s64 + 96;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x822642CC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// bl 0x8215f338
	ctx.lr = 0x822642D8;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r14,0
	r14.s64 = 0;
	// addi r21,r11,-24168
	r21.s64 = ctx.r11.s64 + -24168;
	// addi r19,r10,16192
	r19.s64 = ctx.r10.s64 + 16192;
	// addi r20,r9,-7312
	r20.s64 = ctx.r9.s64 + -7312;
	// addi r25,r8,-17164
	r25.s64 = ctx.r8.s64 + -17164;
	// addi r26,r7,-17148
	r26.s64 = ctx.r7.s64 + -17148;
	// addi r22,r6,-17296
	r22.s64 = ctx.r6.s64 + -17296;
	// addi r16,r5,16176
	r16.s64 = ctx.r5.s64 + 16176;
loc_8226431C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82264344
	if (!ctx.cr6.eq) goto loc_82264344;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82264348
	goto loc_82264348;
loc_82264344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82264348:
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82264558
	if (!ctx.cr6.lt) goto loc_82264558;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226435C;
	sub_8215F1B0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82264368;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8226436C;
	sub_8215FA30(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82125d00
	ctx.lr = 0x82264374;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82264524
	if (!ctx.cr0.eq) goto loc_82264524;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82264388;
	sub_8215F338(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
loc_82264390:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822643b4
	if (!ctx.cr6.eq) goto loc_822643B4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822643b8
	goto loc_822643B8;
loc_822643B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822643B8:
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82264524
	if (!ctx.cr6.lt) goto loc_82264524;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822643CC;
	sub_8215F1B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x822643D8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822643DC;
	sub_8215FA30(ctx, base);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82120780
	ctx.lr = 0x822643E4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226451c
	if (!ctx.cr0.eq) goto loc_8226451C;
	// li r27,0
	r27.s64 = 0;
loc_822643F0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x822643FC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82264420
	if (!ctx.cr6.eq) goto loc_82264420;
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
	// b 0x82264424
	goto loc_82264424;
loc_82264420:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82264424:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226451c
	if (!ctx.cr6.lt) goto loc_8226451C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82264438;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82264440;
	sub_8215F1B0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226444C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82264450;
	sub_8215FA30(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82125d00
	ctx.lr = 0x82264458;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82264514
	if (!ctx.cr0.eq) goto loc_82264514;
	// li r29,0
	r29.s64 = 0;
loc_82264464:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82264470;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82264494
	if (!ctx.cr6.eq) goto loc_82264494;
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
	// b 0x82264498
	goto loc_82264498;
loc_82264494:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82264498:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82264510
	if (!ctx.cr6.lt) goto loc_82264510;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822644AC;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822644B4;
	sub_8215F1B0(ctx, base);
	// lwz r11,188(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822644C8;
	sub_8215F338(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x822644D8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822644DC;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822644E8;
	sub_8215F2D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f338
	ctx.lr = 0x822644F0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822644F4;
	sub_8215FA30(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82120780
	ctx.lr = 0x822644FC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226452c
	if (ctx.cr0.eq) goto loc_8226452C;
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82264464
	goto loc_82264464;
loc_82264510:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82264514:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x822643f0
	goto loc_822643F0;
loc_8226451C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x82264390
	goto loc_82264390;
loc_82264524:
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// b 0x8226431c
	goto loc_8226431C;
loc_8226452C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82264538;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8226453C;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120b20
	ctx.lr = 0x82264550;
	sub_82120B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226455c
	goto loc_8226455C;
loc_82264558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226455C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82275878) {
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
	ctx.lr = 0x82275880;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r4,r3,736
	ctx.r4.s64 = ctx.r3.s64 + 736;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x823fbd18
	ctx.lr = 0x822758B0;
	sub_823FBD18(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f0,-16132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lfs f10,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8227D388) {
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
	ctx.lr = 0x8227D390;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227d3c4
	if (!ctx.cr6.eq) goto loc_8227D3C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-492
	ctx.r3.s64 = ctx.r10.s64 + -492;
	// li r5,321
	ctx.r5.s64 = 321;
	// bl 0x821231d0
	ctx.lr = 0x8227D3C4;
	sub_821231D0(ctx, base);
loc_8227D3C4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// li r4,-32764
	ctx.r4.s64 = -32764;
	// addi r31,r11,-2544
	r31.s64 = ctx.r11.s64 + -2544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D3D8;
	sub_8217F4B0(ctx, base);
	// stw r30,2(r31)
	REX_STORE_U32(r31.u32 + 2, r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x8227d3f0
	if (ctx.cr6.lt) goto loc_8227D3F0;
	// li r10,2048
	ctx.r10.s64 = 2048;
loc_8227D3F0:
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8227d414
	if (ctx.cr6.gt) goto loc_8227D414;
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
	ctx.lr = 0x8227D414;
	sub_821231D0(ctx, base);
loc_8227D414:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,10
	ctx.r3.s64 = r31.s64 + 10;
	// bl 0x826a1e70
	ctx.lr = 0x8227D424;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r6,r30,10
	ctx.r6.s64 = r30.s64 + 10;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822834A0) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82283538
	if (!ctx.cr6.gt) goto loc_82283538;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82283610
	if (ctx.cr6.eq) goto loc_82283610;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82283510
	if (ctx.cr6.eq) goto loc_82283510;
loc_822834F0:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822834f0
	if (!ctx.cr6.eq) goto loc_822834F0;
loc_82283510:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82283530
	if (ctx.cr6.eq) goto loc_82283530;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82283524:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82283524
	if (!ctx.cr6.eq) goto loc_82283524;
loc_82283530:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x82283610
	goto loc_82283610;
loc_82283538:
	// bge cr6,0x82283610
	if (!ctx.cr6.lt) goto loc_82283610;
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// subf r11,r10,r30
	ctx.r11.u64 = r30.u64 - ctx.r10.u64;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82283560
	if (!ctx.cr6.lt) goto loc_82283560;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82283560;
	sub_822F6020(ctx, base);
loc_82283560:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822835a4
	if (!ctx.cr6.gt) goto loc_822835A4;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82283590
	if (ctx.cr6.lt) goto loc_82283590;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82283590:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8228359c
	if (!ctx.cr6.lt) goto loc_8228359C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8228359C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82283628
	ctx.lr = 0x822835A4;
	sub_82283628(ctx, base);
loc_822835A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subf. r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822835f0
	if (ctx.cr0.eq) goto loc_822835F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_822835CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x822835e8
	if (ctx.cr6.eq) goto loc_822835E8;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
loc_822835E8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x822835cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822835CC;
loc_822835F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82283610:
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

DEFINE_REX_FUNC(sub_8228C390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8228C398;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,344
	r31.s64 = ctx.r3.s64 + 344;
loc_8228C3A8:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r28,r31,-96
	r28.s64 = r31.s64 + -96;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228c3c4
	if (!ctx.cr0.eq) goto loc_8228C3C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228c3e4
	if (ctx.cr0.eq) goto loc_8228C3E4;
loc_8228C3C4:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228C3D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8228c418
	if (ctx.cr6.eq) goto loc_8228C418;
loc_8228C3E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x8228c3a8
	if (ctx.cr6.lt) goto loc_8228C3A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3440
	ctx.r4.s64 = ctx.r11.s64 + 3440;
	// addi r3,r10,3544
	ctx.r3.s64 = ctx.r10.s64 + 3544;
	// li r5,311
	ctx.r5.s64 = 311;
	// bl 0x821231d0
	ctx.lr = 0x8228C40C;
	sub_821231D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228C410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8228C418:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8228c410
	goto loc_8228C410;
}

DEFINE_REX_FUNC(sub_8228F1B8) {
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
	// addi r11,r11,4368
	ctx.r11.s64 = ctx.r11.s64 + 4368;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8228f1e4
	if (ctx.cr0.eq) goto loc_8228F1E4;
	// bl 0x8269ce98
	ctx.lr = 0x8228F1E4;
	sub_8269CE98(ctx, base);
loc_8228F1E4:
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

DEFINE_REX_FUNC(sub_82290968) {
	REX_FUNC_PROLOGUE();
	// lwz r10,212(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229098c
	if (ctx.cr0.eq) goto loc_8229098C;
	// lwz r11,212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 212);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82290990
	if (!ctx.cr0.eq) goto loc_82290990;
loc_8229098C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82290990:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822909b4
	if (ctx.cr0.eq) goto loc_822909B4;
	// clrlwi. r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822909ac
	if (ctx.cr0.eq) goto loc_822909AC;
	// lwz r11,212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822909b4
	if (!ctx.cr0.eq) goto loc_822909B4;
loc_822909AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822909b8
	goto loc_822909B8;
loc_822909B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822909B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82294608) {
	REX_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,10(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82294634
	if (ctx.cr0.eq) goto loc_82294634;
	// lhz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// lhz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82294638
	if (!ctx.cr0.eq) goto loc_82294638;
loc_82294634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82294638:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82296518) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822965a0
	if (ctx.cr6.gt) goto loc_822965A0;
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r30,0(r5)
	r30.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r30,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r30.u64);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r3,224(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822965A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822965A0:
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

DEFINE_REX_FUNC(sub_8229ECE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8229ECF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ed84
	if (ctx.cr6.eq) goto loc_8229ED84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r6,20545
	ctx.r6.s64 = 1346437120;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 68);
	// ori r6,r6,19796
	ctx.r6.u64 = ctx.r6.u64 | 19796;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229ED84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A3990) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822A3998;
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
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A39B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A39D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A39F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r6,20545
	ctx.r6.s64 = 1346437120;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ori r6,r6,18515
	ctx.r6.u64 = ctx.r6.u64 | 18515;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A3A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A56B0) {
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
	ctx.lr = 0x822A56B8;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// ld r6,24(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r5,32(r4)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// ld r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r28,48(r31)
	r28.u64 = REX_LOAD_U64(r31.u32 + 48);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// ld r26,56(r31)
	r26.u64 = REX_LOAD_U64(r31.u32 + 56);
	// ld r25,0(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 0);
	// ld r24,8(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r23,16(r31)
	r23.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lwz r7,40(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// std r25,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r25.u64);
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r24.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r23,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r23.u64);
	// std r26,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r26.u64);
	// stw r27,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// bctrl 
	ctx.lr = 0x822A5748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r30,48
	ctx.r11.s64 = r30.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A5780:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a5798
	if (!ctx.cr6.gt) goto loc_822A5798;
	// stfs f0,-16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -16, temp.u32);
loc_822A5798:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822a57b0
	if (!ctx.cr6.lt) goto loc_822A57B0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822A57B0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a5780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5780;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5808
	if (ctx.cr6.eq) goto loc_822A5808;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// bl 0x82293ac8
	ctx.lr = 0x822A5804;
	sub_82293AC8(ctx, base);
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
loc_822A5808:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a5950
	if (!ctx.cr6.eq) goto loc_822A5950;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822a582c
	if (!ctx.cr0.eq) goto loc_822A582C;
	// li r28,1
	r28.s64 = 1;
loc_822A582C:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x822a5950
	if (!ctx.cr6.lt) goto loc_822A5950;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822a584c
	if (ctx.cr6.eq) goto loc_822A584C;
	// mulli r3,r28,80
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(80));
	// bl 0x822c1a70
	ctx.lr = 0x822A5844;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822a5850
	goto loc_822A5850;
loc_822A584C:
	// li r30,0
	r30.s64 = 0;
loc_822A5850:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a58fc
	if (!ctx.cr6.gt) goto loc_822A58FC;
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// subfic r8,r30,-32
	ctx.xer.ca = r30.u32 <= 4294967264;
	ctx.r8.u64 = static_cast<uint64_t>(-32) - r30.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_822A5868:
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a58f0
	if (ctx.cr0.eq) goto loc_822A58F0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,-32(r11)
	REX_STORE_U64(ctx.r11.u32 + -32, ctx.r9.u64);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,-24(r11)
	REX_STORE_U64(ctx.r11.u32 + -24, ctx.r9.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,-16(r11)
	REX_STORE_U64(ctx.r11.u32 + -16, ctx.r9.u64);
	// ld r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r9,-8(r11)
	REX_STORE_U64(ctx.r11.u32 + -8, ctx.r9.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lfs f0,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_822A58F0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne 0x822a5868
	if (!ctx.cr0.eq) goto loc_822A5868;
loc_822A58FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5940
	if (ctx.cr6.eq) goto loc_822A5940;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a5938
	if (ctx.cr0.eq) goto loc_822A5938;
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
	ctx.lr = 0x822A5938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5938:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822A5940:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822A5950:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r10,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a59d8
	if (ctx.cr0.eq) goto loc_822A59D8;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r29,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r29.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r9,188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f31,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r27,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r27.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r30,0(r6)
	r30.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,8(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// std r4,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r3,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// std r7,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// std r30,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r30.u64);
	// std r6,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// stw r5,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r29,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r29.u32);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r28.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822A59D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822C1680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
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
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x826a15c0
	ctx.lr = 0x822C16B4;
	sub_826A15C0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a14e0
	ctx.lr = 0x822C16C0;
	sub_826A14E0(ctx, base);
	// fabs f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822c1720
	if (!ctx.cr6.gt) goto loc_822C1720;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(f31.f64 * f31.f64));
	// lfs f10,484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 484);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fdivs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822C1720:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82299ea8
	ctx.lr = 0x822C174C;
	sub_82299EA8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f12,f30
	ctx.f7.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * f31.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f11,f11,f30,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f10.f64)));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmadds f3,f0,f30,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f9.f64)));
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fnmsubs f13,f13,f30,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f30.f64, -ctx.f10.f64)));
	// fsubs f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmuls f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f9,f4,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f6,f5,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f10,f10,f12,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f9,f0,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f0,f0,f11,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f10,f4,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f10.f64)));
	// fnmsubs f12,f12,f11,f9
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fnmsubs f0,f4,f8,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f8.f64, -ctx.f0.f64)));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fnmsubs f0,f5,f13,f10
	ctx.f0.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f13.f64, -ctx.f10.f64)));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
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

DEFINE_REX_FUNC(sub_822CB6D0) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822ccbb0
	ctx.lr = 0x822CB700;
	sub_822CCBB0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822cee48
	ctx.lr = 0x822CB710;
	sub_822CEE48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cb760
	if (!ctx.cr0.eq) goto loc_822CB760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cb658
	ctx.lr = 0x822CB72C;
	sub_822CB658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822cb760
	if (ctx.cr0.eq) goto loc_822CB760;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// lbz r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 320);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
loc_822CB760:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_822CDED0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822cdef0
	if (!ctx.cr6.lt) goto loc_822CDEF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CDEF0:
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF150) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822CF158;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16924
	r30.s64 = ctx.r3.s64 + 16924;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793c94
	ctx.lr = 0x822CF16C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,16760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16760);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16760(r31)
	REX_STORE_U32(r31.u32 + 16760, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,16916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16916);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16912(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16912);
	// stw r11,16764(r31)
	REX_STORE_U32(r31.u32 + 16764, ctx.r11.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822cf214
	if (ctx.cr6.eq) goto loc_822CF214;
loc_822CF198:
	// lwz r11,16912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16912);
	// lwz r10,16760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16760);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r11,2098
	ctx.r11.s64 = ctx.r11.s64 + 2098;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822cf214
	if (ctx.cr6.gt) goto loc_822CF214;
	// lwz r10,16780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16780(r31)
	REX_STORE_U32(r31.u32 + 16780, ctx.r10.u32);
	// bne cr6,0x822cf1e0
	if (!ctx.cr6.eq) goto loc_822CF1E0;
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x822cf1f0
	goto loc_822CF1F0;
loc_822CF1E0:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	REX_MM_STORE_U32(ctx.r10.u32 + 24848, ctx.r11.u32);
	// eieio 
	// sync 
loc_822CF1F0:
	// mftb r10
	ctx.r10.u64 = REX_QUERY_TIMEBASE();
	// lwz r11,16912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16912);
	// stw r10,23588(r31)
	REX_STORE_U32(r31.u32 + 23588, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16912(r31)
	REX_STORE_U32(r31.u32 + 16912, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822cf198
	if (!ctx.cr6.eq) goto loc_822CF198;
loc_822CF214:
	// lwz r11,16756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf240
	if (ctx.cr6.eq) goto loc_822CF240;
	// lwz r10,16780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16780);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,16760(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16760);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x822CF240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CF240:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x822CF248;
	sub_823ECC50(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sradi r11,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,21884(r31)
	REX_STORE_U32(r31.u32 + 21884, ctx.r11.u32);
	// bl 0x82793ca4
	ctx.lr = 0x822CF260;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D94F0) {
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
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d48b8
	ctx.lr = 0x822D9514;
	sub_822D48B8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,6433
	ctx.r11.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_822D9554:
	// lhz r8,1026(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 1026);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lhz r6,514(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 514);
	// li r5,6437
	ctx.r5.s64 = 6437;
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r8,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// lis r4,-16379
	ctx.r4.s64 = -1073414144;
	// rlwimi r6,r10,10,6,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF0000) | (ctx.r6.u64 & 0xFFFFFFFFFC00FFFF);
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// ori r5,r4,17664
	ctx.r5.u64 = ctx.r4.u64 | 17664;
	// rlwinm r10,r6,4,2,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3FFFFC00;
	// li r6,7
	ctx.r6.s64 = 7;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r4,6437
	ctx.r4.s64 = 6437;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r31,6434
	r31.s64 = 6434;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r7.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x822d9554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D9554;
	// stw r8,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_822E00B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// lwz r10,21888(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// lwz r8,21892(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21892);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// ori r11,r11,310
	ctx.r11.u64 = ctx.r11.u64 | 310;
	// lwz r7,21896(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21896);
	// ori r6,r9,6144
	ctx.r6.u64 = ctx.r9.u64 | 6144;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ble cr6,0x822e00f8
	if (!ctx.cr6.gt) goto loc_822E00F8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822e010c
	goto loc_822E010C;
loc_822E00F8:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// subfc r10,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_822E010C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e013c
	if (!ctx.cr6.eq) goto loc_822E013C;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,12872
	ctx.r9.s64 = ctx.r8.s64 + 12872;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822e016c
	goto loc_822E016C;
loc_822E013C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r8,12872
	ctx.r8.s64 = ctx.r8.s64 + 12872;
	// mulli r9,r11,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
loc_822E016C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,12
	ctx.r10.s64 = 12;
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfiwx f12,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f12.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E7428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r10,-26840
	ctx.r5.s64 = ctx.r10.s64 + -26840;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x822E745C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27100
	ctx.r4.s64 = ctx.r11.s64 + -27100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178c38
	ctx.lr = 0x822E7470;
	sub_82178C38(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E9888;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8213bce8
	ctx.lr = 0x822E98A4;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822E98BC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,31460
	ctx.r3.s64 = ctx.r11.s64 + 31460;
	// bl 0x8216bc98
	ctx.lr = 0x822E98CC;
	sub_8216BC98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,281(r29)
	REX_STORE_U8(r29.u32 + 281, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EC380) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,296(r4)
	REX_STORE_U8(ctx.r4.u32 + 296, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ECB30) {
	REX_FUNC_PROLOGUE();
	// b 0x822ecb88
	sub_822ECB88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ECE78) {
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
	// bl 0x822ecb88
	ctx.lr = 0x822ECE94;
	sub_822ECB88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822EDE60) {
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
	ctx.lr = 0x822EDE68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14988
	ctx.r11.s64 = ctx.r11.s64 + 14988;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r26,r3,16
	r26.s64 = ctx.r3.s64 + 16;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822EDEB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,19476
	ctx.r4.s64 = ctx.r11.s64 + 19476;
	// bl 0x8215f338
	ctx.lr = 0x822EDEC0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822EDEC4;
	sub_8215FA30(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x821883a0
	ctx.lr = 0x822EDED8;
	sub_821883A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822edf38
	if (ctx.cr0.eq) goto loc_822EDF38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x822EDEEC;
	sub_82154C08(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,12(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 12));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 16));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_822EDF38:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,14940
	ctx.r4.s64 = ctx.r11.s64 + 14940;
	// bl 0x8215f338
	ctx.lr = 0x822EDF48;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822EDF4C;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120b20
	ctx.lr = 0x822EDF60;
	sub_82120B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822F4E58) {
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
	// beq cr6,0x822f4f14
	if (ctx.cr6.eq) goto loc_822F4F14;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
loc_822F4E7C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f4e7c
	if (!ctx.cr0.eq) goto loc_822F4E7C;
	// lis r7,19558
	ctx.r7.s64 = 1281753088;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r6,r7,20853
	ctx.r6.u64 = ctx.r7.u64 | 20853;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822f4f14
	if (!ctx.cr6.eq) goto loc_822F4F14;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4eb8
	if (ctx.cr6.eq) goto loc_822F4EB8;
	// bl 0x823ed360
	ctx.lr = 0x822F4EB8;
	sub_823ED360(ctx, base);
loc_822F4EB8:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4ec8
	if (ctx.cr6.eq) goto loc_822F4EC8;
	// bl 0x823ed360
	ctx.lr = 0x822F4EC8;
	sub_823ED360(ctx, base);
loc_822F4EC8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f4320
	ctx.lr = 0x822F4EE0;
	sub_822F4320(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4f08
	if (ctx.cr6.eq) goto loc_822F4F08;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822f4f10
	goto loc_822F4F10;
loc_822F4F08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f4108
	ctx.lr = 0x822F4F10;
	sub_822F4108(ctx, base);
loc_822F4F10:
	// lwsync 
loc_822F4F14:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_822F94D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822F94D8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c98
	ctx.lr = 0x822F94E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,303(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 303);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f27,f5
	f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	f24.f64 = ctx.f8.f64;
	// beq 0x822f96ac
	if (ctx.cr0.eq) goto loc_822F96AC;
	// beq cr6,0x822f9528
	if (ctx.cr6.eq) goto loc_822F9528;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f952c
	goto loc_822F952C;
loc_822F9528:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F952C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9548
	if (ctx.cr6.eq) goto loc_822F9548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9544
	if (ctx.cr6.eq) goto loc_822F9544;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f9548
	goto loc_822F9548;
loc_822F9544:
	// li r29,0
	r29.s64 = 0;
loc_822F9548:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// stfs f31,280(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 280, temp.u32);
	// lhz r10,100(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 100);
	// stfs f30,284(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 284, temp.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stfs f29,288(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 288, temp.u32);
	// stfs f28,292(r29)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r29.u32 + 292, temp.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f27,296(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 296, temp.u32);
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// stfs f26,300(r29)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r29.u32 + 300, temp.u32);
	// stfs f25,304(r29)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r29.u32 + 304, temp.u32);
	// stfs f24,308(r29)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r29.u32 + 308, temp.u32);
	// beq 0x822f9624
	if (ctx.cr0.eq) goto loc_822F9624;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822f9730
	if (!ctx.cr6.gt) goto loc_822F9730;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822F95A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9610
	if (ctx.cr6.eq) goto loc_822F9610;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f95c4
	if (ctx.cr6.eq) goto loc_822F95C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f95c8
	goto loc_822F95C8;
loc_822F95C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F95C8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822f9610
	if (!ctx.cr6.eq) goto loc_822F9610;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9610
	if (ctx.cr0.eq) goto loc_822F9610;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f8,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f24.f64;
	// fmr f7,f25
	ctx.f7.f64 = f25.f64;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822f94d0
	ctx.lr = 0x822F9608;
	sub_822F94D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9734
	if (!ctx.cr0.eq) goto loc_822F9734;
loc_822F9610:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x822f95a4
	if (ctx.cr6.lt) goto loc_822F95A4;
	// b 0x822f9730
	goto loc_822F9730;
loc_822F9624:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f9730
	if (!ctx.cr6.gt) goto loc_822F9730;
	// li r31,0
	r31.s64 = 0;
loc_822F963C:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f9690
	if (ctx.cr6.eq) goto loc_822F9690;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9690
	if (ctx.cr6.eq) goto loc_822F9690;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// fmr f8,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f24.f64;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// fmr f7,f25
	ctx.f7.f64 = f25.f64;
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822f94d0
	ctx.lr = 0x822F9688;
	sub_822F94D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9734
	if (!ctx.cr0.eq) goto loc_822F9734;
loc_822F9690:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f963c
	if (ctx.cr6.lt) goto loc_822F963C;
	// b 0x822f9730
	goto loc_822F9730;
loc_822F96AC:
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// stfs f31,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f30,284(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stfs f29,288(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f28,292(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f27,296(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stfs f26,300(r3)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f25,304(r3)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f24,308(r3)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// beq cr6,0x822f96e4
	if (ctx.cr6.eq) goto loc_822F96E4;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f96e8
	goto loc_822F96E8;
loc_822F96E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F96E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9730
	if (ctx.cr6.eq) goto loc_822F9730;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9700
	if (ctx.cr6.eq) goto loc_822F9700;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f9704
	goto loc_822F9704;
loc_822F9700:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9704:
	// fmr f8,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f24.f64;
	// fmr f7,f25
	ctx.f7.f64 = f25.f64;
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823302c8
	ctx.lr = 0x822F9728;
	sub_823302C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9734
	if (!ctx.cr0.eq) goto loc_822F9734;
loc_822F9730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9734:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce4
	ctx.lr = 0x822F9740;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8230BD30) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x822fc958
	ctx.lr = 0x8230BD50;
	sub_822FC958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230bd64
	if (!ctx.cr0.eq) goto loc_8230BD64;
	// lhz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 100);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
loc_8230BD64:
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

DEFINE_REX_FUNC(sub_8230D0E0) {
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
	ctx.lr = 0x8230D0E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230d2a4
	if (!ctx.cr0.eq) goto loc_8230D2A4;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d2a4
	if (ctx.cr6.eq) goto loc_8230D2A4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r26,-10812(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -10812);
	// bl 0x8230c310
	ctx.lr = 0x8230D11C;
	sub_8230C310(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8230D124;
	sub_8233E7E0(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d20c
	if (ctx.cr6.eq) goto loc_8230D20C;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d14c
	if (!ctx.cr6.eq) goto loc_8230D14C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D144;
	sub_8233E820(ctx, base);
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8230d2a8
	goto loc_8230D2A8;
loc_8230D14C:
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8230d20c
	if (!ctx.cr6.gt) goto loc_8230D20C;
loc_8230D158:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230d1fc
	if (!ctx.cr6.eq) goto loc_8230D1FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x8235ace0
	ctx.lr = 0x8230D17C;
	sub_8235ACE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2b0
	if (!ctx.cr0.eq) goto loc_8230D2B0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D1A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2c4
	if (!ctx.cr0.eq) goto loc_8230D2C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d1fc
	if (ctx.cr6.eq) goto loc_8230D1FC;
	// stw r27,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2c4
	if (!ctx.cr0.eq) goto loc_8230D2C4;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2c4
	if (!ctx.cr0.eq) goto loc_8230D2C4;
loc_8230D1FC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x8230d158
	if (ctx.cr6.lt) goto loc_8230D158;
loc_8230D20C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x8233f818
	ctx.lr = 0x8230D218;
	sub_8233F818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2c4
	if (!ctx.cr0.eq) goto loc_8230D2C4;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8230d250
	if (!ctx.cr6.gt) goto loc_8230D250;
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
loc_8230D234:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8230d250
	if (!ctx.cr6.eq) goto loc_8230D250;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230d234
	if (ctx.cr6.lt) goto loc_8230D234;
loc_8230D250:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8230d29c
	if (!ctx.cr6.eq) goto loc_8230D29C;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// stw r27,40(r29)
	REX_STORE_U32(r29.u32 + 40, r27.u32);
	// bl 0x8232fc60
	ctx.lr = 0x8230D264;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2c4
	if (!ctx.cr0.eq) goto loc_8230D2C4;
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230d298
	if (ctx.cr6.eq) goto loc_8230D298;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5068
	ctx.r5.s64 = ctx.r10.s64 + 5068;
	// li r6,1089
	ctx.r6.s64 = 1089;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230D298;
	sub_82330D00(ctx, base);
loc_8230D298:
	// stw r27,76(r29)
	REX_STORE_U32(r29.u32 + 76, r27.u32);
loc_8230D29C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D2A4;
	sub_8233E820(ctx, base);
loc_8230D2A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D2A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_8230D2B0:
	// li r31,33
	r31.s64 = 33;
loc_8230D2B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D2BC;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8230d2a8
	goto loc_8230D2A8;
loc_8230D2C4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8230d2b4
	goto loc_8230D2B4;
}

DEFINE_REX_FUNC(sub_823177D8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317F70) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82317fa8
	if (ctx.cr6.eq) goto loc_82317FA8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,207
	ctx.r6.s64 = 207;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82317FA8;
	sub_82330D00(ctx, base);
loc_82317FA8:
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

DEFINE_REX_FUNC(sub_82319CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82319CC8;
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319d14
	if (!ctx.cr6.gt) goto loc_82319D14;
	// li r30,0
	r30.s64 = 0;
loc_82319CE8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82319b48
	ctx.lr = 0x82319CF8;
	sub_82319B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319d18
	if (!ctx.cr0.eq) goto loc_82319D18;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319ce8
	if (ctx.cr6.lt) goto loc_82319CE8;
loc_82319D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319D18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8231D738) {
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
	ctx.lr = 0x8231D740;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231db34
	if (ctx.cr6.eq) goto loc_8231DB34;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8231db34
	if (!ctx.cr6.gt) goto loc_8231DB34;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r5,400
	ctx.r5.s64 = 400;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x8231D778;
	sub_823EF5F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231d7e8
	if (!ctx.cr6.gt) goto loc_8231D7E8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231D798:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8231d7d4
	if (!ctx.cr6.gt) goto loc_8231D7D4;
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8231D7B0:
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8231d7cc
	if (ctx.cr6.eq) goto loc_8231D7CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8231d7b0
	if (ctx.cr6.lt) goto loc_8231D7B0;
loc_8231D7CC:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8231d7e0
	if (ctx.cr6.lt) goto loc_8231D7E0;
loc_8231D7D4:
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
loc_8231D7E0:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8231d798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D798;
loc_8231D7E8:
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r23,-32129
	r23.s64 = -2105606144;
	// addi r24,r11,6908
	r24.s64 = ctx.r11.s64 + 6908;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,77
	ctx.r6.s64 = 77;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231D818;
	sub_82330A38(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8231d82c
	if (!ctx.cr0.eq) goto loc_8231D82C;
loc_8231D824:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231db38
	goto loc_8231DB38;
loc_8231D82C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x8231D83C;
	sub_823EF2F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r30,r11,76
	r30.s64 = ctx.r11.s64 + 76;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x8231d86c
	goto loc_8231D86C;
loc_8231D864:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8231D86C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8231d864
	if (!ctx.cr6.eq) goto loc_8231D864;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,94
	ctx.r6.s64 = 94;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231D890;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x8231d824
	if (ctx.cr0.eq) goto loc_8231D824;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8231d8b0
	goto loc_8231D8B0;
loc_8231D8A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8231D8B0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8231d8a8
	if (!ctx.cr6.eq) goto loc_8231D8A8;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,99
	ctx.r6.s64 = 99;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231D8D4;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq 0x8231d824
	if (ctx.cr0.eq) goto loc_8231D824;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231da44
	if (!ctx.cr6.gt) goto loc_8231DA44;
	// li r26,0
	r26.s64 = 0;
loc_8231D8F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwzx r28,r26,r11
	r28.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231da30
	if (!ctx.cr6.gt) goto loc_8231DA30;
	// li r29,0
	r29.s64 = 0;
loc_8231D914:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231da18
	if (!ctx.cr0.eq) goto loc_8231DA18;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231d95c
	if (!ctx.cr6.gt) goto loc_8231D95C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8231D93C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8231d95c
	if (ctx.cr6.eq) goto loc_8231D95C;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231d93c
	if (ctx.cr6.lt) goto loc_8231D93C;
loc_8231D95C:
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231d9c0
	if (ctx.cr6.lt) goto loc_8231D9C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,146
	ctx.r6.s64 = 146;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// ori r4,r4,40000
	ctx.r4.u64 = ctx.r4.u64 | 40000;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231D990;
	sub_82330E40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231d824
	if (ctx.cr6.eq) goto loc_8231D824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8231D9C0:
	// lwz r10,168(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 168);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8231da18
	if (ctx.cr6.eq) goto loc_8231DA18;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8231D9EC:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r6,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8231d9ec
	if (!ctx.cr6.eq) goto loc_8231D9EC;
loc_8231DA18:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231d914
	if (ctx.cr6.lt) goto loc_8231D914;
loc_8231DA30:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231d8f4
	if (ctx.cr6.lt) goto loc_8231D8F4;
loc_8231DA44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231db2c
	if (!ctx.cr6.gt) goto loc_8231DB2C;
	// li r28,0
	r28.s64 = 0;
loc_8231DA58:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r29,r28,r9
	r29.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8231DA70:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231da80
	if (ctx.cr6.eq) goto loc_8231DA80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8231DA80:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8231da70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231DA70;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DAA8;
	sub_82330E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8231d824
	if (ctx.cr0.eq) goto loc_8231D824;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231DAC8:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231dadc
	if (ctx.cr6.eq) goto loc_8231DADC;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8231DADC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8231dac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231DAC8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,219
	ctx.r6.s64 = 219;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,1012(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DB10;
	sub_82330D00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r30,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r30.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231da58
	if (ctx.cr6.lt) goto loc_8231DA58;
loc_8231DB2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231db38
	goto loc_8231DB38;
loc_8231DB34:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8231DB38:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82341280) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,9300
	ctx.r8.s64 = ctx.r10.s64 + 9300;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,392(r3)
	REX_STORE_U32(ctx.r3.u32 + 392, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82342218) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342228
	if (!ctx.cr6.eq) goto loc_82342228;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82342228:
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343360) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bge cr6,0x82343370
	if (!ctx.cr6.lt) goto loc_82343370;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82343370:
	// stw r4,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823435C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823435D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,272
	ctx.r6.s64 = 272;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823435F0;
	sub_82331A00(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343610
	if (ctx.cr6.eq) goto loc_82343610;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82343610;
	sub_82331A00(ctx, base);
loc_82343610:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343674
	if (ctx.cr6.eq) goto loc_82343674;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82343660
	if (ctx.cr6.eq) goto loc_82343660;
loc_8234362C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,292
	ctx.r6.s64 = 292;
	// bne cr6,0x8234364c
	if (!ctx.cr6.eq) goto loc_8234364C;
	// li r6,36
	ctx.r6.s64 = 36;
loc_8234364C:
	// bl 0x82331a00
	ctx.lr = 0x82343650;
	sub_82331A00(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234362c
	if (!ctx.cr6.eq) goto loc_8234362C;
loc_82343660:
	// li r6,72
	ctx.r6.s64 = 72;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82343674;
	sub_82331A00(ctx, base);
loc_82343674:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823436d8
	if (ctx.cr6.eq) goto loc_823436D8;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823436d8
	if (ctx.cr6.eq) goto loc_823436D8;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823436c0
	if (ctx.cr6.eq) goto loc_823436C0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x823436c0
	if (ctx.cr6.eq) goto loc_823436C0;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823436d8
	if (ctx.cr6.eq) goto loc_823436D8;
loc_823436C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82342118
	ctx.lr = 0x823436C8;
	sub_82342118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343714
	if (ctx.cr6.eq) goto loc_82343714;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823436D8:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343714
	if (ctx.cr6.eq) goto loc_82343714;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343704
	if (ctx.cr6.eq) goto loc_82343704;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82343704
	if (!ctx.cr6.eq) goto loc_82343704;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82343714
	if (!ctx.cr6.eq) goto loc_82343714;
loc_82343704:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82342118
	ctx.lr = 0x8234370C;
	sub_82342118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82343814
	if (!ctx.cr6.eq) goto loc_82343814;
loc_82343714:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823437cc
	if (ctx.cr6.eq) goto loc_823437CC;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823437cc
	if (ctx.cr6.eq) goto loc_823437CC;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82343794
	if (ctx.cr6.eq) goto loc_82343794;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82343794
	if (!ctx.cr6.gt) goto loc_82343794;
	// li r30,0
	r30.s64 = 0;
loc_82343748:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343780
	if (ctx.cr6.eq) goto loc_82343780;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82343780
	if (ctx.cr6.eq) goto loc_82343780;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82343780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343780:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82343748
	if (ctx.cr6.lt) goto loc_82343748;
loc_82343794:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823437A8;
	sub_82331A00(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823437cc
	if (ctx.cr6.eq) goto loc_823437CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823437CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823437CC:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823437ec
	if (ctx.cr6.eq) goto loc_823437EC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823437EC;
	sub_82331A00(ctx, base);
loc_823437EC:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343810
	if (ctx.cr6.eq) goto loc_82343810;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82343810;
	sub_82331A00(ctx, base);
loc_82343810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82343814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82354AC0) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82354af4
	if (!ctx.cr6.eq) goto loc_82354AF4;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82354AF4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82354b44
	if (ctx.cr6.lt) goto loc_82354B44;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354b14
	if (!ctx.cr6.eq) goto loc_82354B14;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82354b44
	if (ctx.cr6.gt) goto loc_82354B44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82354B14:
	// ble cr6,0x82354b20
	if (!ctx.cr6.gt) goto loc_82354B20;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82354b44
	if (!ctx.cr6.lt) goto loc_82354B44;
loc_82354B20:
	// mulli r11,r4,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(296));
	// li r5,296
	ctx.r5.s64 = 296;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82354B30;
	sub_823EF2F8(ctx, base);
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
loc_82354B44:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823576F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r6,r8,9656
	ctx.r6.s64 = ctx.r8.s64 + 9656;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r8,1012(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1012);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// lis r31,-32203
	r31.s64 = -2110455808;
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// addi r8,r6,10336
	ctx.r8.s64 = ctx.r6.s64 + 10336;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// addi r7,r5,26128
	ctx.r7.s64 = ctx.r5.s64 + 26128;
	// stw r9,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// addi r6,r4,26144
	ctx.r6.s64 = ctx.r4.s64 + 26144;
	// stw r9,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// addi r5,r31,26152
	ctx.r5.s64 = r31.s64 + 26152;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r6,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r5,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235B8C8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8235b8f0
	if (!ctx.cr6.eq) goto loc_8235B8F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235B8F0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235b930
	if (ctx.cr6.lt) goto loc_8235B930;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8235b930
	if (!ctx.cr6.lt) goto loc_8235B930;
	// mulli r11,r11,132
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(132));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x826a1e70
	ctx.lr = 0x8235B91C;
	sub_826A1E70(ctx, base);
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
loc_8235B930:
	// li r3,73
	ctx.r3.s64 = 73;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235EB68) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,10740
	ctx.r8.s64 = ctx.r9.s64 + 10740;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F358) {
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
	// bl 0x82349bb8
	ctx.lr = 0x8235F378;
	sub_82349BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f3a4
	if (!ctx.cr6.eq) goto loc_8235F3A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,312(r31)
	REX_STORE_U32(r31.u32 + 312, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r10,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// stw r9,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r9.u32);
	// std r11,336(r31)
	REX_STORE_U64(r31.u32 + 336, ctx.r11.u64);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
loc_8235F3A4:
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

DEFINE_REX_FUNC(sub_82361558) {
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
	// addi r30,r31,1312
	r30.s64 = r31.s64 + 1312;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82361584;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r11.u32);
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// addi r11,r5,5440
	ctx.r11.s64 = ctx.r5.s64 + 5440;
	// addi r10,r6,6488
	ctx.r10.s64 = ctx.r6.s64 + 6488;
	// addi r9,r7,4568
	ctx.r9.s64 = ctx.r7.s64 + 4568;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r8,6488
	ctx.r11.s64 = ctx.r8.s64 + 6488;
	// li r9,560
	ctx.r9.s64 = 560;
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82364FD0) {
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
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r31,r11,3368
	r31.s64 = ctx.r11.s64 + 3368;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82364FF8;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,12544
	ctx.r4.s64 = ctx.r10.s64 + 12544;
	// bl 0x82331480
	ctx.lr = 0x82365008;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// addi r9,r11,3072
	ctx.r9.s64 = ctx.r11.s64 + 3072;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r9,r3,6488
	ctx.r9.s64 = ctx.r3.s64 + 6488;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,20336
	ctx.r10.s64 = ctx.r10.s64 + 20336;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32195
	ctx.r4.s64 = -2109931520;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r11,r4,6488
	ctx.r11.s64 = ctx.r4.s64 + 6488;
	// addi r10,r5,20360
	ctx.r10.s64 = ctx.r5.s64 + 20360;
	// addi r9,r8,16224
	ctx.r9.s64 = ctx.r8.s64 + 16224;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32202
	ctx.r6.s64 = -2110390272;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// addi r11,r6,20384
	ctx.r11.s64 = ctx.r6.s64 + 20384;
	// addi r10,r7,20408
	ctx.r10.s64 = ctx.r7.s64 + 20408;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,37196
	ctx.r9.u64 = ctx.r9.u64 | 37196;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8236D318) {
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
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d338
	if (!ctx.cr6.eq) goto loc_8236D338;
	// li r31,0
	r31.s64 = 0;
loc_8236D338:
	// lwz r4,328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236d36c
	if (ctx.cr6.eq) goto loc_8236D36C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,15472
	ctx.r5.s64 = ctx.r10.s64 + 15472;
	// li r6,271
	ctx.r6.s64 = 271;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236D364;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r9.u32);
loc_8236D36C:
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

DEFINE_REX_FUNC(sub_82370D60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82370d70
	if (!ctx.cr6.eq) goto loc_82370D70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82370D70:
	// b 0x82370a98
	sub_82370A98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82371730) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82371740
	if (!ctx.cr6.eq) goto loc_82371740;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82371740:
	// b 0x82371078
	sub_82371078(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82372220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82372228;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82372290
	if (!ctx.cr6.gt) goto loc_82372290;
	// li r29,0
	r29.s64 = 0;
loc_82372250:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82372274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823722cc
	if (!ctx.cr6.eq) goto loc_823722CC;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82372250
	if (ctx.cr6.lt) goto loc_82372250;
loc_82372290:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,320
	ctx.r11.s64 = r31.s64 + 320;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_823722A4:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823722a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823722A4;
	// lfs f1,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,312(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f2,320(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// bl 0x82371968
	ctx.lr = 0x823722C8;
	sub_82371968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823722CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82378798) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823787d0
	if (ctx.cr6.eq) goto loc_823787D0;
	// bl 0x822e6108
	ctx.lr = 0x823787C4;
	sub_822E6108(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e61a0
	ctx.lr = 0x823787D0;
	sub_822E61A0(ctx, base);
loc_823787D0:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82378800
	if (ctx.cr6.eq) goto loc_82378800;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x823ef5f0
	ctx.lr = 0x82378800;
	sub_823EF5F0(ctx, base);
loc_82378800:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r7,264(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82378844
	if (!ctx.cr6.eq) goto loc_82378844;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82378844
	if (!ctx.cr6.eq) goto loc_82378844;
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237898c
	if (!ctx.cr6.eq) goto loc_8237898C;
loc_82378844:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r30,260(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r3,44(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237886c
	if (ctx.cr6.eq) goto loc_8237886C;
	// bl 0x822e5d50
	ctx.lr = 0x8237885C;
	sub_822E5D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237886c
	if (!ctx.cr6.lt) goto loc_8237886C;
loc_82378864:
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x823789e4
	goto loc_823789E4;
loc_8237886C:
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823788b8
	if (!ctx.cr6.gt) goto loc_823788B8;
	// addi r11,r1,77
	ctx.r11.s64 = ctx.r1.s64 + 77;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8237888C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// bgt cr6,0x8237889c
	if (ctx.cr6.gt) goto loc_8237889C;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8237889C:
	// stw r7,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r7.u32);
	// addi r30,r30,-2
	r30.s64 = r30.s64 + -2;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lwz r6,264(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// stw r6,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r6.u32);
	// stbu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8237888c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237888C;
loc_823788B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e5de8
	ctx.lr = 0x823788C0;
	sub_822E5DE8(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r3,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823788f8
	if (!ctx.cr6.eq) goto loc_823788F8;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823788f4
	if (!ctx.cr6.eq) goto loc_823788F4;
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,4736
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4736, ctx.xer);
	// bgt cr6,0x82378924
	if (ctx.cr6.gt) goto loc_82378924;
loc_823788F4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_823788F8:
	// bgt cr6,0x8237890c
	if (ctx.cr6.gt) goto loc_8237890C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237892c
	if (ctx.cr6.eq) goto loc_8237892C;
loc_8237890C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37888
	ctx.r9.u64 = ctx.r10.u64 | 37888;
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8237892c
	if (!ctx.cr6.gt) goto loc_8237892C;
loc_82378924:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x823789e4
	goto loc_823789E4;
loc_8237892C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 + 44;
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x822e5b50
	ctx.lr = 0x8237894C;
	sub_822E5B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237896c
	if (!ctx.cr6.lt) goto loc_8237896C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,14
	ctx.r10.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82378864
	if (!ctx.cr6.eq) goto loc_82378864;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823789e4
	goto loc_823789E4;
loc_8237896C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r9,264(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// stw r9,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,260(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 260);
	// lwz r6,276(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r7,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r7.u32);
loc_8237898C:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823789d4
	if (!ctx.cr6.gt) goto loc_823789D4;
loc_8237899C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e6720
	ctx.lr = 0x823789AC;
	sub_822E6720(ctx, base);
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,44(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x822e67d0
	ctx.lr = 0x823789C4;
	sub_822E67D0(ctx, base);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237899c
	if (ctx.cr6.lt) goto loc_8237899C;
loc_823789D4:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e63b8
	ctx.lr = 0x823789E0;
	sub_822E63B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823789E4:
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
}

DEFINE_REX_FUNC(sub_823945D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823945e8
	if (!ctx.cr6.eq) goto loc_823945E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823945E8:
	// b 0x823940a0
	sub_823940A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82395430) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82395440
	if (!ctx.cr6.eq) goto loc_82395440;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82395440:
	// b 0x823946a8
	sub_823946A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82395918) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r30,0
	r30.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r30,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r30.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82395964;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395a20
	if (!ctx.cr6.eq) goto loc_82395A20;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82395984;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395a20
	if (!ctx.cr6.eq) goto loc_82395A20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,20252
	ctx.r4.s64 = ctx.r11.s64 + 20252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x823959A0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823959b0
	if (ctx.cr6.eq) goto loc_823959B0;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x82395a20
	goto loc_82395A20;
loc_823959B0:
	// addi r11,r31,264
	ctx.r11.s64 = r31.s64 + 264;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r9.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r8,260(r6)
	REX_STORE_U32(ctx.r6.u32 + 260, ctx.r8.u32);
	// addi r4,r31,560
	ctx.r4.s64 = r31.s64 + 560;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,268(r9)
	REX_STORE_U32(ctx.r9.u32 + 268, ctx.r8.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,268(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// mulli r10,r11,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,272(r6)
	REX_STORE_U32(ctx.r6.u32 + 272, ctx.r9.u32);
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
	// stw r5,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r5.u32);
	// stw r4,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r4.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_82395A20:
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

DEFINE_REX_FUNC(sub_8239FA60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8239FA68;
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
	// ble cr6,0x8239faac
	if (!ctx.cr6.gt) goto loc_8239FAAC;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_8239FA88:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239fa88
	if (ctx.cr6.lt) goto loc_8239FA88;
loc_8239FAAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A07E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823A07F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0844
	if (!ctx.cr6.gt) goto loc_823A0844;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A0814:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bge cr6,0x823a0844
	if (!ctx.cr6.lt) goto loc_823A0844;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a0814
	if (ctx.cr6.lt) goto loc_823A0814;
loc_823A0844:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A2FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r31,266
	ctx.r11.s64 = r31.s64 + 266;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a301c
	if (!ctx.cr6.gt) goto loc_823A301C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823A301C:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a30b4
	if (!ctx.cr6.lt) goto loc_823A30B4;
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a3064
	if (ctx.cr6.gt) goto loc_823A3064;
	// addi r4,r31,318
	ctx.r4.s64 = r31.s64 + 318;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823A3064:
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// subf r30,r5,r11
	r30.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r31,r31,318
	r31.s64 = r31.s64 + 318;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r11,318
	ctx.r4.s64 = ctx.r11.s64 + 318;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823A30B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,37
	ctx.r3.s64 = 37;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AB0C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ab0d4
	if (!ctx.cr6.eq) goto loc_823AB0D4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823AB0D4:
	// lwz r11,68(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 68);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab0ec
	if (ctx.cr6.eq) goto loc_823AB0EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823ab128
	goto loc_823AB128;
loc_823AB0EC:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab100
	if (ctx.cr6.eq) goto loc_823AB100;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ab128
	goto loc_823AB128;
loc_823AB100:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab114
	if (ctx.cr6.eq) goto loc_823AB114;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823ab128
	goto loc_823AB128;
loc_823AB114:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_823AB128:
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,22444
	ctx.r3.s64 = ctx.r10.s64 + 22444;
	// lwz r5,56(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// b 0x8235adb0
	sub_8235ADB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ADC90) {
	REX_FUNC_PROLOGUE();
	// stw r4,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ADCA0) {
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
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x823ADCD0;
	sub_82331A00(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ade94
	if (ctx.cr6.eq) goto loc_823ADE94;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823ade2c
	if (ctx.cr6.eq) goto loc_823ADE2C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823ade2c
	if (ctx.cr6.eq) goto loc_823ADE2C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823ade2c
	if (ctx.cr6.eq) goto loc_823ADE2C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823ade34
	if (ctx.cr6.gt) goto loc_823ADE34;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8932
	ctx.r12.s64 = ctx.r12.s64 + -8932;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ADDAC;
	case 1:
		goto loc_823ADD4C;
	case 2:
		goto loc_823ADD64;
	case 3:
		goto loc_823ADD7C;
	case 4:
		goto loc_823ADD94;
	case 5:
		goto loc_823ADD94;
	case 6:
		goto loc_823ADDAC;
	case 7:
		goto loc_823ADDAC;
	case 8:
		goto loc_823ADDAC;
	case 9:
		goto loc_823ADDAC;
	case 10:
		goto loc_823ADDAC;
	case 11:
		goto loc_823ADDAC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ADD4C:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADD64:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADD7C:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADD94:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADDAC:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8764
	ctx.r12.s64 = ctx.r12.s64 + -8764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ADE20;
	case 1:
		goto loc_823ADE34;
	case 2:
		goto loc_823ADE34;
	case 3:
		goto loc_823ADE34;
	case 4:
		goto loc_823ADE34;
	case 5:
		goto loc_823ADE34;
	case 6:
		goto loc_823ADDF4;
	case 7:
		goto loc_823ADE00;
	case 8:
		goto loc_823ADE0C;
	case 9:
		goto loc_823ADE18;
	case 10:
		goto loc_823ADE18;
	case 11:
		goto loc_823ADE18;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ADDF4:
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE00:
	// li r11,36
	ctx.r11.s64 = 36;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE0C:
	// li r11,16
	ctx.r11.s64 = 16;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE18:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE20:
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823ade38
	goto loc_823ADE38;
loc_823ADE34:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823ADE38:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ade68
	if (ctx.cr6.eq) goto loc_823ADE68;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lwz r9,1012(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1012);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r7,r8,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ade68
	if (ctx.cr6.eq) goto loc_823ADE68;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// b 0x823ade78
	goto loc_823ADE78;
loc_823ADE68:
	// rlwinm r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ade94
	if (!ctx.cr6.eq) goto loc_823ADE94;
	// li r5,512
	ctx.r5.s64 = 512;
loc_823ADE78:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82331a00
	ctx.lr = 0x823ADE94;
	sub_82331A00(ctx, base);
loc_823ADE94:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823adfd0
	if (ctx.cr6.eq) goto loc_823ADFD0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823adfc0
	if (ctx.cr6.gt) goto loc_823ADFC0;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8496
	ctx.r12.s64 = ctx.r12.s64 + -8496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ADF50;
	case 1:
		goto loc_823ADF00;
	case 2:
		goto loc_823ADF14;
	case 3:
		goto loc_823ADF28;
	case 4:
		goto loc_823ADF3C;
	case 5:
		goto loc_823ADF3C;
	case 6:
		goto loc_823ADF50;
	case 7:
		goto loc_823ADF50;
	case 8:
		goto loc_823ADF50;
	case 9:
		goto loc_823ADF50;
	case 10:
		goto loc_823ADF50;
	case 11:
		goto loc_823ADF50;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ADF00:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADF14:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADF28:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADF3C:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADF50:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8344
	ctx.r12.s64 = ctx.r12.s64 + -8344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ADFB8;
	case 1:
		goto loc_823ADFC0;
	case 2:
		goto loc_823ADFC0;
	case 3:
		goto loc_823ADFC0;
	case 4:
		goto loc_823ADFC0;
	case 5:
		goto loc_823ADFC0;
	case 6:
		goto loc_823ADF98;
	case 7:
		goto loc_823ADFA0;
	case 8:
		goto loc_823ADFA8;
	case 9:
		goto loc_823ADFB0;
	case 10:
		goto loc_823ADFB0;
	case 11:
		goto loc_823ADFB0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ADF98:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADFA0:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADFA8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823adfbc
	goto loc_823ADFBC;
loc_823ADFB0:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x823adfc0
	goto loc_823ADFC0;
loc_823ADFB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823ADFBC:
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_823ADFC0:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x823ADFD0;
	sub_82331A00(ctx, base);
loc_823ADFD0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c1f8
	ctx.lr = 0x823ADFDC;
	sub_8239C1F8(ctx, base);
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

DEFINE_REX_FUNC(sub_823C9478) {
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
	ctx.lr = 0x823C9480;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,260(r7)
	REX_STORE_U32(ctx.r7.u32 + 260, ctx.r11.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r27,264(r6)
	REX_STORE_U32(ctx.r6.u32 + 264, r27.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r28,-4452(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -4452);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C94CC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c94e0
	if (!ctx.cr6.eq) goto loc_823C94E0;
loc_823C94D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_823C94E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,-4448(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4448);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C950C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r29,-4444(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4444);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823C9544;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,-4440(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4440);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C957C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,-4436(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4436);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C95B4;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,-4432(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4432);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C95EC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,292(r9)
	REX_STORE_U32(ctx.r9.u32 + 292, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r29,-4428(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4428);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823C9628;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,296(r9)
	REX_STORE_U32(ctx.r9.u32 + 296, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,-4424(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4424);
	// addi r5,r11,304
	ctx.r5.s64 = ctx.r11.s64 + 304;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcec0
	ctx.lr = 0x823C9664;
	sub_823DCEC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,312
	ctx.r5.s64 = ctx.r11.s64 + 312;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823C9684;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c94d4
	if (ctx.cr6.eq) goto loc_823C94D4;
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// subf r5,r8,r27
	ctx.r5.u64 = r27.u64 - ctx.r8.u64;
	// bl 0x823dd030
	ctx.lr = 0x823C96AC;
	sub_823DD030(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r3,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823D5068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D6E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D6EA0) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7270) {
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
	ctx.lr = 0x823D7278;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,16(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f30,9772(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9772);
	f30.f64 = double(temp.f32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lfs f31,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f31.f64 = double(temp.f32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r21,0
	r21.s64 = 0;
	// li r23,1
	r23.s64 = 1;
loc_823D72BC:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d7380
	if (!ctx.cr6.gt) goto loc_823D7380;
	// mr r29,r20
	r29.u64 = r20.u64;
	// subf r22,r20,r19
	r22.u64 = r19.u64 - r20.u64;
loc_823D72D4:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// blt cr6,0x823d7380
	if (ctx.cr6.lt) goto loc_823D7380;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823d736c
	if (!ctx.cr6.lt) goto loc_823D736C;
	// lwzx r11,r22,r29
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + r29.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x823d736c
	if (!ctx.cr6.eq) goto loc_823D736C;
	// li r31,0
	r31.s64 = 0;
loc_823D72F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823d9548
	ctx.lr = 0x823D7304;
	sub_823D9548(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// subfic r9,r10,13
	ctx.xer.ca = ctx.r10.u32 <= 13;
	ctx.r9.u64 = static_cast<uint64_t>(13) - ctx.r10.u64;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// slw r7,r23,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mullw r11,r31,r8
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// lfsx f8,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f5,f6,f30,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f8.f64)));
	// stfsx f5,r11,r28
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// blt cr6,0x823d72f8
	if (ctx.cr6.lt) goto loc_823D72F8;
loc_823D736C:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d72d4
	if (ctx.cr6.lt) goto loc_823D72D4;
loc_823D7380:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// blt cr6,0x823d72bc
	if (ctx.cr6.lt) goto loc_823D72BC;
	// mullw. r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// ble 0x823d73ec
	if (!ctx.cr0.gt) goto loc_823D73EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r28
	r31.u64 = r28.u64;
	// subf r29,r28,r18
	r29.u64 = r18.u64 - r28.u64;
	// lfs f31,-5520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5520);
	f31.f64 = double(temp.f32);
	// lfd f30,-5528(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -5528);
loc_823D73B0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * f30.f64;
	// bl 0x826a03b0
	ctx.lr = 0x823D73BC;
	sub_826A03B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfsx f13,r29,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + r31.u32, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x823d73d4
	if (!ctx.cr6.lt) goto loc_823D73D4;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_823D73D4:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// mullw r10,r25,r11
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823d73b0
	if (ctx.cr6.lt) goto loc_823D73B0;
loc_823D73EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823E1460) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823E1468;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e1514
	if (ctx.cr6.eq) goto loc_823E1514;
	// li r5,360
	ctx.r5.s64 = 360;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E1490;
	sub_823EF5F0(ctx, base);
	// li r11,4608
	ctx.r11.s64 = 4608;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r4,4608
	ctx.r4.s64 = 4608;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393a88
	ctx.lr = 0x823E14AC;
	sub_82393A88(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82393a88
	ctx.lr = 0x823E14C0;
	sub_82393A88(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82393a88
	ctx.lr = 0x823E14D4;
	sub_82393A88(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e1508
	if (ctx.cr6.eq) goto loc_823E1508;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1508
	if (ctx.cr6.eq) goto loc_823E1508;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e1508
	if (ctx.cr6.eq) goto loc_823E1508;
	// stw r29,336(r31)
	REX_STORE_U32(r31.u32 + 336, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823E1508:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0788
	ctx.lr = 0x823E1514;
	sub_823E0788(ctx, base);
loc_823E1514:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E5A70) {
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
	ctx.lr = 0x823E5A78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzu r29,4(r7)
	ea = 4 + ctx.r7.u32;
	r29.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// add r26,r11,r3
	r26.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r21,r7,4
	r21.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x823e5ad8
	if (!ctx.cr6.eq) goto loc_823E5AD8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_823E5AC0:
	// ldux r10,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x823e5ac0
	if (!ctx.cr6.eq) goto loc_823E5AC0;
	// b 0x823e5b10
	goto loc_823E5B10;
loc_823E5AD8:
	// mullw r24,r19,r25
	r24.s64 = int64_t(r19.s32) * int64_t(r25.s32);
	// rlwinm r23,r11,3,0,28
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r29,3,0,28
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E5AE4:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e5a70
	ctx.lr = 0x823E5B00;
	sub_823E5A70(ctx, base);
	// add r31,r22,r31
	r31.u64 = r22.u64 + r31.u64;
	// add r30,r23,r30
	r30.u64 = r23.u64 + r30.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x823e5ae4
	if (!ctx.cr6.eq) goto loc_823E5AE4;
loc_823E5B10:
	// addi r11,r19,-2
	ctx.r11.s64 = r19.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e5c00
	if (ctx.cr6.gt) goto loc_823E5C00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e5bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E5BAC;
	// bdzf 4*cr6+eq,0x823e5bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E5BC8;
	// bne cr6,0x823e5be4
	if (!ctx.cr6.eq) goto loc_823E5BE4;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// addi r9,r27,264
	ctx.r9.s64 = r27.s64 + 264;
	// rlwinm r8,r25,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823E5B4C:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmsubs f7,f9,f11,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f12.f64)));
	// fmadds f6,f9,f0,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
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
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e5b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5B4C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_823E5BAC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823e5468
	ctx.lr = 0x823E5BC0;
	sub_823E5468(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_823E5BC8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823e52d8
	ctx.lr = 0x823E5BDC;
	sub_823E52D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_823E5BE4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823e5590
	ctx.lr = 0x823E5BF8;
	sub_823E5590(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_823E5C00:
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823e57c8
	ctx.lr = 0x823E5C18;
	sub_823E57C8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823ECCB0) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827938f4
	ctx.lr = 0x823ECCDC;
	__imp__ExGetXConfigSetting(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ecd00
	if (ctx.cr6.eq) goto loc_823ECD00;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x823ecd2c
	if (!ctx.cr6.gt) goto loc_823ECD2C;
loc_823ECD00:
	// bl 0x82793614
	ctx.lr = 0x823ECD04;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x823ecd28
	if (!ctx.cr6.eq) goto loc_823ECD28;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// bne cr6,0x823ecd20
	if (!ctx.cr6.eq) goto loc_823ECD20;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823ecd2c
	goto loc_823ECD2C;
loc_823ECD20:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x823ecd2c
	goto loc_823ECD2C;
loc_823ECD28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823ECD2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EE698) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823ee5e0
	sub_823EE5E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE6A8) {
	REX_FUNC_PROLOGUE();
	// b 0x827937f4
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE7D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EE7E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x823ee824
	if (ctx.cr6.eq) goto loc_823EE824;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823EE810:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x823ee810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EE810;
loc_823EE824:
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// ble cr6,0x823ee83c
	if (!ctx.cr6.gt) goto loc_823EE83C;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x823ee8a8
	goto loc_823EE8A8;
loc_823EE83C:
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x827937c4
	ctx.lr = 0x823EE874;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ee884
	if (!ctx.cr0.lt) goto loc_823EE884;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823ee8a8
	goto loc_823EE8A8;
loc_823EE884:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823ee8a4
	if (!ctx.cr6.eq) goto loc_823EE8A4;
	// bl 0x823f0058
	ctx.lr = 0x823EE890;
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
	// b 0x823ee8a8
	goto loc_823EE8A8;
loc_823EE8A4:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823EE8A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823F4294) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r26,84(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x823f42d8
	goto loc_823F42D8;
loc_823F42D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823f42e8
	if (ctx.cr6.eq) goto loc_823F42E8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x827938b4
	ctx.lr = 0x823F42E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823F42E8:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F6380) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823f7b18
	ctx.lr = 0x823F63A0;
	sub_823F7B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8498
	ctx.lr = 0x823F63A8;
	sub_823F8498(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7ca8
	ctx.lr = 0x823F63B4;
	sub_823F7CA8(ctx, base);
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

DEFINE_REX_FUNC(sub_823F83C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic. r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt 0x823f8410
	if (ctx.cr0.lt) goto loc_823F8410;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823F83DC:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// ble cr6,0x823f8400
	if (!ctx.cr6.gt) goto loc_823F8400;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x823f8410
	if (!ctx.cr6.lt) goto loc_823F8410;
	// b 0x823f8404
	goto loc_823F8404;
loc_823F8400:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823F8404:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x823f83dc
	if (!ctx.cr0.lt) goto loc_823F83DC;
loc_823F8410:
	// li r11,3
	ctx.r11.s64 = 3;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subfc r9,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F843C:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8488
	if (ctx.cr6.eq) goto loc_823F8488;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x823f8470
	if (ctx.cr6.gt) goto loc_823F8470;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// b 0x823f8488
	goto loc_823F8488;
loc_823F8470:
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
loc_823F8488:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f843c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F843C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FE150) {
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
	ctx.lr = 0x823FE158;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x826fadd0
	ctx.lr = 0x823FE184;
	sub_826FADD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823fe1a4
	if (!ctx.cr6.eq) goto loc_823FE1A4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82407fb8
	ctx.lr = 0x823FE194;
	sub_82407FB8(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823FE19C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cf8
	return;
loc_823FE1A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823fe1c4
	if (!ctx.cr6.eq) goto loc_823FE1C4;
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2156
	r31.u64 = r31.u64 | 2156;
loc_823FE1B4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82407fb8
	ctx.lr = 0x823FE1BC;
	sub_82407FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823fe19c
	goto loc_823FE19C;
loc_823FE1C4:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823fe1d8
	if (!ctx.cr6.eq) goto loc_823FE1D8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_823FE1D8:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82407fc0
	ctx.lr = 0x823FE1F4;
	sub_82407FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823fe204
	if (!ctx.cr0.lt) goto loc_823FE204;
loc_823FE1FC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823fe1b4
	goto loc_823FE1B4;
loc_823FE204:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d2558
	ctx.lr = 0x823FE214;
	sub_824D2558(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// lwz r31,264(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r30,260(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823fce88
	ctx.lr = 0x823FE260;
	sub_823FCE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823fe1fc
	if (ctx.cr0.lt) goto loc_823FE1FC;
	// li r31,0
	r31.s64 = 0;
	// b 0x823fe1b4
	goto loc_823FE1B4;
}

DEFINE_REX_FUNC(sub_82404828) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240485c
	if (ctx.cr6.eq) goto loc_8240485C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82404850;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8240485C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82404874
	if (ctx.cr6.eq) goto loc_82404874;
	// bl 0x823ed360
	ctx.lr = 0x8240486C;
	sub_823ED360(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82404874:
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

DEFINE_REX_FUNC(sub_82407E60) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82407e90
	if (!ctx.cr6.eq) goto loc_82407E90;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407e94
	if (ctx.cr6.eq) goto loc_82407E94;
loc_82407E90:
	// bl 0x822d3520
	ctx.lr = 0x82407E94;
	sub_822D3520(ctx, base);
loc_82407E94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407ef0
	if (ctx.cr6.eq) goto loc_82407EF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407ef0
	if (ctx.cr6.eq) goto loc_82407EF0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407ef0
	if (ctx.cr6.eq) goto loc_82407EF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82407ef0
	if (!ctx.cr0.eq) goto loc_82407EF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e88
	ctx.lr = 0x82407ECC;
	sub_82130E88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x82407ED4;
	sub_82130E88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e88
	ctx.lr = 0x82407EDC;
	sub_82130E88(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82407d68
	ctx.lr = 0x82407EE8;
	sub_82407D68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x82407EF0;
	sub_82130E88(ctx, base);
loc_82407EF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407f08
	if (ctx.cr6.eq) goto loc_82407F08;
	// bl 0x822c5ef0
	ctx.lr = 0x82407F04;
	sub_822C5EF0(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_82407F08:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407f1c
	if (ctx.cr6.eq) goto loc_82407F1C;
	// bl 0x822c5ef0
	ctx.lr = 0x82407F18;
	sub_822C5EF0(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_82407F1C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407f30
	if (ctx.cr6.eq) goto loc_82407F30;
	// bl 0x822c5580
	ctx.lr = 0x82407F2C;
	sub_822C5580(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82407F30:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407f44
	if (ctx.cr6.eq) goto loc_82407F44;
	// bl 0x822c5ef0
	ctx.lr = 0x82407F40;
	sub_822C5EF0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82407F44:
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

DEFINE_REX_FUNC(sub_8240ED48) {
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
	ctx.lr = 0x8240ED50;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x8240ED58;
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
	// beq cr6,0x8240ed84
	if (ctx.cr6.eq) goto loc_8240ED84;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240ED80;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240ED84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240eda0
	if (ctx.cr6.eq) goto loc_8240EDA0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240ED9C;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240EDA0:
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
	// bne 0x8240ee10
	if (!ctx.cr0.eq) goto loc_8240EE10;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240ee18
	goto loc_8240EE18;
loc_8240EE10:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240EE18:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ee30
	if (ctx.cr6.eq) goto loc_8240EE30;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240EE30;
	sub_82409A88(ctx, base);
loc_8240EE30:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240f1b8
	if (!ctx.cr6.gt) goto loc_8240F1B8;
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
	// lfs f10,20276(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,20272(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20272);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_8240EEA4:
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
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8240f0dc
	if (ctx.cr6.eq) goto loc_8240F0DC;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
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
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
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
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
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
loc_8240F0DC:
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8240f0ec
	if (ctx.cr6.lt) goto loc_8240F0EC;
	// li r10,511
	ctx.r10.s64 = 511;
loc_8240F0EC:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x8240f104
	if (!ctx.cr6.gt) goto loc_8240F104;
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// blt cr6,0x8240f108
	if (ctx.cr6.lt) goto loc_8240F108;
	// li r4,511
	ctx.r4.s64 = 511;
	// b 0x8240f108
	goto loc_8240F108;
loc_8240F104:
	// li r4,-511
	ctx.r4.s64 = -511;
loc_8240F108:
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8240f118
	if (ctx.cr6.lt) goto loc_8240F118;
	// li r10,511
	ctx.r10.s64 = 511;
loc_8240F118:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x8240f130
	if (!ctx.cr6.gt) goto loc_8240F130;
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// blt cr6,0x8240f134
	if (ctx.cr6.lt) goto loc_8240F134;
	// li r5,511
	ctx.r5.s64 = 511;
	// b 0x8240f134
	goto loc_8240F134;
loc_8240F130:
	// li r5,-511
	ctx.r5.s64 = -511;
loc_8240F134:
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x8240f144
	if (ctx.cr6.lt) goto loc_8240F144;
	// li r10,511
	ctx.r10.s64 = 511;
loc_8240F144:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x8240f15c
	if (!ctx.cr6.gt) goto loc_8240F15C;
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// blt cr6,0x8240f160
	if (ctx.cr6.lt) goto loc_8240F160;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x8240f160
	goto loc_8240F160;
loc_8240F15C:
	// li r6,-511
	ctx.r6.s64 = -511;
loc_8240F160:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8240f170
	if (ctx.cr6.lt) goto loc_8240F170;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8240F170:
	// cmpwi cr6,r10,-3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -3, ctx.xer);
	// ble cr6,0x8240f188
	if (!ctx.cr6.gt) goto loc_8240F188;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x8240f18c
	if (ctx.cr6.lt) goto loc_8240F18C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8240f18c
	goto loc_8240F18C;
loc_8240F188:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8240F18C:
	// rlwimi r6,r3,10,0,21
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r6.u64 & 0xFFFFFFFF000003FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,10,0,21
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r5.u64 & 0xFFFFFFFF000003FF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r4,r5,10,0,21
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r4.u64 & 0xFFFFFFFF000003FF);
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
	// blt cr6,0x8240eea4
	if (ctx.cr6.lt) goto loc_8240EEA4;
loc_8240F1B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x8240F1C4;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82437EF8) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c90a8
	ctx.lr = 0x82437F0C;
	sub_822C90A8(ctx, base);
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

DEFINE_REX_FUNC(sub_82438100) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243814c
	if (ctx.cr0.eq) goto loc_8243814C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82438120:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82438120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438120;
loc_8243814C:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x822c8f70
	ctx.lr = 0x8243817C;
	sub_822C8F70(ctx, base);
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

DEFINE_REX_FUNC(sub_8243E890) {
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
	ctx.lr = 0x8243E898;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8243E8AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8243e8d4
	if (!ctx.cr6.eq) goto loc_8243E8D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e99c
	if (ctx.cr6.eq) goto loc_8243E99C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8243E8D4:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x8243e93c
	if (ctx.cr6.eq) goto loc_8243E93C;
loc_8243E8E8:
	// lwz r11,444(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// bne cr6,0x8243e928
	if (!ctx.cr6.eq) goto loc_8243E928;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e99c
	if (ctx.cr6.eq) goto loc_8243E99C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8243E928:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x8243e8e8
	if (!ctx.cr6.eq) goto loc_8243E8E8;
loc_8243E93C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8243e964
	if (!ctx.cr6.eq) goto loc_8243E964;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e99c
	if (ctx.cr6.eq) goto loc_8243E99C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8243E964:
	// lbz r28,0(r29)
	r28.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(r28.s32, 255, ctx.xer);
	// beq cr6,0x8243e93c
	if (ctx.cr6.eq) goto loc_8243E93C;
	// lwz r11,444(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bne cr6,0x8243e9a8
	if (!ctx.cr6.eq) goto loc_8243E9A8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x8243e8ac
	goto loc_8243E8AC;
loc_8243E99C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8243E9A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243e9f8
	if (ctx.cr6.eq) goto loc_8243E9F8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,116
	ctx.r10.s64 = 116;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 444);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r7,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r28,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r28.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
loc_8243E9F8:
	// stw r28,420(r27)
	REX_STORE_U32(r27.u32 + 420, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82444DC0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82444de4
	if (ctx.cr6.eq) goto loc_82444DE4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82444dec
	if (ctx.cr6.eq) goto loc_82444DEC;
loc_82444DE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82444e00
	goto loc_82444E00;
loc_82444DEC:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82444c38
	ctx.lr = 0x82444DF8;
	sub_82444C38(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82444E00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82446200) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824462b0
	if (ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824462b0
	if (!ctx.cr6.eq) goto loc_824462B0;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82446298
	if (ctx.cr6.eq) goto loc_82446298;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824462a4
	goto loc_824462A4;
loc_82446298:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824462A4:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x824462b4
	goto loc_824462B4;
loc_824462B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824462B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82449FF0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244a018
	if (ctx.cr6.eq) goto loc_8244A018;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8244a04c
	goto loc_8244A04C;
loc_8244A018:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244a044
	if (!ctx.cr6.eq) goto loc_8244A044;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,23496
	ctx.r6.s64 = ctx.r11.s64 + 23496;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8244A040;
	sub_8241A4F0(ctx, base);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_8244A044:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_8244A04C:
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

DEFINE_REX_FUNC(sub_8244D5C0) {
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
	ctx.lr = 0x8244D5C8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r22,1
	r22.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8244e124
	if (!ctx.cr6.eq) goto loc_8244E124;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r21,r3,24
	r21.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,4216
	ctx.r10.s64 = ctx.r11.s64 + 4216;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_8244D604:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8244d628
	if (ctx.cr0.eq) goto loc_8244D628;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244d604
	if (ctx.cr6.eq) goto loc_8244D604;
loc_8244D628:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244e124
	if (!ctx.cr0.eq) goto loc_8244E124;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8244D640;
	sub_826A2E60(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// stw r22,32(r20)
	REX_STORE_U32(r20.u32 + 32, r22.u32);
	// stb r19,0(r29)
	REX_STORE_U8(r29.u32 + 0, r19.u8);
	// b 0x8244d664
	goto loc_8244D664;
loc_8244D650:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d688
	if (!ctx.cr6.eq) goto loc_8244D688;
loc_8244D664:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D670;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d650
	if (!ctx.cr0.lt) goto loc_8244D650;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D67C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4188
	ctx.r5.s64 = ctx.r11.s64 + 4188;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D688:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8244D68C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244d6a0
	if (!ctx.cr6.eq) goto loc_8244D6A0;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x8244d77c
	if (ctx.cr6.eq) goto loc_8244D77C;
loc_8244D6A0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8244d6bc
	if (!ctx.cr6.eq) goto loc_8244D6BC;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 0);
	// b 0x8244d744
	goto loc_8244D744;
loc_8244D6BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244d724
	if (!ctx.cr6.eq) goto loc_8244D724;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x8244d6ec
	if (ctx.cr6.eq) goto loc_8244D6EC;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x8244d6ec
	if (ctx.cr6.eq) goto loc_8244D6EC;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x8244d6ec
	if (ctx.cr6.eq) goto loc_8244D6EC;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x8244e118
	if (!ctx.cr6.eq) goto loc_8244E118;
loc_8244D6EC:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8244bdf8
	ctx.lr = 0x8244D6FC;
	sub_8244BDF8(ctx, base);
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x8244d714
	if (!ctx.cr6.eq) goto loc_8244D714;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8244e10c
	if (!ctx.cr6.eq) goto loc_8244E10C;
loc_8244D714:
	// addi r11,r11,-93
	ctx.r11.s64 = ctx.r11.s64 + -93;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8244d750
	goto loc_8244D750;
loc_8244D724:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244e118
	if (!ctx.cr6.eq) goto loc_8244E118;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x826a0718
	ctx.lr = 0x8244D740;
	sub_826A0718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8244D744:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8244bdf8
	ctx.lr = 0x8244D750;
	sub_8244BDF8(ctx, base);
loc_8244D750:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D75C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244e0b8
	if (ctx.cr0.lt) goto loc_8244E0B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8244d750
	if (ctx.cr6.eq) goto loc_8244D750;
	// b 0x8244d68c
	goto loc_8244D68C;
loc_8244D77C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d7ac
	if (ctx.cr6.eq) goto loc_8244D7AC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8244D78C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244d78c
	if (!ctx.cr6.eq) goto loc_8244D78C;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8244d7cc
	if (!ctx.cr0.eq) goto loc_8244D7CC;
loc_8244D7AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4168
	ctx.r5.s64 = ctx.r11.s64 + 4168;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D7B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d7e4
	if (!ctx.cr6.eq) goto loc_8244D7E4;
loc_8244D7CC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D7D8;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d7b8
	if (!ctx.cr0.lt) goto loc_8244D7B8;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D7E4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8244d7f8
	if (ctx.cr6.eq) goto loc_8244D7F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4148
	ctx.r5.s64 = ctx.r11.s64 + 4148;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D7F8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// bl 0x8244a068
	ctx.lr = 0x8244D80C;
	sub_8244A068(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d820
	if (!ctx.cr0.lt) goto loc_8244D820;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4124
	ctx.r5.s64 = ctx.r11.s64 + 4124;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D820:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,20(r20)
	REX_STORE_U32(r20.u32 + 20, ctx.r11.u32);
	// b 0x8244d840
	goto loc_8244D840;
loc_8244D82C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d858
	if (!ctx.cr6.eq) goto loc_8244D858;
loc_8244D840:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D84C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d82c
	if (!ctx.cr0.lt) goto loc_8244D82C;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D858:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244d88c
	if (ctx.cr6.eq) goto loc_8244D88C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x8244d88c
	if (ctx.cr6.eq) goto loc_8244D88C;
loc_8244D86C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D878:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d8a4
	if (!ctx.cr6.eq) goto loc_8244D8A4;
loc_8244D88C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D898;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d878
	if (!ctx.cr0.lt) goto loc_8244D878;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D8A4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8244d8b8
	if (ctx.cr6.eq) goto loc_8244D8B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4076
	ctx.r5.s64 = ctx.r11.s64 + 4076;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D8B8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-28216
	ctx.r3.s64 = ctx.r11.s64 + -28216;
	// bl 0x8244a068
	ctx.lr = 0x8244D8CC;
	sub_8244A068(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d8e0
	if (!ctx.cr0.lt) goto loc_8244D8E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4052
	ctx.r5.s64 = ctx.r11.s64 + 4052;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D8E0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r20)
	REX_STORE_U32(r20.u32 + 16, ctx.r11.u32);
	// b 0x8244d900
	goto loc_8244D900;
loc_8244D8EC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d918
	if (!ctx.cr6.eq) goto loc_8244D918;
loc_8244D900:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D90C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d8ec
	if (!ctx.cr0.lt) goto loc_8244D8EC;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D918:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244d944
	if (ctx.cr6.eq) goto loc_8244D944;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x8244d944
	if (ctx.cr6.eq) goto loc_8244D944;
	// b 0x8244d86c
	goto loc_8244D86C;
loc_8244D930:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d95c
	if (!ctx.cr6.eq) goto loc_8244D95C;
loc_8244D944:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D950;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d930
	if (!ctx.cr0.lt) goto loc_8244D930;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D95C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244d990
	if (ctx.cr6.eq) goto loc_8244D990;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x8244d990
	if (ctx.cr6.eq) goto loc_8244D990;
loc_8244D970:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4004
	ctx.r5.s64 = ctx.r11.s64 + 4004;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D97C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d9a8
	if (!ctx.cr6.eq) goto loc_8244D9A8;
loc_8244D990:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D99C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d97c
	if (!ctx.cr0.lt) goto loc_8244D97C;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D9A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244d9bc
	if (ctx.cr6.eq) goto loc_8244D9BC;
loc_8244D9B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244D9BC:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r11,24(r20)
	REX_STORE_U32(r20.u32 + 24, ctx.r11.u32);
	// b 0x8244d9dc
	goto loc_8244D9DC;
loc_8244D9C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244d9f4
	if (!ctx.cr6.eq) goto loc_8244D9F4;
loc_8244D9DC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244D9E8;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244d9c8
	if (!ctx.cr0.lt) goto loc_8244D9C8;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244D9F4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244da20
	if (ctx.cr6.eq) goto loc_8244DA20;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x8244da20
	if (ctx.cr6.eq) goto loc_8244DA20;
	// b 0x8244d970
	goto loc_8244D970;
loc_8244DA0C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244da38
	if (!ctx.cr6.eq) goto loc_8244DA38;
loc_8244DA20:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DA2C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244da0c
	if (!ctx.cr0.lt) goto loc_8244DA0C;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DA38:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244d9b0
	if (!ctx.cr6.eq) goto loc_8244D9B0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r11,28(r20)
	REX_STORE_U32(r20.u32 + 28, ctx.r11.u32);
	// b 0x8244da60
	goto loc_8244DA60;
loc_8244DA4C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244da78
	if (!ctx.cr6.eq) goto loc_8244DA78;
loc_8244DA60:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DA6C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244da4c
	if (!ctx.cr0.lt) goto loc_8244DA4C;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DA78:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244daa4
	if (ctx.cr6.eq) goto loc_8244DAA4;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x8244daa4
	if (ctx.cr6.eq) goto loc_8244DAA4;
	// b 0x8244d970
	goto loc_8244D970;
loc_8244DA90:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dabc
	if (!ctx.cr6.eq) goto loc_8244DABC;
loc_8244DAA4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DAB0;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244da90
	if (!ctx.cr0.lt) goto loc_8244DA90;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DABC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244dae8
	if (ctx.cr6.eq) goto loc_8244DAE8;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x8244dae8
	if (ctx.cr6.eq) goto loc_8244DAE8;
	// b 0x8244d86c
	goto loc_8244D86C;
loc_8244DAD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244db00
	if (!ctx.cr6.eq) goto loc_8244DB00;
loc_8244DAE8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DAF4;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dad4
	if (!ctx.cr0.lt) goto loc_8244DAD4;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DB00:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8244e100
	if (!ctx.cr6.eq) goto loc_8244E100;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8244e100
	if (ctx.cr6.lt) goto loc_8244E100;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x8244DB24;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8244db38
	if (!ctx.cr0.eq) goto loc_8244DB38;
loc_8244DB2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3916
	ctx.r5.s64 = ctx.r11.s64 + 3916;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244DB38:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x8244DB48;
	sub_826A14C8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x8244db94
	if (ctx.cr6.eq) goto loc_8244DB94;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x8244db88
	if (ctx.cr6.eq) goto loc_8244DB88;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x8244db80
	if (ctx.cr6.eq) goto loc_8244DB80;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x8244db78
	if (ctx.cr6.eq) goto loc_8244DB78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3888
	ctx.r5.s64 = ctx.r11.s64 + 3888;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244DB78:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8244db8c
	goto loc_8244DB8C;
loc_8244DB80:
	// stw r22,4(r20)
	REX_STORE_U32(r20.u32 + 4, r22.u32);
	// b 0x8244db98
	goto loc_8244DB98;
loc_8244DB88:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8244DB8C:
	// stw r11,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r11.u32);
	// b 0x8244db98
	goto loc_8244DB98;
loc_8244DB94:
	// stw r19,4(r20)
	REX_STORE_U32(r20.u32 + 4, r19.u32);
loc_8244DB98:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x8244DBA8;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8244dc04
	if (ctx.cr0.eq) goto loc_8244DC04;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x8244DBC0;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x8244dc04
	if (!ctx.cr6.eq) goto loc_8244DC04;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r11.u32);
	// stw r11,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r11.u32);
	// b 0x8244dbec
	goto loc_8244DBEC;
loc_8244DBD8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dc9c
	if (!ctx.cr6.eq) goto loc_8244DC9C;
loc_8244DBEC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DBF8;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dbd8
	if (!ctx.cr0.lt) goto loc_8244DBD8;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DC04:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8244dc3c
	if (!ctx.cr6.gt) goto loc_8244DC3C;
loc_8244DC14:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0820
	ctx.lr = 0x8244DC24;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8244db2c
	if (ctx.cr0.eq) goto loc_8244DB2C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244dc14
	if (ctx.cr6.lt) goto loc_8244DC14;
loc_8244DC3C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x826a08a0
	ctx.lr = 0x8244DC48;
	sub_826A08A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244db2c
	if (ctx.cr0.lt) goto loc_8244DB2C;
	// stw r3,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r3.u32);
	// b 0x8244dc6c
	goto loc_8244DC6C;
loc_8244DC58:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dc84
	if (!ctx.cr6.eq) goto loc_8244DC84;
loc_8244DC6C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DC78;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dc58
	if (!ctx.cr0.lt) goto loc_8244DC58;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DC84:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244dc98
	if (!ctx.cr6.eq) goto loc_8244DC98;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x8244dce8
	if (ctx.cr6.eq) goto loc_8244DCE8;
loc_8244DC98:
	// stw r22,12(r20)
	REX_STORE_U32(r20.u32 + 12, r22.u32);
loc_8244DC9C:
	// stw r19,44(r20)
	REX_STORE_U32(r20.u32 + 44, r19.u32);
	// stw r19,40(r20)
	REX_STORE_U32(r20.u32 + 40, r19.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244e0c8
	if (!ctx.cr6.eq) goto loc_8244E0C8;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x8244e0c8
	if (!ctx.cr6.eq) goto loc_8244E0C8;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8244dd64
	if (!ctx.cr6.eq) goto loc_8244DD64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3848
	ctx.r5.s64 = ctx.r11.s64 + 3848;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244DCD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dd00
	if (!ctx.cr6.eq) goto loc_8244DD00;
loc_8244DCE8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DCF4;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dcd4
	if (!ctx.cr0.lt) goto loc_8244DCD4;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DD00:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244db2c
	if (!ctx.cr6.eq) goto loc_8244DB2C;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8244db2c
	if (ctx.cr0.lt) goto loc_8244DB2C;
	// stw r11,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r11.u32);
	// b 0x8244dd38
	goto loc_8244DD38;
loc_8244DD24:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dc9c
	if (!ctx.cr6.eq) goto loc_8244DC9C;
loc_8244DD38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DD44;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dd24
	if (!ctx.cr0.lt) goto loc_8244DD24;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DD50:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244dd7c
	if (!ctx.cr6.eq) goto loc_8244DD7C;
loc_8244DD64:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DD70;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244dd50
	if (!ctx.cr0.lt) goto loc_8244DD50;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244DD7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244dd9c
	if (ctx.cr6.eq) goto loc_8244DD9C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x8244dd9c
	if (ctx.cr6.eq) goto loc_8244DD9C;
loc_8244DD90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3804
	ctx.r5.s64 = ctx.r11.s64 + 3804;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244DD9C:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r29,12(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244ddb4
	if (ctx.cr6.eq) goto loc_8244DDB4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244ddb8
	if (!ctx.cr6.eq) goto loc_8244DDB8;
loc_8244DDB4:
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8244DDB8:
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,40(r20)
	REX_STORE_U32(r20.u32 + 40, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82444608
	ctx.lr = 0x8244DDCC;
	sub_82444608(ctx, base);
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r3,44(r20)
	REX_STORE_U32(r20.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8244e060
	if (ctx.cr6.eq) goto loc_8244E060;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r24,r11,19332
	r24.s64 = ctx.r11.s64 + 19332;
	// addi r25,r10,19324
	r25.s64 = ctx.r10.s64 + 19324;
loc_8244DDF0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DDFC;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244e0b8
	if (ctx.cr0.lt) goto loc_8244E0B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8244ddf0
	if (ctx.cr6.eq) goto loc_8244DDF0;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244de5c
	if (!ctx.cr6.eq) goto loc_8244DE5C;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x8244de5c
	if (!ctx.cr6.eq) goto loc_8244DE5C;
	// li r30,-1
	r30.s64 = -1;
loc_8244DE34:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DE40;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244e0b8
	if (ctx.cr0.lt) goto loc_8244E0B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8244de34
	if (ctx.cr6.eq) goto loc_8244DE34;
loc_8244DE5C:
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8244df40
	if (ctx.cr6.lt) goto loc_8244DF40;
	// beq cr6,0x8244df2c
	if (ctx.cr6.eq) goto loc_8244DF2C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8244dfe4
	if (!ctx.cr6.lt) goto loc_8244DFE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244de94
	if (ctx.cr6.eq) goto loc_8244DE94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8244de94
	if (ctx.cr6.eq) goto loc_8244DE94;
	// ble cr6,0x8244de98
	if (!ctx.cr6.gt) goto loc_8244DE98;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8244deb0
	if (!ctx.cr6.gt) goto loc_8244DEB0;
	// b 0x8244de98
	goto loc_8244DE98;
loc_8244DE94:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8244DE98:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244def8
	if (ctx.cr6.eq) goto loc_8244DEF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8244ded4
	if (ctx.cr6.eq) goto loc_8244DED4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8244df54
	if (!ctx.cr6.eq) goto loc_8244DF54;
loc_8244DEB0:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lfd f0,0(r21)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r21.u32 + 0);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_8244DEC0:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8244df24
	goto loc_8244DF24;
loc_8244DED4:
	// lwa r10,0(r21)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r21.u32 + 0));
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x8244dec0
	goto loc_8244DEC0;
loc_8244DEF8:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8244DF24:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// b 0x8244dfe4
	goto loc_8244DFE4;
loc_8244DF2C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244df54
	if (!ctx.cr6.eq) goto loc_8244DF54;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// b 0x8244dfe0
	goto loc_8244DFE0;
loc_8244DF40:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244df60
	if (!ctx.cr6.eq) goto loc_8244DF60;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8244dfe0
	if (!ctx.cr6.gt) goto loc_8244DFE0;
loc_8244DF54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3776
	ctx.r5.s64 = ctx.r11.s64 + 3776;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244DF60:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8244df54
	if (!ctx.cr6.eq) goto loc_8244DF54;
	// lwz r8,0(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8244DF74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244df98
	if (ctx.cr0.eq) goto loc_8244DF98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244df74
	if (ctx.cr6.eq) goto loc_8244DF74;
loc_8244DF98:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244dfa8
	if (!ctx.cr0.eq) goto loc_8244DFA8;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x8244dfe0
	goto loc_8244DFE0;
loc_8244DFA8:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8244DFB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8244dfd4
	if (ctx.cr0.eq) goto loc_8244DFD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244dfb0
	if (ctx.cr6.eq) goto loc_8244DFB0;
loc_8244DFD4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244df54
	if (!ctx.cr0.eq) goto loc_8244DF54;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8244DFE0:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8244DFE4:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8244e02c
	if (ctx.cr6.eq) goto loc_8244E02C;
loc_8244DFF0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244DFFC;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244e0b8
	if (ctx.cr0.lt) goto loc_8244E0B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8244dff0
	if (ctx.cr6.eq) goto loc_8244DFF0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244e02c
	if (ctx.cr6.eq) goto loc_8244E02C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x8244e040
	if (!ctx.cr6.eq) goto loc_8244E040;
loc_8244E02C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// blt cr6,0x8244ddf0
	if (ctx.cr6.lt) goto loc_8244DDF0;
	// b 0x8244e060
	goto loc_8244E060;
loc_8244E040:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3716
	ctx.r5.s64 = ctx.r11.s64 + 3716;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244E04C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244e078
	if (!ctx.cr6.eq) goto loc_8244E078;
loc_8244E060:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244E06C;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244e04c
	if (!ctx.cr0.lt) goto loc_8244E04C;
	// b 0x8244e0b8
	goto loc_8244E0B8;
loc_8244E078:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244e0a4
	if (ctx.cr6.eq) goto loc_8244E0A4;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8244e0a4
	if (ctx.cr6.eq) goto loc_8244E0A4;
	// b 0x8244dd90
	goto loc_8244DD90;
loc_8244E090:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8244d67c
	if (ctx.cr6.eq) goto loc_8244D67C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8244e0c8
	if (!ctx.cr6.eq) goto loc_8244E0C8;
loc_8244E0A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x8244E0B0;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244e090
	if (!ctx.cr0.lt) goto loc_8244E090;
loc_8244E0B8:
	// stw r22,52(r31)
	REX_STORE_U32(r31.u32 + 52, r22.u32);
	// li r23,-1
	r23.s64 = -1;
	// stw r22,56(r31)
	REX_STORE_U32(r31.u32 + 56, r22.u32);
	// b 0x8244e128
	goto loc_8244E128;
loc_8244E0C8:
	// lwz r11,32(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8244e128
	if (!ctx.cr6.eq) goto loc_8244E128;
	// lwz r11,36(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8244e128
	if (!ctx.cr6.eq) goto loc_8244E128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3660
	ctx.r5.s64 = ctx.r11.s64 + 3660;
loc_8244E0E8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,2940
	ctx.r4.s64 = ctx.r10.s64 + 2940;
	// bl 0x8244beb0
	ctx.lr = 0x8244E0F8;
	sub_8244BEB0(ctx, base);
	// li r23,-1
	r23.s64 = -1;
	// b 0x8244e128
	goto loc_8244E128;
loc_8244E100:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3632
	ctx.r5.s64 = ctx.r11.s64 + 3632;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244E10C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3588
	ctx.r5.s64 = ctx.r11.s64 + 3588;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244E118:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// b 0x8244e0e8
	goto loc_8244E0E8;
loc_8244E124:
	// li r23,280
	r23.s64 = 280;
loc_8244E128:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824AAD10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824AAD18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,76(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r29,552(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x824aae18
	if (!ctx.cr6.lt) goto loc_824AAE18;
	// lwz r10,564(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824AAD38:
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824aadec
	if (ctx.cr6.eq) goto loc_824AADEC;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aadec
	if (ctx.cr6.eq) goto loc_824AADEC;
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,132(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824aad84
	if (!ctx.cr6.eq) goto loc_824AAD84;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aadec
	if (ctx.cr6.eq) goto loc_824AADEC;
loc_824AAD84:
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824aadec
	if (ctx.cr6.eq) goto loc_824AADEC;
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
loc_824AAD98:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x824aadb4
	goto loc_824AADB4;
loc_824AADAC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
loc_824AADB4:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824aadac
	if (!ctx.cr6.eq) goto loc_824AADAC;
	// lbz r10,111(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824aaddc
	if (!ctx.cr6.eq) goto loc_824AADDC;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aae00
	if (ctx.cr0.eq) goto loc_824AAE00;
loc_824AADDC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824aad98
	if (ctx.cr6.lt) goto loc_824AAD98;
loc_824AADEC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x824aad38
	if (ctx.cr6.lt) goto loc_824AAD38;
	// b 0x824aae18
	goto loc_824AAE18;
loc_824AAE00:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// li r5,4707
	ctx.r5.s64 = 4707;
	// lbz r7,203(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 203);
	// addi r6,r11,-648
	ctx.r6.s64 = ctx.r11.s64 + -648;
	// bl 0x82489ce8
	ctx.lr = 0x824AAE18;
	sub_82489CE8(ctx, base);
loc_824AAE18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824B1728) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b1788
	if (!ctx.cr6.gt) goto loc_824B1788;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824B173C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824b1774
	if (ctx.cr6.eq) goto loc_824B1774;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_824B1774:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b173c
	if (ctx.cr6.lt) goto loc_824B173C;
loc_824B1788:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B5878) {
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
	// lwz r4,200(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8246e840
	ctx.lr = 0x824B5894;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b58ac
	if (ctx.cr0.lt) goto loc_824B58AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824B58A4;
	sub_82468DD8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_824B58AC:
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

DEFINE_REX_FUNC(sub_824B7C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824B7C50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// bl 0x823f02b8
	ctx.lr = 0x824B7C6C;
	sub_823F02B8(ctx, base);
	// stw r3,696(r31)
	REX_STORE_U32(r31.u32 + 696, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824B7C80;
	sub_823F02B8(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// stw r3,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b7d94
	if (ctx.cr6.eq) goto loc_824B7D94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824b7d94
	if (ctx.cr6.eq) goto loc_824B7D94;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7d0c
	if (!ctx.cr6.gt) goto loc_824B7D0C;
	// li r30,0
	r30.s64 = 0;
loc_824B7CAC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B7CB4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b7cc4
	if (ctx.cr0.eq) goto loc_824B7CC4;
	// bl 0x824773d0
	ctx.lr = 0x824B7CC0;
	sub_824773D0(ctx, base);
	// b 0x824b7cc8
	goto loc_824B7CC8;
loc_824B7CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B7CC8:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b7d94
	if (ctx.cr6.eq) goto loc_824B7D94;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x82477e80
	ctx.lr = 0x824B7CF0;
	sub_82477E80(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x824b7d9c
	if (ctx.cr0.lt) goto loc_824B7D9C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b7cac
	if (ctx.cr6.lt) goto loc_824B7CAC;
loc_824B7D0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7d80
	if (!ctx.cr6.gt) goto loc_824B7D80;
	// li r30,0
	r30.s64 = 0;
loc_824B7D20:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82478258
	ctx.lr = 0x824B7D28;
	sub_82478258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b7d38
	if (ctx.cr0.eq) goto loc_824B7D38;
	// bl 0x82130e88
	ctx.lr = 0x824B7D34;
	sub_82130E88(ctx, base);
	// b 0x824b7d3c
	goto loc_824B7D3C;
loc_824B7D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B7D3C:
	// lwz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 700);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 700);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b7d94
	if (ctx.cr6.eq) goto loc_824B7D94;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x824780d8
	ctx.lr = 0x824B7D64;
	sub_824780D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x824b7d9c
	if (ctx.cr0.lt) goto loc_824B7D9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b7d20
	if (ctx.cr6.lt) goto loc_824B7D20;
loc_824B7D80:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,708(r31)
	REX_STORE_U32(r31.u32 + 708, ctx.r11.u32);
	// stw r10,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r10.u32);
	// b 0x824b7d9c
	goto loc_824B7D9C;
loc_824B7D94:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_824B7D9C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824C02A0) {
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
	ctx.lr = 0x824C02A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r25,r5,7,0,24
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// ori r10,r11,51696
	ctx.r10.u64 = ctx.r11.u64 | 51696;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// divwu. r31,r10,r25
	r31.u64 = uint32_t(r25.u32 ? ctx.r10.u32 / r25.u32 : 0);
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// bgt 0x824c02f4
	if (ctx.cr0.gt) goto loc_824C02F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,70
	ctx.r10.s64 = 70;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C02F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C02F4:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x824c0300
	if (ctx.cr6.lt) goto loc_824C0300;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_824C0300:
	// stw r31,80(r30)
	REX_STORE_U32(r30.u32 + 80, r31.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824bfec8
	ctx.lr = 0x824C0314;
	sub_824BFEC8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824c0378
	if (ctx.cr6.eq) goto loc_824C0378;
loc_824C0324:
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c0334
	if (ctx.cr6.lt) goto loc_824C0334;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_824C0334:
	// mullw r11,r31,r24
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r24.s32);
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c00a0
	ctx.lr = 0x824C0348;
	sub_824C00A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824c0370
	if (ctx.cr6.eq) goto loc_824C0370;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824C0364:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
	// bdnz 0x824c0364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C0364;
loc_824C0370:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824c0324
	if (ctx.cr6.lt) goto loc_824C0324;
loc_824C0378:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824C4740) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C4748;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c4788
	if (!ctx.cr0.eq) goto loc_824C4788;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7140
	ctx.r4.s64 = ctx.r11.s64 + 7140;
	// bl 0x8243c410
	ctx.lr = 0x824C4770;
	sub_8243C410(ctx, base);
loc_824C4770:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824c47ec
	if (ctx.cr6.eq) goto loc_824C47EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7112
	ctx.r4.s64 = ctx.r11.s64 + 7112;
	// b 0x824c479c
	goto loc_824C479C;
loc_824C4788:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c47b0
	if (ctx.cr0.eq) goto loc_824C47B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7088
	ctx.r4.s64 = ctx.r11.s64 + 7088;
loc_824C4798:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C479C:
	// bl 0x8243c448
	ctx.lr = 0x824C47A0;
	sub_8243C448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3fa8
	ctx.lr = 0x824C47AC;
	sub_824C3FA8(ctx, base);
	// b 0x824c48a4
	goto loc_824C48A4;
loc_824C47B0:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c47cc
	if (ctx.cr0.eq) goto loc_824C47CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,7064
	ctx.r4.s64 = ctx.r11.s64 + 7064;
	// bl 0x8243c448
	ctx.lr = 0x824C47C8;
	sub_8243C448(ctx, base);
	// b 0x824c4770
	goto loc_824C4770;
loc_824C47CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824c4770
	if (ctx.cr6.eq) goto loc_824C4770;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4770
	if (ctx.cr0.eq) goto loc_824C4770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7040
	ctx.r4.s64 = ctx.r11.s64 + 7040;
	// b 0x824c4798
	goto loc_824C4798;
loc_824C47EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82442258
	ctx.lr = 0x824C47F8;
	sub_82442258(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C4808;
	sub_8243C628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3fa8
	ctx.lr = 0x824C4814;
	sub_824C3FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824c48a4
	if (!ctx.cr0.eq) goto loc_824C48A4;
	// lbz r30,80(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x824c483c
	if (ctx.cr6.lt) goto loc_824C483C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,7020
	ctx.r4.s64 = ctx.r11.s64 + 7020;
	// bl 0x8243c448
	ctx.lr = 0x824C4838;
	sub_8243C448(ctx, base);
	// b 0x824c48a4
	goto loc_824C48A4;
loc_824C483C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4894
	if (ctx.cr0.eq) goto loc_824C4894;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,7016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfd f0,32424(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// lfd f13,6880(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 6880);
	// lfd f12,6872(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 6872);
	// fadd f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824c4894
	if (!ctx.cr6.gt) goto loc_824C4894;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6816
	ctx.r4.s64 = ctx.r11.s64 + 6816;
	// bl 0x8243c448
	ctx.lr = 0x824C4894;
	sub_8243C448(ctx, base);
loc_824C4894:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243f590
	ctx.lr = 0x824C48A4;
	sub_8243F590(ctx, base);
loc_824C48A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824CABE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824CABE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CAC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r3,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-21720
	ctx.r8.s64 = ctx.r9.s64 + -21720;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824cac98
	if (ctx.cr6.eq) goto loc_824CAC98;
	// lwz r6,316(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// beq cr6,0x824cac70
	if (ctx.cr6.eq) goto loc_824CAC70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CAC68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824CAC70:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CAC94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_824CAC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824CEED0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x824CEED8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca0
	ctx.lr = 0x824CEEE0;
	// li r31,8
	r31.s64 = 8;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r8,80(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r5,110
	ctx.r10.s64 = ctx.r5.s64 + 110;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfs f10,11724(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 11724);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,220
	ctx.r8.s64 = ctx.r8.s64 + 220;
	// lfs f11,11720(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 11720);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// lfs f12,17436(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 17436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,11204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 11204);
	ctx.f0.f64 = double(temp.f32);
loc_824CEF20:
	// lhz r5,-94(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -94);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,-78(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -78);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,-62(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -62);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,-46(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -46);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,-30(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -30);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,-14(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824cefc8
	if (!ctx.cr6.eq) goto loc_824CEFC8;
	// lhz r5,-110(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// lfs f13,-220(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// std r3,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r3.u64);
	// lfd f9,-368(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,-92(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// stfs f6,-60(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f6,-28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f6,68(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f6,100(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f6,132(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824cf15c
	goto loc_824CF15C;
loc_824CEFC8:
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lhz r30,-62(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + -62);
	// lhz r4,-14(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// lfs f9,-156(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -156);
	ctx.f9.f64 = double(temp.f32);
	// std r3,-416(r1)
	REX_STORE_U64(ctx.r1.u32 + -416, ctx.r3.u64);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// lhz r28,-78(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -78);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r3,-384(r1)
	REX_STORE_U64(ctx.r1.u32 + -384, ctx.r3.u64);
	// lfd f1,-384(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -384);
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// std r4,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.r4.u64);
	// lhz r5,-110(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// lfd f8,-392(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -392);
	// std r3,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.r3.u64);
	// lfd f26,-432(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -432);
	// lhz r31,-46(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -46);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r29,-30(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + -30);
	// lfd f5,-416(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -416);
	// std r4,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.r4.u64);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// lfd f7,-376(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -376);
	// std r31,-400(r1)
	REX_STORE_U64(ctx.r1.u32 + -400, r31.u64);
	// lfd f6,-400(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -400);
	// std r4,-408(r1)
	REX_STORE_U64(ctx.r1.u32 + -408, ctx.r4.u64);
	// lfd f31,-408(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -408);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// lfs f4,-28(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -28);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r4,-424(r1)
	REX_STORE_U64(ctx.r1.u32 + -424, ctx.r4.u64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfd f27,-424(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -424);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// lfs f3,-220(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// lfs f2,-92(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -92);
	ctx.f2.f64 = double(temp.f32);
	// fcfid f27,f27
	f27.f64 = double(f27.s64);
	// lfs f28,-188(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -188);
	f28.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfs f30,-124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -124);
	f30.f64 = double(temp.f32);
	// frsp f26,f26
	f26.f64 = double(float(f26.f64));
	// lfs f29,-60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -60);
	f29.f64 = double(temp.f32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// frsp f27,f27
	f27.f64 = double(float(f27.f64));
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(f26.f64 * ctx.f9.f64));
	// fmuls f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f7,f5,f28
	ctx.f7.f64 = double(float(ctx.f5.f64 * f28.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f8,f31,f29
	ctx.f8.f64 = double(float(f31.f64 * f29.f64));
	// fmuls f6,f27,f13
	ctx.f6.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fadds f5,f4,f9
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fsubs f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadds f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fmsubs f1,f4,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fadds f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fsubs f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fadds f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fsubs f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f7,-92(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// fnmsubs f7,f2,f11,f9
	ctx.f7.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f11.f64, -ctx.f9.f64)));
	// fmsubs f2,f13,f10,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f9.f64)));
	// fsubs f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f8,132(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// fsubs f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmsubs f9,f3,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f8,-60(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// fsubs f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f7,100(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fadds f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f4,-28(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// fsubs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f3,68(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,36(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_824CF15C:
	// bdnz 0x824cef20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CEF20;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-380
	ctx.r11.s64 = ctx.r1.s64 + -380;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824CF170:
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lfs f13,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f6,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f2,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f9,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fsubs f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fmsubs f9,f1,f0,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fadds f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fadds f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fsubs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-424(r1)
	REX_STORE_U64(ctx.r1.u32 + -424, ctx.f5.u64);
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r4,-428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fnmsubs f6,f6,f11,f1
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f1.f64)));
	// lwz r5,-420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -420);
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// fsubs f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmsubs f2,f2,f10,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, -ctx.f1.f64)));
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fadds f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stbx r4,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u8);
	// fmsubs f8,f8,f0,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f3.f64)));
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r3,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// fctiwz f6,f1
	ctx.f6.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f6,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f3.u64);
	// fsubs f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lbzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// clrlwi r4,r8,22
	ctx.r4.u64 = ctx.r8.u32 & 0x3FF;
	// fctiwz f9,f1
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// stfd f9,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f9.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// lbzx r5,r4,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r5,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// lbzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// fsubs f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// fadds f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// clrlwi r5,r8,22
	ctx.r5.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// stb r4,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// lwz r5,-428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r4,r8,22
	ctx.r4.u64 = ctx.r8.u32 & 0x3FF;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r8,r3,22
	ctx.r8.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r5,r4,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r5,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r4,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// bdnz 0x824cf170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CF170;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cec
	ctx.lr = 0x824CF31C;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EBCA0) {
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
	ctx.lr = 0x824EBCA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824ebcd4
	if (ctx.cr6.eq) goto loc_824EBCD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18008
	ctx.r4.s64 = ctx.r11.s64 + 18008;
	// bl 0x824eace8
	ctx.lr = 0x824EBCD4;
	sub_824EACE8(ctx, base);
loc_824EBCD4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r11,-11216
	r29.s64 = ctx.r11.s64 + -11216;
	// beq cr6,0x824ebcf0
	if (ctx.cr6.eq) goto loc_824EBCF0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EBCF0;
	sub_824EACE8(ctx, base);
loc_824EBCF0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,18036
	ctx.r4.s64 = ctx.r11.s64 + 18036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EBD04;
	sub_824EACE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28268
	ctx.r4.s64 = ctx.r11.s64 + 28268;
	// bl 0x824eace8
	ctx.lr = 0x824EBD14;
	sub_824EACE8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824ebdc0
	if (ctx.cr6.eq) goto loc_824EBDC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x824eace8
	ctx.lr = 0x824EBD2C;
	sub_824EACE8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r30,30
	ctx.r10.u64 = r30.u32 & 0x3;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r9,17936
	r28.s64 = ctx.r9.s64 + 17936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EBD54;
	sub_824EACE8(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18044
	ctx.r10.s64 = ctx.r10.s64 + 18044;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EBD78;
	sub_824EACE8(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	ctx.r11.s64 = r30.s32 >> 4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18052
	ctx.r10.s64 = ctx.r10.s64 + 18052;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EBD9C;
	sub_824EACE8(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = r30.s32 >> 6;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18060
	ctx.r10.s64 = ctx.r10.s64 + 18060;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EBDC0;
	sub_824EACE8(ctx, base);
loc_824EBDC0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824ebdd0
	if (ctx.cr6.eq) goto loc_824EBDD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x824ebdd8
	goto loc_824EBDD8;
loc_824EBDD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_824EBDD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EBDE0;
	sub_824EACE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F19A8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F2538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
	// b 0x824ee350
	sub_824EE350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F3B98) {
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
	ctx.lr = 0x824F3BA0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r10,r4,21
	ctx.r10.u64 = ctx.r4.u32 & 0x7FF;
	// rlwimi r11,r4,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// rlwinm r25,r4,0,12,15
	r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824f3cec
	if (ctx.cr6.eq) goto loc_824F3CEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824f3cb4
	if (ctx.cr6.eq) goto loc_824F3CB4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x824f3ca0
	if (ctx.cr6.eq) goto loc_824F3CA0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x824f3c0c
	if (ctx.cr6.eq) goto loc_824F3C0C;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// bne cr6,0x824f3cf4
	if (!ctx.cr6.eq) goto loc_824F3CF4;
	// li r29,32
	r29.s64 = 32;
	// b 0x824f3cf4
	goto loc_824F3CF4;
loc_824F3C0C:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x824f3c30
	if (!ctx.cr6.lt) goto loc_824F3C30;
	// lwz r11,1600(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1600);
	// li r30,17
	r30.s64 = 17;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f3cf4
	if (!ctx.cr6.gt) goto loc_824F3CF4;
	// stw r10,1600(r27)
	REX_STORE_U32(r27.u32 + 1600, ctx.r10.u32);
	// b 0x824f3cf4
	goto loc_824F3CF4;
loc_824F3C30:
	// li r30,11
	r30.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r27,1604
	ctx.r9.s64 = r27.s64 + 1604;
loc_824F3C3C:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824f3c60
	if (ctx.cr6.eq) goto loc_824F3C60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x824f3c3c
	if (ctx.cr6.lt) goto loc_824F3C3C;
	// b 0x824f3c6c
	goto loc_824F3C6C;
loc_824F3C60:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lbz r29,1605(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1605);
loc_824F3C6C:
	// rlwinm r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824f3cf4
	if (!ctx.cr6.eq) goto loc_824F3CF4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lis r22,128
	r22.s64 = 8388608;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824f3c98
	if (ctx.cr6.eq) goto loc_824F3C98;
	// bl 0x826b40a0
	ctx.lr = 0x824F3C94;
	sub_826B40A0(ctx, base);
	// b 0x824f3cf4
	goto loc_824F3CF4;
loc_824F3C98:
	// lis r23,1
	r23.s64 = 65536;
	// b 0x824f3cf4
	goto loc_824F3CF4;
loc_824F3CA0:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r30,r11,18
	r30.s64 = ctx.r11.s64 + 18;
	// b 0x824f3cf0
	goto loc_824F3CF0;
loc_824F3CB4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824f3ce4
	if (ctx.cr6.eq) goto loc_824F3CE4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824f3ccc
	if (ctx.cr6.eq) goto loc_824F3CCC;
	// li r30,14
	r30.s64 = 14;
	// b 0x824f3cf0
	goto loc_824F3CF0;
loc_824F3CCC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r30,4
	r30.s64 = 4;
	// li r29,50
	r29.s64 = 50;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x824f3cf4
	goto loc_824F3CF4;
loc_824F3CE4:
	// li r30,16
	r30.s64 = 16;
	// b 0x824f3cf0
	goto loc_824F3CF0;
loc_824F3CEC:
	// li r30,3
	r30.s64 = 3;
loc_824F3CF0:
	// li r29,0
	r29.s64 = 0;
loc_824F3CF4:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f3d08
	if (!ctx.cr6.eq) goto loc_824F3D08;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x824f3d3c
	goto loc_824F3D3C;
loc_824F3D08:
	// rlwinm. r11,r25,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824f3d18
	if (ctx.cr0.eq) goto loc_824F3D18;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824F3D18:
	// rlwinm. r11,r25,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f3d24
	if (ctx.cr0.eq) goto loc_824F3D24;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_824F3D24:
	// rlwinm. r11,r25,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f3d30
	if (ctx.cr0.eq) goto loc_824F3D30;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_824F3D30:
	// rlwinm. r11,r25,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f3d3c
	if (ctx.cr0.eq) goto loc_824F3D3C;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_824F3D3C:
	// rlwinm r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x100000;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824f3d54
	if (!ctx.cr6.eq) goto loc_824F3D54;
	// li r10,256
	ctx.r10.s64 = 256;
loc_824F3D54:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// beq cr6,0x824f3d7c
	if (ctx.cr6.eq) goto loc_824F3D7C;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// beq cr6,0x824f3de0
	if (ctx.cr6.eq) goto loc_824F3DE0;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(r30.u32, 17, ctx.xer);
	// ble cr6,0x824f3dd8
	if (!ctx.cr6.gt) goto loc_824F3DD8;
	// cmplwi cr6,r30,19
	ctx.cr6.compare<uint32_t>(r30.u32, 19, ctx.xer);
	// ble cr6,0x824f3dc8
	if (!ctx.cr6.gt) goto loc_824F3DC8;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(r30.u32, 50, ctx.xer);
	// bne cr6,0x824f3dd8
	if (!ctx.cr6.eq) goto loc_824F3DD8;
loc_824F3D7C:
	// li r9,169
	ctx.r9.s64 = 169;
	// ori r11,r10,169
	ctx.r11.u64 = ctx.r10.u64 | 169;
loc_824F3D84:
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824f3e20
	if (!ctx.cr6.eq) goto loc_824F3E20;
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x824f3df0
	if (!ctx.cr6.eq) goto loc_824F3DF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824f3df0
	if (!ctx.cr6.eq) goto loc_824F3DF0;
	// rlwinm r11,r30,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r24,21
	ctx.r9.u64 = r24.u32 & 0x7FF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | r23.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// b 0x824f3e60
	goto loc_824F3E60;
loc_824F3DC8:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x824f3dd8
	if (!ctx.cr6.lt) goto loc_824F3DD8;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
loc_824F3DD8:
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x824f3d84
	goto loc_824F3D84;
loc_824F3DE0:
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// b 0x824f3d84
	goto loc_824F3D84;
loc_824F3DF0:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// oris r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 12582912;
	// clrlwi r8,r24,21
	ctx.r8.u64 = r24.u32 & 0x7FF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r9,r8,r23
	ctx.r9.u64 = ctx.r8.u64 | r23.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x824f3e68
	goto loc_824F3E68;
loc_824F3E20:
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x824f3e48
	if (!ctx.cr6.eq) goto loc_824F3E48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824f3e48
	if (!ctx.cr6.eq) goto loc_824F3E48;
	// rlwimi r29,r30,16,0,15
	r29.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r29,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x824f3e68
	goto loc_824F3E68;
loc_824F3E48:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
loc_824F3E60:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_824F3E68:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825115A0) {
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
	ctx.lr = 0x825115A8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x824f7678
	ctx.lr = 0x825115D0;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r29,20(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 20);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511778
	if (!ctx.cr0.eq) goto loc_82511778;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82511778
	if (ctx.cr0.eq) goto loc_82511778;
loc_825115FC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82511754
	if (!ctx.cr6.eq) goto loc_82511754;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82511628
	if (ctx.cr6.eq) goto loc_82511628;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8251162c
	if (!ctx.cr6.eq) goto loc_8251162C;
loc_82511628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251162C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511754
	if (ctx.cr0.eq) goto loc_82511754;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8251164C;
	sub_8257B1B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x82511668;
	sub_8257B1B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82511754
	if (ctx.cr6.eq) goto loc_82511754;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825116a4
	if (!ctx.cr0.eq) goto loc_825116A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825116a4
	if (ctx.cr0.eq) goto loc_825116A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825116b0
	if (!ctx.cr6.gt) goto loc_825116B0;
loc_825116A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250f3b8
	ctx.lr = 0x825116B0;
	sub_8250F3B8(ctx, base);
loc_825116B0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r9,r11,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r11,r5,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x82511700;
	sub_825BA3A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82511770
	if (!ctx.cr6.eq) goto loc_82511770;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8251173C;
	sub_825BA3A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82511770
	if (!ctx.cr6.eq) goto loc_82511770;
loc_82511754:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,40(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511778
	if (!ctx.cr0.eq) goto loc_82511778;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825115fc
	if (!ctx.cr6.eq) goto loc_825115FC;
	// b 0x82511778
	goto loc_82511778;
loc_82511770:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250f318
	ctx.lr = 0x82511778;
	sub_8250F318(ctx, base);
loc_82511778:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251178c
	if (!ctx.cr0.eq) goto loc_8251178C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82511794
	if (!ctx.cr0.eq) goto loc_82511794;
loc_8251178C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825117cc
	goto loc_825117CC;
loc_82511794:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82511150
	ctx.lr = 0x825117B0;
	sub_82511150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250f318
	ctx.lr = 0x825117B8;
	sub_8250F318(ctx, base);
	// addi r11,r28,972
	ctx.r11.s64 = r28.s64 + 972;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,976(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 976);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r30,976(r28)
	REX_STORE_U32(r28.u32 + 976, r30.u32);
loc_825117CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82528F90) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x82528FBC;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_8252E010) {
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
	ctx.lr = 0x8252E018;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,-1
	r27.s64 = -1;
	// beq 0x8252e090
	if (ctx.cr0.eq) goto loc_8252E090;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8252e068
	if (ctx.cr6.eq) goto loc_8252E068;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8252e06c
	if (!ctx.cr6.eq) goto loc_8252E06C;
loc_8252E068:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8252E06C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252e07c
	if (ctx.cr0.eq) goto loc_8252E07C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8252E07C:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e090
	if (ctx.cr0.eq) goto loc_8252E090;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252E08C;
	sub_8250A678(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252E090:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252e0fc
	if (ctx.cr0.eq) goto loc_8252E0FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252e0bc
	if (ctx.cr6.eq) goto loc_8252E0BC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252e0c0
	if (!ctx.cr6.eq) goto loc_8252E0C0;
loc_8252E0BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252E0C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e0d0
	if (ctx.cr0.eq) goto loc_8252E0D0;
	// or r28,r10,r28
	r28.u64 = ctx.r10.u64 | r28.u64;
	// and r27,r10,r27
	r27.u64 = ctx.r10.u64 & r27.u64;
loc_8252E0D0:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e0fc
	if (ctx.cr0.eq) goto loc_8252E0FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252E0E0;
	sub_8250A678(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252e0f8
	if (ctx.cr6.eq) goto loc_8252E0F8;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8252e0f8
	if (ctx.cr6.eq) goto loc_8252E0F8;
loc_8252E0F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252e178
	goto loc_8252E178;
loc_8252E0F8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252E0FC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252e160
	if (ctx.cr0.eq) goto loc_8252E160;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252e128
	if (ctx.cr6.eq) goto loc_8252E128;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252e12c
	if (!ctx.cr6.eq) goto loc_8252E12C;
loc_8252E128:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252E12C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e13c
	if (ctx.cr0.eq) goto loc_8252E13C;
	// or r28,r10,r28
	r28.u64 = ctx.r10.u64 | r28.u64;
	// and r27,r10,r27
	r27.u64 = ctx.r10.u64 & r27.u64;
loc_8252E13C:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e160
	if (ctx.cr0.eq) goto loc_8252E160;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252E14C;
	sub_8250A678(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252e15c
	if (ctx.cr6.eq) goto loc_8252E15C;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x8252e0f0
	if (!ctx.cr6.eq) goto loc_8252E0F0;
loc_8252E15C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252E160:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8252e170
	if (ctx.cr6.eq) goto loc_8252E170;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x8252e0f0
	if (!ctx.cr6.eq) goto loc_8252E0F0;
loc_8252E170:
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8252E178:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82548EB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82548EC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r8,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82548f54
	if (ctx.cr0.eq) goto loc_82548F54;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r31,r4,44
	r31.s64 = ctx.r4.s64 + 44;
	// rlwinm r30,r10,13,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_82548EE8:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// beq cr6,0x82548f20
	if (ctx.cr6.eq) goto loc_82548F20;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82548F00:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// beq cr6,0x82548f20
	if (ctx.cr6.eq) goto loc_82548F20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82548f00
	if (ctx.cr6.lt) goto loc_82548F00;
loc_82548F20:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82548f34
	if (!ctx.cr6.eq) goto loc_82548F34;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_82548F34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82548ee8
	if (ctx.cr6.lt) goto loc_82548EE8;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82548f54
	if (!ctx.cr6.gt) goto loc_82548F54;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82548F54;
	sub_824E4368(ctx, base);
loc_82548F54:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r11,r5,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r8,r11,1,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8254F9B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826a5430
	ctx.lr = 0x8254F9D0;
	sub_826A5430(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// lfd f30,80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bge cr6,0x8254fa04
	if (!ctx.cr6.lt) goto loc_8254FA04;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x8254fa04
	if (ctx.cr6.eq) goto loc_8254FA04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bl 0x826a1898
	ctx.lr = 0x8254F9FC;
	sub_826A1898(ctx, base);
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x8254f960
	ctx.lr = 0x8254FA04;
	sub_8254F960(ctx, base);
loc_8254FA04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825502B0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825502D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825502f8
	if (!ctx.cr0.eq) goto loc_825502F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825502d4
	if (ctx.cr6.lt) goto loc_825502D4;
	// blr 
	return;
loc_825502F8:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82551CB0) {
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
	ctx.lr = 0x82551CB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
loc_82551CC4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551e98
	if (!ctx.cr0.eq) goto loc_82551E98;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82551e98
	if (ctx.cr0.eq) goto loc_82551E98;
loc_82551CDC:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x82551da8
	if (ctx.cr6.eq) goto loc_82551DA8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551d18
	if (ctx.cr0.eq) goto loc_82551D18;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551d0c
	if (ctx.cr0.eq) goto loc_82551D0C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// b 0x82551d20
	goto loc_82551D20;
loc_82551D0C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r10,r29,24
	ctx.r10.s64 = r29.s64 + 24;
	// b 0x82551d20
	goto loc_82551D20;
loc_82551D18:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
loc_82551D20:
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
	// b 0x82551d98
	goto loc_82551D98;
loc_82551D34:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82551da4
	if (!ctx.cr0.eq) goto loc_82551DA4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82551d58
	if (!ctx.cr0.eq) goto loc_82551D58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82551d34
	if (!ctx.cr6.eq) goto loc_82551D34;
loc_82551D58:
	// addi r8,r29,32
	ctx.r8.s64 = r29.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82551da8
	if (ctx.cr6.eq) goto loc_82551DA8;
	// addi r9,r29,24
	ctx.r9.s64 = r29.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82551d88
	if (ctx.cr6.eq) goto loc_82551D88;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551d88
	if (!ctx.cr0.eq) goto loc_82551D88;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82551d90
	goto loc_82551D90;
loc_82551D88:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82551D90:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82551da8
	if (!ctx.cr0.eq) goto loc_82551DA8;
loc_82551D98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82551d34
	if (!ctx.cr6.eq) goto loc_82551D34;
	// b 0x82551da8
	goto loc_82551DA8;
loc_82551DA4:
	// stw r26,44(r29)
	REX_STORE_U32(r29.u32 + 44, r26.u32);
loc_82551DA8:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82551e7c
	if (!ctx.cr6.eq) goto loc_82551E7C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8250b3d0
	ctx.lr = 0x82551DC4;
	sub_8250B3D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82551de8
	if (ctx.cr0.eq) goto loc_82551DE8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10752, ctx.xer);
	// bne cr6,0x82551de8
	if (!ctx.cr6.eq) goto loc_82551DE8;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551de8
	if (ctx.cr0.eq) goto loc_82551DE8;
	// li r31,1
	r31.s64 = 1;
loc_82551DE8:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82551e08
	if (ctx.cr0.eq) goto loc_82551E08;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82551e14
	if (ctx.cr6.eq) goto loc_82551E14;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82551e0c
	goto loc_82551E0C;
loc_82551E08:
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82551E0C:
	// beq 0x82551e14
	if (ctx.cr0.eq) goto loc_82551E14;
	// li r31,1
	r31.s64 = 1;
loc_82551E14:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551e7c
	if (ctx.cr0.eq) goto loc_82551E7C;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_82551E20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82551e44
	if (ctx.cr6.eq) goto loc_82551E44;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x82551e3c
	if (ctx.cr6.eq) goto loc_82551E3C;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
loc_82551E3C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82551e20
	goto loc_82551E20;
loc_82551E44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82551e7c
	if (ctx.cr6.eq) goto loc_82551E7C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82551E64;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// beq cr6,0x82551e7c
	if (ctx.cr6.eq) goto loc_82551E7C;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
loc_82551E7C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551e98
	if (!ctx.cr0.eq) goto loc_82551E98;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82551cdc
	if (!ctx.cr6.eq) goto loc_82551CDC;
loc_82551E98:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551eec
	if (!ctx.cr0.eq) goto loc_82551EEC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82551eec
	if (ctx.cr0.eq) goto loc_82551EEC;
loc_82551EC0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82551ed4
	if (ctx.cr0.eq) goto loc_82551ED4;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82551ED4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551eec
	if (!ctx.cr0.eq) goto loc_82551EEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82551ec0
	if (!ctx.cr6.eq) goto loc_82551EC0;
loc_82551EEC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
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
	// beq 0x82551f40
	if (ctx.cr0.eq) goto loc_82551F40;
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
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// b 0x82551f64
	goto loc_82551F64;
loc_82551F40:
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
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
loc_82551F64:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82552008
	if (ctx.cr6.eq) goto loc_82552008;
loc_82551F6C:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551fac
	if (ctx.cr0.eq) goto loc_82551FAC;
	// rlwinm. r11,r10,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551fa4
	if (!ctx.cr0.eq) goto loc_82551FA4;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x82551f98
	if (ctx.cr6.lt) goto loc_82551F98;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82551f9c
	if (!ctx.cr6.gt) goto loc_82551F9C;
loc_82551F98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82551F9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551fac
	if (ctx.cr0.eq) goto loc_82551FAC;
loc_82551FA4:
	// rlwinm r11,r10,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82551FAC:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551fc4
	if (!ctx.cr0.eq) goto loc_82551FC4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82551f6c
	if (!ctx.cr6.eq) goto loc_82551F6C;
loc_82551FC4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
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
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82552008
	if (ctx.cr6.eq) goto loc_82552008;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// clrlwi. r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82552008
	if (!ctx.cr0.eq) goto loc_82552008;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82551f6c
	if (!ctx.cr0.eq) goto loc_82551F6C;
loc_82552008:
	// lwz r9,44(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 44);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255216c
	if (ctx.cr0.eq) goto loc_8255216C;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82552164
	if (!ctx.cr6.eq) goto loc_82552164;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552164
	if (ctx.cr0.eq) goto loc_82552164;
loc_8255202C:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82552148
	if (!ctx.cr6.eq) goto loc_82552148;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552148
	if (ctx.cr6.eq) goto loc_82552148;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552148
	if (ctx.cr6.eq) goto loc_82552148;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82552148
	if (ctx.cr0.eq) goto loc_82552148;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// beq cr6,0x8255206c
	if (ctx.cr6.eq) goto loc_8255206C;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
loc_8255206C:
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82552070:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82552148
	if (ctx.cr6.eq) goto loc_82552148;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552174
	if (!ctx.cr0.eq) goto loc_82552174;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82552174
	if (ctx.cr0.eq) goto loc_82552174;
loc_82552098:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x825520e0
	if (!ctx.cr6.eq) goto loc_825520E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825520BC;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x825520e0
	if (!ctx.cr6.eq) goto loc_825520E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825520fc
	if (ctx.cr6.eq) goto loc_825520FC;
loc_825520E0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552174
	if (!ctx.cr0.eq) goto loc_82552174;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82552098
	if (!ctx.cr0.eq) goto loc_82552098;
loc_825520FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82552174
	if (ctx.cr6.eq) goto loc_82552174;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552140
	if (!ctx.cr0.eq) goto loc_82552140;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8255211C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255213c
	if (ctx.cr6.eq) goto loc_8255213C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4c28
	ctx.lr = 0x82552134;
	sub_825C4C28(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8255211c
	goto loc_8255211C;
loc_8255213C:
	// li r30,1
	r30.s64 = 1;
loc_82552140:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x82552070
	goto loc_82552070;
loc_82552148:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552164
	if (!ctx.cr0.eq) goto loc_82552164;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255202c
	if (!ctx.cr6.eq) goto loc_8255202C;
loc_82552164:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551cc4
	if (!ctx.cr0.eq) goto loc_82551CC4;
loc_8255216C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82552174:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82552180;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82585070) {
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
	ctx.lr = 0x82585078;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,4(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r21,8(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82585164
	if (ctx.cr6.eq) goto loc_82585164;
	// li r25,0
	r25.s64 = 0;
loc_825850B0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82553828
	ctx.lr = 0x825850B8;
	sub_82553828(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82585130
	if (ctx.cr6.eq) goto loc_82585130;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584dd0
	ctx.lr = 0x825850D0;
	sub_82584DD0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584dd0
	ctx.lr = 0x825850E0;
	sub_82584DD0(ctx, base);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82585164
	if (!ctx.cr6.eq) goto loc_82585164;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82585104
	if (ctx.cr6.lt) goto loc_82585104;
	// beq cr6,0x82585218
	if (ctx.cr6.eq) goto loc_82585218;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82585238
	if (!ctx.cr6.lt) goto loc_82585238;
loc_82585104:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82585108:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82585124
	if (ctx.cr6.lt) goto loc_82585124;
	// beq cr6,0x82585228
	if (ctx.cr6.eq) goto loc_82585228;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82585244
	if (!ctx.cr6.lt) goto loc_82585244;
loc_82585124:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82585128:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82585164
	if (!ctx.cr6.eq) goto loc_82585164;
loc_82585130:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825807a0
	ctx.lr = 0x8258513C;
	sub_825807A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r3,r25
	ctx.r10.u64 = r25.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r25.u8 & 0x3F));
	// slw r11,r11,r25
	ctx.r11.u64 = r25.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r25.u8 & 0x3F));
	// andc r11,r24,r11
	ctx.r11.u64 = r24.u64 & ~ctx.r11.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// or r24,r10,r11
	r24.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// blt cr6,0x825850b0
	if (ctx.cr6.lt) goto loc_825850B0;
loc_82585164:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82585250
	if (ctx.cr0.eq) goto loc_82585250;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x82585250
	if (!ctx.cr6.lt) goto loc_82585250;
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r21,8(r26)
	REX_STORE_U32(r26.u32 + 8, r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x825bb9c8
	ctx.lr = 0x82585190;
	sub_825BB9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825851cc
	if (ctx.cr6.eq) goto loc_825851CC;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
loc_825851A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82553828
	ctx.lr = 0x825851A8;
	sub_82553828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x825851B4;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825851C0;
	sub_8250AD28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// bne 0x825851a0
	if (!ctx.cr0.eq) goto loc_825851A0;
loc_825851CC:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8250ab60
	ctx.lr = 0x82585214;
	sub_8250AB60(ctx, base);
	// b 0x82585280
	goto loc_82585280;
loc_82585218:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// b 0x82585108
	goto loc_82585108;
loc_82585228:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x82585128
	goto loc_82585128;
loc_82585238:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82585244;
	sub_824E4368(ctx, base);
loc_82585244:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82585250;
	sub_824E4368(ctx, base);
loc_82585250:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258525C;
	sub_82584ED0(ctx, base);
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// rlwinm r11,r28,20,9,11
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x700000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82585280:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82585290
	if (ctx.cr0.eq) goto loc_82585290;
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
	// stw r21,8(r26)
	REX_STORE_U32(r26.u32 + 8, r21.u32);
loc_82585290:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825A1180) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824de4b0
	ctx.lr = 0x825A11A0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824de4b0
	ctx.lr = 0x825A11B0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x824de4b0
	ctx.lr = 0x825A11C0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,89
	ctx.r4.s64 = 89;
	// bl 0x824de4b0
	ctx.lr = 0x825A11D0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x824de4b0
	ctx.lr = 0x825A11E0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x824de4b0
	ctx.lr = 0x825A11F0;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1003
	ctx.r4.s64 = 1003;
	// bl 0x824de4b0
	ctx.lr = 0x825A1200;
	sub_824DE4B0(ctx, base);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1004
	ctx.r4.s64 = 1004;
	// bl 0x824de4b0
	ctx.lr = 0x825A1214;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x824de5a0
	ctx.lr = 0x825A1228;
	sub_824DE5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x824de5a0
	ctx.lr = 0x825A123C;
	sub_824DE5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x824de5a0
	ctx.lr = 0x825A1250;
	sub_824DE5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,53
	ctx.r4.s64 = 53;
	// bl 0x824de5a0
	ctx.lr = 0x825A1264;
	sub_824DE5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x824de4b0
	ctx.lr = 0x825A1274;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x824de4b0
	ctx.lr = 0x825A1284;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x824de4b0
	ctx.lr = 0x825A1294;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x824de4b0
	ctx.lr = 0x825A12A4;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x824de4b0
	ctx.lr = 0x825A12B4;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x824de4b0
	ctx.lr = 0x825A12C4;
	sub_824DE4B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824de4b0
	ctx.lr = 0x825A12D4;
	sub_824DE4B0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824de4b0
	ctx.lr = 0x825A12E4;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x824de4b0
	ctx.lr = 0x825A12F4;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824de4b0
	ctx.lr = 0x825A1304;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824de4b0
	ctx.lr = 0x825A1314;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824de4b0
	ctx.lr = 0x825A1324;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x824de4b0
	ctx.lr = 0x825A1334;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x824de4b0
	ctx.lr = 0x825A1344;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x824de4b0
	ctx.lr = 0x825A1354;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,163
	ctx.r4.s64 = 163;
	// bl 0x824de4b0
	ctx.lr = 0x825A1364;
	sub_824DE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x824de4b0
	ctx.lr = 0x825A1374;
	sub_824DE4B0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,669
	ctx.r4.s64 = 669;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824de4b0
	ctx.lr = 0x825A1384;
	sub_824DE4B0(ctx, base);
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

DEFINE_REX_FUNC(sub_825A70A8) {
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
	ctx.lr = 0x825A70B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r10,r9,22,20,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFC0;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,10816(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 10816);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x825a7100
	if (ctx.cr6.eq) goto loc_825A7100;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// b 0x825a7104
	goto loc_825A7104;
loc_825A7100:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825A7104:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// addi r26,r10,22852
	r26.s64 = ctx.r10.s64 + 22852;
	// addi r23,r8,-31184
	r23.s64 = ctx.r8.s64 + -31184;
	// addi r25,r7,-8552
	r25.s64 = ctx.r7.s64 + -8552;
	// bgt cr6,0x825a7210
	if (ctx.cr6.gt) goto loc_825A7210;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-8264
	ctx.r12.s64 = ctx.r12.s64 + -8264;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// nop 
	// addi r12,r12,29012
	ctx.r12.s64 = ctx.r12.s64 + 29012;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_825A71C4;
	case 1:
		goto loc_825A71C4;
	case 2:
		goto loc_825A71C4;
	case 3:
		goto loc_825A71F8;
	case 4:
		goto loc_825A7154;
	case 5:
		goto loc_825A7154;
	case 6:
		goto loc_825A7154;
	case 7:
		goto loc_825A7188;
	case 8:
		goto loc_825A7154;
	case 9:
		goto loc_825A7188;
	case 10:
		goto loc_825A7198;
	case 11:
		goto loc_825A7210;
	case 12:
		goto loc_825A7210;
	case 13:
		goto loc_825A71F8;
	case 14:
		goto loc_825A71F8;
	case 15:
		goto loc_825A7154;
	case 16:
		goto loc_825A7154;
	case 17:
		goto loc_825A7154;
	case 18:
		goto loc_825A7154;
	case 19:
		goto loc_825A7154;
	case 20:
		goto loc_825A7180;
	case 21:
		goto loc_825A71F8;
	case 22:
		goto loc_825A7180;
	case 23:
		goto loc_825A71F8;
	case 24:
		goto loc_825A71F8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825A7154:
	// slw r8,r27,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_825A716C:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x825a7210
	goto loc_825A7210;
loc_825A7180:
	// li r7,2119
	ctx.r7.s64 = 2119;
	// b 0x825a71fc
	goto loc_825A71FC;
loc_825A7188:
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// b 0x825a7154
	goto loc_825A7154;
loc_825A7198:
	// slw r8,r27,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r9,r28,r12
	ctx.r9.u64 = r28.u64 & ctx.r12.u64;
	// ori r28,r9,4369
	r28.u64 = ctx.r9.u64 | 4369;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// b 0x825a716c
	goto loc_825A716C;
loc_825A71C4:
	// slw r11,r29,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r10,2(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 2);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x825a7210
	goto loc_825A7210;
loc_825A71F8:
	// li r7,2179
	ctx.r7.s64 = 2179;
loc_825A71FC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7210;
	sub_824EA978(ctx, base);
loc_825A7210:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a7378
	if (ctx.cr0.eq) goto loc_825A7378;
	// clrlwi r8,r28,29
	ctx.r8.u64 = r28.u32 & 0x7;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// rlwinm r9,r28,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// rlwinm r10,r28,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// rlwinm r11,r28,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825a7298
	if (ctx.cr6.eq) goto loc_825A7298;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a6918
	ctx.lr = 0x825A7274;
	sub_825A6918(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x825a72b0
	goto loc_825A72B0;
loc_825A7298:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2196
	ctx.r7.s64 = 2196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A72B0;
	sub_824EA978(ctx, base);
loc_825A72B0:
	// rlwinm r29,r28,29,31,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1;
	// rlwinm r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a72dc
	if (ctx.cr6.eq) goto loc_825A72DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7312
	ctx.r5.s64 = ctx.r11.s64 + -7312;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2203
	ctx.r7.s64 = 2203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A72DC;
	sub_824EA978(ctx, base);
loc_825A72DC:
	// rlwinm r11,r28,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a7304
	if (ctx.cr6.eq) goto loc_825A7304;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2204
	ctx.r7.s64 = 2204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7304;
	sub_824EA978(ctx, base);
loc_825A7304:
	// rlwinm r11,r28,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 17) & 0x1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a732c
	if (ctx.cr6.eq) goto loc_825A732C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7456
	ctx.r5.s64 = ctx.r11.s64 + -7456;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2205
	ctx.r7.s64 = 2205;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A732C;
	sub_824EA978(ctx, base);
loc_825A732C:
	// slw r11,r29,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,27,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F) | (ctx.r11.u64 & 0xE0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825a73a4
	if (ctx.cr6.eq) goto loc_825A73A4;
	// rlwinm r11,r28,19,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 19) & 0x80;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x825a73a4
	goto loc_825A73A4;
loc_825A7378:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// slw r9,r29,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,27,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F) | (ctx.r10.u64 & 0xE0);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_825A73A4:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a7410
	if (ctx.cr0.eq) goto loc_825A7410;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a73d8
	if (ctx.cr0.eq) goto loc_825A73D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7488
	ctx.r5.s64 = ctx.r11.s64 + -7488;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2226
	ctx.r7.s64 = 2226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A73D8;
	sub_824EA978(ctx, base);
loc_825A73D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a7400
	if (ctx.cr0.eq) goto loc_825A7400;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7516
	ctx.r5.s64 = ctx.r11.s64 + -7516;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2227
	ctx.r7.s64 = 2227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7400;
	sub_824EA978(ctx, base);
loc_825A7400:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r27,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
loc_825A7410:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a751c
	if (ctx.cr0.eq) goto loc_825A751C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a7444
	if (ctx.cr6.eq) goto loc_825A7444;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7544
	ctx.r5.s64 = ctx.r11.s64 + -7544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2246
	ctx.r7.s64 = 2246;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7444;
	sub_824EA978(ctx, base);
loc_825A7444:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825a74b4
	if (ctx.cr6.eq) goto loc_825A74B4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825a74b4
	if (ctx.cr6.eq) goto loc_825A74B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a74b4
	if (ctx.cr6.eq) goto loc_825A74B4;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825a7490
	if (ctx.cr6.eq) goto loc_825A7490;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-7588
	ctx.r5.s64 = ctx.r11.s64 + -7588;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2253
	ctx.r7.s64 = 2253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7490;
	sub_824EA978(ctx, base);
loc_825A7490:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,64
	ctx.r9.s64 = 64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x825a751c
	goto loc_825A751C;
loc_825A74B4:
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bne 0x825a74cc
	if (!ctx.cr0.eq) goto loc_825A74CC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x825a74d0
	goto loc_825A74D0;
loc_825A74CC:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_825A74D0:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x825a7524
	if (ctx.cr6.lt) goto loc_825A7524;
	// beq cr6,0x825a7504
	if (ctx.cr6.eq) goto loc_825A7504;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x825a7538
	if (ctx.cr6.lt) goto loc_825A7538;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,2302
	ctx.r7.s64 = 2302;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A7500;
	sub_824EA978(ctx, base);
	// b 0x825a7538
	goto loc_825A7538;
loc_825A7504:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825a7538
	if (!ctx.cr0.eq) goto loc_825A7538;
loc_825A7510:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_825A7518:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825A751C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_825A7524:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a7510
	if (ctx.cr0.eq) goto loc_825A7510;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a7510
	if (ctx.cr0.eq) goto loc_825A7510;
loc_825A7538:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x825a7518
	goto loc_825A7518;
}

DEFINE_REX_FUNC(sub_825C6D18) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x825C6D40;
	sub_8269CE98(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x8269ce98
	ctx.lr = 0x825C6D48;
	sub_8269CE98(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8269ce98
	ctx.lr = 0x825C6D50;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_825CA898) {
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
	ctx.lr = 0x825CA8A0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x825CA8A8;
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
	// beq cr6,0x825ca8d4
	if (ctx.cr6.eq) goto loc_825CA8D4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CA8D0;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CA8D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ca8f0
	if (ctx.cr6.eq) goto loc_825CA8F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CA8EC;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CA8F0:
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
	// bne 0x825ca960
	if (!ctx.cr0.eq) goto loc_825CA960;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825ca968
	goto loc_825CA968;
loc_825CA960:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CA968:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ca980
	if (ctx.cr6.eq) goto loc_825CA980;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CA980;
	sub_82409A88(ctx, base);
loc_825CA980:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cad14
	if (!ctx.cr6.gt) goto loc_825CAD14;
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
loc_825CA9F4:
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
	// beq cr6,0x825cac2c
	if (ctx.cr6.eq) goto loc_825CAC2C;
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
loc_825CAC2C:
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x825cac3c
	if (ctx.cr6.lt) goto loc_825CAC3C;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_825CAC3C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cac54
	if (!ctx.cr6.gt) goto loc_825CAC54;
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// blt cr6,0x825cac58
	if (ctx.cr6.lt) goto loc_825CAC58;
	// li r3,1023
	ctx.r3.s64 = 1023;
	// b 0x825cac58
	goto loc_825CAC58;
loc_825CAC54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CAC58:
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x825cac68
	if (ctx.cr6.lt) goto loc_825CAC68;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_825CAC68:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cac80
	if (!ctx.cr6.gt) goto loc_825CAC80;
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// blt cr6,0x825cac84
	if (ctx.cr6.lt) goto loc_825CAC84;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// b 0x825cac84
	goto loc_825CAC84;
loc_825CAC80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825CAC84:
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x825cac94
	if (ctx.cr6.lt) goto loc_825CAC94;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_825CAC94:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cacac
	if (!ctx.cr6.gt) goto loc_825CACAC;
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// blt cr6,0x825cacb0
	if (ctx.cr6.lt) goto loc_825CACB0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// b 0x825cacb0
	goto loc_825CACB0;
loc_825CACAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825CACB0:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x825cacc0
	if (ctx.cr6.lt) goto loc_825CACC0;
	// li r10,3
	ctx.r10.s64 = 3;
loc_825CACC0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cacd8
	if (!ctx.cr6.gt) goto loc_825CACD8;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x825cacdc
	if (ctx.cr6.lt) goto loc_825CACDC;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x825cacdc
	goto loc_825CACDC;
loc_825CACD8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825CACDC:
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
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
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stwux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825ca9f4
	if (ctx.cr6.lt) goto loc_825CA9F4;
loc_825CAD14:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x825CAD20;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E59F8) {
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
	ctx.lr = 0x825E5A00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e5b68
	if (!ctx.cr0.eq) goto loc_825E5B68;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lbz r11,141(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e5b68
	if (ctx.cr0.eq) goto loc_825E5B68;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825e0940
	ctx.lr = 0x825E5A34;
	sub_825E0940(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r30,56(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e5b08
	if (ctx.cr0.eq) goto loc_825E5B08;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x825f9ad0
	ctx.lr = 0x825E5A58;
	sub_825F9AD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825E5A68;
	sub_825D7C78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,3744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3744);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825E5A8C;
	sub_825FAAB8(ctx, base);
	// lis r26,-32251
	r26.s64 = -2113601536;
	// stw r30,56(r27)
	REX_STORE_U32(r27.u32 + 56, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r25,r26,11208
	r25.s64 = r26.s64 + 11208;
	// stw r29,80(r27)
	REX_STORE_U32(r27.u32 + 80, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -12);
	// stw r11,128(r27)
	REX_STORE_U32(r27.u32 + 128, ctx.r11.u32);
	// lwz r11,228(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r27)
	REX_STORE_U32(r27.u32 + 228, ctx.r11.u32);
	// bl 0x825fcb18
	ctx.lr = 0x825E5AC0;
	sub_825FCB18(ctx, base);
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825E5ACC;
	sub_825F9AD0(ctx, base);
	// lwz r11,-12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -12);
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x825d7c78
	ctx.lr = 0x825E5AEC;
	sub_825D7C78(ctx, base);
	// lwz r11,11208(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 11208);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,132(r24)
	REX_STORE_U32(r24.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r24)
	REX_STORE_U32(r24.u32 + 228, ctx.r11.u32);
	// b 0x825e5b60
	goto loc_825E5B60;
loc_825E5B08:
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x825f9ad0
	ctx.lr = 0x825E5B10;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
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
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825faab8
	ctx.lr = 0x825E5B50;
	sub_825FAAB8(ctx, base);
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,228(r29)
	REX_STORE_U32(r29.u32 + 228, ctx.r11.u32);
loc_825E5B60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825E5B68;
	sub_825FCB18(ctx, base);
loc_825E5B68:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E5B78;
	sub_825E35D8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,136(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x825e3fe0
	ctx.lr = 0x825E5B88;
	sub_825E3FE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825F3C30) {
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
	ctx.lr = 0x825F3C38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r28,r3,-700
	ctx.xer.ca = ctx.r3.u32 <= 4294966596;
	r28.u64 = static_cast<uint64_t>(-700) - ctx.r3.u64;
	// subfic r30,r3,-636
	ctx.xer.ca = ctx.r3.u32 <= 4294966660;
	r30.u64 = static_cast<uint64_t>(-636) - ctx.r3.u64;
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// lwzx r27,r10,r3
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r29,r11,-572
	ctx.xer.ca = ctx.r11.u32 <= 4294966724;
	r29.u64 = static_cast<uint64_t>(-572) - ctx.r11.u64;
loc_825F3C5C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x825f3d48
	if (!ctx.cr6.eq) goto loc_825F3D48;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x825f3c8c
	if (ctx.cr6.eq) goto loc_825F3C8C;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r8,64(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825f3d5c
	if (ctx.cr6.eq) goto loc_825F3D5C;
	// b 0x825f3d48
	goto loc_825F3D48;
loc_825F3C8C:
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// li r31,0
	r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825F3CA8:
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825f3d38
	if (ctx.cr6.eq) goto loc_825F3D38;
	// add r8,r28,r9
	ctx.r8.u64 = r28.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825f3d38
	if (ctx.cr6.eq) goto loc_825F3D38;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// add r7,r30,r9
	ctx.r7.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x825f3d34
	if (!ctx.cr6.eq) goto loc_825F3D34;
	// addi r8,r4,40
	ctx.r8.s64 = ctx.r4.s64 + 40;
	// add r7,r29,r9
	ctx.r7.u64 = r29.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x825f3d34
	if (!ctx.cr6.eq) goto loc_825F3D34;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x825f3d38
	goto loc_825F3D38;
loc_825F3D34:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_825F3D38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825f3ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F3CA8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x825f3d64
	if (ctx.cr6.gt) goto loc_825F3D64;
loc_825F3D48:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x825f3c5c
	if (ctx.cr6.lt) goto loc_825F3C5C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825F3D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_825F3D64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x825f3d5c
	if (!ctx.cr6.gt) goto loc_825F3D5C;
	// lwz r11,1876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x826a4440
	ctx.lr = 0x825F3D84;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_825F8BD0) {
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
	ctx.lr = 0x825F8BD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x825f7fb8
	ctx.lr = 0x825F8BF4;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,28564
	ctx.r11.s64 = ctx.r11.s64 + 28564;
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x825f3918
	ctx.lr = 0x825F8C30;
	sub_825F3918(ctx, base);
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
	// beq 0x825f8c6c
	if (ctx.cr0.eq) goto loc_825F8C6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,28336
	ctx.r6.s64 = ctx.r11.s64 + 28336;
	// addi r5,r10,28600
	ctx.r5.s64 = ctx.r10.s64 + 28600;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F8C6C;
	sub_824EA978(ctx, base);
loc_825F8C6C:
	// lwz r28,1452(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F8C7C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x825f8c98
	if (ctx.cr0.eq) goto loc_825F8C98;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb078
	ctx.lr = 0x825F8C94;
	sub_825FB078(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825F8C98:
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
	ctx.lr = 0x825F8CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8CC4;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F8CD0;
	sub_825F80C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825FBB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FBB70;
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
	ctx.lr = 0x825FBB8C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fbbac
	if (ctx.cr0.eq) goto loc_825FBBAC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb538
	ctx.lr = 0x825FBBA8;
	sub_825FB538(ctx, base);
	// b 0x825fbbb0
	goto loc_825FBBB0;
loc_825FBBAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBBB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD458) {
	REX_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825fd4a4
	if (!ctx.cr6.gt) goto loc_825FD4A4;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FD470:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825fd484
	if (!ctx.cr6.lt) goto loc_825FD484;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825fd488
	goto loc_825FD488;
loc_825FD484:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825FD488:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825fd4ac
	if (ctx.cr6.eq) goto loc_825FD4AC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825fd470
	if (ctx.cr6.lt) goto loc_825FD470;
loc_825FD4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825FD4AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82607980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607988;
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
	ctx.lr = 0x826079A8;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x826079cc
	if (ctx.cr0.eq) goto loc_826079CC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f9750
	ctx.lr = 0x826079C8;
	sub_825F9750(ctx, base);
	// b 0x826079d0
	goto loc_826079D0;
loc_826079CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826079D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A4C8) {
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
	ctx.lr = 0x8260A4D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8260a648
	if (!ctx.cr0.eq) goto loc_8260A648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260a158
	ctx.lr = 0x8260A504;
	sub_8260A158(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-16464
	r27.s64 = ctx.r10.s64 + -16464;
	// bne cr6,0x8260a53c
	if (!ctx.cr6.eq) goto loc_8260A53C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16328
	ctx.r5.s64 = ctx.r11.s64 + -16328;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260A53C;
	sub_824EA978(ctx, base);
loc_8260A53C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260a554
	if (!ctx.cr6.eq) goto loc_8260A554;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	REX_STORE_U8(r29.u32 + 8, ctx.r11.u8);
	// b 0x8260a588
	goto loc_8260A588;
loc_8260A554:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8260a588
	if (ctx.cr6.eq) goto loc_8260A588;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8260a588
	if (ctx.cr6.eq) goto loc_8260A588;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16308
	ctx.r5.s64 = ctx.r11.s64 + -16308;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260A588;
	sub_824EA978(ctx, base);
loc_8260A588:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,-21368
	ctx.r10.s64 = ctx.r10.s64 + -21368;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a5d8
	if (ctx.cr0.eq) goto loc_8260A5D8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// ble cr6,0x8260a5c8
	if (!ctx.cr6.gt) goto loc_8260A5C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16348
	ctx.r5.s64 = ctx.r11.s64 + -16348;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260A5C8;
	sub_824EA978(ctx, base);
loc_8260A5C8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// b 0x8260a60c
	goto loc_8260A60C;
loc_8260A5D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8260a600
	if (!ctx.cr6.gt) goto loc_8260A600;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16368
	ctx.r5.s64 = ctx.r11.s64 + -16368;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260A600;
	sub_824EA978(ctx, base);
loc_8260A600:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(5));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8260A60C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-16720
	ctx.r10.s64 = ctx.r10.s64 + -16720;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8260a648
	if (!ctx.cr6.eq) goto loc_8260A648;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16480
	ctx.r5.s64 = ctx.r11.s64 + -16480;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260A648;
	sub_824EA978(ctx, base);
loc_8260A648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82610998) {
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
	ctx.lr = 0x826109A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r30,r4,96
	r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// li r28,1
	r28.s64 = 1;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r8,r9,8,19,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// beq 0x82610a98
	if (ctx.cr0.eq) goto loc_82610A98;
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82610a18
	if (!ctx.cr6.lt) goto loc_82610A18;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,82(r8)
	REX_STORE_U16(ctx.r8.u32 + 82, ctx.r9.u16);
	// b 0x82610a98
	goto loc_82610A98;
loc_82610A18:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r30,r9
	ctx.r10.u64 = r30.u64 + ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// sth r6,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// subfc r6,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82610a64
	if (ctx.cr6.eq) goto loc_82610A64;
	// rlwimi r8,r10,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r28.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_82610A64:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// beq cr6,0x82610a80
	if (ctx.cr6.eq) goto loc_82610A80;
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r28.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82610A80:
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r10,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addic r10,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_82610A98:
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r8,r6,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82610ad8
	if (ctx.cr6.gt) goto loc_82610AD8;
	// blt cr6,0x82610ad4
	if (ctx.cr6.lt) goto loc_82610AD4;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82610ad4
	if (ctx.cr0.eq) goto loc_82610AD4;
	// clrlwi. r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82610adc
	if (!ctx.cr0.eq) goto loc_82610ADC;
loc_82610AD4:
	// rlwinm r8,r6,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
loc_82610AD8:
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_82610ADC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82610b40
	if (ctx.cr6.eq) goto loc_82610B40;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82610af0
	if (ctx.cr6.lt) goto loc_82610AF0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82610AF0:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r6,10,27,31
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subfc r31,r31,r8
	ctx.xer.ca = ctx.r8.u32 >= r31.u32;
	r31.u64 = ctx.r8.u64 - r31.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subfe r9,r31,r31
	temp.u8 = (~r31.u32 + r31.u32 < ~r31.u32) | (~r31.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~r31.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82610b24
	if (ctx.cr6.eq) goto loc_82610B24;
	// rlwimi r5,r9,0,27,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r28.u32);
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
loc_82610B24:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x82610b40
	if (ctx.cr6.eq) goto loc_82610B40;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r28.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82610B40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82610b60
	if (ctx.cr6.eq) goto loc_82610B60;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82610b60
	if (ctx.cr6.eq) goto loc_82610B60;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// sth r29,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, r29.u16);
loc_82610B60:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r30,r10
	ctx.r11.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// srw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82623158) {
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
	ctx.lr = 0x82623160;
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
	// beq cr6,0x826233ac
	if (ctx.cr6.eq) goto loc_826233AC;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826233ac
	if (ctx.cr6.eq) goto loc_826233AC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826233ac
	if (ctx.cr6.eq) goto loc_826233AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826233ac
	if (ctx.cr6.eq) goto loc_826233AC;
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826231b8
	if (ctx.cr6.eq) goto loc_826231B8;
	// lis r30,-32764
	r30.s64 = -2147221504;
	// ori r30,r30,10
	r30.u64 = r30.u64 | 10;
	// b 0x826233b4
	goto loc_826233B4;
loc_826231B8:
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// stw r23,0(r26)
	REX_STORE_U32(r26.u32 + 0, r23.u32);
	// lwz r11,72(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 72);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826233c0
	if (ctx.cr6.eq) goto loc_826233C0;
	// lwz r11,820(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 820);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826231dc
	if (!ctx.cr6.eq) goto loc_826231DC;
	// stw r23,696(r31)
	REX_STORE_U32(r31.u32 + 696, r23.u32);
loc_826231DC:
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
	// beq cr6,0x826232bc
	if (ctx.cr6.eq) goto loc_826232BC;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262321c
	if (ctx.cr6.eq) goto loc_8262321C;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262321c
	if (ctx.cr6.eq) goto loc_8262321C;
	// bl 0x826385e8
	ctx.lr = 0x8262321C;
	sub_826385E8(ctx, base);
loc_8262321C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261e208
	ctx.lr = 0x82623224;
	sub_8261E208(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x82623260
	if (!ctx.cr6.eq) goto loc_82623260;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r28,r11,16960
	r28.u64 = ctx.r11.u64 | 16960;
loc_82623238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261df08
	ctx.lr = 0x82623240;
	sub_8261DF08(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bgt cr6,0x82623268
	if (ctx.cr6.gt) goto loc_82623268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261e208
	ctx.lr = 0x82623254;
	sub_8261E208(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x82623238
	if (ctx.cr6.eq) goto loc_82623238;
loc_82623260:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x826232b0
	if (!ctx.cr6.eq) goto loc_826232B0;
loc_82623268:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623290
	if (ctx.cr6.eq) goto loc_82623290;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623290
	if (!ctx.cr6.eq) goto loc_82623290;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826233c0
	goto loc_826233C0;
loc_82623290:
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
	// b 0x826233c0
	goto loc_826233C0;
loc_826232B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826233b4
	if (ctx.cr6.lt) goto loc_826233B4;
	// stw r23,696(r31)
	REX_STORE_U32(r31.u32 + 696, r23.u32);
loc_826232BC:
	// sth r23,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r23.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261e5b0
	ctx.lr = 0x826232D0;
	sub_8261E5B0(ctx, base);
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
	// beq cr6,0x826232fc
	if (ctx.cr6.eq) goto loc_826232FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261eec0
	ctx.lr = 0x826232F8;
	sub_8261EEC0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_826232FC:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x82623314
	if (!ctx.cr6.eq) goto loc_82623314;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261df08
	ctx.lr = 0x8262330C;
	sub_8261DF08(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826233c0
	goto loc_826233C0;
loc_82623314:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x82623368
	if (!ctx.cr6.eq) goto loc_82623368;
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
	// beq cr6,0x826233c0
	if (ctx.cr6.eq) goto loc_826233C0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826233c0
	if (ctx.cr6.eq) goto loc_826233C0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e56d8
	ctx.lr = 0x82623348;
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
	// b 0x826233c0
	goto loc_826233C0;
loc_82623368:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x82623398
	if (!ctx.cr6.eq) goto loc_82623398;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623290
	if (ctx.cr6.eq) goto loc_82623290;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623290
	if (!ctx.cr6.eq) goto loc_82623290;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x826233c0
	goto loc_826233C0;
loc_82623398:
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,72(r24)
	REX_STORE_U32(r24.u32 + 72, ctx.r11.u32);
	// blt cr6,0x826233b4
	if (ctx.cr6.lt) goto loc_826233B4;
	// b 0x826233c0
	goto loc_826233C0;
loc_826233AC:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
loc_826233B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82623428
	if (ctx.cr6.eq) goto loc_82623428;
	// stw r23,692(r31)
	REX_STORE_U32(r31.u32 + 692, r23.u32);
loc_826233C0:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826233dc
	if (!ctx.cr6.eq) goto loc_826233DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262340c
	if (ctx.cr6.eq) goto loc_8262340C;
loc_826233DC:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262340c
	if (ctx.cr6.eq) goto loc_8262340C;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8262340c
	if (!ctx.cr6.eq) goto loc_8262340C;
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
loc_8262340C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8262342c
	if (ctx.cr6.eq) goto loc_8262342C;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_82623428:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8262342C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82637EC0) {
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
	ctx.lr = 0x82637EC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r25,34(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82637f84
	if (ctx.cr6.eq) goto loc_82637F84;
	// li r26,1
	r26.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// blt cr6,0x82637f70
	if (ctx.cr6.lt) goto loc_82637F70;
	// li r30,4
	r30.s64 = 4;
loc_82637EF4:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// ble cr6,0x82637f40
	if (!ctx.cr6.gt) goto loc_82637F40;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82637f40
	if (!ctx.cr6.gt) goto loc_82637F40;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82637F0C:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82637f34
	if (ctx.cr6.eq) goto loc_82637F34;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x82637F28;
	sub_82634E78(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
loc_82637F34:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82637f0c
	if (!ctx.cr0.eq) goto loc_82637F0C;
loc_82637F40:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82637f60
	if (ctx.cr6.eq) goto loc_82637F60;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x82637F58;
	sub_82634E78(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// stwx r27,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r27.u32);
loc_82637F60:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// ble cr6,0x82637ef4
	if (!ctx.cr6.gt) goto loc_82637EF4;
loc_82637F70:
	// lwz r3,548(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82637f84
	if (ctx.cr6.eq) goto loc_82637F84;
	// bl 0x82634e78
	ctx.lr = 0x82637F80;
	sub_82634E78(ctx, base);
	// stw r27,548(r29)
	REX_STORE_U32(r29.u32 + 548, r27.u32);
loc_82637F84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8263C8D8) {
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
	ctx.lr = 0x8263C8E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// beq cr6,0x8263cae8
	if (ctx.cr6.eq) goto loc_8263CAE8;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x826e07e0
	ctx.lr = 0x8263C914;
	sub_826E07E0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263c998
	if (ctx.cr6.eq) goto loc_8263C998;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// lis r27,128
	r27.s64 = 8388608;
	// addi r28,r11,10404
	r28.s64 = ctx.r11.s64 + 10404;
loc_8263C934:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bne cr6,0x8263c948
	if (!ctx.cr6.eq) goto loc_8263C948;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8263c954
	goto loc_8263C954;
loc_8263C948:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8263c458
	ctx.lr = 0x8263C950;
	sub_8263C458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8263C954:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263c728
	ctx.lr = 0x8263C95C;
	sub_8263C728(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// ble cr6,0x8263c934
	if (!ctx.cr6.gt) goto loc_8263C934;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263c984
	if (ctx.cr6.lt) goto loc_8263C984;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8263C984:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x826e07e0
	ctx.lr = 0x8263C98C;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8263c9a4
	if (!ctx.cr6.eq) goto loc_8263C9A4;
loc_8263C998:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x8263cae8
	goto loc_8263CAE8;
loc_8263C9A4:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8263C9B8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x8263c9cc
	if (ctx.cr0.gt) goto loc_8263C9CC;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8263C9CC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8263c9d8
	if (!ctx.cr6.gt) goto loc_8263C9D8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_8263C9D8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8263c9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263C9B8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x8263c9ec
	if (ctx.cr6.gt) goto loc_8263C9EC;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8263C9EC:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8263ca0c
	if (!ctx.cr6.gt) goto loc_8263CA0C;
loc_8263C9FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8263c9fc
	if (ctx.cr6.gt) goto loc_8263C9FC;
loc_8263CA0C:
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,296(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8263ca38
	if (!ctx.cr6.gt) goto loc_8263CA38;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8263ca3c
	goto loc_8263CA3C;
loc_8263CA38:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8263CA3C:
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// stwx r7,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8263CA54:
	// lwz r8,296(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// ble cr6,0x8263cab4
	if (!ctx.cr6.gt) goto loc_8263CAB4;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r7,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8263cadc
	if (!ctx.cr6.gt) goto loc_8263CADC;
	// b 0x8263cad8
	goto loc_8263CAD8;
loc_8263CAB4:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8263cadc
	if (!ctx.cr6.lt) goto loc_8263CADC;
loc_8263CAD8:
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_8263CADC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8263ca54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263CA54;
	// stw r25,4096(r31)
	REX_STORE_U32(r31.u32 + 4096, r25.u32);
loc_8263CAE8:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 268);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
	// lwz r8,272(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 272);
	// stwx r31,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r31.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 264);
	// stwx r24,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8264C3A8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264C3B0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264C540) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-11516
	ctx.r8.s64 = ctx.r10.s64 + -11516;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r5,r6,18120
	ctx.r5.s64 = ctx.r6.s64 + 18120;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r11,18120(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18120);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264E548) {
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
	ctx.lr = 0x8264E550;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x823f0480
	ctx.lr = 0x8264E574;
	sub_823F0480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8264e5a4
	if (!ctx.cr0.eq) goto loc_8264E5A4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82794184
	ctx.lr = 0x8264E5A4;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_8264E5A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8264ED48) {
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
	ctx.lr = 0x8264ED50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x8264ebf0
	ctx.lr = 0x8264ED80;
	sub_8264EBF0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge 0x8264edbc
	if (!ctx.cr0.lt) goto loc_8264EDBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,1080(r31)
	REX_STORE_U32(r31.u32 + 1080, ctx.r11.u32);
	// b 0x8264edfc
	goto loc_8264EDFC;
loc_8264EDBC:
	// stw r28,1080(r31)
	REX_STORE_U32(r31.u32 + 1080, r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8264f6a8
	ctx.lr = 0x8264EDD8;
	sub_8264F6A8(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264EDE8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8264ede8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264EDE8;
loc_8264EDFC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82652710) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265277c
	if (ctx.cr6.eq) goto loc_8265277C;
	// lwz r9,740(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,380
	ctx.r10.s64 = ctx.r3.s64 + 380;
	// rlwinm r4,r9,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
loc_82652738:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82652758
	if (!ctx.cr6.eq) goto loc_82652758;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82652738
	if (ctx.cr6.lt) goto loc_82652738;
	// b 0x82652770
	goto loc_82652770;
loc_82652758:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_82652770:
	// bl 0x8264ffb8
	ctx.lr = 0x82652774;
	sub_8264FFB8(ctx, base);
	// rlwinm r3,r3,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// b 0x82652780
	goto loc_82652780;
loc_8265277C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82656D70) {
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
	ctx.lr = 0x82656D78;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r7,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// li r31,0
	r31.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r14,0
	r14.s64 = 0;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82656e0c
	if (ctx.cr6.eq) goto loc_82656E0C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_82656DD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// bl 0x8264fec0
	ctx.lr = 0x82656DE0;
	sub_8264FEC0(ctx, base);
	// stwu r29,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, r29.u32);
	r26.u32 = ea;
	// lwz r11,396(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 396);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// lwz r29,88(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// or r25,r11,r25
	r25.u64 = ctx.r11.u64 | r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82656dd4
	if (!ctx.cr6.eq) goto loc_82656DD4;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// b 0x82656eb4
	goto loc_82656EB4;
loc_82656E0C:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r7,536(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 536);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656E28;
	sub_826502E8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,540(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 540);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656E44;
	sub_826502E8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,544(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 544);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656E60;
	sub_826502E8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,548(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 548);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656E7C;
	sub_826502E8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r7,552(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656E98;
	sub_826502E8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r7,556(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 556);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826502e8
	ctx.lr = 0x82656EB4;
	sub_826502E8(ctx, base);
loc_82656EB4:
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r20,0
	r20.s64 = 0;
	// add r21,r10,r11
	r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r24,r1,128
	r24.s64 = ctx.r1.s64 + 128;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addi r23,r1,144
	r23.s64 = ctx.r1.s64 + 144;
	// addi r25,r19,27
	r25.s64 = r19.s64 + 27;
loc_82656ED4:
	// ld r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U64(r27.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x826571e0
	if (ctx.cr6.eq) goto loc_826571E0;
	// lhz r11,-3(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + -3);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// beq 0x82656f20
	if (ctx.cr0.eq) goto loc_82656F20;
	// lbz r11,171(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 171);
	// lbz r10,169(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 169);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82656f30
	if (ctx.cr6.lt) goto loc_82656F30;
	// lbz r11,170(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 170);
	// lbz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82657208
	if (!ctx.cr6.lt) goto loc_82657208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// b 0x82656f30
	goto loc_82656F30;
loc_82656F20:
	// lbz r11,170(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 170);
	// lbz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82657208
	if (!ctx.cr6.lt) goto loc_82657208;
loc_82656F30:
	// rlwinm. r22,r29,31,31,31
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x82656f44
	if (ctx.cr0.eq) goto loc_82656F44;
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657214
	if (!ctx.cr6.eq) goto loc_82657214;
loc_82656F44:
	// rlwinm r11,r29,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82657214
	if (ctx.cr6.eq) goto loc_82657214;
	// rlwinm r11,r29,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x82657214
	if (ctx.cr6.eq) goto loc_82657214;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// std r4,0(r23)
	REX_STORE_U64(r23.u32 + 0, ctx.r4.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8265f5e0
	ctx.lr = 0x82656F94;
	sub_8265F5E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826572ac
	if (ctx.cr0.eq) goto loc_826572AC;
	// lwz r11,-19(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -19);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r31,0(r21)
	REX_STORE_U32(r21.u32 + 0, r31.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r7,364(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r4,r29,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	// lwz r8,396(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwimi r8,r29,23,6,6
	ctx.r8.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 23) & 0x2000000) | (ctx.r8.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// lwz r6,-15(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + -15);
	// rlwinm r3,r8,0,12,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFE0FFFFF;
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// rlwinm r6,r29,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80;
	// lwz r5,-11(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + -11);
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r29,-7(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + -7);
	// stw r8,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r8.u32);
	// subfe r5,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r7.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// lbz r8,168(r19)
	ctx.r8.u64 = REX_LOAD_U8(r19.u32 + 168);
	// rlwinm r8,r8,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// rlwimi r10,r8,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwimi r9,r10,2,25,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwinm r10,r9,2,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82657054
	if (ctx.cr6.eq) goto loc_82657054;
	// rlwimi r11,r5,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// beq 0x82657054
	if (ctx.cr0.eq) goto loc_82657054;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657054:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82651168
	ctx.lr = 0x82657060;
	sub_82651168(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8265740c
	if (ctx.cr0.lt) goto loc_8265740C;
	// lwz r11,428(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 428);
	// addi r26,r30,424
	r26.s64 = r30.s64 + 424;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826570a4
	if (ctx.cr6.eq) goto loc_826570A4;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265709C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x826570a8
	goto loc_826570A8;
loc_826570A4:
	// li r29,0
	r29.s64 = 0;
loc_826570A8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8265740c
	if (ctx.cr6.lt) goto loc_8265740C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// li r18,1
	r18.s64 = 1;
	// bl 0x8265da10
	ctx.lr = 0x826570C0;
	sub_8265DA10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8265740c
	if (ctx.cr0.lt) goto loc_8265740C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r5,-1(r25)
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + -1);
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// bl 0x8265dd20
	ctx.lr = 0x826570D8;
	sub_8265DD20(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8265740c
	if (ctx.cr0.lt) goto loc_8265740C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826570fc
	if (ctx.cr6.eq) goto loc_826570FC;
	// lbz r11,171(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 171);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,171(r30)
	REX_STORE_U8(r30.u32 + 171, ctx.r11.u8);
	// b 0x82657108
	goto loc_82657108;
loc_826570FC:
	// lbz r11,170(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 170);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,170(r30)
	REX_STORE_U8(r30.u32 + 170, ctx.r11.u8);
loc_82657108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fec0
	ctx.lr = 0x82657110;
	sub_8264FEC0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8265712c
	if (!ctx.cr6.eq) goto loc_8265712C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,400(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 400);
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x8265d768
	ctx.lr = 0x82657128;
	sub_8265D768(ctx, base);
	// b 0x8265715c
	goto loc_8265715C;
loc_8265712C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265ece8
	ctx.lr = 0x82657138;
	sub_8265ECE8(ctx, base);
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// lwz r11,376(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 376);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// lwz r11,380(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 380);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// lwz r11,384(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 384);
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// lwz r11,388(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 388);
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
loc_8265715C:
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x826571a0
	if (ctx.cr6.eq) goto loc_826571A0;
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826571a0
	if (!ctx.cr6.eq) goto loc_826571A0;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x826571a0
	if (!ctx.cr6.lt) goto loc_826571A0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82657194
	if (!ctx.cr6.eq) goto loc_82657194;
	// lwz r11,740(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826571a0
	if (!ctx.cr0.eq) goto loc_826571A0;
loc_82657194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fec0
	ctx.lr = 0x8265719C;
	sub_8264FEC0(ctx, base);
	// stw r31,396(r30)
	REX_STORE_U32(r30.u32 + 396, r31.u32);
loc_826571A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82652238
	ctx.lr = 0x826571AC;
	sub_82652238(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r18,0
	r18.s64 = 0;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bl 0x82654800
	ctx.lr = 0x826571D0;
	sub_82654800(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// blt 0x8265721c
	if (ctx.cr0.lt) goto loc_8265721C;
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_826571E0:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r25,r25,42
	r25.s64 = r25.s64 + 42;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(r20.u32, 4, ctx.xer);
	// blt cr6,0x82656ed4
	if (ctx.cr6.lt) goto loc_82656ED4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826572b8
	if (!ctx.cr6.eq) goto loc_826572B8;
	// lis r29,-32747
	r29.s64 = -2146107392;
	// ori r29,r29,10
	r29.u64 = r29.u64 | 10;
	// b 0x82657220
	goto loc_82657220;
loc_82657208:
	// lis r29,-32747
	r29.s64 = -2146107392;
	// ori r29,r29,20994
	r29.u64 = r29.u64 | 20994;
	// b 0x82657220
	goto loc_82657220;
loc_82657214:
	// lis r29,-32747
	r29.s64 = -2146107392;
	// ori r29,r29,10
	r29.u64 = r29.u64 | 10;
loc_8265721C:
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82657220:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x826574e8
	if (ctx.cr6.eq) goto loc_826574E8;
	// addi r28,r30,424
	r28.s64 = r30.s64 + 424;
	// addi r27,r30,256
	r27.s64 = r30.s64 + 256;
	// li r26,0
	r26.s64 = 0;
loc_82657234:
	// addi r17,r17,-1
	r17.s64 = r17.s64 + -1;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r9,r17,r22
	ctx.r9.u64 = r17.u64 + r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x8265726c
	if (!ctx.cr6.eq) goto loc_8265726C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x8265726c
	if (!ctx.cr6.eq) goto loc_8265726C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,400(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 400);
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x8265d768
	ctx.lr = 0x8265726C;
	sub_8265D768(ctx, base);
loc_8265726C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657290
	if (ctx.cr6.eq) goto loc_82657290;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657290:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657488
	if (ctx.cr0.eq) goto loc_82657488;
	// lbz r11,171(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r30)
	REX_STORE_U8(r30.u32 + 171, ctx.r11.u8);
	// b 0x82657494
	goto loc_82657494;
loc_826572AC:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8265721c
	goto loc_8265721C;
loc_826572B8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82657340
	if (!ctx.cr6.eq) goto loc_82657340;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82653a98
	ctx.lr = 0x826572DC;
	sub_82653A98(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x826574e8
	if (ctx.cr0.lt) goto loc_826574E8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82657310
	if (ctx.cr6.eq) goto loc_82657310;
	// lwz r11,740(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657310
	if (ctx.cr0.eq) goto loc_82657310;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82656c50
	ctx.lr = 0x82657308;
	sub_82656C50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x826574e8
	if (ctx.cr0.lt) goto loc_826574E8;
loc_82657310:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82657634
	if (ctx.cr6.eq) goto loc_82657634;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_82657324:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265f6a8
	ctx.lr = 0x8265732C;
	sub_8265F6A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// bne 0x82657324
	if (!ctx.cr0.eq) goto loc_82657324;
	// b 0x82657634
	goto loc_82657634;
loc_82657340:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82657380
	if (ctx.cr6.eq) goto loc_82657380;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82657380
	if (ctx.cr6.eq) goto loc_82657380;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82657368
	if (ctx.cr6.eq) goto loc_82657368;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,1609
	r29.u64 = r29.u64 | 1609;
	// b 0x82657220
	goto loc_82657220;
loc_82657368:
	// lwz r11,740(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657380
	if (!ctx.cr0.eq) goto loc_82657380;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,4320
	r29.u64 = r29.u64 | 4320;
	// b 0x82657220
	goto loc_82657220;
loc_82657380:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8264dde8
	ctx.lr = 0x82657398;
	sub_8264DDE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826573bc
	if (ctx.cr0.eq) goto loc_826573BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x826573A8;
	sub_823EDE70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82657220
	if (ctx.cr0.lt) goto loc_82657220;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82657220
	goto loc_82657220;
loc_826573BC:
	// add r28,r17,r22
	r28.u64 = r17.u64 + r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r14,1
	r14.s64 = 1;
	// bl 0x82653a98
	ctx.lr = 0x826573E0;
	sub_82653A98(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82657460
	if (ctx.cr0.lt) goto loc_82657460;
	// lwz r11,740(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657510
	if (ctx.cr0.eq) goto loc_82657510;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82656c50
	ctx.lr = 0x82657404;
	sub_82656C50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8265750c
	if (!ctx.cr0.lt) goto loc_8265750C;
loc_8265740C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82657454
	if (ctx.cr6.eq) goto loc_82657454;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x82657444
	if (ctx.cr6.eq) goto loc_82657444;
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 428);
	// addi r11,r30,424
	ctx.r11.s64 = r30.s64 + 424;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82657444
	if (ctx.cr6.eq) goto loc_82657444;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657444:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x8265f6a8
	ctx.lr = 0x82657454;
	sub_8265F6A8(ctx, base);
loc_82657454:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8265721c
	if (ctx.cr6.eq) goto loc_8265721C;
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82657460:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8264df40
	ctx.lr = 0x82657474;
	sub_8264DF40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82657220
	if (ctx.cr0.eq) goto loc_82657220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x82657484;
	sub_823EDE70(ctx, base);
	// b 0x82657220
	goto loc_82657220;
loc_82657488:
	// lbz r11,170(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r30)
	REX_STORE_U8(r30.u32 + 170, ctx.r11.u8);
loc_82657494:
	// lwz r3,396(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826574a8
	if (!ctx.cr6.eq) goto loc_826574A8;
	// bl 0x8265f6a8
	ctx.lr = 0x826574A4;
	sub_8265F6A8(ctx, base);
	// stw r26,396(r30)
	REX_STORE_U32(r30.u32 + 396, r26.u32);
loc_826574A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8265ddd0
	ctx.lr = 0x826574B4;
	sub_8265DDD0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826522e8
	ctx.lr = 0x826574C4;
	sub_826522E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ecf8
	ctx.lr = 0x826574CC;
	sub_8265ECF8(ctx, base);
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f6a8
	ctx.lr = 0x826574D8;
	sub_8265F6A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f6a8
	ctx.lr = 0x826574E0;
	sub_8265F6A8(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82657234
	if (!ctx.cr6.eq) goto loc_82657234;
loc_826574E8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82657638
	if (ctx.cr6.eq) goto loc_82657638;
	// lwz r31,104(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_826574F4:
	// lwzu r3,-4(r31)
	ea = -4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// bl 0x8265f6a8
	ctx.lr = 0x82657500;
	sub_8265F6A8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x826574f4
	if (!ctx.cr6.eq) goto loc_826574F4;
	// b 0x82657638
	goto loc_82657638;
loc_8265750C:
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82657510:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82657634
	if (ctx.cr6.eq) goto loc_82657634;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
loc_82657524:
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x82657618
	if (ctx.cr6.lt) goto loc_82657618;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x826575e8
	if (ctx.cr6.eq) goto loc_826575E8;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r11,396
	ctx.r10.s64 = ctx.r11.s64 + 396;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r9,r30,424
	ctx.r9.s64 = r30.s64 + 424;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 428);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// beq cr6,0x8265758c
	if (ctx.cr6.eq) goto loc_8265758C;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8265758C:
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x8264df40
	ctx.lr = 0x826575A8;
	sub_8264DF40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826575b8
	if (ctx.cr0.eq) goto loc_826575B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x826575B8;
	sub_823EDE70(ctx, base);
loc_826575B8:
	// lwz r3,420(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82657618
	if (ctx.cr6.eq) goto loc_82657618;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660120
	ctx.lr = 0x826575E4;
	sub_82660120(ctx, base);
	// b 0x82657618
	goto loc_82657618;
loc_826575E8:
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r30)
	REX_STORE_U32(r30.u32 + 180, ctx.r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657618:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8265f6a8
	ctx.lr = 0x82657620;
	sub_8265F6A8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// blt cr6,0x82657524
	if (ctx.cr6.lt) goto loc_82657524;
loc_82657634:
	// li r29,0
	r29.s64 = 0;
loc_82657638:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82687240) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r3,7(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 7);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826877B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// beq cr6,0x8268782c
	if (ctx.cr6.eq) goto loc_8268782C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268781c
	if (ctx.cr6.eq) goto loc_8268781C;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r7,14(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 14);
	// rlwinm r9,r10,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r7,r7,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1F;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8268781C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8268782C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8268785c
	if (!ctx.cr6.eq) goto loc_8268785C;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8268785C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268CF38) {
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
	// bl 0x823ef5f0
	ctx.lr = 0x8268CF50;
	sub_823EF5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_8268E248) {
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
	ctx.lr = 0x8268E250;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8268e2b0
	if (ctx.cr6.eq) goto loc_8268E2B0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8268E274:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8268d968
	ctx.lr = 0x8268E280;
	sub_8268D968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e2b0
	if (ctx.cr0.eq) goto loc_8268E2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8268e2b0
	if (ctx.cr0.lt) goto loc_8268E2B0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8268e274
	if (ctx.cr6.lt) goto loc_8268E274;
loc_8268E2B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826927D0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5948(r10)
	REX_STORE_U32(ctx.r10.u32 + -5948, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82693178) {
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
	ctx.lr = 0x82693180;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r5,8
	r29.s64 = ctx.r5.s64 + 8;
	// lwz r25,72(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826931b4
	if (!ctx.cr0.eq) goto loc_826931B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269336c
	goto loc_8269336C;
loc_826931B4:
	// li r9,160
	ctx.r9.s64 = 160;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826931C4:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826931c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826931C4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82695218
	ctx.lr = 0x826931F4;
	sub_82695218(ctx, base);
	// addi r26,r31,44
	r26.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82692c48
	ctx.lr = 0x82693208;
	sub_82692C48(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r28,24(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82695ab0
	ctx.lr = 0x82693214;
	sub_82695AB0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,145
	ctx.r5.s64 = 145;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82694580
	ctx.lr = 0x82693230;
	sub_82694580(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r3,145
	ctx.r4.s64 = ctx.r3.s64 + 145;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82695338
	ctx.lr = 0x82693248;
	sub_82695338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82695680
	ctx.lr = 0x82693260;
	sub_82695680(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826958b8
	ctx.lr = 0x8269326C;
	sub_826958B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r6,r1,2192
	ctx.r6.s64 = ctx.r1.s64 + 2192;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82695498
	ctx.lr = 0x82693284;
	sub_82695498(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// addi r4,r1,2192
	ctx.r4.s64 = ctx.r1.s64 + 2192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82692ef8
	ctx.lr = 0x826932A8;
	sub_82692EF8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r5,225
	ctx.r5.s64 = 225;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x82696e30
	ctx.lr = 0x826932C8;
	sub_82696E30(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// beq cr6,0x826932f8
	if (ctx.cr6.eq) goto loc_826932F8;
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82696cd8
	ctx.lr = 0x826932F8;
	sub_82696CD8(ctx, base);
loc_826932F8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82693368
	if (ctx.cr6.eq) goto loc_82693368;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,16(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-11312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11312);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,19048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f8.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82693348
	if (!ctx.cr6.lt) goto loc_82693348;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82693348:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8269335c
	if (!ctx.cr6.gt) goto loc_8269335C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8269335C:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
loc_82693368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269336C:
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8269E190) {
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
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x8269e1c4
	if (!ctx.cr6.lt) goto loc_8269E1C4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x826a9928
	ctx.lr = 0x8269E1B4;
	sub_826A9928(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8269e1cc
	goto loc_8269E1CC;
loc_8269E1C4:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x827938a4
	ctx.lr = 0x8269E1CC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8269E1CC:
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

DEFINE_REX_FUNC(sub_8269FD40) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x826a3b68
	sub_826A3B68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A0028) {
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
	ctx.lr = 0x826A0030;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a0064
	if (!ctx.cr6.eq) goto loc_826A0064;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826a0064
	if (ctx.cr6.eq) goto loc_826A0064;
loc_826A004C:
	// bl 0x826a33d0
	ctx.lr = 0x826A0050;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A005C;
	sub_8269CB20(ctx, base);
loc_826A005C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cf0
	return;
loc_826A0064:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826a004c
	if (ctx.cr6.eq) goto loc_826A004C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826a004c
	if (ctx.cr6.eq) goto loc_826A004C;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x826a005c
	if (ctx.cr6.lt) goto loc_826A005C;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r22,0
	r22.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r23,r10,-4
	r23.s64 = ctx.r10.s64 + -4;
	// addi r24,r9,-4
	r24.s64 = ctx.r9.s64 + -4;
loc_826A00A0:
	// subf r11,r26,r28
	ctx.r11.u64 = r28.u64 - r26.u64;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x826a0154
	if (ctx.cr6.gt) goto loc_826A0154;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// ble cr6,0x826a0138
	if (!ctx.cr6.gt) goto loc_826A0138;
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
loc_826A00C8:
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bgt cr6,0x826a0100
	if (ctx.cr6.gt) goto loc_826A0100;
loc_826A00D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x826A00E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a00f4
	if (!ctx.cr6.gt) goto loc_826A00F4;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_826A00F4:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// ble cr6,0x826a00d8
	if (!ctx.cr6.gt) goto loc_826A00D8;
loc_826A0100:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x826a012c
	if (ctx.cr6.eq) goto loc_826A012C;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826A0114:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a0114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A0114;
loc_826A012C:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826a00c8
	if (ctx.cr6.gt) goto loc_826A00C8;
loc_826A0138:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r23,r23,-4
	r23.s64 = r23.s64 + -4;
	// blt 0x826a005c
	if (ctx.cr0.lt) goto loc_826A005C;
	// lwz r26,4(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r28,4(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 4);
	// b 0x826a00a0
	goto loc_826A00A0;
loc_826A0154:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x826A0170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a01a4
	if (!ctx.cr6.gt) goto loc_826A01A4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// beq cr6,0x826a01a4
	if (ctx.cr6.eq) goto loc_826A01A4;
	// subf r10,r29,r26
	ctx.r10.u64 = r26.u64 - r29.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826A018C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a018c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A018C;
loc_826A01A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x826A01B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a01e8
	if (!ctx.cr6.gt) goto loc_826A01E8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(r26.u32, r28.u32, ctx.xer);
	// beq cr6,0x826a01e8
	if (ctx.cr6.eq) goto loc_826A01E8;
	// subf r10,r28,r26
	ctx.r10.u64 = r26.u64 - r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826A01D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a01d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A01D0;
loc_826A01E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x826A01F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a022c
	if (!ctx.cr6.gt) goto loc_826A022C;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x826a022c
	if (ctx.cr6.eq) goto loc_826A022C;
	// subf r10,r28,r29
	ctx.r10.u64 = r29.u64 - r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826A0214:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a0214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A0214;
loc_826A022C:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826A0234:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// ble cr6,0x826a0268
	if (!ctx.cr6.gt) goto loc_826A0268;
loc_826A023C:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x826a0268
	if (!ctx.cr6.lt) goto loc_826A0268;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x826A0258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a023c
	if (!ctx.cr6.gt) goto loc_826A023C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bgt cr6,0x826a028c
	if (ctx.cr6.gt) goto loc_826A028C;
loc_826A0268:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826a028c
	if (ctx.cr6.gt) goto loc_826A028C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x826A0284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826a0268
	if (!ctx.cr6.gt) goto loc_826A0268;
loc_826A028C:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x826a02b0
	if (!ctx.cr6.gt) goto loc_826A02B0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x826A02A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x826a028c
	if (ctx.cr6.gt) goto loc_826A028C;
loc_826A02B0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bgt cr6,0x826a02f0
	if (ctx.cr6.gt) goto loc_826A02F0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// beq cr6,0x826a02e0
	if (ctx.cr6.eq) goto loc_826A02E0;
	// subf r10,r30,r31
	ctx.r10.u64 = r31.u64 - r30.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_826A02C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a02c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A02C8;
loc_826A02E0:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x826a0234
	if (!ctx.cr6.eq) goto loc_826A0234;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x826a0234
	goto loc_826A0234;
loc_826A02F0:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bge cr6,0x826a0328
	if (!ctx.cr6.lt) goto loc_826A0328;
loc_826A02FC:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x826a0328
	if (!ctx.cr6.gt) goto loc_826A0328;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x826A0318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a02fc
	if (ctx.cr6.eq) goto loc_826A02FC;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x826a034c
	if (ctx.cr6.lt) goto loc_826A034C;
loc_826A0328:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// ble cr6,0x826a034c
	if (!ctx.cr6.gt) goto loc_826A034C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x826A0344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a0328
	if (ctx.cr6.eq) goto loc_826A0328;
loc_826A034C:
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r26,r30
	ctx.r10.u64 = r30.u64 - r26.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a0388
	if (ctx.cr6.lt) goto loc_826A0388;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x826a0378
	if (!ctx.cr6.lt) goto loc_826A0378;
	// stw r26,4(r24)
	REX_STORE_U32(r24.u32 + 4, r26.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r30,4(r23)
	REX_STORE_U32(r23.u32 + 4, r30.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_826A0378:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x826a0138
	if (!ctx.cr6.lt) goto loc_826A0138;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x826a00a0
	goto loc_826A00A0;
loc_826A0388:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x826a039c
	if (!ctx.cr6.lt) goto loc_826A039C;
	// stwu r31,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r31.u32);
	r24.u32 = ea;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stwu r28,4(r23)
	ea = 4 + r23.u32;
	REX_STORE_U32(ea, r28.u32);
	r23.u32 = ea;
loc_826A039C:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x826a0138
	if (!ctx.cr6.lt) goto loc_826A0138;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x826a00a0
	goto loc_826A00A0;
}

DEFINE_REX_FUNC(sub_826A5FF8) {
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
	ctx.lr = 0x826A6000;
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r16,r30
	r16.u64 = r30.u64;
	// bne cr6,0x826a6050
	if (!ctx.cr6.eq) goto loc_826A6050;
loc_826A6038:
	// bl 0x826a33d0
	ctx.lr = 0x826A603C;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A6048;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a6b20
	goto loc_826A6B20;
loc_826A6050:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a60ec
	if (!ctx.cr0.eq) goto loc_826A60EC;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A6064;
	sub_826A3320(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// addi r8,r10,26400
	ctx.r8.s64 = ctx.r10.s64 + 26400;
	// beq cr6,0x826a60a0
	if (ctx.cr6.eq) goto loc_826A60A0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826a60a0
	if (ctx.cr6.eq) goto loc_826A60A0;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x826a60a4
	goto loc_826A60A4;
loc_826A60A0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_826A60A4:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a6038
	if (!ctx.cr0.eq) goto loc_826A6038;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a60dc
	if (ctx.cr6.eq) goto loc_826A60DC;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826a60dc
	if (ctx.cr6.eq) goto loc_826A60DC;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x826a60e0
	goto loc_826A60E0;
loc_826A60DC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826A60E0:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a6038
	if (!ctx.cr0.eq) goto loc_826A6038;
loc_826A60EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826a6038
	if (ctx.cr6.eq) goto loc_826A6038;
	// bl 0x8269dfa8
	ctx.lr = 0x826A60F8;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826a6aec
	if (ctx.cr6.eq) goto loc_826A6AEC;
	// bl 0x8269dfa8
	ctx.lr = 0x826A6108;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826a6aec
	if (ctx.cr6.eq) goto loc_826A6AEC;
	// lbz r29,0(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r14,r30
	r14.u64 = r30.u64;
	// beq 0x826a6ae4
	if (ctx.cr0.eq) goto loc_826A6AE4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r21,112(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
	// lis r15,-32248
	r15.s64 = -2113404928;
	// lis r20,-32248
	r20.s64 = -2113404928;
	// addi r23,r11,27400
	r23.s64 = ctx.r11.s64 + 27400;
	// addi r22,r10,28084
	r22.s64 = ctx.r10.s64 + 28084;
	// addi r17,r9,21552
	r17.s64 = ctx.r9.s64 + 21552;
loc_826A6164:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x826a6ae4
	if (ctx.cr6.lt) goto loc_826A6AE4;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x826a6190
	if (ctx.cr6.lt) goto loc_826A6190;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x826a6190
	if (ctx.cr6.gt) goto loc_826A6190;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x826a6194
	goto loc_826A6194;
loc_826A6190:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826A6194:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x826a6ac8
	if (ctx.cr6.gt) goto loc_826A6AC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a63ac
	if (ctx.cr6.eq) goto loc_826A63AC;
	// bdz 0x826a61e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A61E0;
	// bdz 0x826a6200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A6200;
	// bdz 0x826a6250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A6250;
	// bdz 0x826a629c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A629C;
	// bdz 0x826a62a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A62A4;
	// bdz 0x826a62dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A62DC;
	// b 0x826a63f8
	goto loc_826A63F8;
loc_826A61E0:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6200:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x826a6248
	if (ctx.cr6.eq) goto loc_826A6248;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x826a6240
	if (ctx.cr6.eq) goto loc_826A6240;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x826a6238
	if (ctx.cr6.eq) goto loc_826A6238;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x826a6230
	if (ctx.cr6.eq) goto loc_826A6230;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x826a6ac8
	if (!ctx.cr6.eq) goto loc_826A6AC8;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6230:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6238:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6240:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6248:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6250:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x826a6284
	if (!ctx.cr6.eq) goto loc_826A6284;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x826a6ac8
	if (!ctx.cr6.lt) goto loc_826A6AC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x826a6294
	goto loc_826A6294;
loc_826A6284:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_826A6294:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A629C:
	// li r25,0
	r25.s64 = 0;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A62A4:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x826a62cc
	if (!ctx.cr6.eq) goto loc_826A62CC;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826a6ac8
	if (!ctx.cr6.lt) goto loc_826A6AC8;
	// li r25,-1
	r25.s64 = -1;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A62CC:
	// mulli r11,r25,10
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	r25.s64 = ctx.r11.s64 + -48;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A62DC:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x826a632c
	if (ctx.cr6.eq) goto loc_826A632C;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x826a6324
	if (ctx.cr6.eq) goto loc_826A6324;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x826a6304
	if (ctx.cr6.eq) goto loc_826A6304;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x826a6ac8
	if (!ctx.cr6.eq) goto loc_826A6AC8;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6304:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x826a631c
	if (!ctx.cr6.eq) goto loc_826A631C;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A631C:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6324:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A632C:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x826a6354
	if (!ctx.cr6.eq) goto loc_826A6354;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x826a6354
	if (!ctx.cr6.eq) goto loc_826A6354;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6354:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x826a6374
	if (!ctx.cr6.eq) goto loc_826A6374;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x826a6374
	if (!ctx.cr6.eq) goto loc_826A6374;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A6374:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_826A63AC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// li r16,0
	r16.s64 = 0;
	// bl 0x826b1458
	ctx.lr = 0x826A63BC;
	sub_826B1458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a63e0
	if (ctx.cr0.eq) goto loc_826A63E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a5e90
	ctx.lr = 0x826A63D4;
	sub_826A5E90(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + r19.u32;
	r29.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x826a6038
	if (ctx.cr0.eq) goto loc_826A6038;
loc_826A63E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a5e90
	ctx.lr = 0x826A63F0;
	sub_826A5E90(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826a6ac8
	goto loc_826A6AC8;
loc_826A63F8:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x826a68f8
	if (ctx.cr6.gt) goto loc_826A68F8;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,21648
	ctx.r12.s64 = ctx.r12.s64 + 21648;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32150
	ctx.r12.s64 = -2106982400;
	// addi r12,r12,25644
	ctx.r12.s64 = ctx.r12.s64 + 25644;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826A6608;
	case 1:
		goto loc_826A68F8;
	case 2:
		goto loc_826A642C;
	case 3:
		goto loc_826A68F8;
	case 4:
		goto loc_826A6608;
	case 5:
		goto loc_826A68F8;
	case 6:
		goto loc_826A6608;
	case 7:
		goto loc_826A68F8;
	case 8:
		goto loc_826A68F8;
	case 9:
		goto loc_826A68F8;
	case 10:
		goto loc_826A68F8;
	case 11:
		goto loc_826A68F8;
	case 12:
		goto loc_826A68F8;
	case 13:
		goto loc_826A68F8;
	case 14:
		goto loc_826A68F8;
	case 15:
		goto loc_826A68F8;
	case 16:
		goto loc_826A68F8;
	case 17:
		goto loc_826A68F8;
	case 18:
		goto loc_826A6514;
	case 19:
		goto loc_826A68F8;
	case 20:
		goto loc_826A68F8;
	case 21:
		goto loc_826A68F8;
	case 22:
		goto loc_826A68F8;
	case 23:
		goto loc_826A6748;
	case 24:
		goto loc_826A68F8;
	case 25:
		goto loc_826A6498;
	case 26:
		goto loc_826A68F8;
	case 27:
		goto loc_826A68F8;
	case 28:
		goto loc_826A68F8;
	case 29:
		goto loc_826A68F8;
	case 30:
		goto loc_826A68F8;
	case 31:
		goto loc_826A68F8;
	case 32:
		goto loc_826A6614;
	case 33:
		goto loc_826A68F8;
	case 34:
		goto loc_826A643C;
	case 35:
		goto loc_826A6738;
	case 36:
		goto loc_826A6614;
	case 37:
		goto loc_826A6614;
	case 38:
		goto loc_826A6614;
	case 39:
		goto loc_826A68F8;
	case 40:
		goto loc_826A6738;
	case 41:
		goto loc_826A68F8;
	case 42:
		goto loc_826A68F8;
	case 43:
		goto loc_826A68F8;
	case 44:
		goto loc_826A68F8;
	case 45:
		goto loc_826A65CC;
	case 46:
		goto loc_826A6780;
	case 47:
		goto loc_826A6744;
	case 48:
		goto loc_826A68F8;
	case 49:
		goto loc_826A68F8;
	case 50:
		goto loc_826A6524;
	case 51:
		goto loc_826A68F8;
	case 52:
		goto loc_826A673C;
	case 53:
		goto loc_826A68F8;
	case 54:
		goto loc_826A68F8;
	case 55:
		goto loc_826A6750;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826A642C:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a643c
	if (!ctx.cr0.eq) goto loc_826A643C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_826A643C:
	// andi. r11,r27,2064
	ctx.r11.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x826a647c
	if (ctx.cr0.eq) goto loc_826A647C;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826b1450
	ctx.lr = 0x826A6468;
	sub_826B1450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a648c
	if (ctx.cr0.eq) goto loc_826A648C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x826a648c
	goto loc_826A648C;
loc_826A647C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_826A648C:
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x826a68f8
	goto loc_826A68F8;
loc_826A6498:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a64e8
	if (ctx.cr6.eq) goto loc_826A64E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a64e8
	if (ctx.cr6.eq) goto loc_826A64E8;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x826a64dc
	if (ctx.cr0.eq) goto loc_826A64DC;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x826a68f4
	goto loc_826A68F4;
loc_826A64DC:
	// lha r6,0(r11)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x826a68f4
	goto loc_826A68F4;
loc_826A64E8:
	// lwz r28,21544(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 21544);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_826A64F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826a64f4
	if (!ctx.cr6.eq) goto loc_826A64F4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_826A6508:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x826a68f4
	goto loc_826A68F4;
loc_826A6514:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a6524
	if (!ctx.cr0.eq) goto loc_826A6524;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_826A6524:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x826a6538
	if (!ctx.cr6.eq) goto loc_826A6538;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x826a653c
	goto loc_826A653C;
loc_826A6538:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_826A653C:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x826a6598
	if (ctx.cr0.eq) goto loc_826A6598;
	// bne cr6,0x826a6564
	if (!ctx.cr6.eq) goto loc_826A6564;
	// lwz r28,21548(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 21548);
loc_826A6564:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x826a6584
	goto loc_826A6584;
loc_826A6570:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826a658c
	if (ctx.cr0.eq) goto loc_826A658C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_826A6584:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826a6570
	if (!ctx.cr6.eq) goto loc_826A6570;
loc_826A658C:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x826a68f4
	goto loc_826A68F4;
loc_826A6598:
	// bne cr6,0x826a65a0
	if (!ctx.cr6.eq) goto loc_826A65A0;
	// lwz r28,21544(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 21544);
loc_826A65A0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x826a65bc
	goto loc_826A65BC;
loc_826A65A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826a65c4
	if (ctx.cr0.eq) goto loc_826A65C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826A65BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826a65a8
	if (!ctx.cr6.eq) goto loc_826A65A8;
loc_826A65C4:
	// subf r6,r28,r11
	ctx.r6.u64 = ctx.r11.u64 - r28.u64;
	// b 0x826a68f4
	goto loc_826A68F4;
loc_826A65CC:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a3040
	ctx.lr = 0x826A65E0;
	sub_826A3040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a6038
	if (ctx.cr0.eq) goto loc_826A6038;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a65f8
	if (ctx.cr0.eq) goto loc_826A65F8;
	// sth r24,0(r31)
	REX_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x826a65fc
	goto loc_826A65FC;
loc_826A65F8:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
loc_826A65FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x826a6ab4
	goto loc_826A6AB4;
loc_826A6608:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	r21.s64 = 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826A6614:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826a6630
	if (!ctx.cr6.lt) goto loc_826A6630;
	// li r25,6
	r25.s64 = 6;
	// b 0x826a6680
	goto loc_826A6680;
loc_826A6630:
	// bne cr6,0x826a6648
	if (!ctx.cr6.eq) goto loc_826A6648;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x826a6680
	if (!ctx.cr6.eq) goto loc_826A6680;
	// li r25,1
	r25.s64 = 1;
	// b 0x826a6680
	goto loc_826A6680;
loc_826A6648:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x826a6654
	if (!ctx.cr6.gt) goto loc_826A6654;
	// li r25,512
	r25.s64 = 512;
loc_826A6654:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(r25.s32, 163, ctx.xer);
	// ble cr6,0x826a6680
	if (!ctx.cr6.gt) goto loc_826A6680;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x826A6668;
	sub_8269D6A8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x826a667c
	if (ctx.cr0.eq) goto loc_826A667C;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x826a6680
	goto loc_826A6680;
loc_826A667C:
	// li r25,163
	r25.s64 = 163;
loc_826A6680:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 24);
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x826A66C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826a66e4
	if (ctx.cr0.eq) goto loc_826A66E4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x826a66e4
	if (!ctx.cr6.eq) goto loc_826A66E4;
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A66E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A66E4:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(r31.s32, 103, ctx.xer);
	// bne cr6,0x826a6708
	if (!ctx.cr6.eq) goto loc_826A6708;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826a6708
	if (!ctx.cr6.eq) goto loc_826A6708;
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A6708:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x826a671c
	if (!ctx.cr6.eq) goto loc_826A671C;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_826A671C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_826A6720:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826a6720
	if (!ctx.cr6.eq) goto loc_826A6720;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// b 0x826a6508
	goto loc_826A6508;
loc_826A6738:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_826A673C:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x826a6790
	goto loc_826A6790;
loc_826A6744:
	// li r25,8
	r25.s64 = 8;
loc_826A6748:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826a6754
	goto loc_826A6754;
loc_826A6750:
	// li r11,39
	ctx.r11.s64 = 39;
loc_826A6754:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x826a6790
	if (ctx.cr0.eq) goto loc_826A6790;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x826a6790
	goto loc_826A6790;
loc_826A6780:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x826a6790
	if (ctx.cr0.eq) goto loc_826A6790;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_826A6790:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a67a0
	if (!ctx.cr0.eq) goto loc_826A67A0;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a67b4
	if (ctx.cr0.eq) goto loc_826A67B4;
loc_826A67A0:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x826a6804
	goto loc_826A6804;
loc_826A67B4:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a67e4
	if (ctx.cr0.eq) goto loc_826A67E4;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826a67dc
	if (ctx.cr0.eq) goto loc_826A67DC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x826a6804
	goto loc_826A6804;
loc_826A67DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826a6804
	goto loc_826A6804;
loc_826A67E4:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x826a6800
	if (ctx.cr0.eq) goto loc_826A6800;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x826a6804
	goto loc_826A6804;
loc_826A6800:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_826A6804:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a681c
	if (ctx.cr0.eq) goto loc_826A681C;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x826a681c
	if (!ctx.cr6.lt) goto loc_826A681C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_826A681C:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a6830
	if (!ctx.cr0.eq) goto loc_826A6830;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a6830
	if (!ctx.cr0.eq) goto loc_826A6830;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_826A6830:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826a6840
	if (!ctx.cr6.lt) goto loc_826A6840;
	// li r25,1
	r25.s64 = 1;
	// b 0x826a6850
	goto loc_826A6850;
loc_826A6840:
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x826a6850
	if (!ctx.cr6.gt) goto loc_826A6850;
	// li r25,512
	r25.s64 = 512;
loc_826A6850:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x826a6860
	if (!ctx.cr6.eq) goto loc_826A6860;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_826A6860:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_826A6864:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x826a6878
	if (ctx.cr6.gt) goto loc_826A6878;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x826a68bc
	if (ctx.cr6.eq) goto loc_826A68BC;
loc_826A6878:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r7,r7,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x826a68ac
	if (!ctx.cr6.gt) goto loc_826A68AC;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_826A68AC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x826a6864
	goto loc_826A6864;
loc_826A68BC:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq 0x826a68f8
	if (ctx.cr0.eq) goto loc_826A68F8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826a68e8
	if (ctx.cr6.eq) goto loc_826A68E8;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x826a68f8
	if (ctx.cr6.eq) goto loc_826A68F8;
loc_826A68E8:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + r28.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r28.u32 = ea;
loc_826A68F4:
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_826A68F8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a6ab4
	if (!ctx.cr6.eq) goto loc_826A6AB4;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6948
	if (ctx.cr0.eq) goto loc_826A6948;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a691c
	if (ctx.cr0.eq) goto loc_826A691C;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x826a6928
	goto loc_826A6928;
loc_826A691C:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6938
	if (ctx.cr0.eq) goto loc_826A6938;
	// li r11,43
	ctx.r11.s64 = 43;
loc_826A6928:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x826a694c
	goto loc_826A694C;
loc_826A6938:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6948
	if (ctx.cr0.eq) goto loc_826A6948;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x826a6928
	goto loc_826A6928;
loc_826A6948:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_826A694C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// bne 0x826a6994
	if (!ctx.cr0.eq) goto loc_826A6994;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826a6994
	if (!ctx.cr6.gt) goto loc_826A6994;
loc_826A696C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826A6980;
	sub_826A5E90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826a6994
	if (ctx.cr6.eq) goto loc_826A6994;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826a696c
	if (ctx.cr6.gt) goto loc_826A696C;
loc_826A6994:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a5f28
	ctx.lr = 0x826A69A8;
	sub_826A5F28(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a69ec
	if (ctx.cr0.eq) goto loc_826A69EC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a69ec
	if (!ctx.cr0.eq) goto loc_826A69EC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826a69ec
	if (!ctx.cr6.gt) goto loc_826A69EC;
loc_826A69C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826A69D8;
	sub_826A5E90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826a69ec
	if (ctx.cr6.eq) goto loc_826A69EC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826a69c4
	if (ctx.cr6.gt) goto loc_826A69C4;
loc_826A69EC:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a6a5c
	if (ctx.cr6.eq) goto loc_826A6A5C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826a6a5c
	if (!ctx.cr6.gt) goto loc_826A6A5C;
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_826A6A08:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + r30.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826b1450
	ctx.lr = 0x826A6A20;
	sub_826B1450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a6a50
	if (!ctx.cr0.eq) goto loc_826A6A50;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826a6a50
	if (ctx.cr6.eq) goto loc_826A6A50;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x826a5f28
	ctx.lr = 0x826A6A44;
	sub_826A5F28(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x826a6a08
	if (!ctx.cr6.eq) goto loc_826A6A08;
	// b 0x826a6a6c
	goto loc_826A6A6C;
loc_826A6A50:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x826a6a70
	goto loc_826A6A70;
loc_826A6A5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a5f28
	ctx.lr = 0x826A6A6C;
	sub_826A5F28(ctx, base);
loc_826A6A6C:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826A6A70:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x826a6ab4
	if (ctx.cr6.lt) goto loc_826A6AB4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6ab4
	if (ctx.cr0.eq) goto loc_826A6AB4;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826a6ab4
	if (!ctx.cr6.gt) goto loc_826A6AB4;
loc_826A6A8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826A6AA0;
	sub_826A5E90(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x826a6ab4
	if (ctx.cr6.eq) goto loc_826A6AB4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826a6a8c
	if (ctx.cr6.gt) goto loc_826A6A8C;
loc_826A6AB4:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x826a6ac8
	if (ctx.cr6.eq) goto loc_826A6AC8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8269d770
	ctx.lr = 0x826A6AC4;
	sub_8269D770(ctx, base);
	// li r14,0
	r14.s64 = 0;
loc_826A6AC8:
	// lbz r29,1(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826a6ae4
	if (ctx.cr0.eq) goto loc_826A6AE4;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826a6164
	goto loc_826A6164;
loc_826A6AE4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x826a6b20
	goto loc_826A6B20;
loc_826A6AEC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8269d1a8
	ctx.lr = 0x826A6B00;
	sub_8269D1A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826a6b14
	if (!ctx.cr6.eq) goto loc_826A6B14;
	// li r31,511
	r31.s64 = 511;
	// stb r30,1167(r1)
	REX_STORE_U8(ctx.r1.u32 + 1167, r30.u8);
loc_826A6B14:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x823ecbd8
	ctx.lr = 0x826A6B1C;
	sub_823ECBD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826A6B20:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82709D70) {
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
	ctx.lr = 0x82709D78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,15504(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8270a4cc
	if (!ctx.cr6.eq) goto loc_8270A4CC;
	// li r30,8
	r30.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82709e18
	if (!ctx.cr6.lt) goto loc_82709E18;
loc_82709DC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82709e18
	if (ctx.cr6.eq) goto loc_82709E18;
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
	// bge 0x82709e08
	if (!ctx.cr0.lt) goto loc_82709E08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709E08;
	sub_82725E38(ctx, base);
loc_82709E08:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82709dc0
	if (ctx.cr6.gt) goto loc_82709DC0;
loc_82709E18:
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
	// bge 0x82709e50
	if (!ctx.cr0.lt) goto loc_82709E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709E50;
	sub_82725E38(ctx, base);
loc_82709E50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82709ecc
	if (!ctx.cr6.lt) goto loc_82709ECC;
loc_82709E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82709ecc
	if (ctx.cr6.eq) goto loc_82709ECC;
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
	// bge 0x82709ebc
	if (!ctx.cr0.lt) goto loc_82709EBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709EBC;
	sub_82725E38(ctx, base);
loc_82709EBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82709e74
	if (ctx.cr6.gt) goto loc_82709E74;
loc_82709ECC:
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
	// bge 0x82709f04
	if (!ctx.cr0.lt) goto loc_82709F04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709F04;
	sub_82725E38(ctx, base);
loc_82709F04:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
loc_82709F0C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82709f80
	if (!ctx.cr6.lt) goto loc_82709F80;
loc_82709F28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82709f80
	if (ctx.cr6.eq) goto loc_82709F80;
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
	// bge 0x82709f70
	if (!ctx.cr0.lt) goto loc_82709F70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709F70;
	sub_82725E38(ctx, base);
loc_82709F70:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82709f28
	if (ctx.cr6.gt) goto loc_82709F28;
loc_82709F80:
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
	// bge 0x82709fb8
	if (!ctx.cr0.lt) goto loc_82709FB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82709FB8;
	sub_82725E38(ctx, base);
loc_82709FB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82709f0c
	if (ctx.cr6.eq) goto loc_82709F0C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270a03c
	if (!ctx.cr6.lt) goto loc_8270A03C;
loc_82709FE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a03c
	if (ctx.cr6.eq) goto loc_8270A03C;
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
	// bge 0x8270a02c
	if (!ctx.cr0.lt) goto loc_8270A02C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A02C;
	sub_82725E38(ctx, base);
loc_8270A02C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82709fe4
	if (ctx.cr6.gt) goto loc_82709FE4;
loc_8270A03C:
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
	// bge 0x8270a074
	if (!ctx.cr0.lt) goto loc_8270A074;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A074;
	sub_82725E38(ctx, base);
loc_8270A074:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82708030
	ctx.lr = 0x8270A098;
	sub_82708030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270b89c
	if (!ctx.cr6.eq) goto loc_8270B89C;
	// lwz r10,22284(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 22284);
	// li r27,1
	r27.s64 = 1;
	// lwz r11,22280(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 22280);
	// lwz r9,22104(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 22104);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8270a0d4
	if (ctx.cr6.gt) goto loc_8270A0D4;
	// lwz r9,22120(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 22120);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8270a0d4
	if (ctx.cr6.gt) goto loc_8270A0D4;
	// lwz r11,22124(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 22124);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8270a14c
	if (!ctx.cr6.gt) goto loc_8270A14C;
loc_8270A0D4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826fb050
	ctx.lr = 0x8270A0DC;
	sub_826FB050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270a0f0
	if (!ctx.cr6.eq) goto loc_8270A0F0;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270A0F0:
	// lwz r11,22284(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 22284);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,22280(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 22280);
	// stw r27,3700(r24)
	REX_STORE_U32(r24.u32 + 3700, r27.u32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,22104(r24)
	REX_STORE_U32(r24.u32 + 22104, ctx.r9.u32);
	// stw r10,22120(r24)
	REX_STORE_U32(r24.u32 + 22120, ctx.r10.u32);
	// stw r11,22124(r24)
	REX_STORE_U32(r24.u32 + 22124, ctx.r11.u32);
	// bl 0x8271c770
	ctx.lr = 0x8270A114;
	sub_8271C770(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,22284(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 22284);
	// lwz r4,22280(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 22280);
	// bl 0x8271d7f8
	ctx.lr = 0x8270A124;
	sub_8271D7F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270b89c
	if (!ctx.cr6.eq) goto loc_8270B89C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,22284(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 22284);
	// lwz r4,22280(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 22280);
	// bl 0x8271e178
	ctx.lr = 0x8270A13C;
	sub_8271E178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270b89c
	if (!ctx.cr6.eq) goto loc_8270B89C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82719270
	ctx.lr = 0x8270A14C;
	sub_82719270(ctx, base);
loc_8270A14C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270a1d4
	if (ctx.cr6.eq) goto loc_8270A1D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270a1b0
	if (!ctx.cr6.lt) goto loc_8270A1B0;
loc_8270A170:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a1b0
	if (ctx.cr6.eq) goto loc_8270A1B0;
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
	// bge 0x8270a1a0
	if (!ctx.cr0.lt) goto loc_8270A1A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A1A0;
	sub_82725E38(ctx, base);
loc_8270A1A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a170
	if (ctx.cr6.gt) goto loc_8270A170;
loc_8270A1B0:
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
	// bge 0x8270a1d4
	if (!ctx.cr0.lt) goto loc_8270A1D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A1D4;
	sub_82725E38(ctx, base);
loc_8270A1D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82725f80
	ctx.lr = 0x8270A1E4;
	sub_82725F80(ctx, base);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270a258
	if (!ctx.cr6.lt) goto loc_8270A258;
loc_8270A200:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a258
	if (ctx.cr6.eq) goto loc_8270A258;
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
	// bge 0x8270a248
	if (!ctx.cr0.lt) goto loc_8270A248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A248;
	sub_82725E38(ctx, base);
loc_8270A248:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a200
	if (ctx.cr6.gt) goto loc_8270A200;
loc_8270A258:
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
	// bge 0x8270a290
	if (!ctx.cr0.lt) goto loc_8270A290;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A290;
	sub_82725E38(ctx, base);
loc_8270A290:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270a30c
	if (!ctx.cr6.lt) goto loc_8270A30C;
loc_8270A2B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a30c
	if (ctx.cr6.eq) goto loc_8270A30C;
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
	// bge 0x8270a2fc
	if (!ctx.cr0.lt) goto loc_8270A2FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A2FC;
	sub_82725E38(ctx, base);
loc_8270A2FC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a2b4
	if (ctx.cr6.gt) goto loc_8270A2B4;
loc_8270A30C:
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
	// bge 0x8270a344
	if (!ctx.cr0.lt) goto loc_8270A344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A344;
	sub_82725E38(ctx, base);
loc_8270A344:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
loc_8270A34C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270a3c0
	if (!ctx.cr6.lt) goto loc_8270A3C0;
loc_8270A368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a3c0
	if (ctx.cr6.eq) goto loc_8270A3C0;
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
	// bge 0x8270a3b0
	if (!ctx.cr0.lt) goto loc_8270A3B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A3B0;
	sub_82725E38(ctx, base);
loc_8270A3B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a368
	if (ctx.cr6.gt) goto loc_8270A368;
loc_8270A3C0:
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
	// bge 0x8270a3f8
	if (!ctx.cr0.lt) goto loc_8270A3F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A3F8;
	sub_82725E38(ctx, base);
loc_8270A3F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8270a34c
	if (ctx.cr6.eq) goto loc_8270A34C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8270a47c
	if (!ctx.cr6.lt) goto loc_8270A47C;
loc_8270A424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a47c
	if (ctx.cr6.eq) goto loc_8270A47C;
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
	// bge 0x8270a46c
	if (!ctx.cr0.lt) goto loc_8270A46C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A46C;
	sub_82725E38(ctx, base);
loc_8270A46C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a424
	if (ctx.cr6.gt) goto loc_8270A424;
loc_8270A47C:
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
	// bge 0x8270a4b4
	if (!ctx.cr0.lt) goto loc_8270A4B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A4B4;
	sub_82725E38(ctx, base);
loc_8270A4B4:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82701bf0
	ctx.lr = 0x8270A4C4;
	sub_82701BF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270A4CC:
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270a530
	if (!ctx.cr6.lt) goto loc_8270A530;
loc_8270A4D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a530
	if (ctx.cr6.eq) goto loc_8270A530;
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
	// bge 0x8270a520
	if (!ctx.cr0.lt) goto loc_8270A520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A520;
	sub_82725E38(ctx, base);
loc_8270A520:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a4d8
	if (ctx.cr6.gt) goto loc_8270A4D8;
loc_8270A530:
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
	// bge 0x8270a568
	if (!ctx.cr0.lt) goto loc_8270A568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A568;
	sub_82725E38(ctx, base);
loc_8270A568:
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270a57c
	if (!ctx.cr6.eq) goto loc_8270A57C;
	// stw r23,3932(r24)
	REX_STORE_U32(r24.u32 + 3932, r23.u32);
	// b 0x8270a59c
	goto loc_8270A59C;
loc_8270A57C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8270a58c
	if (!ctx.cr6.eq) goto loc_8270A58C;
	// stw r27,3932(r24)
	REX_STORE_U32(r24.u32 + 3932, r27.u32);
	// b 0x8270a59c
	goto loc_8270A59C;
loc_8270A58C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8270a59c
	if (!ctx.cr6.eq) goto loc_8270A59C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3932(r24)
	REX_STORE_U32(r24.u32 + 3932, ctx.r11.u32);
loc_8270A59C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270a610
	if (!ctx.cr6.lt) goto loc_8270A610;
loc_8270A5B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a610
	if (ctx.cr6.eq) goto loc_8270A610;
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
	// bge 0x8270a600
	if (!ctx.cr0.lt) goto loc_8270A600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A600;
	sub_82725E38(ctx, base);
loc_8270A600:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a5b8
	if (ctx.cr6.gt) goto loc_8270A5B8;
loc_8270A610:
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
	// bge 0x8270a648
	if (!ctx.cr0.lt) goto loc_8270A648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A648;
	sub_82725E38(ctx, base);
loc_8270A648:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r28,3948(r24)
	REX_STORE_U32(r24.u32 + 3948, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270a6c0
	if (!ctx.cr6.lt) goto loc_8270A6C0;
loc_8270A668:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a6c0
	if (ctx.cr6.eq) goto loc_8270A6C0;
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
	// bge 0x8270a6b0
	if (!ctx.cr0.lt) goto loc_8270A6B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A6B0;
	sub_82725E38(ctx, base);
loc_8270A6B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a668
	if (ctx.cr6.gt) goto loc_8270A668;
loc_8270A6C0:
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
	// bge 0x8270a6f8
	if (!ctx.cr0.lt) goto loc_8270A6F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A6F8;
	sub_82725E38(ctx, base);
loc_8270A6F8:
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// lwz r10,3960(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 3960);
	// stw r30,15332(r24)
	REX_STORE_U32(r24.u32 + 15332, r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r11,3964(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3964);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8270b898
	if (!ctx.cr6.eq) goto loc_8270B898;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8270a78c
	if (!ctx.cr6.lt) goto loc_8270A78C;
loc_8270A734:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a78c
	if (ctx.cr6.eq) goto loc_8270A78C;
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
	// bge 0x8270a77c
	if (!ctx.cr0.lt) goto loc_8270A77C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A77C;
	sub_82725E38(ctx, base);
loc_8270A77C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a734
	if (ctx.cr6.gt) goto loc_8270A734;
loc_8270A78C:
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
	// bge 0x8270a7c4
	if (!ctx.cr0.lt) goto loc_8270A7C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A7C4;
	sub_82725E38(ctx, base);
loc_8270A7C4:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// stw r28,3680(r24)
	REX_STORE_U32(r24.u32 + 3680, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8270a83c
	if (!ctx.cr6.lt) goto loc_8270A83C;
loc_8270A7E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a83c
	if (ctx.cr6.eq) goto loc_8270A83C;
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
	// bge 0x8270a82c
	if (!ctx.cr0.lt) goto loc_8270A82C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A82C;
	sub_82725E38(ctx, base);
loc_8270A82C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a7e4
	if (ctx.cr6.gt) goto loc_8270A7E4;
loc_8270A83C:
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
	// bge 0x8270a874
	if (!ctx.cr0.lt) goto loc_8270A874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A874;
	sub_82725E38(ctx, base);
loc_8270A874:
	// lwz r11,3680(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3680);
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,3924(r24)
	REX_STORE_U32(r24.u32 + 3924, r27.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,3684(r24)
	REX_STORE_U32(r24.u32 + 3684, ctx.r10.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// stw r9,3680(r24)
	REX_STORE_U32(r24.u32 + 3680, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270a908
	if (!ctx.cr6.lt) goto loc_8270A908;
loc_8270A8B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a908
	if (ctx.cr6.eq) goto loc_8270A908;
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
	// bge 0x8270a8f8
	if (!ctx.cr0.lt) goto loc_8270A8F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A8F8;
	sub_82725E38(ctx, base);
loc_8270A8F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a8b0
	if (ctx.cr6.gt) goto loc_8270A8B0;
loc_8270A908:
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
	// bge 0x8270a940
	if (!ctx.cr0.lt) goto loc_8270A940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A940;
	sub_82725E38(ctx, base);
loc_8270A940:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r28,3916(r24)
	REX_STORE_U32(r24.u32 + 3916, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270a9b8
	if (!ctx.cr6.lt) goto loc_8270A9B8;
loc_8270A960:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a9b8
	if (ctx.cr6.eq) goto loc_8270A9B8;
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
	// bge 0x8270a9a8
	if (!ctx.cr0.lt) goto loc_8270A9A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A9A8;
	sub_82725E38(ctx, base);
loc_8270A9A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270a960
	if (ctx.cr6.gt) goto loc_8270A960;
loc_8270A9B8:
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
	// bge 0x8270a9f0
	if (!ctx.cr0.lt) goto loc_8270A9F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270A9F0;
	sub_82725E38(ctx, base);
loc_8270A9F0:
	// stw r28,3908(r24)
	REX_STORE_U32(r24.u32 + 3908, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270aa68
	if (!ctx.cr6.lt) goto loc_8270AA68;
loc_8270AA10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270aa68
	if (ctx.cr6.eq) goto loc_8270AA68;
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
	// bge 0x8270aa58
	if (!ctx.cr0.lt) goto loc_8270AA58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AA58;
	sub_82725E38(ctx, base);
loc_8270AA58:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270aa10
	if (ctx.cr6.gt) goto loc_8270AA10;
loc_8270AA68:
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
	// bge 0x8270aaa0
	if (!ctx.cr0.lt) goto loc_8270AAA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AAA0;
	sub_82725E38(ctx, base);
loc_8270AAA0:
	// stw r28,14852(r24)
	REX_STORE_U32(r24.u32 + 14852, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ab18
	if (!ctx.cr6.lt) goto loc_8270AB18;
loc_8270AAC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ab18
	if (ctx.cr6.eq) goto loc_8270AB18;
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
	// bge 0x8270ab08
	if (!ctx.cr0.lt) goto loc_8270AB08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AB08;
	sub_82725E38(ctx, base);
loc_8270AB08:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270aac0
	if (ctx.cr6.gt) goto loc_8270AAC0;
loc_8270AB18:
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
	// bge 0x8270ab50
	if (!ctx.cr0.lt) goto loc_8270AB50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AB50;
	sub_82725E38(ctx, base);
loc_8270AB50:
	// stw r28,1788(r24)
	REX_STORE_U32(r24.u32 + 1788, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270abc8
	if (!ctx.cr6.lt) goto loc_8270ABC8;
loc_8270AB70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270abc8
	if (ctx.cr6.eq) goto loc_8270ABC8;
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
	// bge 0x8270abb8
	if (!ctx.cr0.lt) goto loc_8270ABB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ABB8;
	sub_82725E38(ctx, base);
loc_8270ABB8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ab70
	if (ctx.cr6.gt) goto loc_8270AB70;
loc_8270ABC8:
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
	// bge 0x8270ac00
	if (!ctx.cr0.lt) goto loc_8270AC00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AC00;
	sub_82725E38(ctx, base);
loc_8270AC00:
	// stw r28,1792(r24)
	REX_STORE_U32(r24.u32 + 1792, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ac78
	if (!ctx.cr6.lt) goto loc_8270AC78;
loc_8270AC20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ac78
	if (ctx.cr6.eq) goto loc_8270AC78;
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
	// bge 0x8270ac68
	if (!ctx.cr0.lt) goto loc_8270AC68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AC68;
	sub_82725E38(ctx, base);
loc_8270AC68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ac20
	if (ctx.cr6.gt) goto loc_8270AC20;
loc_8270AC78:
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
	// bge 0x8270acb0
	if (!ctx.cr0.lt) goto loc_8270ACB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ACB0;
	sub_82725E38(ctx, base);
loc_8270ACB0:
	// stw r28,21792(r24)
	REX_STORE_U32(r24.u32 + 21792, r28.u32);
	// li r30,2
	r30.s64 = 2;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270ad28
	if (!ctx.cr6.lt) goto loc_8270AD28;
loc_8270ACD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ad28
	if (ctx.cr6.eq) goto loc_8270AD28;
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
	// bge 0x8270ad18
	if (!ctx.cr0.lt) goto loc_8270AD18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AD18;
	sub_82725E38(ctx, base);
loc_8270AD18:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270acd0
	if (ctx.cr6.gt) goto loc_8270ACD0;
loc_8270AD28:
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
	// bge 0x8270ad60
	if (!ctx.cr0.lt) goto loc_8270AD60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AD60;
	sub_82725E38(ctx, base);
loc_8270AD60:
	// stw r28,4008(r24)
	REX_STORE_U32(r24.u32 + 4008, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270add8
	if (!ctx.cr6.lt) goto loc_8270ADD8;
loc_8270AD80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270add8
	if (ctx.cr6.eq) goto loc_8270ADD8;
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
	// bge 0x8270adc8
	if (!ctx.cr0.lt) goto loc_8270ADC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270ADC8;
	sub_82725E38(ctx, base);
loc_8270ADC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ad80
	if (ctx.cr6.gt) goto loc_8270AD80;
loc_8270ADD8:
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
	// bge 0x8270ae10
	if (!ctx.cr0.lt) goto loc_8270AE10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AE10;
	sub_82725E38(ctx, base);
loc_8270AE10:
	// stw r28,436(r24)
	REX_STORE_U32(r24.u32 + 436, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270ae88
	if (!ctx.cr6.lt) goto loc_8270AE88;
loc_8270AE30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ae88
	if (ctx.cr6.eq) goto loc_8270AE88;
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
	// bge 0x8270ae78
	if (!ctx.cr0.lt) goto loc_8270AE78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AE78;
	sub_82725E38(ctx, base);
loc_8270AE78:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ae30
	if (ctx.cr6.gt) goto loc_8270AE30;
loc_8270AE88:
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
	// bge 0x8270aec0
	if (!ctx.cr0.lt) goto loc_8270AEC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AEC0;
	sub_82725E38(ctx, base);
loc_8270AEC0:
	// stw r28,396(r24)
	REX_STORE_U32(r24.u32 + 396, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270af38
	if (!ctx.cr6.lt) goto loc_8270AF38;
loc_8270AEE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270af38
	if (ctx.cr6.eq) goto loc_8270AF38;
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
	// bge 0x8270af28
	if (!ctx.cr0.lt) goto loc_8270AF28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AF28;
	sub_82725E38(ctx, base);
loc_8270AF28:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270aee0
	if (ctx.cr6.gt) goto loc_8270AEE0;
loc_8270AF38:
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
	// bge 0x8270af70
	if (!ctx.cr0.lt) goto loc_8270AF70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AF70;
	sub_82725E38(ctx, base);
loc_8270AF70:
	// stw r30,2996(r24)
	REX_STORE_U32(r24.u32 + 2996, r30.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270afe8
	if (!ctx.cr6.lt) goto loc_8270AFE8;
loc_8270AF90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270afe8
	if (ctx.cr6.eq) goto loc_8270AFE8;
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
	// bge 0x8270afd8
	if (!ctx.cr0.lt) goto loc_8270AFD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270AFD8;
	sub_82725E38(ctx, base);
loc_8270AFD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270af90
	if (ctx.cr6.gt) goto loc_8270AF90;
loc_8270AFE8:
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
	// bge 0x8270b020
	if (!ctx.cr0.lt) goto loc_8270B020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B020;
	sub_82725E38(ctx, base);
loc_8270B020:
	// stw r28,3956(r24)
	REX_STORE_U32(r24.u32 + 3956, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b098
	if (!ctx.cr6.lt) goto loc_8270B098;
loc_8270B040:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b098
	if (ctx.cr6.eq) goto loc_8270B098;
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
	// bge 0x8270b088
	if (!ctx.cr0.lt) goto loc_8270B088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B088;
	sub_82725E38(ctx, base);
loc_8270B088:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b040
	if (ctx.cr6.gt) goto loc_8270B040;
loc_8270B098:
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
	// bge 0x8270b0d0
	if (!ctx.cr0.lt) goto loc_8270B0D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B0D0;
	sub_82725E38(ctx, base);
loc_8270B0D0:
	// stw r28,14824(r24)
	REX_STORE_U32(r24.u32 + 14824, r28.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8270b148
	if (!ctx.cr6.lt) goto loc_8270B148;
loc_8270B0F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b148
	if (ctx.cr6.eq) goto loc_8270B148;
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
	// bge 0x8270b138
	if (!ctx.cr0.lt) goto loc_8270B138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B138;
	sub_82725E38(ctx, base);
loc_8270B138:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b0f0
	if (ctx.cr6.gt) goto loc_8270B0F0;
loc_8270B148:
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
	// bge 0x8270b180
	if (!ctx.cr0.lt) goto loc_8270B180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B180;
	sub_82725E38(ctx, base);
loc_8270B180:
	// stw r28,14804(r24)
	REX_STORE_U32(r24.u32 + 14804, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b1f8
	if (!ctx.cr6.lt) goto loc_8270B1F8;
loc_8270B1A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b1f8
	if (ctx.cr6.eq) goto loc_8270B1F8;
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
	// bge 0x8270b1e8
	if (!ctx.cr0.lt) goto loc_8270B1E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B1E8;
	sub_82725E38(ctx, base);
loc_8270B1E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b1a0
	if (ctx.cr6.gt) goto loc_8270B1A0;
loc_8270B1F8:
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
	// bge 0x8270b230
	if (!ctx.cr0.lt) goto loc_8270B230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B230;
	sub_82725E38(ctx, base);
loc_8270B230:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,3460(r24)
	REX_STORE_U32(r24.u32 + 3460, r30.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8270b2f8
	if (ctx.cr6.eq) goto loc_8270B2F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b2b0
	if (!ctx.cr6.lt) goto loc_8270B2B0;
loc_8270B258:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b2b0
	if (ctx.cr6.eq) goto loc_8270B2B0;
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
	// bge 0x8270b2a0
	if (!ctx.cr0.lt) goto loc_8270B2A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B2A0;
	sub_82725E38(ctx, base);
loc_8270B2A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b258
	if (ctx.cr6.gt) goto loc_8270B258;
loc_8270B2B0:
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
	// bge 0x8270b2e8
	if (!ctx.cr0.lt) goto loc_8270B2E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B2E8;
	sub_82725E38(ctx, base);
loc_8270B2E8:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// stw r30,3452(r24)
	REX_STORE_U32(r24.u32 + 3452, r30.u32);
	// stw r11,22452(r24)
	REX_STORE_U32(r24.u32 + 22452, ctx.r11.u32);
	// b 0x8270b398
	goto loc_8270B398;
loc_8270B2F8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b358
	if (!ctx.cr6.lt) goto loc_8270B358;
loc_8270B300:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b358
	if (ctx.cr6.eq) goto loc_8270B358;
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
	// bge 0x8270b348
	if (!ctx.cr0.lt) goto loc_8270B348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B348;
	sub_82725E38(ctx, base);
loc_8270B348:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b300
	if (ctx.cr6.gt) goto loc_8270B300;
loc_8270B358:
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
	// bge 0x8270b390
	if (!ctx.cr0.lt) goto loc_8270B390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B390;
	sub_82725E38(ctx, base);
loc_8270B390:
	// stw r30,3464(r24)
	REX_STORE_U32(r24.u32 + 3464, r30.u32);
	// stw r30,22452(r24)
	REX_STORE_U32(r24.u32 + 22452, r30.u32);
loc_8270B398:
	// lwz r11,3460(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b3b4
	if (!ctx.cr6.eq) goto loc_8270B3B4;
	// lwz r11,3464(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// beq cr6,0x8270b3b8
	if (ctx.cr6.eq) goto loc_8270B3B8;
loc_8270B3B4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8270B3B8:
	// stw r11,3456(r24)
	REX_STORE_U32(r24.u32 + 3456, ctx.r11.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b430
	if (!ctx.cr6.lt) goto loc_8270B430;
loc_8270B3D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b430
	if (ctx.cr6.eq) goto loc_8270B430;
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
	// bge 0x8270b420
	if (!ctx.cr0.lt) goto loc_8270B420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B420;
	sub_82725E38(ctx, base);
loc_8270B420:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b3d8
	if (ctx.cr6.gt) goto loc_8270B3D8;
loc_8270B430:
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
	// bge 0x8270b468
	if (!ctx.cr0.lt) goto loc_8270B468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B468;
	sub_82725E38(ctx, base);
loc_8270B468:
	// lwz r11,15332(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15332);
	// stw r30,3468(r24)
	REX_STORE_U32(r24.u32 + 3468, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b534
	if (!ctx.cr6.eq) goto loc_8270B534;
	// lwz r11,3932(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b508
	if (!ctx.cr6.eq) goto loc_8270B508;
	// lwz r11,3908(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,1788(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,1792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1792);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,3956(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,21792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 21792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,3916(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,14852(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,4008(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,14804(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,14824(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8270b524
	goto loc_8270B524;
loc_8270B508:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270b534
	if (!ctx.cr6.eq) goto loc_8270B534;
	// lwz r11,3908(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b528
	if (!ctx.cr6.eq) goto loc_8270B528;
	// lwz r11,1788(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_8270B524:
	// beq cr6,0x8270b534
	if (ctx.cr6.eq) goto loc_8270B534;
loc_8270B528:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270B534:
	// lwz r11,14804(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14804);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r9,3948(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// addi r8,r10,26648
	ctx.r8.s64 = ctx.r10.s64 + 26648;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,14808(r24)
	REX_STORE_U32(r24.u32 + 14808, ctx.r6.u32);
	// beq cr6,0x8270b560
	if (ctx.cr6.eq) goto loc_8270B560;
	// stw r23,3972(r24)
	REX_STORE_U32(r24.u32 + 3972, r23.u32);
	// stw r23,3908(r24)
	REX_STORE_U32(r24.u32 + 3908, r23.u32);
loc_8270B560:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8271ab38
	ctx.lr = 0x8270B56C;
	sub_8271AB38(ctx, base);
	// lwz r11,1788(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1788);
	// stw r23,444(r24)
	REX_STORE_U32(r24.u32 + 444, r23.u32);
	// stw r23,3912(r24)
	REX_STORE_U32(r24.u32 + 3912, r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270b5b4
	if (ctx.cr6.eq) goto loc_8270B5B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8271aba0
	ctx.lr = 0x8270B58C;
	sub_8271ABA0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8271acd0
	ctx.lr = 0x8270B594;
	sub_8271ACD0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8271ae38
	ctx.lr = 0x8270B59C;
	sub_8271AE38(ctx, base);
	// lwz r9,1988(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 1988);
	// lwz r8,3204(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 3204);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r10,r11,23600
	ctx.r10.s64 = ctx.r11.s64 + 23600;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// stw r10,3180(r24)
	REX_STORE_U32(r24.u32 + 3180, ctx.r10.u32);
loc_8270B5B4:
	// lwz r11,15332(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270b684
	if (ctx.cr6.eq) goto loc_8270B684;
	// lwz r11,3908(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,396(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3916(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,21792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 21792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,14852(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,1792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,4008(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,436(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3956(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,14824(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3460(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3452(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// lwz r11,3464(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b678
	if (!ctx.cr6.eq) goto loc_8270B678;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82707bf0
	ctx.lr = 0x8270B670;
	sub_82707BF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270B678:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270B684:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,3388(r24)
	REX_STORE_U32(r24.u32 + 3388, r27.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b6fc
	if (!ctx.cr6.lt) goto loc_8270B6FC;
loc_8270B6A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b6fc
	if (ctx.cr6.eq) goto loc_8270B6FC;
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
	// bge 0x8270b6ec
	if (!ctx.cr0.lt) goto loc_8270B6EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B6EC;
	sub_82725E38(ctx, base);
loc_8270B6EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b6a4
	if (ctx.cr6.gt) goto loc_8270B6A4;
loc_8270B6FC:
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
	// bge 0x8270b734
	if (!ctx.cr0.lt) goto loc_8270B734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B734;
	sub_82725E38(ctx, base);
loc_8270B734:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270b758
	if (!ctx.cr6.eq) goto loc_8270B758;
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8270b758
	if (!ctx.cr6.eq) goto loc_8270B758;
	// stw r27,3396(r24)
	REX_STORE_U32(r24.u32 + 3396, r27.u32);
	// stw r23,3392(r24)
	REX_STORE_U32(r24.u32 + 3392, r23.u32);
	// stw r23,3388(r24)
	REX_STORE_U32(r24.u32 + 3388, r23.u32);
loc_8270B758:
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(r22.u32, 5, ctx.xer);
	// bne cr6,0x8270b88c
	if (!ctx.cr6.eq) goto loc_8270B88C;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b7d4
	if (!ctx.cr6.lt) goto loc_8270B7D4;
loc_8270B77C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b7d4
	if (ctx.cr6.eq) goto loc_8270B7D4;
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
	// bge 0x8270b7c4
	if (!ctx.cr0.lt) goto loc_8270B7C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B7C4;
	sub_82725E38(ctx, base);
loc_8270B7C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b77c
	if (ctx.cr6.gt) goto loc_8270B77C;
loc_8270B7D4:
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
	// bge 0x8270b80c
	if (!ctx.cr0.lt) goto loc_8270B80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B80C;
	sub_82725E38(ctx, base);
loc_8270B80C:
	// stw r29,21796(r24)
	REX_STORE_U32(r24.u32 + 21796, r29.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270b868
	if (!ctx.cr6.lt) goto loc_8270B868;
loc_8270B828:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b868
	if (ctx.cr6.eq) goto loc_8270B868;
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
	// bge 0x8270b858
	if (!ctx.cr0.lt) goto loc_8270B858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B858;
	sub_82725E38(ctx, base);
loc_8270B858:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270b828
	if (ctx.cr6.gt) goto loc_8270B828;
loc_8270B868:
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
	// bge 0x8270b88c
	if (!ctx.cr0.lt) goto loc_8270B88C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270B88C;
	sub_82725E38(ctx, base);
loc_8270B88C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8270B898:
	// li r3,4
	ctx.r3.s64 = 4;
loc_8270B89C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827BF1B0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x827BF1B8;
	// lwz r11,1148(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r11,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	r27.s64 = -32;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v11,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	r28.s64 = -16;
	// lvx128 v10,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v4,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	r31.s64 = 16;
	// vsplth v25,v10,1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x827bf38c
	if (!ctx.cr6.eq) goto loc_827BF38C;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v58,v59,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827bf568
	if (!ctx.cr6.gt) goto loc_827BF568;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827BF2A4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v7,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v6
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglb v22,v0,v7
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v6,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v27,v29,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x827bf2a4
	if (ctx.cr6.lt) goto loc_827BF2A4;
	// b 0x827bf568
	goto loc_827BF568;
loc_827BF38C:
	// li r30,32
	r30.s64 = 32;
	// lvrx128 v52,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v6,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v8,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827bf568
	if (!ctx.cr6.gt) goto loc_827BF568;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = r29.s64 + 32;
loc_827BF410:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v8,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v28,v7,v7
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v6,v6
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v6
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v5,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v16,v20,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v16,r9,r28
	ea = (ctx.r9.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r9,r27
	ea = (ctx.r9.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stvx128 v14,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827bf410
	if (ctx.cr6.lt) goto loc_827BF410;
loc_827BF568:
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
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827bf5f0
	if (!ctx.cr6.eq) goto loc_827BF5F0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827bf68c
	if (!ctx.cr6.gt) goto loc_827BF68C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_827BF59C:
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v8,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v7,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v6,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vadduhm v3,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
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
	// stvewx128 v39,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x827bf59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF59C;
	// b 0x827bf68c
	goto loc_827BF68C;
loc_827BF5F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827bf68c
	if (!ctx.cr6.gt) goto loc_827BF68C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_827BF608:
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
	// vsldoi128 v8,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v7,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v6,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
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
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x827bf608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF608;
loc_827BF68C:
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
	// b 0x826a1d00
	return;
}

