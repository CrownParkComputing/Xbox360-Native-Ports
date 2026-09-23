#include "soulcalibur2_funcs.65.h"

DEFINE_REX_FUNC(sub_820E25E8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x820E25F0;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f38
	ctx.lr = 0x820E25F8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r20,r10,432
	r20.s64 = ctx.r10.s64 + 432;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// sth r11,10034(r30)
	REX_STORE_U16(r30.u32 + 10034, ctx.r11.u16);
	// lhz r10,72(r20)
	ctx.r10.u64 = REX_LOAD_U16(r20.u32 + 72);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x820e264c
	if (ctx.cr6.eq) goto loc_820E264C;
	// lwz r10,10008(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r10,26(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820e264c
	if (ctx.cr0.eq) goto loc_820E264C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// blt cr6,0x820e264c
	if (ctx.cr6.lt) goto loc_820E264C;
	// cmpwi cr6,r10,1019
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1019, ctx.xer);
	// bne cr6,0x820e48ac
	if (!ctx.cr6.eq) goto loc_820E48AC;
loc_820E264C:
	// extsh r21,r11
	r21.s64 = ctx.r11.s16;
	// cmpwi cr6,r21,1000
	ctx.cr6.compare<int32_t>(r21.s32, 1000, ctx.xer);
	// bgt cr6,0x820e37fc
	if (ctx.cr6.gt) goto loc_820E37FC;
	// beq cr6,0x820e375c
	if (ctx.cr6.eq) goto loc_820E375C;
	// addi r11,r21,-2
	ctx.r11.s64 = r21.s64 + -2;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x820e4800
	if (ctx.cr6.gt) goto loc_820E4800;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,2208
	ctx.r12.s64 = ctx.r12.s64 + 2208;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,9872
	ctx.r12.s64 = ctx.r12.s64 + 9872;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E2E18;
	case 1:
		goto loc_820E4800;
	case 2:
		goto loc_820E2ED4;
	case 3:
		goto loc_820E2F20;
	case 4:
		goto loc_820E3038;
	case 5:
		goto loc_820E3044;
	case 6:
		goto loc_820E3050;
	case 7:
		goto loc_820E2F4C;
	case 8:
		goto loc_820E2F98;
	case 9:
		goto loc_820E32B0;
	case 10:
		goto loc_820E2900;
	case 11:
		goto loc_820E32F0;
	case 12:
		goto loc_820E2EC4;
	case 13:
		goto loc_820E26E4;
	case 14:
		goto loc_820E2770;
	case 15:
		goto loc_820E27FC;
	case 16:
		goto loc_820E34EC;
	case 17:
		goto loc_820E3224;
	case 18:
		goto loc_820E35B0;
	case 19:
		goto loc_820E2B60;
	case 20:
		goto loc_820E2C1C;
	case 21:
		goto loc_820E3118;
	case 22:
		goto loc_820E2CC8;
	case 23:
		goto loc_820E2D78;
	case 24:
		goto loc_820E29D8;
	case 25:
		goto loc_820E3164;
	case 26:
		goto loc_820E2A38;
	case 27:
		goto loc_820E335C;
	case 28:
		goto loc_820E3154;
	case 29:
		goto loc_820E309C;
	case 30:
		goto loc_820E30A8;
	case 31:
		goto loc_820E30B4;
	case 32:
		goto loc_820E30C0;
	case 33:
		goto loc_820E30EC;
	case 34:
		goto loc_820E35F4;
	case 35:
		goto loc_820E35F8;
	case 36:
		goto loc_820E3618;
	case 37:
		goto loc_820E3640;
	case 38:
		goto loc_820E305C;
	case 39:
		goto loc_820E33F8;
	case 40:
		goto loc_820E2B44;
	case 41:
		goto loc_820E29EC;
	case 42:
		goto loc_820E2690;
	case 43:
		goto loc_820E35E8;
	case 44:
		goto loc_820E36C4;
	case 45:
		goto loc_820E269C;
	case 46:
		goto loc_820E3660;
	case 47:
		goto loc_820E4800;
	case 48:
		goto loc_820E36D0;
	case 49:
		goto loc_820E3550;
	case 50:
		goto loc_820E34D8;
	case 51:
		goto loc_820E2898;
	case 52:
		goto loc_820E2AB4;
	case 53:
		goto loc_820E2A7C;
	case 54:
		goto loc_820E2AA8;
	case 55:
		goto loc_820E2FC4;
	case 56:
		goto loc_820E4800;
	case 57:
		goto loc_820E36DC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820E2690:
	// lha r6,2(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x820e26d0
	goto loc_820E26D0;
loc_820E269C:
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e26c8
	if (ctx.cr6.eq) goto loc_820E26C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e26cc
	if (!ctx.cr6.eq) goto loc_820E26CC;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x820e26cc
	goto loc_820E26CC;
loc_820E26C8:
	// lha r6,2(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
loc_820E26CC:
	// li r4,5
	ctx.r4.s64 = 5;
loc_820E26D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f1090
	ctx.lr = 0x820E26E0;
	sub_820F1090(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E26E4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f2,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x820e2718
	if (ctx.cr6.eq) goto loc_820E2718;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e271c
	if (!ctx.cr6.eq) goto loc_820E271C;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E2708;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820e271c
	goto loc_820E271C;
loc_820E2718:
	// lfs f2,276(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 276);
	ctx.f2.f64 = double(temp.f32);
loc_820E271C:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lhz r11,10(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 10);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x820e275c
	if (ctx.cr0.eq) goto loc_820E275C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e2884
	if (!ctx.cr0.eq) goto loc_820E2884;
loc_820E275C:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// bl 0x820f2890
	ctx.lr = 0x820E276C;
	sub_820F2890(ctx, base);
	// b 0x820e2884
	goto loc_820E2884;
loc_820E2770:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f2,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x820e27a4
	if (ctx.cr6.eq) goto loc_820E27A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e27a8
	if (!ctx.cr6.eq) goto loc_820E27A8;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E2794;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820e27a8
	goto loc_820E27A8;
loc_820E27A4:
	// lfs f2,280(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
loc_820E27A8:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lhz r11,10(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 10);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x820e27e8
	if (ctx.cr0.eq) goto loc_820E27E8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e2884
	if (!ctx.cr0.eq) goto loc_820E2884;
loc_820E27E8:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// bl 0x820f28e8
	ctx.lr = 0x820E27F8;
	sub_820F28E8(ctx, base);
	// b 0x820e2884
	goto loc_820E2884;
loc_820E27FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f2,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x820e2830
	if (ctx.cr6.eq) goto loc_820E2830;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e2834
	if (!ctx.cr6.eq) goto loc_820E2834;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E2820;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820e2834
	goto loc_820E2834;
loc_820E2830:
	// lfs f2,284(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
loc_820E2834:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lhz r11,10(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 10);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x820e2874
	if (ctx.cr0.eq) goto loc_820E2874;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e2884
	if (!ctx.cr0.eq) goto loc_820E2884;
loc_820E2874:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// bl 0x820f2940
	ctx.lr = 0x820E2884;
	sub_820F2940(ctx, base);
loc_820E2884:
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c8f80
	ctx.lr = 0x820E2894;
	sub_821C8F80(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2898:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f0,2384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x820ed268
	ctx.lr = 0x820E28D4;
	sub_820ED268(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820ed2e0
	ctx.lr = 0x820E28DC;
	sub_820ED2E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2376);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 * ctx.f13.f64));
	// bl 0x820ed080
	ctx.lr = 0x820E28FC;
	sub_820ED080(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2900:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lfs f0,2372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// beq cr6,0x820e2994
	if (ctx.cr6.eq) goto loc_820E2994;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfs f28,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f28.f64 = double(temp.f32);
	// beq cr6,0x820e2988
	if (ctx.cr6.eq) goto loc_820E2988;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e297c
	if (ctx.cr6.eq) goto loc_820E297C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820e2968
	if (ctx.cr6.eq) goto loc_820E2968;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x820e2998
	if (!ctx.cr6.eq) goto loc_820E2998;
	// lha r11,14(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 14));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f29,f0
	f29.f64 = double(float(ctx.f0.f64));
loc_820E2968:
	// lha r11,12(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 12));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(ctx.f0.f64));
loc_820E297C:
	// lhz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 10);
	// bl 0x820e2538
	ctx.lr = 0x820E2984;
	sub_820E2538(ctx, base);
	// fmuls f31,f1,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f28.f64));
loc_820E2988:
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// bl 0x820e2538
	ctx.lr = 0x820E2990;
	sub_820E2538(ctx, base);
	// fmuls f13,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f28.f64));
loc_820E2994:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
loc_820E2998:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// lwz r9,10008(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x821c0050
	ctx.lr = 0x820E29D4;
	sub_821C0050(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E29D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821bfe08
	ctx.lr = 0x820E29E8;
	sub_821BFE08(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E29EC:
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e2a28
	if (ctx.cr0.eq) goto loc_820E2A28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d8c98
	ctx.lr = 0x820E2A00;
	sub_821D8C98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2300
	ctx.lr = 0x820E2A08;
	sub_821E2300(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x820E2A14;
	sub_821E34E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x820E2A28;
	sub_821E2FD0(ctx, base);
loc_820E2A28:
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821be8a0
	ctx.lr = 0x820E2A34;
	sub_821BE8A0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2A38:
	// lha r29,2(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821be878
	ctx.lr = 0x820E2A40;
	sub_821BE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820e48ac
	if (!ctx.cr0.eq) goto loc_820E48AC;
	// addic. r11,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	ctx.r11.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820e2a54
	if (!ctx.cr0.eq) goto loc_820E2A54;
	// li r29,4
	r29.s64 = 4;
loc_820E2A54:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// beq cr6,0x820e4800
	if (ctx.cr6.eq) goto loc_820E4800;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c8b00
	ctx.lr = 0x820E2A68;
	sub_821C8B00(ctx, base);
	// lfs f0,10312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821cd0a0
	ctx.lr = 0x820E2A78;
	sub_821CD0A0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2A7C:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,12320
	ctx.r3.s64 = r30.s64 + 12320;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lha r5,0(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// bl 0x82167158
	ctx.lr = 0x820E2A94;
	sub_82167158(ctx, base);
	// lfs f0,10488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10488(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10488, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2AA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821caf78
	ctx.lr = 0x820E2AB0;
	sub_821CAF78(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2AB4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,608
	r29.s64 = ctx.r11.s64 + 608;
	// li r27,-1
	r27.s64 = -1;
	// lwz r11,608(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820e4800
	if (ctx.cr6.eq) goto loc_820E4800;
	// addi r28,r30,15532
	r28.s64 = r30.s64 + 15532;
loc_820E2ADC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x821620d8
	ctx.lr = 0x820E2AE8;
	sub_821620D8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x820e2b0c
	if (!ctx.cr6.gt) goto loc_820E2B0C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x821620d8
	ctx.lr = 0x820E2AFC;
	sub_821620D8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x820e2b0c
	if (!ctx.cr6.lt) goto loc_820E2B0C;
	// lwz r27,0(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 0);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_820E2B0C:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e2adc
	if (!ctx.cr6.eq) goto loc_820E2ADC;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x820e4800
	if (ctx.cr6.eq) goto loc_820E4800;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f0,10488(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10488, temp.u32);
	// lfs f13,10568(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10568);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,10240(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 10240, temp.u32);
	// lfs f0,2368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x820e314c
	goto loc_820E314C;
loc_820E2B44:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,10236(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10236, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2B60:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2B68;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,10008(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r25,4(r31)
	r25.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// li r26,0
	r26.s64 = 0;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r27,136
	r24.s64 = r27.s64 + 136;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x820e2ba4
	if (ctx.cr6.eq) goto loc_820E2BA4;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e2ba8
	if (ctx.cr6.eq) goto loc_820E2BA8;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e2bac
	if (!ctx.cr6.eq) goto loc_820E2BAC;
	// lha r26,6(r31)
	r26.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e2bac
	goto loc_820E2BAC;
loc_820E2BA4:
	// li r25,0
	r25.s64 = 0;
loc_820E2BA8:
	// li r26,3
	r26.s64 = 3;
loc_820E2BAC:
	// li r28,0
	r28.s64 = 0;
	// li r23,1
	r23.s64 = 1;
loc_820E2BB4:
	// slw r11,r23,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r23.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2c08
	if (ctx.cr0.eq) goto loc_820E2C08;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x820e2c08
	if (ctx.cr6.eq) goto loc_820E2C08;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820e2c08
	if (ctx.cr6.eq) goto loc_820E2C08;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bee40
	ctx.lr = 0x820E2BE8;
	sub_821BEE40(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,0(r29)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821bed40
	ctx.lr = 0x820E2C08;
	sub_821BED40(ctx, base);
loc_820E2C08:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x820e2bb4
	if (!ctx.cr6.gt) goto loc_820E2BB4;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2C1C:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2C24;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lfs f31,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	f31.f64 = double(temp.f32);
	// fmuls f30,f1,f31
	f30.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x820e2538
	ctx.lr = 0x820E2C38;
	sub_820E2538(ctx, base);
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,136
	r27.s64 = ctx.r11.s64 + 136;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e2c68
	if (ctx.cr6.eq) goto loc_820E2C68;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e2c70
	if (ctx.cr6.eq) goto loc_820E2C70;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e2c74
	if (!ctx.cr6.eq) goto loc_820E2C74;
	// lha r28,6(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e2c74
	goto loc_820E2C74;
loc_820E2C68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
loc_820E2C70:
	// li r28,3
	r28.s64 = 3;
loc_820E2C74:
	// li r29,0
	r29.s64 = 0;
	// li r23,1
	r23.s64 = 1;
loc_820E2C7C:
	// slw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2cb4
	if (ctx.cr0.eq) goto loc_820E2CB4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2cb4
	if (ctx.cr6.eq) goto loc_820E2CB4;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x820e2cb4
	if (ctx.cr6.eq) goto loc_820E2CB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,0(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821bedb0
	ctx.lr = 0x820E2CB4;
	sub_821BEDB0(ctx, base);
loc_820E2CB4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x820e2c7c
	if (!ctx.cr6.gt) goto loc_820E2C7C;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2CC8:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2CD0;
	sub_820E2538(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r26,4(r31)
	r26.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// lfs f0,2392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// lha r27,6(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x820e2d00
	if (ctx.cr6.eq) goto loc_820E2D00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e2d04
	if (ctx.cr6.eq) goto loc_820E2D04;
	// b 0x820e2d10
	goto loc_820E2D10;
loc_820E2D00:
	// li r26,0
	r26.s64 = 0;
loc_820E2D04:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// slw r27,r23,r11
	r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
loc_820E2D10:
	// addi r29,r30,7224
	r29.s64 = r30.s64 + 7224;
	// li r28,0
	r28.s64 = 0;
loc_820E2D18:
	// slw r11,r23,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r23.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2d64
	if (ctx.cr0.eq) goto loc_820E2D64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821be8b0
	ctx.lr = 0x820E2D2C;
	sub_821BE8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e2d64
	if (ctx.cr0.eq) goto loc_820E2D64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bee40
	ctx.lr = 0x820E2D44;
	sub_821BEE40(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,0(r29)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821bec98
	ctx.lr = 0x820E2D64;
	sub_821BEC98(ctx, base);
loc_820E2D64:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,896
	r29.s64 = r29.s64 + 896;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x820e2d18
	if (!ctx.cr6.gt) goto loc_820E2D18;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2D78:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2D80;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lfs f31,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	f31.f64 = double(temp.f32);
	// fmuls f30,f1,f31
	f30.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x820e2538
	ctx.lr = 0x820E2D94;
	sub_820E2538(ctx, base);
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// lha r27,6(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r23,1
	r23.s64 = 1;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e2db8
	if (ctx.cr6.eq) goto loc_820E2DB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e2dc0
	if (ctx.cr6.eq) goto loc_820E2DC0;
	// b 0x820e2dcc
	goto loc_820E2DCC;
loc_820E2DB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
loc_820E2DC0:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// slw r27,r23,r11
	r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
loc_820E2DCC:
	// addi r28,r30,7224
	r28.s64 = r30.s64 + 7224;
	// li r29,0
	r29.s64 = 0;
loc_820E2DD4:
	// slw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2e04
	if (ctx.cr0.eq) goto loc_820E2E04;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821be8b0
	ctx.lr = 0x820E2DE8;
	sub_821BE8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e2e04
	if (ctx.cr0.eq) goto loc_820E2E04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,0(r28)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r28.u32 + 0));
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821bed08
	ctx.lr = 0x820E2E04;
	sub_821BED08(ctx, base);
loc_820E2E04:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,896
	r28.s64 = r28.s64 + 896;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x820e2dd4
	if (!ctx.cr6.gt) goto loc_820E2DD4;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2E18:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2E20;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,10008(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// li r26,0
	r26.s64 = 0;
	// addi r25,r27,136
	r25.s64 = r27.s64 + 136;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x820e2e50
	if (ctx.cr6.eq) goto loc_820E2E50;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e2e54
	if (!ctx.cr6.eq) goto loc_820E2E54;
	// lha r26,6(r31)
	r26.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e2e54
	goto loc_820E2E54;
loc_820E2E50:
	// li r26,3
	r26.s64 = 3;
loc_820E2E54:
	// li r28,0
	r28.s64 = 0;
	// li r23,1
	r23.s64 = 1;
loc_820E2E5C:
	// slw r11,r23,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r23.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2eb0
	if (ctx.cr0.eq) goto loc_820E2EB0;
	// lwz r29,0(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x820e2eb0
	if (ctx.cr6.eq) goto loc_820E2EB0;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820e2eb0
	if (ctx.cr6.eq) goto loc_820E2EB0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bee40
	ctx.lr = 0x820E2E90;
	sub_821BEE40(ctx, base);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// sth r11,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r11.u16);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
loc_820E2EB0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x820e2e5c
	if (!ctx.cr6.gt) goto loc_820E2E5C;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2EC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821c5cc8
	ctx.lr = 0x820E2ED0;
	sub_821C5CC8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2ED4:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f0,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f13,2364(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x821c6438
	ctx.lr = 0x820E2F1C;
	sub_821C6438(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2F20:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821c6498
	ctx.lr = 0x820E2F48;
	sub_821C6498(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2F4C:
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfs f13,2364(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2364);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f0,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821c64a0
	ctx.lr = 0x820E2F94;
	sub_821C64A0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2F98:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821c6508
	ctx.lr = 0x820E2FC0;
	sub_821C6508(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E2FC4:
	// addic. r11,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	ctx.r11.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2fe4
	if (ctx.cr0.eq) goto loc_820E2FE4;
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E2FD4;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820e2fec
	goto loc_820E2FEC;
loc_820E2FE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_820E2FEC:
	// addi r29,r30,10612
	r29.s64 = r30.s64 + 10612;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2308
	ctx.lr = 0x820E2FF8;
	sub_820E2308(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820e3014
	if (ctx.cr6.eq) goto loc_820E3014;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_820E3014:
	// lfs f13,10620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10620);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,10564(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 10564, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,10572(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10572, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3038:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5e58
	ctx.lr = 0x820E3040;
	sub_821C5E58(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3044:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5e70
	ctx.lr = 0x820E304C;
	sub_821C5E70(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5e88
	ctx.lr = 0x820E3058;
	sub_821C5E88(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E305C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x820e3084
	if (!ctx.cr6.eq) goto loc_820E3084;
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// bl 0x820e2538
	ctx.lr = 0x820E3078;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_820E3084:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821c85a8
	ctx.lr = 0x820E3098;
	sub_821C85A8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E309C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5e98
	ctx.lr = 0x820E30A4;
	sub_821C5E98(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E30A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5eb0
	ctx.lr = 0x820E30B0;
	sub_821C5EB0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E30B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5ec8
	ctx.lr = 0x820E30BC;
	sub_821C5EC8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E30C0:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821c6528
	ctx.lr = 0x820E30E8;
	sub_821C6528(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E30EC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821c6518
	ctx.lr = 0x820E3114;
	sub_821C6518(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3118:
	// lfs f0,10568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,10564(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10572(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10572);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,10572(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10572, temp.u32);
	// stfs f11,10564(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 10564, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_820E314C:
	// stfs f0,10568(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 10568, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3154:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,5540(r30)
	REX_STORE_U16(r30.u32 + 5540, ctx.r11.u16);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3164:
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e3218
	if (ctx.cr6.lt) goto loc_820E3218;
	// beq cr6,0x820e31ec
	if (ctx.cr6.eq) goto loc_820E31EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820e4800
	if (!ctx.cr6.lt) goto loc_820E4800;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820e3194
	if (ctx.cr6.gt) goto loc_820E3194;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x820e319c
	goto loc_820E319C;
loc_820E3194:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_820E319C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820e4800
	if (ctx.cr6.gt) goto loc_820E4800;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r8,r11,678
	ctx.r8.s64 = ctx.r11.s64 + 678;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820E31C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820e31dc
	if (ctx.cr6.lt) goto loc_820E31DC;
	// lwz r11,5404(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5404);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e31dc
	if (!ctx.cr6.lt) goto loc_820E31DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_820E31DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x820e31c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E31C0;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E31EC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820e4800
	if (ctx.cr0.lt) goto loc_820E4800;
	// lwz r10,5404(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5404);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e4800
	if (!ctx.cr6.lt) goto loc_820E4800;
	// addi r11,r11,678
	ctx.r11.s64 = ctx.r11.s64 + 678;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r10.u16);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3218:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c3190
	ctx.lr = 0x820E3220;
	sub_821C3190(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3224:
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e48ac
	if (ctx.cr6.lt) goto loc_820E48AC;
	// beq cr6,0x820e3288
	if (ctx.cr6.eq) goto loc_820E3288;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820e4800
	if (!ctx.cr6.lt) goto loc_820E4800;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,2392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f31.f64 = double(temp.f32);
	// beq 0x820e3268
	if (ctx.cr0.eq) goto loc_820E3268;
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E3258;
	sub_820E2538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c67f0
	ctx.lr = 0x820E3268;
	sub_821C67F0(ctx, base);
loc_820E3268:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e4800
	if (ctx.cr0.eq) goto loc_820E4800;
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E327C;
	sub_820E2538(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// b 0x820e32a4
	goto loc_820E32A4;
loc_820E3288:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E3290;
	sub_820E2538(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lfs f0,2392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// lha r4,0(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_820E32A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c67f0
	ctx.lr = 0x820E32AC;
	sub_821C67F0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E32B0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e48ac
	if (ctx.cr6.eq) goto loc_820E48AC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e32c8
	if (ctx.cr6.eq) goto loc_820E32C8;
	// lha r29,4(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// b 0x820e32cc
	goto loc_820E32CC;
loc_820E32C8:
	// li r29,0
	r29.s64 = 0;
loc_820E32CC:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E32D4;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x821c5c30
	ctx.lr = 0x820E32EC;
	sub_821C5C30(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E32F0:
	// bl 0x821be878
	ctx.lr = 0x820E32F4;
	sub_821BE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820e48ac
	if (!ctx.cr0.eq) goto loc_820E48AC;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820e3320
	if (!ctx.cr6.eq) goto loc_820E3320;
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// mulli r11,r11,352
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(352));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f1,14308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14308);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e3340
	goto loc_820E3340;
loc_820E3320:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,2364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820E3340:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd0a0
	ctx.lr = 0x820E3348;
	sub_821CD0A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5ab8
	ctx.lr = 0x820E3350;
	sub_821C5AB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf328
	ctx.lr = 0x820E3358;
	sub_821BF328(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E335C:
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// li r29,3
	r29.s64 = 3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820e3370
	if (!ctx.cr6.eq) goto loc_820E3370;
	// lha r29,6(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
loc_820E3370:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820e3394
	if (!ctx.cr6.eq) goto loc_820E3394;
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// mulli r11,r11,352
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(352));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f31,14308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14308);
	f31.f64 = double(temp.f32);
	// b 0x820e33b4
	goto loc_820E33B4;
loc_820E3394:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2364(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820E33B4:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e33d4
	if (ctx.cr0.eq) goto loc_820E33D4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf348
	ctx.lr = 0x820E33D4;
	sub_821BF348(ctx, base);
loc_820E33D4:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e4800
	if (ctx.cr0.eq) goto loc_820E4800;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf348
	ctx.lr = 0x820E33F4;
	sub_821BF348(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E33F8:
	// lha r7,2(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,10008(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r23,1
	r23.s64 = 1;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lfs f0,2364(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lha r10,0(r9)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 0));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// slw r27,r23,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x820e3488
	if (ctx.cr6.eq) goto loc_820E3488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820e3458
	if (ctx.cr6.eq) goto loc_820E3458;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e348c
	if (!ctx.cr6.eq) goto loc_820E348C;
	// lha r27,8(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
loc_820E3458:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820e3484
	if (ctx.cr6.eq) goto loc_820E3484;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820e3488
	if (!ctx.cr6.eq) goto loc_820E3488;
	// lhz r3,6(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 6);
	// bl 0x820e2538
	ctx.lr = 0x820E3474;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820e3488
	goto loc_820E3488;
loc_820E3484:
	// lha r28,6(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
loc_820E3488:
	// lha r29,4(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
loc_820E348C:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e34b0
	if (ctx.cr0.eq) goto loc_820E34B0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf388
	ctx.lr = 0x820E34B0;
	sub_821BF388(ctx, base);
loc_820E34B0:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e4800
	if (ctx.cr0.eq) goto loc_820E4800;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf388
	ctx.lr = 0x820E34D4;
	sub_821BF388(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E34D8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821b25c8
	ctx.lr = 0x820E34E8;
	sub_821B25C8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E34EC:
	// lfs f0,5524(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// stfs f0,5528(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5528, temp.u32);
	// bne cr6,0x820e3510
	if (!ctx.cr6.eq) goto loc_820E3510;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f13,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820e3534
	goto loc_820E3534;
loc_820E3510:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lfs f13,1840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
loc_820E3534:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,5524(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5524, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f13,f13,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,5524(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5524, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3550:
	// lha r27,2(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addic. r10,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	ctx.r10.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// bne 0x820e356c
	if (!ctx.cr0.eq) goto loc_820E356C;
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// slw r27,r23,r11
	r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
loc_820E356C:
	// addi r28,r30,7224
	r28.s64 = r30.s64 + 7224;
	// li r29,0
	r29.s64 = 0;
loc_820E3574:
	// slw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e359c
	if (ctx.cr0.eq) goto loc_820E359C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821be8b0
	ctx.lr = 0x820E3588;
	sub_821BE8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e359c
	if (ctx.cr0.eq) goto loc_820E359C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be860
	ctx.lr = 0x820E359C;
	sub_821BE860(ctx, base);
loc_820E359C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,896
	r28.s64 = r28.s64 + 896;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x820e3574
	if (!ctx.cr6.gt) goto loc_820E3574;
	// b 0x820e4800
	goto loc_820E4800;
loc_820E35B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r10,5792(r30)
	REX_STORE_U32(r30.u32 + 5792, ctx.r10.u32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r9,r8
	temp.u8 = (~ctx.r9.u32 + ctx.r8.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,5792(r30)
	REX_STORE_U32(r30.u32 + 5792, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820e35e0
	if (ctx.cr6.lt) goto loc_820E35E0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_820E35E0:
	// stw r11,5792(r30)
	REX_STORE_U32(r30.u32 + 5792, ctx.r11.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E35E8:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// sth r11,5816(r30)
	REX_STORE_U16(r30.u32 + 5816, ctx.r11.u16);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E35F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820E35F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addic. r11,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	ctx.r11.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e360c
	if (ctx.cr0.eq) goto loc_820E360C;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e3610
	goto loc_820E3610;
loc_820E360C:
	// li r4,100
	ctx.r4.s64 = 100;
loc_820E3610:
	// bl 0x821ca9d0
	ctx.lr = 0x820E3614;
	sub_821CA9D0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3618:
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x820e3630
	if (!ctx.cr6.eq) goto loc_820E3630;
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x820e4800
	if (ctx.cr0.gt) goto loc_820E4800;
loc_820E3630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821caba8
	ctx.lr = 0x820E363C;
	sub_821CABA8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3640:
	// addic. r11,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	ctx.r11.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820e3654
	if (ctx.cr0.eq) goto loc_820E3654;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// b 0x820e3658
	goto loc_820E3658;
loc_820E3654:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E3658:
	// bl 0x821c8560
	ctx.lr = 0x820E365C;
	sub_821C8560(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3660:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f0,2352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820e3698
	if (ctx.cr6.eq) goto loc_820E3698;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e36b8
	if (!ctx.cr6.eq) goto loc_820E36B8;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E368C;
	sub_820E2538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_820E3698:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_820E36B8:
	// stfs f0,6812(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 6812, temp.u32);
	// stfs f13,6816(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 6816, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E36C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cb150
	ctx.lr = 0x820E36CC;
	sub_821CB150(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E36D0:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// stw r11,5804(r30)
	REX_STORE_U32(r30.u32 + 5804, ctx.r11.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E36DC:
	// lha r29,2(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lhz r10,638(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 638);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820e48ac
	if (ctx.cr6.eq) goto loc_820E48AC;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E36F4;
	sub_820E2538(ctx, base);
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e370c
	if (!ctx.cr6.eq) goto loc_820E370C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_820E370C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be318
	ctx.lr = 0x820E3720;
	sub_821BE318(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be318
	ctx.lr = 0x820E3734;
	sub_821BE318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821be3a0
	ctx.lr = 0x820E3750;
	sub_821BE3A0(ctx, base);
loc_820E3750:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a4ce0
	ctx.lr = 0x820E3758;
	sub_821A4CE0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E375C:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e37f4
	if (ctx.cr6.eq) goto loc_820E37F4;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e37e8
	if (ctx.cr6.eq) goto loc_820E37E8;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e37d8
	if (ctx.cr6.eq) goto loc_820E37D8;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e37c4
	if (ctx.cr6.eq) goto loc_820E37C4;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// beq cr6,0x820e37ac
	if (ctx.cr6.eq) goto loc_820E37AC;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 12);
	// bl 0x820e2538
	ctx.lr = 0x820E3794;
	sub_820E2538(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_820E3798:
	// lhz r8,10(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 10);
	// lhz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lhz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x820e38bc
	goto loc_820E38BC;
loc_820E37AC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820E37B0:
	// lhz r8,10(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 10);
	// lhz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lhz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x820e38b4
	goto loc_820E38B4;
loc_820E37C4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820E37C8:
	// lhz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lhz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x820e38b0
	goto loc_820E38B0;
loc_820E37D8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820E37DC:
	// lhz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x820e38ac
	goto loc_820E38AC;
loc_820E37E8:
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820e38a8
	goto loc_820E38A8;
loc_820E37F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820e38a4
	goto loc_820E38A4;
loc_820E37FC:
	// cmpwi cr6,r21,2000
	ctx.cr6.compare<int32_t>(r21.s32, 2000, ctx.xer);
	// bgt cr6,0x820e4340
	if (ctx.cr6.gt) goto loc_820E4340;
	// beq cr6,0x820e42fc
	if (ctx.cr6.eq) goto loc_820E42FC;
	// addi r11,r21,-1001
	ctx.r11.s64 = r21.s64 + -1001;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x820e4800
	if (ctx.cr6.gt) goto loc_820E4800;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,2144
	ctx.r12.s64 = ctx.r12.s64 + 2144;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,14396
	ctx.r12.s64 = ctx.r12.s64 + 14396;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E3A60;
	case 1:
		goto loc_820E3A6C;
	case 2:
		goto loc_820E3E9C;
	case 3:
		goto loc_820E38CC;
	case 4:
		goto loc_820E39AC;
	case 5:
		goto loc_820E39E4;
	case 6:
		goto loc_820E3A78;
	case 7:
		goto loc_820E3B10;
	case 8:
		goto loc_820E3BA8;
	case 9:
		goto loc_820E3DFC;
	case 10:
		goto loc_820E3E48;
	case 11:
		goto loc_820E3E5C;
	case 12:
		goto loc_820E3E68;
	case 13:
		goto loc_820E3E70;
	case 14:
		goto loc_820E3E78;
	case 15:
		goto loc_820E3A1C;
	case 16:
		goto loc_820E3A48;
	case 17:
		goto loc_820E3A28;
	case 18:
		goto loc_820E38EC;
	case 19:
		goto loc_820E38F8;
	case 20:
		goto loc_820E3EEC;
	case 21:
		goto loc_820E3FA4;
	case 22:
		goto loc_820E405C;
	case 23:
		goto loc_820E383C;
	case 24:
		goto loc_820E3948;
	case 25:
		goto loc_820E3EB0;
	case 26:
		goto loc_820E3EC8;
	case 27:
		goto loc_820E3ED8;
	case 28:
		goto loc_820E42D4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820E383C:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e38a0
	if (ctx.cr6.eq) goto loc_820E38A0;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e3894
	if (ctx.cr6.eq) goto loc_820E3894;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e388c
	if (ctx.cr6.eq) goto loc_820E388C;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e3884
	if (ctx.cr6.eq) goto loc_820E3884;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// beq cr6,0x820e387c
	if (ctx.cr6.eq) goto loc_820E387C;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 12);
	// bl 0x820e2538
	ctx.lr = 0x820E3874;
	sub_820E2538(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820e3798
	goto loc_820E3798;
loc_820E387C:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820e37b0
	goto loc_820E37B0;
loc_820E3884:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820e37c8
	goto loc_820E37C8;
loc_820E388C:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820e37dc
	goto loc_820E37DC;
loc_820E3894:
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820e38a8
	goto loc_820E38A8;
loc_820E38A0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820E38A4:
	// li r5,32767
	ctx.r5.s64 = 32767;
loc_820E38A8:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_820E38AC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_820E38B0:
	// li r8,255
	ctx.r8.s64 = 255;
loc_820E38B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
loc_820E38BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x821a6310
	ctx.lr = 0x820E38C8;
	sub_821A6310(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E38CC:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e3750
	if (ctx.cr6.eq) goto loc_820E3750;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x821a4d28
	ctx.lr = 0x820E38E8;
	sub_821A4D28(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E38EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb70
	ctx.lr = 0x820E38F4;
	sub_8218CB70(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E38F8:
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// beq cr6,0x820e3928
	if (ctx.cr6.eq) goto loc_820E3928;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3910;
	sub_820E2538(ctx, base);
	// lha r7,12(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 12));
	// li r9,0
	ctx.r9.s64 = 0;
	// lha r6,2(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lha r5,6(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,10(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// b 0x820e39a0
	goto loc_820E39A0;
loc_820E3928:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3930;
	sub_820E2538(ctx, base);
	// lha r6,2(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r7,193
	ctx.r7.s64 = 193;
	// lha r5,6(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r9,0
	ctx.r9.s64 = 0;
	// lha r4,10(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// b 0x820e39a0
	goto loc_820E39A0;
loc_820E3948:
	// lha r29,2(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x820e3960
	if (ctx.cr6.lt) goto loc_820E3960;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(r29.s32, 9, ctx.xer);
	// lis r28,1028
	r28.s64 = 67371008;
	// ble cr6,0x820e3964
	if (!ctx.cr6.gt) goto loc_820E3964;
loc_820E3960:
	// lis r28,4
	r28.s64 = 262144;
loc_820E3964:
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// beq cr6,0x820e3984
	if (ctx.cr6.eq) goto loc_820E3984;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E397C;
	sub_820E2538(ctx, base);
	// lha r7,12(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 12));
	// b 0x820e3990
	goto loc_820E3990;
loc_820E3984:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E398C;
	sub_820E2538(ctx, base);
	// li r7,193
	ctx.r7.s64 = 193;
loc_820E3990:
	// lha r4,8(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lha r5,10(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_820E39A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218dba0
	ctx.lr = 0x820E39A8;
	sub_8218DBA0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E39AC:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e39c4
	if (ctx.cr6.eq) goto loc_820E39C4;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// b 0x820e39c8
	goto loc_820E39C8;
loc_820E39C4:
	// li r7,193
	ctx.r7.s64 = 193;
loc_820E39C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// bl 0x8218d9c8
	ctx.lr = 0x820E39E0;
	sub_8218D9C8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E39E4:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e39fc
	if (ctx.cr6.eq) goto loc_820E39FC;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// b 0x820e3a00
	goto loc_820E3A00;
loc_820E39FC:
	// li r7,193
	ctx.r7.s64 = 193;
loc_820E3A00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// bl 0x8218dad0
	ctx.lr = 0x820E3A18;
	sub_8218DAD0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3A1C:
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// b 0x820e3a30
	goto loc_820E3A30;
loc_820E3A28:
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E3A30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218cbd0
	ctx.lr = 0x820E3A44;
	sub_8218CBD0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3A48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218cd40
	ctx.lr = 0x820E3A5C;
	sub_8218CD40(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3A60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219ca28
	ctx.lr = 0x820E3A68;
	sub_8219CA28(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3A6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218d948
	ctx.lr = 0x820E3A74;
	sub_8218D948(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3A78:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e3ae0
	if (ctx.cr6.eq) goto loc_820E3AE0;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e3ac8
	if (ctx.cr6.eq) goto loc_820E3AC8;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3A98;
	sub_820E2538(ctx, base);
	// lha r8,2(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
loc_820E3AA8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// mulli r10,r9,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e3b04
	goto loc_820E3B04;
loc_820E3AC8:
	// lha r7,2(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfs f2,2356(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2356);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x820e3aa8
	goto loc_820E3AA8;
loc_820E3AE0:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// lfs f2,2356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2356);
	ctx.f2.f64 = double(temp.f32);
	// mulli r10,r8,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(44));
	// lfs f1,2348(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2348);
	ctx.f1.f64 = double(temp.f32);
loc_820E3B04:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218a548
	ctx.lr = 0x820E3B0C;
	sub_8218A548(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3B10:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e3b78
	if (ctx.cr6.eq) goto loc_820E3B78;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e3b60
	if (ctx.cr6.eq) goto loc_820E3B60;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3B30;
	sub_820E2538(ctx, base);
	// lha r8,2(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
loc_820E3B40:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// mulli r10,r9,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e3b9c
	goto loc_820E3B9C;
loc_820E3B60:
	// lha r7,2(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfs f2,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x820e3b40
	goto loc_820E3B40;
loc_820E3B78:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// lfs f2,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// mulli r10,r8,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(44));
	// lfs f1,2344(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2344);
	ctx.f1.f64 = double(temp.f32);
loc_820E3B9C:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218a590
	ctx.lr = 0x820E3BA4;
	sub_8218A590(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3BA8:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e3db4
	if (ctx.cr6.eq) goto loc_820E3DB4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e3d68
	if (ctx.cr6.eq) goto loc_820E3D68;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e3d10
	if (ctx.cr6.eq) goto loc_820E3D10;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e3cb4
	if (ctx.cr6.eq) goto loc_820E3CB4;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e3c48
	if (ctx.cr6.eq) goto loc_820E3C48;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 10);
	// bl 0x820e2538
	ctx.lr = 0x820E3BE0;
	sub_820E2538(ctx, base);
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E3BEC;
	sub_820E2538(ctx, base);
	// lha r11,6(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// lha r8,4(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lbz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 0);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r9,27968
	ctx.r11.s64 = ctx.r9.s64 + 27968;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// mulli r10,r10,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(44));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// b 0x820e3df0
	goto loc_820E3DF0;
loc_820E3C48:
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// bl 0x820e2538
	ctx.lr = 0x820E3C50;
	sub_820E2538(ctx, base);
	// lha r9,6(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f5,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// lha r7,4(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mulli r10,r9,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// b 0x820e3df0
	goto loc_820E3DF0;
loc_820E3CB4:
	// lha r9,4(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f5,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// lha r7,6(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lfs f4,2356(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2356);
	ctx.f4.f64 = double(temp.f32);
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// b 0x820e3de4
	goto loc_820E3DE4;
loc_820E3D10:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// lfs f5,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lfs f4,2356(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f3.f64 = double(temp.f32);
	// mulli r10,r7,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(44));
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e3df0
	goto loc_820E3DF0;
loc_820E3D68:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f5,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// lfs f4,2356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2344(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2344);
	ctx.f3.f64 = double(temp.f32);
	// mulli r10,r9,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// lfs f2,2340(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2340);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e3df0
	goto loc_820E3DF0;
loc_820E3DB4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f5,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lfs f4,2356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2344(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2344);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2340(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2340);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2348(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2348);
	ctx.f1.f64 = double(temp.f32);
loc_820E3DE4:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r10,27968
	ctx.r11.s64 = ctx.r10.s64 + 27968;
	// mulli r10,r8,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(44));
loc_820E3DF0:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218a5d0
	ctx.lr = 0x820E3DF8;
	sub_8218A5D0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3DFC:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e3e2c
	if (ctx.cr6.eq) goto loc_820E3E2C;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e3e24
	if (ctx.cr6.eq) goto loc_820E3E24;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e3e24
	if (ctx.cr6.eq) goto loc_820E3E24;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e3e24
	if (ctx.cr6.eq) goto loc_820E3E24;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
loc_820E3E24:
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// b 0x820e3e30
	goto loc_820E3E30;
loc_820E3E2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820E3E30:
	// li r7,0
	ctx.r7.s64 = 0;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ea18
	ctx.lr = 0x820E3E44;
	sub_8218EA18(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3E48:
	// lhz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lhz r5,6(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// b 0x820e3e88
	goto loc_820E3E88;
loc_820E3E5C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_820E3E60:
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x820e3e80
	goto loc_820E3E80;
loc_820E3E68:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x820e3e60
	goto loc_820E3E60;
loc_820E3E70:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820e3e7c
	goto loc_820E3E7C;
loc_820E3E78:
	// li r7,1
	ctx.r7.s64 = 1;
loc_820E3E7C:
	// li r4,34
	ctx.r4.s64 = 34;
loc_820E3E80:
	// lhz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 2);
loc_820E3E88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821901e0
	ctx.lr = 0x820E3E98;
	sub_821901E0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3E9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218efb0
	ctx.lr = 0x820E3EAC;
	sub_8218EFB0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3EB0:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3EB8;
	sub_820E2538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x8218ed60
	ctx.lr = 0x820E3EC4;
	sub_8218ED60(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3EC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x8218ed80
	ctx.lr = 0x820E3ED4;
	sub_8218ED80(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3ED8:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3EE0;
	sub_820E2538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ed88
	ctx.lr = 0x820E3EE8;
	sub_8218ED88(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3EEC:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e3f80
	if (ctx.cr6.eq) goto loc_820E3F80;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e3f60
	if (ctx.cr6.eq) goto loc_820E3F60;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e3f40
	if (ctx.cr6.eq) goto loc_820E3F40;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,6(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 6);
	// bl 0x820e2538
	ctx.lr = 0x820E3F14;
	sub_820E2538(ctx, base);
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E3F20;
	sub_820E2538(ctx, base);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
loc_820E3F30:
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
loc_820E3F34:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e3f98
	goto loc_820E3F98;
loc_820E3F40:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E3F48;
	sub_820E2538(ctx, base);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f3,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x820e3f30
	goto loc_820E3F30;
loc_820E3F60:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2336);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x820e3f34
	goto loc_820E3F34;
loc_820E3F80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2348(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2348);
	ctx.f1.f64 = double(temp.f32);
loc_820E3F98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218a438
	ctx.lr = 0x820E3FA0;
	sub_8218A438(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E3FA4:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e4038
	if (ctx.cr6.eq) goto loc_820E4038;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e4018
	if (ctx.cr6.eq) goto loc_820E4018;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e3ff8
	if (ctx.cr6.eq) goto loc_820E3FF8;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,6(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 6);
	// bl 0x820e2538
	ctx.lr = 0x820E3FCC;
	sub_820E2538(ctx, base);
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E3FD8;
	sub_820E2538(ctx, base);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
loc_820E3FE8:
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
loc_820E3FEC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e4050
	goto loc_820E4050;
loc_820E3FF8:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x820E4000;
	sub_820E2538(ctx, base);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f3,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x820e3fe8
	goto loc_820E3FE8;
loc_820E4018:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f3,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f2,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// b 0x820e3fec
	goto loc_820E3FEC;
loc_820E4038:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2348(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2348);
	ctx.f1.f64 = double(temp.f32);
loc_820E4050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218a490
	ctx.lr = 0x820E4058;
	sub_8218A490(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E405C:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e429c
	if (ctx.cr6.eq) goto loc_820E429C;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e4274
	if (ctx.cr6.eq) goto loc_820E4274;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e4228
	if (ctx.cr6.eq) goto loc_820E4228;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e41cc
	if (ctx.cr6.eq) goto loc_820E41CC;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e416c
	if (ctx.cr6.eq) goto loc_820E416C;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// beq cr6,0x820e4104
	if (ctx.cr6.eq) goto loc_820E4104;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lhz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 12);
	// bl 0x820e2538
	ctx.lr = 0x820E409C;
	sub_820E2538(ctx, base);
	// lhz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 10);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E40A8;
	sub_820E2538(ctx, base);
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E40B4;
	sub_820E2538(ctx, base);
	// lha r9,6(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// b 0x820e42c8
	goto loc_820E42C8;
loc_820E4104:
	// lhz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 10);
	// bl 0x820e2538
	ctx.lr = 0x820E410C;
	sub_820E2538(ctx, base);
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2538
	ctx.lr = 0x820E4118;
	sub_820E2538(ctx, base);
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r8,6(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f6,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// b 0x820e42c8
	goto loc_820E42C8;
loc_820E416C:
	// lhz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 8);
	// bl 0x820e2538
	ctx.lr = 0x820E4174;
	sub_820E2538(ctx, base);
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r7,4(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// lha r11,6(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lfs f5,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f6,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// b 0x820e42c8
	goto loc_820E42C8;
loc_820E41CC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r9,4(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lfs f6,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r7,6(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lfs f5,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfs f4,2336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2336);
	ctx.f4.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// b 0x820e42c8
	goto loc_820E42C8;
loc_820E4228:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r9,4(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lfs f6,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,2336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2336);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f3.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// b 0x820e42c8
	goto loc_820E42C8;
loc_820E4274:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,2348(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2348);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820e42b0
	goto loc_820E42B0;
loc_820E429C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f3,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2332(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
loc_820E42B0:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,2336(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2336);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
loc_820E42C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218a4e0
	ctx.lr = 0x820E42D0;
	sub_8218A4E0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E42D4:
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218dd78
	ctx.lr = 0x820E42E0;
	sub_8218DD78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218c098
	ctx.lr = 0x820E42EC;
	sub_8218C098(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5468(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5468, temp.u32);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E42FC:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e430c
	if (ctx.cr6.eq) goto loc_820E430C;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4328
	if (!ctx.cr6.eq) goto loc_820E4328;
loc_820E430C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x820E4328;
	sub_8212D7C8(ctx, base);
loc_820E4328:
	// lhz r11,72(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82129f08
	ctx.lr = 0x820E433C;
	sub_82129F08(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4340:
	// addi r11,r21,-2001
	ctx.r11.s64 = r21.s64 + -2001;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x820e4800
	if (ctx.cr6.gt) goto loc_820E4800;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,2088
	ctx.r12.s64 = ctx.r12.s64 + 2088;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,17268
	ctx.r12.s64 = ctx.r12.s64 + 17268;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E46A8;
	case 1:
		goto loc_820E46D8;
	case 2:
		goto loc_820E46EC;
	case 3:
		goto loc_820E4374;
	case 4:
		goto loc_820E43B0;
	case 5:
		goto loc_820E4800;
	case 6:
		goto loc_820E4448;
	case 7:
		goto loc_820E43EC;
	case 8:
		goto loc_820E4480;
	case 9:
		goto loc_820E44D0;
	case 10:
		goto loc_820E4508;
	case 11:
		goto loc_820E4518;
	case 12:
		goto loc_820E4528;
	case 13:
		goto loc_820E46FC;
	case 14:
		goto loc_820E4734;
	case 15:
		goto loc_820E4768;
	case 16:
		goto loc_820E4778;
	case 17:
		goto loc_820E4538;
	case 18:
		goto loc_820E458C;
	case 19:
		goto loc_820E45E0;
	case 20:
		goto loc_820E4634;
	case 21:
		goto loc_820E4788;
	case 22:
		goto loc_820E47A8;
	case 23:
		goto loc_820E47B8;
	case 24:
		goto loc_820E47D0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820E4374:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x820e4390
	if (!ctx.cr6.eq) goto loc_820E4390;
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122e70
	ctx.lr = 0x820E4390;
	sub_82122E70(ctx, base);
loc_820E4390:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82122e70
	ctx.lr = 0x820E43AC;
	sub_82122E70(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E43B0:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x820e43cc
	if (!ctx.cr6.eq) goto loc_820E43CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122ed0
	ctx.lr = 0x820E43CC;
	sub_82122ED0(ctx, base);
loc_820E43CC:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82122ed0
	ctx.lr = 0x820E43E8;
	sub_82122ED0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E43EC:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e4430
	if (ctx.cr6.eq) goto loc_820E4430;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e4418
	if (ctx.cr6.eq) goto loc_820E4418;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4690
	if (!ctx.cr6.eq) goto loc_820E4690;
	// lha r8,10(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e4440
	goto loc_820E4440;
loc_820E4418:
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e4684
	goto loc_820E4684;
loc_820E4430:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E4440:
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// b 0x820e4684
	goto loc_820E4684;
loc_820E4448:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e4464
	if (ctx.cr6.eq) goto loc_820E4464;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r6,4(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e446c
	goto loc_820E446C;
loc_820E4464:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_820E446C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82122930
	ctx.lr = 0x820E447C;
	sub_82122930(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4480:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e44b0
	if (ctx.cr6.eq) goto loc_820E44B0;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e44a8
	if (ctx.cr6.eq) goto loc_820E44A8;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r7,6(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e44bc
	goto loc_820E44BC;
loc_820E44A8:
	// lha r5,2(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e44b4
	goto loc_820E44B4;
loc_820E44B0:
	// li r5,50
	ctx.r5.s64 = 50;
loc_820E44B4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_820E44BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82122a50
	ctx.lr = 0x820E44CC;
	sub_82122A50(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E44D0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x820e44ec
	if (ctx.cr6.eq) goto loc_820E44EC;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r6,4(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e44f4
	goto loc_820E44F4;
loc_820E44EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_820E44F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82122930
	ctx.lr = 0x820E4504;
	sub_82122930(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4508:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ce0
	ctx.lr = 0x820E4514;
	sub_82120CE0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4518:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ce0
	ctx.lr = 0x820E4524;
	sub_82120CE0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4528:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120d10
	ctx.lr = 0x820E4534;
	sub_82120D10(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4538:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e4570
	if (ctx.cr6.eq) goto loc_820E4570;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e4564
	if (ctx.cr6.eq) goto loc_820E4564;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4690
	if (!ctx.cr6.eq) goto loc_820E4690;
	// lha r8,10(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e4580
	goto loc_820E4580;
loc_820E4564:
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e4578
	goto loc_820E4578;
loc_820E4570:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E4578:
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
loc_820E4580:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// ori r5,r11,4096
	ctx.r5.u64 = ctx.r11.u64 | 4096;
	// b 0x820e4684
	goto loc_820E4684;
loc_820E458C:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e45c4
	if (ctx.cr6.eq) goto loc_820E45C4;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e45b8
	if (ctx.cr6.eq) goto loc_820E45B8;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4690
	if (!ctx.cr6.eq) goto loc_820E4690;
	// lha r8,10(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e45d4
	goto loc_820E45D4;
loc_820E45B8:
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e45cc
	goto loc_820E45CC;
loc_820E45C4:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E45CC:
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
loc_820E45D4:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// ori r5,r11,32768
	ctx.r5.u64 = ctx.r11.u64 | 32768;
	// b 0x820e4684
	goto loc_820E4684;
loc_820E45E0:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e4618
	if (ctx.cr6.eq) goto loc_820E4618;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e460c
	if (ctx.cr6.eq) goto loc_820E460C;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4690
	if (!ctx.cr6.eq) goto loc_820E4690;
	// lha r8,10(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e4628
	goto loc_820E4628;
loc_820E460C:
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e4620
	goto loc_820E4620;
loc_820E4618:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E4620:
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
loc_820E4628:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// ori r5,r11,20480
	ctx.r5.u64 = ctx.r11.u64 | 20480;
	// b 0x820e4684
	goto loc_820E4684;
loc_820E4634:
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x820e466c
	if (ctx.cr6.eq) goto loc_820E466C;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x820e4660
	if (ctx.cr6.eq) goto loc_820E4660;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// bne cr6,0x820e4690
	if (!ctx.cr6.eq) goto loc_820E4690;
	// lha r8,10(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e467c
	goto loc_820E467C;
loc_820E4660:
	// lha r7,8(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e4674
	goto loc_820E4674;
loc_820E466C:
	// lha r6,6(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E4674:
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r8,0
	ctx.r8.s64 = 0;
loc_820E467C:
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// ori r5,r11,28672
	ctx.r5.u64 = ctx.r11.u64 | 28672;
loc_820E4684:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82123b50
	ctx.lr = 0x820E4690;
	sub_82123B50(ctx, base);
loc_820E4690:
	// lhz r11,72(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212a188
	ctx.lr = 0x820E46A4;
	sub_8212A188(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E46A8:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x820e46b8
	if (!ctx.cr6.eq) goto loc_820E46B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820e46c4
	goto loc_820E46C4;
loc_820E46B8:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
loc_820E46C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212dd18
	ctx.lr = 0x820E46D4;
	sub_8212DD18(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E46D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r3,2(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x820E46E8;
	sub_8212BC38(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E46EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r3,2(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x8212bd08
	ctx.lr = 0x820E46F8;
	sub_8212BD08(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E46FC:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e4724
	if (ctx.cr6.lt) goto loc_820E4724;
	// beq cr6,0x820e471c
	if (ctx.cr6.eq) goto loc_820E471C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820e4800
	if (!ctx.cr6.lt) goto loc_820E4800;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x820e4728
	goto loc_820E4728;
loc_820E471C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x820e4728
	goto loc_820E4728;
loc_820E4724:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E4728:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229a710
	ctx.lr = 0x820E4730;
	sub_8229A710(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4734:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x820e4750
	if (ctx.cr6.eq) goto loc_820E4750;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x820e4754
	goto loc_820E4754;
loc_820E4750:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_820E4754:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8212cb30
	ctx.lr = 0x820E4764;
	sub_8212CB30(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4768:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212aa80
	ctx.lr = 0x820E4774;
	sub_8212AA80(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4778:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212aaa0
	ctx.lr = 0x820E4784;
	sub_8212AAA0(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E4788:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x820E47A4;
	sub_8212D7C8(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E47A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212bb18
	ctx.lr = 0x820E47B4;
	sub_8212BB18(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E47B8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8212bf38
	ctx.lr = 0x820E47CC;
	sub_8212BF38(ctx, base);
	// b 0x820e4800
	goto loc_820E4800;
loc_820E47D0:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x820e47e8
	if (ctx.cr6.eq) goto loc_820E47E8;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// bne cr6,0x820e4800
	if (!ctx.cr6.eq) goto loc_820E4800;
	// lha r7,6(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// b 0x820e47ec
	goto loc_820E47EC;
loc_820E47E8:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820E47EC:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lha r5,4(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82121eb0
	ctx.lr = 0x820E4800;
	sub_82121EB0(ctx, base);
loc_820E4800:
	// cmpwi cr6,r21,1029
	ctx.cr6.compare<int32_t>(r21.s32, 1029, ctx.xer);
	// bgt cr6,0x820e4844
	if (ctx.cr6.gt) goto loc_820E4844;
	// cmpwi cr6,r21,1000
	ctx.cr6.compare<int32_t>(r21.s32, 1000, ctx.xer);
	// bge cr6,0x820e4888
	if (!ctx.cr6.lt) goto loc_820E4888;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x820e4888
	if (ctx.cr6.eq) goto loc_820E4888;
	// cmpwi cr6,r21,14
	ctx.cr6.compare<int32_t>(r21.s32, 14, ctx.xer);
	// ble cr6,0x820e48ac
	if (!ctx.cr6.gt) goto loc_820E48AC;
	// cmpwi cr6,r21,17
	ctx.cr6.compare<int32_t>(r21.s32, 17, ctx.xer);
	// ble cr6,0x820e4888
	if (!ctx.cr6.gt) goto loc_820E4888;
	// cmpwi cr6,r21,49
	ctx.cr6.compare<int32_t>(r21.s32, 49, ctx.xer);
	// beq cr6,0x820e4888
	if (ctx.cr6.eq) goto loc_820E4888;
	// cmpwi cr6,r21,53
	ctx.cr6.compare<int32_t>(r21.s32, 53, ctx.xer);
	// beq cr6,0x820e4888
	if (ctx.cr6.eq) goto loc_820E4888;
	// cmpwi cr6,r21,59
	ctx.cr6.compare<int32_t>(r21.s32, 59, ctx.xer);
	// beq cr6,0x820e4888
	if (ctx.cr6.eq) goto loc_820E4888;
	// b 0x820e48ac
	goto loc_820E48AC;
loc_820E4844:
	// cmpwi cr6,r21,2013
	ctx.cr6.compare<int32_t>(r21.s32, 2013, ctx.xer);
	// bgt cr6,0x820e4878
	if (ctx.cr6.gt) goto loc_820E4878;
	// cmpwi cr6,r21,2007
	ctx.cr6.compare<int32_t>(r21.s32, 2007, ctx.xer);
	// bge cr6,0x820e4888
	if (!ctx.cr6.lt) goto loc_820E4888;
	// cmpwi cr6,r21,2000
	ctx.cr6.compare<int32_t>(r21.s32, 2000, ctx.xer);
	// blt cr6,0x820e48ac
	if (ctx.cr6.lt) goto loc_820E48AC;
	// cmpwi cr6,r21,2001
	ctx.cr6.compare<int32_t>(r21.s32, 2001, ctx.xer);
	// ble cr6,0x820e4888
	if (!ctx.cr6.gt) goto loc_820E4888;
	// cmpwi cr6,r21,2003
	ctx.cr6.compare<int32_t>(r21.s32, 2003, ctx.xer);
	// ble cr6,0x820e48ac
	if (!ctx.cr6.gt) goto loc_820E48AC;
	// cmpwi cr6,r21,2005
	ctx.cr6.compare<int32_t>(r21.s32, 2005, ctx.xer);
	// ble cr6,0x820e4888
	if (!ctx.cr6.gt) goto loc_820E4888;
	// b 0x820e48ac
	goto loc_820E48AC;
loc_820E4878:
	// cmpwi cr6,r21,2018
	ctx.cr6.compare<int32_t>(r21.s32, 2018, ctx.xer);
	// blt cr6,0x820e48ac
	if (ctx.cr6.lt) goto loc_820E48AC;
	// cmpwi cr6,r21,2025
	ctx.cr6.compare<int32_t>(r21.s32, 2025, ctx.xer);
	// bgt cr6,0x820e48ac
	if (ctx.cr6.gt) goto loc_820E48AC;
loc_820E4888:
	// lhz r11,72(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820e48ac
	if (!ctx.cr6.eq) goto loc_820E48AC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821a1228
	ctx.lr = 0x820E48AC;
	sub_821A1228(ctx, base);
loc_820E48AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f84
	ctx.lr = 0x820E48BC;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_821880F8) {
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
	// bl 0x82234368
	ctx.lr = 0x82188110;
	sub_82234368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821882e8
	if (!ctx.cr0.eq) goto loc_821882E8;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x822094c0
	ctx.lr = 0x82188120;
	sub_822094C0(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821882e8
	if (ctx.cr0.eq) goto loc_821882E8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821882e8
	if (ctx.cr6.eq) goto loc_821882E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822094c0
	ctx.lr = 0x8218813C;
	sub_822094C0(ctx, base);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821882e8
	if (ctx.cr0.eq) goto loc_821882E8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821882e8
	if (ctx.cr6.eq) goto loc_821882E8;
	// bl 0x82209668
	ctx.lr = 0x82188154;
	sub_82209668(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bgt cr6,0x821882d8
	if (ctx.cr6.gt) goto loc_821882D8;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-4024
	ctx.r12.s64 = ctx.r12.s64 + -4024;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// nop 
	// addi r12,r12,-32376
	ctx.r12.s64 = ctx.r12.s64 + -32376;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82188188;
	case 1:
		goto loc_82188190;
	case 2:
		goto loc_82188198;
	case 3:
		goto loc_821881A0;
	case 4:
		goto loc_821881A8;
	case 5:
		goto loc_821881B0;
	case 6:
		goto loc_821881B8;
	case 7:
		goto loc_821881C0;
	case 8:
		goto loc_821881C8;
	case 9:
		goto loc_821881D0;
	case 10:
		goto loc_821881D8;
	case 11:
		goto loc_821881E0;
	case 12:
		goto loc_821881E8;
	case 13:
		goto loc_821881F0;
	case 14:
		goto loc_821881F8;
	case 15:
		goto loc_82188200;
	case 16:
		goto loc_82188208;
	case 17:
		goto loc_82188210;
	case 18:
		goto loc_82188218;
	case 19:
		goto loc_82188220;
	case 20:
		goto loc_82188228;
	case 21:
		goto loc_82188230;
	case 22:
		goto loc_82188238;
	case 23:
		goto loc_82188240;
	case 24:
		goto loc_82188248;
	case 25:
		goto loc_82188250;
	case 26:
		goto loc_82188258;
	case 27:
		goto loc_82188260;
	case 28:
		goto loc_82188268;
	case 29:
		goto loc_82188270;
	case 30:
		goto loc_82188278;
	case 31:
		goto loc_82188280;
	case 32:
		goto loc_82188288;
	case 33:
		goto loc_82188290;
	case 34:
		goto loc_82188298;
	case 35:
		goto loc_821882A0;
	case 36:
		goto loc_821882A8;
	case 37:
		goto loc_821882D8;
	case 38:
		goto loc_821882B0;
	case 39:
		goto loc_821882B8;
	case 40:
		goto loc_821882C0;
	case 41:
		goto loc_821882C8;
	case 42:
		goto loc_821882D0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82188188:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188190:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188198:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881A8:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881B0:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881B8:
	// li r11,60
	ctx.r11.s64 = 60;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881C0:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881C8:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881D0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881D8:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881E0:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881E8:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881F0:
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x821882dc
	goto loc_821882DC;
loc_821881F8:
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188200:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188208:
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188210:
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188218:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188220:
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188228:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188230:
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188238:
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188240:
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188248:
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188250:
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188258:
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188260:
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188268:
	// li r11,53
	ctx.r11.s64 = 53;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188270:
	// li r11,59
	ctx.r11.s64 = 59;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188278:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188280:
	// li r11,50
	ctx.r11.s64 = 50;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188288:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188290:
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x821882dc
	goto loc_821882DC;
loc_82188298:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882A0:
	// li r11,58
	ctx.r11.s64 = 58;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882A8:
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882B0:
	// li r11,55
	ctx.r11.s64 = 55;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882C0:
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882C8:
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821882dc
	goto loc_821882DC;
loc_821882D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821882DC:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821882ec
	goto loc_821882EC;
loc_821882E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821882EC:
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

DEFINE_REX_FUNC(sub_8218F9D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218fa30
	if (ctx.cr6.eq) goto loc_8218FA30;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8218f9fc
	if (!ctx.cr6.eq) goto loc_8218F9FC;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_8218F9FC:
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8218fa10
	if (!ctx.cr6.eq) goto loc_8218FA10;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8218fa14
	goto loc_8218FA14;
loc_8218FA10:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8218FA14:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8218fa34
	goto loc_8218FA34;
loc_8218FA30:
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_8218FA34:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191800) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x82191808;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,3016
	ctx.r6.s64 = ctx.r10.s64 + 3016;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82191850;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82191890
	if (ctx.cr0.eq) goto loc_82191890;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r26,260(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// bl 0x82191640
	ctx.lr = 0x8219188C;
	sub_82191640(ctx, base);
	// b 0x82191894
	goto loc_82191894;
loc_82191890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82191894:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82194148) {
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
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// bne cr6,0x82194168
	if (!ctx.cr6.eq) goto loc_82194168;
	// li r31,0
	r31.s64 = 0;
loc_82194168:
	// bl 0x82187b58
	ctx.lr = 0x8219416C;
	sub_82187B58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82187ff8
	ctx.lr = 0x82194174;
	sub_82187FF8(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2968(r9)
	REX_STORE_U8(ctx.r9.u32 + 2968, ctx.r11.u8);
	// stb r10,2969(r9)
	REX_STORE_U8(ctx.r9.u32 + 2969, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_82196538) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82196540;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x82196570;
	sub_820E4BB0(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,50
	ctx.r3.s64 = 50;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x82191bb0
	ctx.lr = 0x821965A0;
	sub_82191BB0(ctx, base);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821965B8;
	sub_822D4FA0(ctx, base);
	// stb r26,136(r31)
	REX_STORE_U8(r31.u32 + 136, r26.u8);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x821965C4;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821965dc
	if (ctx.cr0.eq) goto loc_821965DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x821965D8;
	sub_820E7330(ctx, base);
	// b 0x821965e0
	goto loc_821965E0;
loc_821965DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821965E0:
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f2,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,26552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-31136(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31136);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820e7428
	ctx.lr = 0x82196608;
	sub_820E7428(ctx, base);
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82196634
	if (ctx.cr0.eq) goto loc_82196634;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27636(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82196664
	goto loc_82196664;
loc_82196634:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,30028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30028);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16200(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82196664:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,-18552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18552);
	f31.f64 = double(temp.f32);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f0,2348(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x820e7380
	ctx.lr = 0x8219669C;
	sub_820E7380(ctx, base);
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// lfs f12,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// beq 0x821966cc
	if (ctx.cr0.eq) goto loc_821966CC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// b 0x821966d0
	goto loc_821966D0;
loc_821966CC:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
loc_821966D0:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,4128(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4128);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82196710;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82196730
	if (ctx.cr0.eq) goto loc_82196730;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82199aa8
	ctx.lr = 0x8219672C;
	sub_82199AA8(ctx, base);
	// b 0x82196734
	goto loc_82196734;
loc_82196730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82196734:
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8219EE18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// mulli r4,r11,80
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219FFF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r10,-24
	ctx.r11.s64 = ctx.r10.s64 + -24;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f10,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,1996(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
loc_821A0040:
	// stw r8,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r6,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r6.u32);
	// stw r6,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r6.u32);
	// bne cr6,0x821a0078
	if (!ctx.cr6.eq) goto loc_821A0078;
	// stfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,88(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f11,92(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f11,152(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f10,156(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f10,216(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f10,220(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 220, temp.u32);
loc_821A0078:
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f12,128(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f13,188(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f12,192(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// stfs f13,252(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stfsu f12,256(r11)
	ea = 256 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r5,48(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821a0040
	if (ctx.cr6.lt) goto loc_821A0040;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3178) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a31e8
	if (!ctx.cr6.gt) goto loc_821A31E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821a33dc
	if (ctx.cr6.gt) goto loc_821A33DC;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x821a31d8
	if (!ctx.cr6.eq) goto loc_821A31D8;
	// li r30,1
	r30.s64 = 1;
	// b 0x821a33dc
	goto loc_821A33DC;
loc_821A31D8:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x821a33dc
	goto loc_821A33DC;
loc_821A31E8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// beq 0x821a3210
	if (ctx.cr0.eq) goto loc_821A3210;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a30a8
	ctx.lr = 0x821A320C;
	sub_821A30A8(ctx, base);
	// b 0x821a33c8
	goto loc_821A33C8;
loc_821A3210:
	// rlwinm. r8,r10,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821a3230
	if (ctx.cr0.eq) goto loc_821A3230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a2e60
	ctx.lr = 0x821A3220;
	sub_821A2E60(ctx, base);
loc_821A3220:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a33c8
	if (ctx.cr0.eq) goto loc_821A33C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a33e0
	goto loc_821A33E0;
loc_821A3230:
	// rlwinm. r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821a3244
	if (ctx.cr0.eq) goto loc_821A3244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a2ed8
	ctx.lr = 0x821A3240;
	sub_821A2ED8(ctx, base);
	// b 0x821a3220
	goto loc_821A3220;
loc_821A3244:
	// rlwinm. r9,r9,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821a3268
	if (ctx.cr0.eq) goto loc_821A3268;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r11,46
	ctx.r11.s64 = 46;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f0,2332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x821a33c0
	goto loc_821A33C0;
loc_821A3268:
	// rlwinm. r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821a32e8
	if (ctx.cr0.eq) goto loc_821A32E8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// blt cr6,0x821a32b8
	if (ctx.cr6.lt) goto loc_821A32B8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x821a32a4
	if (!ctx.cr6.eq) goto loc_821A32A4;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a32a4
	if (!ctx.cr6.eq) goto loc_821A32A4;
loc_821A329C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A32A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821a32e0
	goto loc_821A32E0;
loc_821A32B8:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x821a32d4
	if (ctx.cr6.lt) goto loc_821A32D4;
loc_821A32C4:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// ble cr6,0x821a33bc
	if (!ctx.cr6.gt) goto loc_821A33BC;
loc_821A32CC:
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A32D4:
	// li r10,44
	ctx.r10.s64 = 44;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(44));
loc_821A32E0:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A32E8:
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821a3338
	if (ctx.cr0.eq) goto loc_821A3338;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x821a3320
	if (!ctx.cr6.eq) goto loc_821A3320;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r11,42
	ctx.r11.s64 = 42;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a33bc
	if (!ctx.cr6.eq) goto loc_821A33BC;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A3320:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821a3330
	if (!ctx.cr6.lt) goto loc_821A3330;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x821a32c4
	goto loc_821A32C4;
loc_821A3330:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// b 0x821a32d4
	goto loc_821A32D4;
loc_821A3338:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821a3380
	if (ctx.cr0.eq) goto loc_821A3380;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// blt cr6,0x821a3358
	if (ctx.cr6.lt) goto loc_821A3358;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bge cr6,0x821a33bc
	if (!ctx.cr6.lt) goto loc_821A33BC;
	// b 0x821a32cc
	goto loc_821A32CC;
loc_821A3358:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a329c
	if (ctx.cr0.lt) goto loc_821A329C;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a33bc
	if (!ctx.cr6.eq) goto loc_821A33BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A3380:
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821a33c8
	if (ctx.cr0.eq) goto loc_821A33C8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x821a33a4
	if (ctx.cr6.lt) goto loc_821A33A4;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// ble cr6,0x821a33bc
	if (!ctx.cr6.gt) goto loc_821A33BC;
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x821a33bc
	goto loc_821A33BC;
loc_821A33A4:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821a33bc
	if (!ctx.cr0.eq) goto loc_821A33BC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821A33BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A33C0:
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x8212c578
	ctx.lr = 0x821A33C8;
	sub_8212C578(ctx, base);
loc_821A33C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a33dc
	if (ctx.cr6.eq) goto loc_821A33DC;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_821A33DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821A33E0:
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

DEFINE_REX_FUNC(sub_821AFE80) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202268
	ctx.lr = 0x821AFE9C;
	sub_82202268(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x821afeb4
	if (ctx.cr6.lt) goto loc_821AFEB4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x821afeb4
	if (ctx.cr6.gt) goto loc_821AFEB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821afec8
	goto loc_821AFEC8;
loc_821AFEB4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x820fef70
	ctx.lr = 0x821AFEC8;
	sub_820FEF70(ctx, base);
loc_821AFEC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x821B1360;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82187b58
	ctx.lr = 0x821B1374;
	sub_82187B58(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x821b13c8
	if (!ctx.cr6.lt) goto loc_821B13C8;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r10,194
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 194, ctx.xer);
	// bne cr6,0x821b13c8
	if (!ctx.cr6.eq) goto loc_821B13C8;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(r28.u32, 10, ctx.xer);
	// bne cr6,0x821b13c8
	if (!ctx.cr6.eq) goto loc_821B13C8;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x821b13c8
	if (ctx.cr6.gt) goto loc_821B13C8;
	// li r11,195
	ctx.r11.s64 = 195;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82188698
	ctx.lr = 0x821B13C4;
	sub_82188698(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
loc_821B13C8:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821b1468
	if (!ctx.cr6.eq) goto loc_821B1468;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,196
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 196, ctx.xer);
	// beq cr6,0x821b1400
	if (ctx.cr6.eq) goto loc_821B1400;
	// cmpwi cr6,r11,197
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 197, ctx.xer);
	// bne cr6,0x821b1468
	if (!ctx.cr6.eq) goto loc_821B1468;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// bne cr6,0x821b1468
	if (!ctx.cr6.eq) goto loc_821B1468;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lbz r11,-9787(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -9787);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,-9787(r10)
	REX_STORE_U8(ctx.r10.u32 + -9787, ctx.r11.u8);
	// b 0x821b1468
	goto loc_821B1468;
loc_821B1400:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// bne cr6,0x821b1468
	if (!ctx.cr6.eq) goto loc_821B1468;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,197
	ctx.r11.s64 = 197;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r11,-9787(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -9787);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,-9787(r10)
	REX_STORE_U8(ctx.r10.u32 + -9787, ctx.r11.u8);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82188698
	ctx.lr = 0x821B1438;
	sub_82188698(ctx, base);
	// lbz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 26);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b1468
	if (ctx.cr6.eq) goto loc_821B1468;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B1468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821B9DC8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821b9e30
	if (!ctx.cr6.eq) goto loc_821B9E30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r4,r11,10124
	ctx.r4.s64 = ctx.r11.s64 + 10124;
	// addi r3,r10,-7072
	ctx.r3.s64 = ctx.r10.s64 + -7072;
	// bl 0x821e0ce8
	ctx.lr = 0x821B9DF8;
	sub_821E0CE8(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x821B9E08;
	sub_82202540(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lwz r11,496(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// sth r11,34(r10)
	REX_STORE_U16(ctx.r10.u32 + 34, ctx.r11.u16);
	// bl 0x821b78b0
	ctx.lr = 0x821B9E30;
	sub_821B78B0(ctx, base);
loc_821B9E30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE118) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lha r10,0(r5)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// lwz r9,10012(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10012);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE368) {
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
	// lha r11,2(r5)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 2));
	// lha r4,0(r5)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r6,10024(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 10024);
	// bl 0x821be318
	ctx.lr = 0x821BE388;
	sub_821BE318(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE980) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821BE988;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f30
	ctx.lr = 0x821BE990;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f31,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f31.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// stfs f31,12(r4)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lbz r11,1829(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1829);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821be9e4
	if (ctx.cr0.eq) goto loc_821BE9E4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821be9e4
	if (!ctx.cr6.eq) goto loc_821BE9E4;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821BE9E4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f30.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
loc_821BEA04:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x821bea38
	if (!ctx.cr6.gt) goto loc_821BEA38;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bgt cr6,0x821bea58
	if (ctx.cr6.gt) goto loc_821BEA58;
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bea54
	goto loc_821BEA54;
loc_821BEA38:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x821bea58
	if (!ctx.cr6.gt) goto loc_821BEA58;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
loc_821BEA54:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_821BEA58:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821be8d0
	ctx.lr = 0x821BEA60;
	sub_821BE8D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x821bdf28
	ctx.lr = 0x821BEA6C;
	sub_821BDF28(ctx, base);
	// fmuls f0,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 * ctx.f1.f64));
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lfs f12,5512(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 5512);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// beq 0x821beaa8
	if (ctx.cr0.eq) goto loc_821BEAA8;
	// lbz r11,188(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821beaa8
	if (ctx.cr0.eq) goto loc_821BEAA8;
	// lwz r11,296(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821beaa8
	if (!ctx.cr6.eq) goto loc_821BEAA8;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
loc_821BEAA8:
	// fadds f0,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x821beac8
	if (!ctx.cr6.lt) goto loc_821BEAC8;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x821beac8
	if (!ctx.cr6.gt) goto loc_821BEAC8;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_821BEAC8:
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fctiwz f13,f27
	ctx.f13.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// bne cr6,0x821beb00
	if (!ctx.cr6.eq) goto loc_821BEB00;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821BEB00:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821beb58
	if (ctx.cr6.gt) goto loc_821BEB58;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821beb38
	if (ctx.cr6.eq) goto loc_821BEB38;
	// fctiwz f0,f27
	ctx.f0.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r11,26(r31)
	REX_STORE_U16(r31.u32 + 26, ctx.r11.u16);
	// b 0x821beb3c
	goto loc_821BEB3C;
loc_821BEB38:
	// sth r26,26(r31)
	REX_STORE_U16(r31.u32 + 26, r26.u16);
loc_821BEB3C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x821bea04
	if (!ctx.cr0.lt) goto loc_821BEA04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEB48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f7c
	ctx.lr = 0x821BEB54;
	// b 0x822d4ed0
	return;
loc_821BEB58:
	// sth r27,36(r31)
	REX_STORE_U16(r31.u32 + 36, r27.u16);
	// stfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821beb74
	if (ctx.cr6.eq) goto loc_821BEB74;
	// sth r27,26(r31)
	REX_STORE_U16(r31.u32 + 26, r27.u16);
	// b 0x821beb78
	goto loc_821BEB78;
loc_821BEB74:
	// sth r26,26(r31)
	REX_STORE_U16(r31.u32 + 26, r26.u16);
loc_821BEB78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821beb48
	goto loc_821BEB48;
}

DEFINE_REX_FUNC(sub_821C5230) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821C5238;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r30,84(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c5270
	if (!ctx.cr6.eq) goto loc_821C5270;
	// stb r29,103(r31)
	REX_STORE_U8(r31.u32 + 103, r29.u8);
	// stw r29,112(r30)
	REX_STORE_U32(r30.u32 + 112, r29.u32);
loc_821C5270:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821C527C;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c540c
	if (ctx.cr0.eq) goto loc_821C540C;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// addi r6,r11,432
	ctx.r6.s64 = ctx.r11.s64 + 432;
	// bne cr6,0x821c52e4
	if (!ctx.cr6.eq) goto loc_821C52E4;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r8,104(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 104);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r4,r7,284
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c539c
	if (ctx.cr0.eq) goto loc_821C539C;
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821c539c
	if (!ctx.cr6.eq) goto loc_821C539C;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// b 0x821c539c
	goto loc_821C539C;
loc_821C52E4:
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c5300
	if (ctx.cr6.eq) goto loc_821C5300;
	// lwz r11,19672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19672);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c5304
	if (ctx.cr6.eq) goto loc_821C5304;
loc_821C5300:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_821C5304:
	// lwz r11,-7176(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -7176);
	// lhz r7,2(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c533c
	if (ctx.cr6.eq) goto loc_821C533C;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821c533c
	if (!ctx.cr6.eq) goto loc_821C533C;
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821c533c
	if (ctx.cr6.eq) goto loc_821C533C;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_821C533C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r10,r11,23240
	ctx.r10.s64 = ctx.r11.s64 + 23240;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r4,r10,108
	ctx.r4.s64 = ctx.r10.s64 + 108;
	// mulli r3,r11,284
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r3,r9,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// and. r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821c5388
	if (!ctx.cr0.eq) goto loc_821C5388;
	// mulli r4,r11,284
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c539c
	if (ctx.cr0.eq) goto loc_821C539C;
loc_821C5388:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_821C539C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821c53b4
	if (ctx.cr6.eq) goto loc_821C53B4;
	// lbz r11,203(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 203);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x821c53b8
	if (ctx.cr0.eq) goto loc_821C53B8;
loc_821C53B4:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821C53B8:
	// stb r11,103(r31)
	REX_STORE_U8(r31.u32 + 103, ctx.r11.u8);
	// lwz r11,-7176(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x821c5410
	if (ctx.cr6.lt) goto loc_821C5410;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x821c53f0
	if (!ctx.cr6.gt) goto loc_821C53F0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821c5410
	if (!ctx.cr6.eq) goto loc_821C5410;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// b 0x821c5410
	goto loc_821C5410;
loc_821C53F0:
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// lha r11,2(r6)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 2));
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821c5410
	goto loc_821C5410;
loc_821C540C:
	// stb r29,103(r31)
	REX_STORE_U8(r31.u32 + 103, r29.u8);
loc_821C5410:
	// stw r29,112(r30)
	REX_STORE_U32(r30.u32 + 112, r29.u32);
	// stb r29,112(r31)
	REX_STORE_U8(r31.u32 + 112, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821CC5C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821CC5D0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f34
	ctx.lr = 0x821CC5D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc604
	if (!ctx.cr0.eq) goto loc_821CC604;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821cccd8
	goto loc_821CCCD8;
loc_821CC604:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cccd8
	if (!ctx.cr0.eq) goto loc_821CCCD8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3700
	ctx.r11.u64 = ctx.r11.u64 | 3700;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cccd8
	if (!ctx.cr0.eq) goto loc_821CCCD8;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cccd8
	if (ctx.cr6.eq) goto loc_821CCCD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfa30
	ctx.lr = 0x821CC640;
	sub_821BFA30(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821bfa30
	ctx.lr = 0x821CC64C;
	sub_821BFA30(ctx, base);
	// bl 0x821c1f08
	ctx.lr = 0x821CC650;
	sub_821C1F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3ee8
	ctx.lr = 0x821CC658;
	sub_821C3EE8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c3ee8
	ctx.lr = 0x821CC664;
	sub_821C3EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c2f08
	ctx.lr = 0x821CC670;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cccd8
	if (ctx.cr0.eq) goto loc_821CCCD8;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x821CC688;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cccd8
	if (ctx.cr0.eq) goto loc_821CCCD8;
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc6b4
	if (!ctx.cr0.eq) goto loc_821CC6B4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r27,0
	r27.s64 = 0;
	// ori r11,r11,3884
	ctx.r11.u64 = ctx.r11.u64 | 3884;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc6b8
	if (ctx.cr0.eq) goto loc_821CC6B8;
loc_821CC6B4:
	// li r27,1
	r27.s64 = 1;
loc_821CC6B8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r10,13844
	ctx.r10.u64 = ctx.r10.u64 | 13844;
	// addi r29,r11,64
	r29.s64 = ctx.r11.s64 + 64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lfs f31,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	f31.f64 = double(temp.f32);
	// lfs f29,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	f29.f64 = double(temp.f32);
	// addi r28,r11,64
	r28.s64 = ctx.r11.s64 + 64;
	// lfs f28,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	f28.f64 = double(temp.f32);
	// lfs f27,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	f27.f64 = double(temp.f32);
	// bl 0x821c74d8
	ctx.lr = 0x821CC6E8;
	sub_821C74D8(ctx, base);
	// stfs f1,6820(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 6820, temp.u32);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c74d8
	ctx.lr = 0x821CC6F8;
	sub_821C74D8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r11,r11,10516
	ctx.r11.u64 = ctx.r11.u64 | 10516;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// stfsx f1,r31,r11
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// bne cr6,0x821cc760
	if (!ctx.cr6.eq) goto loc_821CC760;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821CC724;
	sub_821AFE08(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// ori r10,r10,13844
	ctx.r10.u64 = ctx.r10.u64 | 13844;
	// lfs f1,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,9968
	ctx.r5.s64 = ctx.r11.s64 + 9968;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x8215b500
	ctx.lr = 0x821CC748;
	sub_8215B500(ctx, base);
	// clrlwi r27,r3,24
	r27.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-103
	ctx.r3.s64 = -6750208;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,6655
	ctx.r3.u64 = ctx.r3.u64 | 6655;
	// bl 0x821afe08
	ctx.lr = 0x821CC75C;
	sub_821AFE08(ctx, base);
	// b 0x821cc838
	goto loc_821CC838;
loc_821CC760:
	// lwz r3,288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 288);
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x821cc7f4
	if (!ctx.cr6.eq) goto loc_821CC7F4;
	// bl 0x821c7300
	ctx.lr = 0x821CC778;
	sub_821C7300(ctx, base);
	// lwz r11,10148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10148);
	// lfs f13,10628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lwz r11,10148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10148);
	// lfs f0,10636(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lwz r11,5776(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5776);
	// lfs f13,10628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10628);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc7d4
	if (!ctx.cr0.eq) goto loc_821CC7D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10636(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10636);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10580(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10580, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,10588(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10588, temp.u32);
	// b 0x821cc810
	goto loc_821CC810;
loc_821CC7D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10580(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 10580, temp.u32);
	// lfs f13,10636(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10636);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10588(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 10588, temp.u32);
	// b 0x821cc810
	goto loc_821CC810;
loc_821CC7F4:
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821cc810
	if (!ctx.cr6.eq) goto loc_821CC810;
	// stfs f30,10588(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 10588, temp.u32);
	// stfs f30,10580(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 10580, temp.u32);
	// stfs f30,10588(r6)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r6.u32 + 10588, temp.u32);
	// stfs f30,10580(r6)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r6.u32 + 10580, temp.u32);
loc_821CC810:
	// lfs f0,8128(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10236(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 10236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821cc828
	if (!ctx.cr6.lt) goto loc_821CC828;
	// lfs f0,10488(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10488(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 10488, temp.u32);
loc_821CC828:
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// li r27,1
	r27.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
loc_821CC838:
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x82128448
	ctx.lr = 0x821CC854;
	sub_82128448(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,38
	ctx.r4.s64 = 38;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821bf940
	ctx.lr = 0x821CC870;
	sub_821BF940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x821be318
	ctx.lr = 0x821CC884;
	sub_821BE318(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821bf940
	ctx.lr = 0x821CC8A4;
	sub_821BF940(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821be318
	ctx.lr = 0x821CC8BC;
	sub_821BE318(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// bl 0x821afe08
	ctx.lr = 0x821CC8CC;
	sub_821AFE08(ctx, base);
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fsubs f3,f29,f0
	ctx.f3.f64 = double(float(f29.f64 - ctx.f0.f64));
	// fsubs f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 - ctx.f13.f64));
	// bl 0x821c7250
	ctx.lr = 0x821CC8E8;
	sub_821C7250(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lfs f0,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// fsubs f3,f27,f0
	ctx.f3.f64 = double(float(f27.f64 - ctx.f0.f64));
	// fsubs f1,f28,f13
	ctx.f1.f64 = double(float(f28.f64 - ctx.f13.f64));
	// bl 0x821c7250
	ctx.lr = 0x821CC908;
	sub_821C7250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7300
	ctx.lr = 0x821CC910;
	sub_821C7300(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c7300
	ctx.lr = 0x821CC91C;
	sub_821C7300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c73a8
	ctx.lr = 0x821CC924;
	sub_821C73A8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c73a8
	ctx.lr = 0x821CC930;
	sub_821C73A8(ctx, base);
	// lbz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 212);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r10,-27648
	r29.s64 = ctx.r10.s64 + -27648;
	// stb r11,283(r31)
	REX_STORE_U8(r31.u32 + 283, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125e10
	ctx.lr = 0x821CC94C;
	sub_82125E10(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// ori r10,r10,3908
	ctx.r10.u64 = ctx.r10.u64 | 3908;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// ori r9,r9,3979
	ctx.r9.u64 = ctx.r9.u64 | 3979;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// stbx r11,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x82125e10
	ctx.lr = 0x821CC974;
	sub_82125E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c45c8
	ctx.lr = 0x821CC97C;
	sub_821C45C8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c45c8
	ctx.lr = 0x821CC988;
	sub_821C45C8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x82126988
	ctx.lr = 0x821CC998;
	sub_82126988(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// addi r10,r31,20092
	ctx.r10.s64 = r31.s64 + 20092;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10532(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10532, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10536(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10536, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10540(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10540, temp.u32);
	// bl 0x821c4a08
	ctx.lr = 0x821CC9C8;
	sub_821C4A08(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// ori r9,r10,13836
	ctx.r9.u64 = ctx.r10.u64 | 13836;
	// addi r10,r11,23788
	ctx.r10.s64 = ctx.r11.s64 + 23788;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r8,14228
	ctx.r8.u64 = ctx.r8.u64 | 14228;
	// ori r6,r11,14232
	ctx.r6.u64 = ctx.r11.u64 | 14232;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r7,r7,14236
	ctx.r7.u64 = ctx.r7.u64 | 14236;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// bl 0x821c4a08
	ctx.lr = 0x821CCA20;
	sub_821C4A08(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f13,10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,14228
	ctx.r11.u64 = ctx.r11.u64 | 14228;
	// lfs f11,10540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10540);
	ctx.f11.f64 = double(temp.f32);
	// ori r10,r10,14236
	ctx.r10.u64 = ctx.r10.u64 | 14236;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r9,r9,14232
	ctx.r9.u64 = ctx.r9.u64 | 14232;
	// lfsx f0,r31,r11
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f12,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f31,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfsx f0,r31,r9
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10536);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f0,384(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 384, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,392(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 392, temp.u32);
	// fmadds f12,f1,f1,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f11.f64)));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,388(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 388, temp.u32);
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f0,416(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 416, temp.u32);
	// bl 0x820e0130
	ctx.lr = 0x821CCA98;
	sub_820E0130(ctx, base);
	// lwz r11,10244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10244);
	// stfs f1,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 228, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ccb44
	if (!ctx.cr6.gt) goto loc_821CCB44;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13940
	ctx.r11.u64 = ctx.r11.u64 | 13940;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ccb44
	if (!ctx.cr6.gt) goto loc_821CCB44;
	// lfs f0,232(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821af850
	ctx.lr = 0x821CCAC8;
	sub_821AF850(ctx, base);
	// lfs f0,10160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10160);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ccae4
	if (!ctx.cr6.gt) goto loc_821CCAE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CCAE4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13856
	ctx.r11.u64 = ctx.r11.u64 | 13856;
	// lfsx f13,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ccb00
	if (!ctx.cr6.lt) goto loc_821CCB00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CCB00:
	// fmuls f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821ccb20
	if (!ctx.cr6.gt) goto loc_821CCB20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,21808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821ccb34
	if (!ctx.cr6.gt) goto loc_821CCB34;
	// b 0x821ccb30
	goto loc_821CCB30;
loc_821CCB20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10760);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ccb34
	if (!ctx.cr6.lt) goto loc_821CCB34;
loc_821CCB30:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_821CCB34:
	// lfs f13,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,232(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 232, temp.u32);
	// bl 0x821af850
	ctx.lr = 0x821CCB44;
	sub_821AF850(ctx, base);
loc_821CCB44:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f1,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 232, temp.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,9596
	ctx.r11.u64 = ctx.r11.u64 | 9596;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ccb80
	if (ctx.cr6.eq) goto loc_821CCB80;
	// stw r11,5756(r31)
	REX_STORE_U32(r31.u32 + 5756, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r10,9600
	ctx.r10.u64 = ctx.r10.u64 | 9600;
	// ori r9,r11,9604
	ctx.r9.u64 = ctx.r11.u64 | 9604;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// stw r10,5772(r31)
	REX_STORE_U32(r31.u32 + 5772, ctx.r10.u32);
	// b 0x821ccba8
	goto loc_821CCBA8;
loc_821CCB80:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,9488
	ctx.r10.u64 = ctx.r10.u64 | 9488;
	// ori r9,r9,9480
	ctx.r9.u64 = ctx.r9.u64 | 9480;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,9476
	ctx.r11.u64 = ctx.r11.u64 | 9476;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stw r10,5756(r31)
	REX_STORE_U32(r31.u32 + 5756, ctx.r10.u32);
	// stw r9,5772(r31)
	REX_STORE_U32(r31.u32 + 5772, ctx.r9.u32);
loc_821CCBA8:
	// lwz r9,5900(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5900);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r11,5768(r31)
	REX_STORE_U32(r31.u32 + 5768, ctx.r11.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r8,r8,9464
	ctx.r8.u64 = ctx.r8.u64 | 9464;
	// ori r7,r7,9468
	ctx.r7.u64 = ctx.r7.u64 | 9468;
	// ori r6,r6,9452
	ctx.r6.u64 = ctx.r6.u64 | 9452;
	// beq cr6,0x821ccbdc
	if (ctx.cr6.eq) goto loc_821CCBDC;
	// lwz r11,5904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5904);
	// lwz r10,5908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5908);
	// b 0x821ccbe8
	goto loc_821CCBE8;
loc_821CCBDC:
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r9,5792(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5792);
loc_821CCBE8:
	// stwx r9,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// stwx r10,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r11,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821CCC04;
	sub_821AFE08(ctx, base);
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821cccb4
	if (!ctx.cr6.eq) goto loc_821CCCB4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,23368
	ctx.r11.u64 = ctx.r11.u64 | 23368;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821cccb4
	if (!ctx.cr6.eq) goto loc_821CCCB4;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c3e70
	ctx.lr = 0x821CCC34;
	sub_821C3E70(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821c3e70
	ctx.lr = 0x821CCC50;
	sub_821C3E70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r4,7
	ctx.r4.s64 = 7;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821c3e70
	ctx.lr = 0x821CCC68;
	sub_821C3E70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821c3e70
	ctx.lr = 0x821CCC80;
	sub_821C3E70(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// ori r10,r11,13844
	ctx.r10.u64 = ctx.r11.u64 | 13844;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// subfe r7,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r11,9968
	ctx.r5.s64 = ctx.r11.s64 + 9968;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// bl 0x8215b898
	ctx.lr = 0x821CCCB4;
	sub_8215B898(ctx, base);
loc_821CCCB4:
	// lis r3,-256
	ctx.r3.s64 = -16777216;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821CCCC4;
	sub_821AFE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cbe28
	ctx.lr = 0x821CCCCC;
	sub_821CBE28(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cbe28
	ctx.lr = 0x821CCCD8;
	sub_821CBE28(ctx, base);
loc_821CCCD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f80
	ctx.lr = 0x821CCCE4;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821EC1D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1814(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1814);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,7792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// beq 0x821ec1fc
	if (ctx.cr0.eq) goto loc_821EC1FC;
	// b 0x821ec008
	sub_821EC008(ctx, base);
	return;
loc_821EC1FC:
	// b 0x821eb7f8
	sub_821EB7F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EC628) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821ec640
	if (!ctx.cr6.lt) goto loc_821EC640;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,27844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27844);
	ctx.f1.f64 = double(temp.f32);
loc_821EC640:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stfs f1,-252(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -252, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED290) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lfs f1,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1668);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x821EF840;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f23b8
	ctx.lr = 0x821EF854;
	sub_821F23B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ef864
	if (!ctx.cr0.eq) goto loc_821EF864;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821efa0c
	goto loc_821EFA0C;
loc_821EF864:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r11,7728
	ctx.r3.s64 = ctx.r11.s64 + 7728;
	// bl 0x820e01b0
	ctx.lr = 0x821EF870;
	sub_820E01B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ff6b8
	ctx.lr = 0x821EF87C;
	sub_821FF6B8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r31,r11,7856
	r31.s64 = ctx.r11.s64 + 7856;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r10,-3616
	ctx.r10.s64 = ctx.r10.s64 + -3616;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_821EF8A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ec570
	ctx.lr = 0x821EF8A8;
	sub_821EC570(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,1536(r30)
	REX_STORE_U32(r30.u32 + 1536, r29.u32);
	// bl 0x821eb7f8
	ctx.lr = 0x821EF8B8;
	sub_821EB7F8(ctx, base);
	// addi r30,r30,5040
	r30.s64 = r30.s64 + 5040;
	// addi r11,r31,25200
	ctx.r11.s64 = r31.s64 + 25200;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ef8a0
	if (ctx.cr6.lt) goto loc_821EF8A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,1545(r31)
	REX_STORE_U8(r31.u32 + 1545, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,1544(r31)
	REX_STORE_U8(r31.u32 + 1544, ctx.r10.u8);
	// bl 0x821ebd58
	ctx.lr = 0x821EF8E0;
	sub_821EBD58(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r31,7792(r11)
	REX_STORE_U32(ctx.r11.u32 + 7792, r31.u32);
	// bl 0x8229a710
	ctx.lr = 0x821EF8EC;
	sub_8229A710(ctx, base);
	// bl 0x821e8b98
	ctx.lr = 0x821EF8F0;
	sub_821E8B98(ctx, base);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// ori r3,r3,33172
	ctx.r3.u64 = ctx.r3.u64 | 33172;
	// bl 0x82202ea0
	ctx.lr = 0x821EF8FC;
	sub_82202EA0(ctx, base);
	// lis r31,-32166
	r31.s64 = -2108030976;
	// stw r3,7796(r31)
	REX_STORE_U32(r31.u32 + 7796, ctx.r3.u32);
	// bl 0x821f0bc8
	ctx.lr = 0x821EF908;
	sub_821F0BC8(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,7796(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 7796);
	// bl 0x821f8360
	ctx.lr = 0x821EF918;
	sub_821F8360(ctx, base);
	// lis r31,-32166
	r31.s64 = -2108030976;
	// stw r3,7800(r31)
	REX_STORE_U32(r31.u32 + 7800, ctx.r3.u32);
	// bl 0x821f08e8
	ctx.lr = 0x821EF924;
	sub_821F08E8(ctx, base);
	// lis r30,-32165
	r30.s64 = -2107965440;
	// lwz r11,7800(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7800);
	// addi r10,r30,-32480
	ctx.r10.s64 = r30.s64 + -32480;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// bl 0x821ec210
	ctx.lr = 0x821EF938;
	sub_821EC210(ctx, base);
	// bl 0x821ec468
	ctx.lr = 0x821EF93C;
	sub_821EC468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,17660
	ctx.r6.s64 = ctx.r11.s64 + 17660;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,9999
	ctx.r5.s64 = 9999;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x821f7d50
	ctx.lr = 0x821EF964;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ef990
	if (ctx.cr0.eq) goto loc_821EF990;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// addi r11,r11,17640
	ctx.r11.s64 = ctx.r11.s64 + 17640;
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// b 0x821ef994
	goto loc_821EF994;
loc_821EF990:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821EF994:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stb r27,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r27.u8);
	// stb r27,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, r27.u8);
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stw r11,1800(r10)
	REX_STORE_U32(ctx.r10.u32 + 1800, ctx.r11.u32);
	// bl 0x8229a710
	ctx.lr = 0x821EF9AC;
	sub_8229A710(ctx, base);
	// bl 0x822051a8
	ctx.lr = 0x821EF9B0;
	sub_822051A8(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lfd f0,31656(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31656);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,31632(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 31632);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821ff008
	ctx.lr = 0x821EF9DC;
	sub_821FF008(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r3,504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x821fa9f8
	ctx.lr = 0x821EF9E8;
	sub_821FA9F8(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r3,508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x821ef180
	ctx.lr = 0x821EF9F4;
	sub_821EF180(ctx, base);
	// bl 0x82119778
	ctx.lr = 0x821EF9F8;
	sub_82119778(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32044);
	// bl 0x821ef0b0
	ctx.lr = 0x821EFA04;
	sub_821EF0B0(ctx, base);
	// bl 0x821ff8f8
	ctx.lr = 0x821EFA08;
	sub_821FF8F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EFA0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F7890) {
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
	// rotlwi. r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f78c8
	if (ctx.cr0.eq) goto loc_821F78C8;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f78c8
	if (!ctx.cr0.eq) goto loc_821F78C8;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,32914
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32914, ctx.xer);
	// bne cr6,0x821f78c8
	if (!ctx.cr6.eq) goto loc_821F78C8;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r10,r3
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x821f78cc
	if (ctx.cr6.eq) goto loc_821F78CC;
loc_821F78C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F78CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f78f4
	if (ctx.cr6.eq) goto loc_821F78F4;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f78f4
	if (!ctx.cr6.eq) goto loc_821F78F4;
	// ld r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x822052b8
	ctx.lr = 0x821F78EC;
	sub_822052B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f78f8
	goto loc_821F78F8;
loc_821F78F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821F78F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821F9298;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30832
	ctx.r12.u64 = ctx.r12.u64 | 30832;
	// bl 0x822d6634
	ctx.lr = 0x821F92A4;
	sub_822D6634(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f92bc
	if (!ctx.cr6.eq) goto loc_821F92BC;
	// li r11,17
	ctx.r11.s64 = 17;
loc_821F92BC:
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r29,r11,3380
	r29.s64 = ctx.r11.s64 + 3380;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stw r5,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r5.u32);
	// stfs f1,16(r29)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stb r11,48(r29)
	REX_STORE_U8(r29.u32 + 48, ctx.r11.u8);
	// stfs f2,20(r29)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// bl 0x82207d70
	ctx.lr = 0x821F9320;
	sub_82207D70(ctx, base);
	// mulli r30,r3,40
	r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(40));
	// lwz r10,84(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 84);
	// lfs f2,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r10,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,3936
	ctx.r3.s64 = ctx.r1.s64 + 3936;
	// lfs f13,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
	// lfs f12,-40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 72, temp.u32);
	// stfs f13,68(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// bl 0x821f8c68
	ctx.lr = 0x821F9370;
	sub_821F8C68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 48);
	// bl 0x821f8fe0
	ctx.lr = 0x821F9380;
	sub_821F8FE0(ctx, base);
	// addi r28,r1,3936
	r28.s64 = ctx.r1.s64 + 3936;
	// li r29,8
	r29.s64 = 8;
loc_821F9388:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f8fe0
	ctx.lr = 0x821F9398;
	sub_821F8FE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// bne 0x821f9388
	if (!ctx.cr0.eq) goto loc_821F9388;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x821fe738
	ctx.lr = 0x821F93B0;
	sub_821FE738(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821FEFB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x821fefc0
	if (!ctx.cr6.lt) goto loc_821FEFC0;
loc_821FEFB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821FEFC0:
	// beq cr6,0x821ff000
	if (ctx.cr6.eq) goto loc_821FF000;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821ff000
	if (ctx.cr6.eq) goto loc_821FF000;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fefb8
	if (ctx.cr0.eq) goto loc_821FEFB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x821ff000
	if (!ctx.cr6.gt) goto loc_821FF000;
loc_821FEFE0:
	// divwu r10,r3,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821fefb8
	if (ctx.cr0.eq) goto loc_821FEFB8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821fefe0
	if (ctx.cr6.lt) goto loc_821FEFE0;
loc_821FF000:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200790) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200808) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,376(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200868) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200958) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f2,348(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f3,364(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200B68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16184(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16184);
	ctx.f11.f64 = double(temp.f32);
	// stw r31,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, r31.u32);
	// lfs f10,16172(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16172);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// lfs f31,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r31,404(r3)
	REX_STORE_U32(ctx.r3.u32 + 404, r31.u32);
	// stfs f13,388(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f13,392(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f12,372(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stfs f11,376(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f31,104(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f31,112(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f31,108(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f1,16168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16168);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x82200C34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82200C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,320(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 320, temp.u32);
	// stw r31,316(r30)
	REX_STORE_U32(r30.u32 + 316, r31.u32);
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

DEFINE_REX_FUNC(sub_822065C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822065D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822065f4
	if (ctx.cr6.eq) goto loc_822065F4;
	// stw r30,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r30.u32);
	// b 0x82206600
	goto loc_82206600;
loc_822065F4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_82206600:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// blt cr6,0x822066a8
	if (ctx.cr6.lt) goto loc_822066A8;
	// beq cr6,0x82206620
	if (ctx.cr6.eq) goto loc_82206620;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bge cr6,0x82206760
	if (!ctx.cr6.lt) goto loc_82206760;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// b 0x82206760
	goto loc_82206760;
loc_82206620:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82206684
	if (!ctx.cr6.eq) goto loc_82206684;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r7,r10,3552
	ctx.r7.s64 = ctx.r10.s64 + 3552;
	// addi r11,r11,23320
	ctx.r11.s64 = ctx.r11.s64 + 23320;
	// addi r9,r11,768
	ctx.r9.s64 = ctx.r11.s64 + 768;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// addi r10,r9,2072
	ctx.r10.s64 = ctx.r9.s64 + 2072;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r30,768(r11)
	REX_STORE_U32(ctx.r11.u32 + 768, r30.u32);
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// stw r10,788(r11)
	REX_STORE_U32(ctx.r11.u32 + 788, ctx.r10.u32);
	// stw r9,784(r11)
	REX_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// addi r6,r6,18688
	ctx.r6.s64 = ctx.r6.s64 + 18688;
	// stw r10,776(r11)
	REX_STORE_U32(ctx.r11.u32 + 776, ctx.r10.u32);
	// stw r30,772(r11)
	REX_STORE_U32(ctx.r11.u32 + 772, r30.u32);
	// stw r6,780(r11)
	REX_STORE_U32(ctx.r11.u32 + 780, ctx.r6.u32);
	// lwz r11,30464(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 30464);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r7,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r7.u32);
loc_82206684:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82206420
	ctx.lr = 0x822066A4;
	sub_82206420(ctx, base);
	// b 0x82206760
	goto loc_82206760;
loc_822066A8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82206734
	if (!ctx.cr6.eq) goto loc_82206734;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,30736
	ctx.r11.s64 = ctx.r11.s64 + 30736;
	// lis r5,-32173
	ctx.r5.s64 = -2108489728;
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// addi r9,r11,792
	ctx.r9.s64 = ctx.r11.s64 + 792;
	// addi r8,r11,2840
	ctx.r8.s64 = ctx.r11.s64 + 2840;
	// addi r7,r11,2840
	ctx.r7.s64 = ctx.r11.s64 + 2840;
	// stw r9,784(r11)
	REX_STORE_U32(ctx.r11.u32 + 784, ctx.r9.u32);
	// addi r10,r6,21528
	ctx.r10.s64 = ctx.r6.s64 + 21528;
	// stw r30,768(r11)
	REX_STORE_U32(ctx.r11.u32 + 768, r30.u32);
	// stw r7,776(r11)
	REX_STORE_U32(ctx.r11.u32 + 776, ctx.r7.u32);
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// stw r8,788(r11)
	REX_STORE_U32(ctx.r11.u32 + 788, ctx.r8.u32);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// stw r10,780(r11)
	REX_STORE_U32(ctx.r11.u32 + 780, ctx.r10.u32);
	// addi r10,r5,3552
	ctx.r10.s64 = ctx.r5.s64 + 3552;
	// stw r30,772(r11)
	REX_STORE_U32(ctx.r11.u32 + 772, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r11,30464(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 30464);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,3552(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 3552);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82206420
	ctx.lr = 0x8220672C;
	sub_82206420(ctx, base);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// b 0x82206760
	goto loc_82206760;
loc_82206734:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822064e8
	ctx.lr = 0x82206754;
	sub_822064E8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_82206760:
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8220EF94) {
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
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8220efc0
	if (ctx.cr6.eq) goto loc_8220EFC0;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x824d437c
	ctx.lr = 0x8220EFC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8220EFC0:
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

DEFINE_REX_FUNC(sub_822102D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210568) {
	REX_FUNC_PROLOGUE();
	// lhz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822106E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822108D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24392);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210920) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12308(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12308);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210990) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,10548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12312(r3)
	REX_STORE_U32(ctx.r3.u32 + 12312, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
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

DEFINE_REX_FUNC(sub_82211080) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12332(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822112F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211320) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211430) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822117F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211A30) {
	REX_FUNC_PROLOGUE();
	// stw r4,14000(r3)
	REX_STORE_U32(ctx.r3.u32 + 14000, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lbz r9,10890(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = ctx.r11.s64 + 10890;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	REX_STORE_U8(ctx.r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822151E0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221520c
	if (!ctx.cr6.gt) goto loc_8221520C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221520C;
	sub_82215008(ctx, base);
loc_8221520C:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3332
	ctx.r11.s64 = 3332;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822160F0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82216184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82216184;
	// bdzf 4*cr6+eq,0x8221615c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8221615C;
	// bdzf 4*cr6+eq,0x82216198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82216198;
	// bdzf 4*cr6+eq,0x822161b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822161B0;
	// bdzf 4*cr6+eq,0x822161c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822161C4;
	// bdzf 4*cr6+eq,0x822161cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822161CC;
	// bdzf 4*cr6+eq,0x822161d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822161D4;
	// bne cr6,0x822161d4
	if (!ctx.cr6.eq) goto loc_822161D4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r4,12836
	ctx.r9.s64 = ctx.r4.s64 + 12836;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82216140:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216150
	if (!ctx.cr6.eq) goto loc_82216150;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82216150:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82216140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82216140;
	// blr 
	return;
loc_8221615C:
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r9,r4,12920
	ctx.r9.s64 = ctx.r4.s64 + 12920;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82216168:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216178
	if (!ctx.cr6.eq) goto loc_82216178;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82216178:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82216168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82216168;
	// blr 
	return;
loc_82216184:
	// lwz r10,12812(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12812);
loc_82216188:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82216198:
	// lwz r10,12816(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12816);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822161a8
	if (!ctx.cr6.eq) goto loc_822161A8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822161A8:
	// lwz r10,12832(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12832);
	// b 0x82216188
	goto loc_82216188;
loc_822161B0:
	// lwz r10,12240(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12240);
loc_822161B4:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_822161C4:
	// lwz r10,13072(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 13072);
	// b 0x822161b4
	goto loc_822161B4;
loc_822161CC:
	// lwz r10,13068(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 13068);
	// b 0x822161b4
	goto loc_822161B4;
loc_822161D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AA90) {
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
	// bl 0x8221aa38
	ctx.lr = 0x8221AAAC;
	sub_8221AA38(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221aac4
	if (ctx.cr0.eq) goto loc_8221AAC4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x8221AAC4;
	sub_822D5870(ctx, base);
loc_8221AAC4:
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

DEFINE_REX_FUNC(sub_8221C940) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8221C948;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,76
	r27.s64 = ctx.r3.s64 + 76;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x824d447c
	ctx.lr = 0x8221C964;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221ca60
	if (!ctx.cr6.eq) goto loc_8221CA60;
	// lis r29,256
	r29.s64 = 16777216;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bne 0x8221ca24
	if (!ctx.cr0.eq) goto loc_8221CA24;
	// bl 0x824d419c
	ctx.lr = 0x8221C9A8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221c9bc
	if (!ctx.cr6.eq) goto loc_8221C9BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x8221c9c4
	goto loc_8221C9C4;
loc_8221C9BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_8221C9C4:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11664
	ctx.r11.s64 = ctx.r11.s64 + 11664;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221C9D8:
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// slw r10,r29,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221ca00
	if (ctx.cr0.eq) goto loc_8221CA00;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_8221CA00:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x8221c9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221C9D8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ca24
	if (!ctx.cr6.eq) goto loc_8221CA24;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_8221CA24:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d446c
	ctx.lr = 0x8221CA30;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221c798
	ctx.lr = 0x8221CA38;
	sub_8221C798(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221ca4c
	if (ctx.cr6.eq) goto loc_8221CA4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d457c
	ctx.lr = 0x8221CA4C;
	__imp__KeUnlockL2(ctx, base);
loc_8221CA4C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8221ca70
	goto loc_8221CA70;
loc_8221CA60:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d446c
	ctx.lr = 0x8221CA6C;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
loc_8221CA70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82221B78) {
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
	// bl 0x822d4e54
	ctx.lr = 0x82221B80;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// clrlwi r22,r10,26
	r22.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lbzx r21,r10,r11
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// bl 0x82215b80
	ctx.lr = 0x82221BC0;
	sub_82215B80(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82221c30
	if (!ctx.cr6.eq) goto loc_82221C30;
	// bl 0x82221288
	ctx.lr = 0x82221BE0;
	sub_82221288(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// rlwinm r9,r11,10,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FF;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mullw r31,r9,r21
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r31,r31,2,3,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1FFFFFFC;
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x82221580
	ctx.lr = 0x82221C2C;
	sub_82221580(ctx, base);
	// b 0x82221ee4
	goto loc_82221EE4;
loc_82221C30:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82221288
	ctx.lr = 0x82221C40;
	sub_82221288(ctx, base);
	// lwz r28,48(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r26,r28,23,30,31
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r8,r25
	ctx.r9.u64 = r25.u64 - ctx.r8.u64;
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r8,r27
	ctx.r7.u64 = r27.u64 - ctx.r8.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// slw r3,r5,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x82221cb4
	if (!ctx.cr6.eq) goto loc_82221CB4;
	// subf r11,r8,r24
	ctx.r11.u64 = r24.u64 - ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r29,r5,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82221cb8
	goto loc_82221CB8;
loc_82221CB4:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_82221CB8:
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82221d80
	if (!ctx.cr6.eq) goto loc_82221D80;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// ble cr6,0x82221cd4
	if (!ctx.cr6.gt) goto loc_82221CD4;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x82221cdc
	if (ctx.cr6.gt) goto loc_82221CDC;
loc_82221CD4:
	// rlwinm. r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82221ce8
	if (!ctx.cr0.eq) goto loc_82221CE8;
loc_82221CDC:
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
loc_82221CE8:
	// lwz r29,28(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// rlwinm r22,r29,1,31,31
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// bl 0x82221580
	ctx.lr = 0x82221D10;
	sub_82221580(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x82221d70
	if (!ctx.cr6.eq) goto loc_82221D70;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82221d70
	if (!ctx.cr0.eq) goto loc_82221D70;
	// rlwinm. r10,r28,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82221d70
	if (!ctx.cr0.eq) goto loc_82221D70;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x82221d70
	if (!ctx.cr6.eq) goto loc_82221D70;
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r10,r10,0,22,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82221d70
	if (!ctx.cr0.eq) goto loc_82221D70;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82221d70
	if (!ctx.cr6.eq) goto loc_82221D70;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82221460
	ctx.lr = 0x82221D58;
	sub_82221460(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82221D70:
	// rlwinm r11,r29,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,2,3,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x82221ee4
	goto loc_82221EE4;
loc_82221D80:
	// srw r11,r9,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r23.u8 & 0x3F));
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82221d98
	if (ctx.cr6.gt) goto loc_82221D98;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82221D98:
	// srw r10,r7,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r23.u8 & 0x3F));
	// add r25,r11,r8
	r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82221dac
	if (ctx.cr6.gt) goto loc_82221DAC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82221DAC:
	// add r27,r10,r8
	r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// bne cr6,0x82221dd4
	if (!ctx.cr6.eq) goto loc_82221DD4;
	// subf r11,r8,r24
	ctx.r11.u64 = r24.u64 - ctx.r8.u64;
	// srw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82221dcc
	if (ctx.cr6.gt) goto loc_82221DCC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82221DCC:
	// add r24,r11,r8
	r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82221dd8
	goto loc_82221DD8;
loc_82221DD4:
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
loc_82221DD8:
	// rlwinm. r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82221e78
	if (ctx.cr0.eq) goto loc_82221E78;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r7,r31
	ctx.r10.u64 = r31.u64 - ctx.r7.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82221e14
	if (ctx.cr6.lt) goto loc_82221E14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82221E14:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82221e78
	if (ctx.cr6.lt) goto loc_82221E78;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r9,r31
	ctx.r10.u64 = r31.u64 - ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82221e64
	if (ctx.cr6.lt) goto loc_82221E64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82221E64:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82221E78:
	// srw r11,r4,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x82221e8c
	if (ctx.cr6.gt) goto loc_82221E8C;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_82221E8C:
	// srw r11,r3,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82221ea0
	if (ctx.cr6.gt) goto loc_82221EA0;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_82221EA0:
	// srw r11,r29,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (r29.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82221eb4
	if (ctx.cr6.gt) goto loc_82221EB4;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82221EB4:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x82221580
	ctx.lr = 0x82221ED8;
	sub_82221580(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82221EE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,0(r20)
	REX_STORE_U32(r20.u32 + 0, r25.u32);
	// stw r27,0(r19)
	REX_STORE_U32(r19.u32 + 0, r27.u32);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// stw r24,0(r18)
	REX_STORE_U32(r18.u32 + 0, r24.u32);
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82221f24
	if (!ctx.cr0.eq) goto loc_82221F24;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// bgt cr6,0x82221f24
	if (ctx.cr6.gt) goto loc_82221F24;
	// cmpwi cr6,r15,3
	ctx.cr6.compare<int32_t>(r15.s32, 3, ctx.xer);
	// beq cr6,0x82221f40
	if (ctx.cr6.eq) goto loc_82221F40;
	// cmpwi cr6,r15,20
	ctx.cr6.compare<int32_t>(r15.s32, 20, ctx.xer);
	// beq cr6,0x82221f40
	if (ctx.cr6.eq) goto loc_82221F40;
loc_82221F24:
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// beq cr6,0x82221f40
	if (ctx.cr6.eq) goto loc_82221F40;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
loc_82221F40:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_822345D8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x822345E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// not r11,r6
	ctx.r11.u64 = ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// rlwinm r24,r11,30,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r4,1088
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1088, ctx.xer);
	// bge cr6,0x82234644
	if (!ctx.cr6.lt) goto loc_82234644;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234624
	if (ctx.cr6.eq) goto loc_82234624;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,122
	r31.u64 = r31.u64 | 122;
	// b 0x822346a0
	goto loc_822346A0;
loc_82234624:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1088
	ctx.r4.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d47bc
	ctx.lr = 0x82234634;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82234690
	if (ctx.cr0.lt) goto loc_82234690;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82234648
	goto loc_82234648;
loc_82234644:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82234648:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r4,r11,-5864
	ctx.r4.s64 = ctx.r11.s64 + -5864;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82235870
	ctx.lr = 0x82234670;
	sub_82235870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82234690
	if (ctx.cr0.lt) goto loc_82234690;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822361a0
	ctx.lr = 0x82234680;
	sub_822361A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82234690
	if (ctx.cr0.lt) goto loc_82234690;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82234690:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822346a0
	if (ctx.cr6.eq) goto loc_822346A0;
	// bl 0x824d47ac
	ctx.lr = 0x822346A0;
	__imp__XamFree(ctx, base);
loc_822346A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82236688) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bge cr6,0x822366f8
	if (!ctx.cr6.lt) goto loc_822366F8;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x822366f8
	if (ctx.cr6.gt) goto loc_822366F8;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822366b8
	if (ctx.cr0.eq) goto loc_822366B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_822366B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822366e0
	if (ctx.cr6.eq) goto loc_822366E0;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822366e0
	if (ctx.cr0.eq) goto loc_822366E0;
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// sld r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// divdu r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 ? ctx.r6.u64 / ctx.r8.u64 : 0;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
loc_822366E0:
	// rlwimi r5,r10,31,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_822366F8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82237CF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x82237D10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82237d30
	if (!ctx.cr6.eq) goto loc_82237D30;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82237d40
	goto loc_82237D40;
loc_82237D30:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8223a1b8
	ctx.lr = 0x82237D3C;
	sub_8223A1B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82237D40:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x82237D48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82238F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82238F50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x824d438c
	ctx.lr = 0x82238F6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82238fac
	if (ctx.cr6.eq) goto loc_82238FAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82239970
	ctx.lr = 0x82238F88;
	sub_82239970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82238fa8
	if (ctx.cr0.eq) goto loc_82238FA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82239978
	ctx.lr = 0x82238F98;
	sub_82239978(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// li r29,1
	r29.s64 = 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82238fac
	if (ctx.cr6.eq) goto loc_82238FAC;
loc_82238FA8:
	// li r29,0
	r29.s64 = 0;
loc_82238FAC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238FB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223ACA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223B320) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8223B328;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b34c
	if (ctx.cr6.eq) goto loc_8223B34C;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
loc_8223B34C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8223b358
	if (ctx.cr6.eq) goto loc_8223B358;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_8223B358:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r31,r9,1
	r31.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b3bc
	if (ctx.cr6.eq) goto loc_8223B3BC;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b39c
	if (ctx.cr6.eq) goto loc_8223B39C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b3bc
	if (ctx.cr6.eq) goto loc_8223B3BC;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8223b600
	ctx.lr = 0x8223B398;
	sub_8223B600(ctx, base);
	// b 0x8223b3bc
	goto loc_8223B3BC;
loc_8223B39C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b3bc
	if (ctx.cr6.eq) goto loc_8223B3BC;
loc_8223B3A4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8223b600
	ctx.lr = 0x8223B3B4;
	sub_8223B600(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8223b3a4
	if (!ctx.cr0.eq) goto loc_8223B3A4;
loc_8223B3BC:
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
loc_8223B3C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b408
	if (ctx.cr6.eq) goto loc_8223B408;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8223b3dc
	if (ctx.cr6.eq) goto loc_8223B3DC;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bne cr6,0x8223b408
	if (!ctx.cr6.eq) goto loc_8223B408;
loc_8223B3DC:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8223b41c
	if (!ctx.cr6.eq) goto loc_8223B41C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b408
	if (ctx.cr6.eq) goto loc_8223B408;
loc_8223B3F0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8223b600
	ctx.lr = 0x8223B400;
	sub_8223B600(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8223b3f0
	if (!ctx.cr0.eq) goto loc_8223B3F0;
loc_8223B408:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8223b3c0
	if (ctx.cr6.lt) goto loc_8223B3C0;
	// b 0x8223b444
	goto loc_8223B444;
loc_8223B41C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b444
	if (ctx.cr6.eq) goto loc_8223B444;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwzx r3,r10,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// bl 0x8223b600
	ctx.lr = 0x8223B444;
	sub_8223B600(ctx, base);
loc_8223B444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822441A0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x822441A8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x822441B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,16260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f0,-12032(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -12032, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,-12608(r9)
	REX_STORE_U32(ctx.r9.u32 + -12608, ctx.r11.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lfd f30,-6032(r7)
	f30.u64 = REX_LOAD_U64(ctx.r7.u32 + -6032);
	// lfd f31,-6040(r6)
	f31.u64 = REX_LOAD_U64(ctx.r6.u32 + -6040);
	// li r30,0
	r30.s64 = 0;
	// lfd f29,26664(r8)
	f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 26664);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-12864
	r29.s64 = ctx.r11.s64 + -12864;
	// addi r28,r10,-12288
	r28.s64 = ctx.r10.s64 + -12288;
	// addi r27,r9,-12000
	r27.s64 = ctx.r9.s64 + -12000;
loc_82244208:
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x822d5b48
	ctx.lr = 0x8224422C;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r27.u32, temp.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r31,r28
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r28.u32, temp.u32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r31,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(r31.s32, 256, ctx.xer);
	// blt cr6,0x82244208
	if (ctx.cr6.lt) goto loc_82244208;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-12544
	r29.s64 = ctx.r11.s64 + -12544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f28,4000(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
loc_82244270:
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadd f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 + f28.f64;
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82244298;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,252
	ctx.r11.s64 = r29.s64 + 252;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82244270
	if (ctx.cr6.lt) goto loc_82244270;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-12576
	ctx.r9.s64 = ctx.r9.s64 + -12576;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lfd f0,-6048(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -6048);
	// addi r10,r10,-10880
	ctx.r10.s64 = ctx.r10.s64 + -10880;
loc_822442D8:
	// lwax r8,r11,r10
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + f29.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + f29.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f13.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822442d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822442D8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-12896
	ctx.r9.s64 = ctx.r9.s64 + -12896;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r10,r10,-10912
	ctx.r10.s64 = ctx.r10.s64 + -10912;
loc_82244320:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82244320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244320;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x82244344;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82247D80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82246220
	ctx.lr = 0x82247DA0;
	sub_82246220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247dd0
	if (ctx.cr6.eq) goto loc_82247DD0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82247dd0
	if (!ctx.cr6.eq) goto loc_82247DD0;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82247dd0
	if (!ctx.cr6.lt) goto loc_82247DD0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247dd8
	goto loc_82247DD8;
loc_82247DD0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248C88) {
	REX_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x82248c18
	sub_82248C18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82248C98) {
	REX_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82248c18
	sub_82248C18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82248F00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82248F18;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248f5c
	if (ctx.cr6.eq) goto loc_82248F5C;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82248f5c
	if (!ctx.cr6.eq) goto loc_82248F5C;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f12,208(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82248f64
	goto loc_82248F64;
loc_82248F5C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248F64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B138) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224B15C;
	sub_82255B70(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b16c
	if (ctx.cr6.eq) goto loc_8224B16C;
	// bl 0x82282a68
	ctx.lr = 0x8224B16C;
	sub_82282A68(ctx, base);
loc_8224B16C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224b17c
	if (ctx.cr0.eq) goto loc_8224B17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224B17C;
	sub_82255B70(ctx, base);
loc_8224B17C:
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

DEFINE_REX_FUNC(sub_8224C798) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,26004
	r31.s64 = ctx.r11.s64 + 26004;
	// lwz r11,26024(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224c7e0
	if (!ctx.cr0.eq) goto loc_8224C7E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26024(r10)
	REX_STORE_U32(ctx.r10.u32 + 26024, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227ad18
	ctx.lr = 0x8224C7D4;
	sub_8227AD18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// bl 0x822d5848
	ctx.lr = 0x8224C7E0;
	sub_822D5848(ctx, base);
loc_8224C7E0:
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

DEFINE_REX_FUNC(sub_8224DE38) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8224DE40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224de7c
	if (ctx.cr0.eq) goto loc_8224DE7C;
loc_8224DE68:
	// mulli r8,r30,33
	ctx.r8.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(33));
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr. r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224de68
	if (!ctx.cr0.eq) goto loc_8224DE68;
loc_8224DE7C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82255b48
	ctx.lr = 0x8224DE84;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224dea8
	if (ctx.cr0.eq) goto loc_8224DEA8;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8224deac
	goto loc_8224DEAC;
loc_8224DEA8:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8224DEAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8224debc
	if (!ctx.cr6.eq) goto loc_8224DEBC;
loc_8224DEB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224df1c
	goto loc_8224DF1C;
loc_8224DEBC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246d48
	ctx.lr = 0x8224DEC8;
	sub_82246D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224dee4
	if (!ctx.cr0.eq) goto loc_8224DEE4;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224DED8;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224DEE0;
	sub_82255B70(ctx, base);
	// b 0x8224deb4
	goto loc_8224DEB4;
loc_8224DEE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(27));
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224df14
	if (ctx.cr6.eq) goto loc_8224DF14;
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
loc_8224DF14:
	// stwx r31,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8224DF1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82252320) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5420
	ctx.r3.s64 = ctx.r11.s64 + -5420;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252568) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5320
	ctx.r3.s64 = ctx.r11.s64 + -5320;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822527A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-5212
	ctx.r10.s64 = ctx.r10.s64 + -5212;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5840
	ctx.r9.s64 = ctx.r9.s64 + -5840;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82246ca8
	ctx.lr = 0x822527F0;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-7712
	ctx.r11.s64 = ctx.r11.s64 + -7712;
	// addi r10,r10,-7592
	ctx.r10.s64 = ctx.r10.s64 + -7592;
	// addi r9,r9,27704
	ctx.r9.s64 = ctx.r9.s64 + 27704;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82250490
	ctx.lr = 0x82252820;
	sub_82250490(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23636
	ctx.r4.s64 = ctx.r11.s64 + 23636;
	// bl 0x822512d8
	ctx.lr = 0x82252838;
	sub_822512D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254E80) {
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
	// beq cr6,0x82254ea8
	if (ctx.cr6.eq) goto loc_82254EA8;
	// bl 0x82254c80
	ctx.lr = 0x82254EA0;
	sub_82254C80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82254EA8;
	sub_82255B70(ctx, base);
loc_82254EA8:
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

DEFINE_REX_FUNC(sub_82255FD8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82255ff4
	if (ctx.cr6.lt) goto loc_82255FF4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82255ffc
	if (ctx.cr6.eq) goto loc_82255FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82255FF4:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82256008
	if (!ctx.cr6.eq) goto loc_82256008;
loc_82255FFC:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,29668
	ctx.r11.s64 = ctx.r11.s64 + 29668;
	// b 0x82256018
	goto loc_82256018;
loc_82256008:
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,29672
	ctx.r11.s64 = ctx.r9.s64 + 29672;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82256018:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822566F0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82256718
	if (!ctx.cr6.eq) goto loc_82256718;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82256744
	goto loc_82256744;
loc_82256718:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23616(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23616);
	// bl 0x82255c88
	ctx.lr = 0x82256724;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256738
	if (!ctx.cr0.eq) goto loc_82256738;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256744
	goto loc_82256744;
loc_82256738:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82256744:
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

DEFINE_REX_FUNC(sub_82257708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82257710;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225772C;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82257738;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stb r29,4(r31)
	REX_STORE_U8(r31.u32 + 4, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82258AA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82258AA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32163
	r31.s64 = -2107834368;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,23564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 23564);
	// bl 0x82255c88
	ctx.lr = 0x82258ABC;
	sub_82255C88(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82258ad0
	if (!ctx.cr0.eq) goto loc_82258AD0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82258b7c
	goto loc_82258B7C;
loc_82258AD0:
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82258b0c
	if (ctx.cr6.eq) goto loc_82258B0C;
	// lwz r4,23564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 23564);
	// bl 0x82255c88
	ctx.lr = 0x82258AE4;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82258b54
	if (ctx.cr0.eq) goto loc_82258B54;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258b54
	if (ctx.cr0.eq) goto loc_82258B54;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82258B04;
	sub_8225DA70(ctx, base);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// b 0x82258b4c
	goto loc_82258B4C;
loc_82258B0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82257d18
	ctx.lr = 0x82258B14;
	sub_82257D18(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82258b54
	if (ctx.cr0.eq) goto loc_82258B54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,23564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 23564);
	// bl 0x82255c88
	ctx.lr = 0x82258B28;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82258b54
	if (ctx.cr0.eq) goto loc_82258B54;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258b54
	if (ctx.cr0.eq) goto loc_82258B54;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82258B48;
	sub_8225DA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82258B4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x82258B54;
	sub_8224DA00(ctx, base);
loc_82258B54:
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258b78
	if (ctx.cr0.eq) goto loc_82258B78;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82258B6C;
	sub_8225DA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224da00
	ctx.lr = 0x82258B78;
	sub_8224DA00(ctx, base);
loc_82258B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258B7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225D0F8) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82246920
	ctx.lr = 0x8225D118;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d16c
	if (ctx.cr0.eq) goto loc_8225D16C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82246220
	ctx.lr = 0x8225D128;
	sub_82246220(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d16c
	if (ctx.cr6.eq) goto loc_8225D16C;
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// bl 0x82256990
	ctx.lr = 0x8225D14C;
	sub_82256990(ctx, base);
	// b 0x8225d160
	goto loc_8225D160;
loc_8225D150:
	// bl 0x8225d0f8
	ctx.lr = 0x8225D154;
	sub_8225D0F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256a80
	ctx.lr = 0x8225D160;
	sub_82256A80(ctx, base);
loc_8225D160:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225d150
	if (!ctx.cr6.eq) goto loc_8225D150;
loc_8225D16C:
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

DEFINE_REX_FUNC(sub_8225E318) {
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
	// li r4,2012
	ctx.r4.s64 = 2012;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E340;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E34C;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_8225F1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e680
	ctx.lr = 0x8225F1F4;
	sub_8225E680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F200;
	sub_8224DA00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82261CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822469c0
	ctx.lr = 0x82261CC4;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82246fd8
	ctx.lr = 0x82261CD4;
	sub_82246FD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x82261CE0;
	sub_8224DA00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82261cf8
	if (ctx.cr6.eq) goto loc_82261CF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82254560
	ctx.lr = 0x82261CF8;
	sub_82254560(ctx, base);
loc_82261CF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82264D08) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// sth r9,20(r3)
	REX_STORE_U16(ctx.r3.u32 + 20, ctx.r9.u16);
	// sth r11,22(r3)
	REX_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822650B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822650ec
	if (!ctx.cr6.eq) goto loc_822650EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r9,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// b 0x8225f500
	sub_8225F500(ctx, base);
	return;
loc_822650EC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82265114
	if (!ctx.cr6.eq) goto loc_82265114;
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// b 0x8225f500
	sub_8225F500(ctx, base);
	return;
loc_82265114:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// b 0x8225f500
	sub_8225F500(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82267310) {
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
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82267388
	if (!ctx.cr6.gt) goto loc_82267388;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82267348
	if (!ctx.cr6.gt) goto loc_82267348;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82267348:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x82267354;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82267380
	if (!ctx.cr0.eq) goto loc_82267380;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x82267364;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8226738c
	goto loc_8226738C;
loc_82267380:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82267388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226738C:
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

DEFINE_REX_FUNC(sub_8226A540) {
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
	// bl 0x822d4e8c
	ctx.lr = 0x8226A548;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r6,224(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,-2144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -2144);
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r30,r9,r6
	r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// divw r29,r8,r6
	r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82268e00
	ctx.lr = 0x8226A5B8;
	sub_82268E00(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8226a5ec
	if (!ctx.cr6.eq) goto loc_8226A5EC;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r3.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x8226a5fc
	if (!ctx.cr6.lt) goto loc_8226A5FC;
loc_8226A5EC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8226a710
	if (!ctx.cr6.eq) goto loc_8226A710;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// ble cr6,0x8226a710
	if (!ctx.cr6.gt) goto loc_8226A710;
loc_8226A5FC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A60C;
	sub_82256C10(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226a710
	if (!ctx.cr6.lt) goto loc_8226A710;
loc_8226A620:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x8226A634;
	sub_8225E988(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x8225ed40
	ctx.lr = 0x8226A658;
	sub_8225ED40(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A668;
	sub_82256C10(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f13,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// divw r30,r10,r9
	r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8226a620
	if (ctx.cr6.lt) goto loc_8226A620;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8226a710
	if (!ctx.cr6.eq) goto loc_8226A710;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268e00
	ctx.lr = 0x8226A6B0;
	sub_82268E00(ctx, base);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r8,236(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 236);
	// divw r11,r3,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// divw r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// andc r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8226a710
	if (ctx.cr6.eq) goto loc_8226A710;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A710;
	sub_8225EB40(ctx, base);
loc_8226A710:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A720;
	sub_82256C10(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226a7a8
	if (!ctx.cr6.lt) goto loc_8226A7A8;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8226a74c
	if (!ctx.cr6.eq) goto loc_8226A74C;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A74C;
	sub_8225EB40(ctx, base);
loc_8226A74C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r9,0
	ctx.r9.s64 = 0;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// ble cr6,0x8226a898
	if (!ctx.cr6.gt) goto loc_8226A898;
	// li r30,0
	r30.s64 = 0;
loc_8226A780:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A790;
	sub_8225E9F8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a780
	if (ctx.cr6.lt) goto loc_8226A780;
	// b 0x8226a898
	goto loc_8226A898;
loc_8226A7A8:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226a898
	if (!ctx.cr6.gt) goto loc_8226A898;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f29,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f29.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8226a7e0
	if (ctx.cr6.eq) goto loc_8226A7E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264b58
	ctx.lr = 0x8226A7DC;
	sub_82264B58(ctx, base);
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_8226A7E0:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8226a7f4
	if (!ctx.cr6.eq) goto loc_8226A7F4;
	// lfs f30,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	f30.f64 = double(temp.f32);
	// b 0x8226a7f8
	goto loc_8226A7F8;
loc_8226A7F4:
	// lfs f30,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
loc_8226A7F8:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226a898
	if (!ctx.cr6.gt) goto loc_8226A898;
	// li r30,0
	r30.s64 = 0;
loc_8226A80C:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A81C;
	sub_8225E9F8(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82256c10
	ctx.lr = 0x8226A82C;
	sub_82256C10(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82256c60
	ctx.lr = 0x8226A854;
	sub_82256C60(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82258b88
	ctx.lr = 0x8226A868;
	sub_82258B88(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// bl 0x822562f8
	ctx.lr = 0x8226A884;
	sub_822562F8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a80c
	if (ctx.cr6.lt) goto loc_8226A80C;
loc_8226A898:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7b58
	ctx.lr = 0x8226A8A0;
	sub_822D7B58(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227BCF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227BD00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227BD18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r10,552(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8227bdd0
	if (!ctx.cr6.eq) goto loc_8227BDD0;
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 544);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r30,r11,512
	r30.s64 = ctx.r11.s64 + 512;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8227bd54
	if (ctx.cr6.lt) goto loc_8227BD54;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227BD48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227BD4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8227BD54:
	// li r3,6144
	ctx.r3.s64 = 6144;
	// bl 0x82255b48
	ctx.lr = 0x8227BD5C;
	sub_82255B48(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227bd78
	if (!ctx.cr0.eq) goto loc_8227BD78;
	// li r30,0
	r30.s64 = 0;
loc_8227BD68:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227BD70;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8227bd4c
	goto loc_8227BD4C;
loc_8227BD78:
	// lwz r5,544(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,544(r31)
	REX_STORE_U32(r31.u32 + 544, r30.u32);
	// srawi r10,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 9;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r6,r10,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// stwx r11,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r11.u32);
	// bl 0x8227bc78
	ctx.lr = 0x8227BD98;
	sub_8227BC78(ctx, base);
	// clrlwi r11,r5,23
	ctx.r11.u64 = ctx.r5.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r10,r10,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r10,548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8227BDD0:
	// lwz r30,548(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 548);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi r11,r30,9
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1FF) != 0);
	ctx.r11.s64 = r30.s32 >> 9;
	// clrlwi r9,r30,23
	ctx.r9.u64 = r30.u32 & 0x1FF;
	// rlwinm r10,r11,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FC;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r5,r9,23
	ctx.r5.u64 = ctx.r9.u32 & 0x1FF;
	// rlwinm r4,r8,2,23,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1FC;
	// mulli r8,r5,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// stw r9,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r9.u32);
	// lwzx r9,r4,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r6,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// lwz r9,540(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r9.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r30,r11,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8227bd68
	goto loc_8227BD68;
}

DEFINE_REX_FUNC(sub_8227FDF0) {
	REX_FUNC_PROLOGUE();
	// b 0x8227fcf8
	sub_8227FCF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227FE48) {
	REX_FUNC_PROLOGUE();
	// b 0x8227fdf8
	sub_8227FDF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227FEC0) {
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
	// li r30,1
	r30.s64 = 1;
	// bl 0x82288590
	ctx.lr = 0x8227FEE0;
	sub_82288590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227fef0
	if (!ctx.cr0.eq) goto loc_8227FEF0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,30508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30508);
loc_8227FEF0:
	// lbz r11,85(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8227ff20
	if (!ctx.cr0.eq) goto loc_8227FF20;
	// lbz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8227ff20
	if (!ctx.cr0.eq) goto loc_8227FF20;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8227ff20
	if (ctx.cr6.eq) goto loc_8227FF20;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8227ff24
	if (!ctx.cr6.eq) goto loc_8227FF24;
loc_8227FF20:
	// li r30,0
	r30.s64 = 0;
loc_8227FF24:
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

DEFINE_REX_FUNC(sub_822829D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822829E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,30464
	r28.s64 = ctx.r11.s64 + 30464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x822829F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-32163
	r29.s64 = -2107834368;
loc_822829F8:
	// lwz r31,30500(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 30500);
	// li r30,0
	r30.s64 = 0;
	// b 0x82282a50
	goto loc_82282A50;
loc_82282A04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822801c8
	ctx.lr = 0x82282A0C;
	sub_822801C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82282a48
	if (ctx.cr0.eq) goto loc_82282A48;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82282a28
	if (!ctx.cr6.eq) goto loc_82282A28;
	// stw r11,30500(r29)
	REX_STORE_U32(r29.u32 + 30500, ctx.r11.u32);
	// b 0x82282a2c
	goto loc_82282A2C;
loc_82282A28:
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
loc_82282A2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x82281410
	ctx.lr = 0x82282A3C;
	sub_82281410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82282A44;
	sub_82255B70(ctx, base);
	// b 0x822829f8
	goto loc_822829F8;
loc_82282A48:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_82282A50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82282a04
	if (!ctx.cr6.eq) goto loc_82282A04;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82282A60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82285BB0) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285c58
	if (!ctx.cr6.gt) goto loc_82285C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82285C58:
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

DEFINE_REX_FUNC(sub_82288258) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228828c
	if (ctx.cr6.eq) goto loc_8228828C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228828C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228828C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822882d0
	if (ctx.cr6.eq) goto loc_822882D0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822882B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822882CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_822882D0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822882ec
	if (ctx.cr6.eq) goto loc_822882EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822882EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822882EC:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
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

DEFINE_REX_FUNC(sub_8228AA78) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228aa8c
	if (!ctx.cr6.eq) goto loc_8228AA8C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8228AA8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8228B0F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lis r7,6184
	ctx.r7.s64 = 405274624;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,-2144(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// bl 0x82404b08
	ctx.lr = 0x8228B14C;
	sub_82404B08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8228B158;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228C908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-25016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25016);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f12,1988(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1988);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,22288
	ctx.r11.s64 = ctx.r11.s64 + 22288;
	// lfs f11,1980(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1980);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r9,r9,22304
	ctx.r9.s64 = ctx.r9.s64 + 22304;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r8,22320
	ctx.r11.s64 = ctx.r8.s64 + 22320;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r6,22272
	ctx.r9.s64 = ctx.r6.s64 + 22272;
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r8,22256
	ctx.r11.s64 = ctx.r8.s64 + 22256;
	// addi r8,r5,22240
	ctx.r8.s64 = ctx.r5.s64 + 22240;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v56,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v55,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmsum4fp128 v62,v56,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vspltw128 v54,v56,3
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x0));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v55,v54,v55
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v63,v56,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v62,v56,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v56,v63,v55
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v62,v55
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v62,v62,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// vmsum4fp128 v59,v56,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v61,v58
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// lfs f11,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// vmulfp128 v60,v56,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v55.f32)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// vmsum4fp128 v61,v60,v57
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// stvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f12,f10,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822968F8) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x82296900;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,-11616
	r26.s64 = ctx.r11.s64 + -11616;
	// lwz r9,-2144(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r8,r26,8
	ctx.r8.s64 = r26.s64 + 8;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,3(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,7(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r3,5(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r21,r10,16
	r21.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x822969e0
	if (ctx.cr6.eq) goto loc_822969E0;
	// clrlwi r30,r27,16
	r30.u64 = r27.u32 & 0xFFFF;
loc_822969A0:
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 12);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x822969c4
	if (!ctx.cr6.eq) goto loc_822969C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822969d4
	if (ctx.cr6.eq) goto loc_822969D4;
loc_822969C4:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822969a0
	if (!ctx.cr6.eq) goto loc_822969A0;
loc_822969D4:
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82296ba4
	if (!ctx.cr6.eq) goto loc_82296BA4;
loc_822969E0:
	// lwz r11,292(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822969fc
	if (!ctx.cr6.eq) goto loc_822969FC;
loc_822969EC:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822d7b58
	ctx.lr = 0x822969F4;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82296c00
	goto loc_82296C00;
loc_822969FC:
	// lwz r11,288(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82296a0c
	if (!ctx.cr6.eq) goto loc_82296A0C;
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_82296A0C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// ble cr6,0x82296a94
	if (!ctx.cr6.gt) goto loc_82296A94;
loc_82296A20:
	// lwz r30,12(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822958c0
	ctx.lr = 0x82296A2C;
	sub_822958C0(ctx, base);
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// bne cr6,0x82296a6c
	if (!ctx.cr6.eq) goto loc_82296A6C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82296a6c
	if (ctx.cr6.lt) goto loc_82296A6C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r27,12(r30)
	REX_STORE_U16(r30.u32 + 12, r27.u16);
	// mr r31,r30
	r31.u64 = r30.u64;
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x82295890
	ctx.lr = 0x82296A68;
	sub_82295890(ctx, base);
	// b 0x82296a7c
	goto loc_82296A7C;
loc_82296A6C:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82255b70
	ctx.lr = 0x82296A74;
	sub_82255B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82296A7C;
	sub_82255B70(ctx, base);
loc_82296A7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bgt cr6,0x82296a20
	if (ctx.cr6.gt) goto loc_82296A20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82296ae0
	if (!ctx.cr6.eq) goto loc_82296AE0;
loc_82296A94:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82255b48
	ctx.lr = 0x82296A9C;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822969ec
	if (ctx.cr0.eq) goto loc_822969EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b48
	ctx.lr = 0x82296AAC;
	sub_82255B48(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82296ac4
	if (!ctx.cr0.eq) goto loc_82296AC4;
loc_82296ABC:
	// bl 0x82255b70
	ctx.lr = 0x82296AC0;
	sub_82255B70(ctx, base);
	// b 0x822969ec
	goto loc_822969EC;
loc_82296AC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// sth r27,12(r31)
	REX_STORE_U16(r31.u32 + 12, r27.u16);
	// sth r25,14(r31)
	REX_STORE_U16(r31.u32 + 14, r25.u16);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// bl 0x82295890
	ctx.lr = 0x82296AE0;
	sub_82295890(ctx, base);
loc_82296AE0:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r27,12,4,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFFF000;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,292(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 292);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// clrlwi r30,r27,16
	r30.u64 = r27.u32 & 0xFFFF;
	// bl 0x82295d28
	ctx.lr = 0x82296B04;
	sub_82295D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82296b1c
	if (!ctx.cr0.lt) goto loc_82296B1C;
loc_82296B0C:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
loc_82296B10:
	// bl 0x82255b70
	ctx.lr = 0x82296B14;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82296abc
	goto loc_82296ABC;
loc_82296B1C:
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r3,292(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 292);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x824d4a5c
	ctx.lr = 0x82296B40;
	__imp__XeCryptSha(ctx, base);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mulli r11,r30,20
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
loc_82296B54:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82296b74
	if (!ctx.cr0.eq) goto loc_82296B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82296b54
	if (!ctx.cr6.eq) goto loc_82296B54;
loc_82296B74:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82296b10
	if (!ctx.cr0.eq) goto loc_82296B10;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lwz r5,292(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82292090
	ctx.lr = 0x82296B90;
	sub_82292090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82296b0c
	if (!ctx.cr0.eq) goto loc_82296B0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// b 0x82296bac
	goto loc_82296BAC;
loc_82296BA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822958c0
	ctx.lr = 0x82296BAC;
	sub_822958C0(ctx, base);
loc_82296BAC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822958a0
	ctx.lr = 0x82296BB8;
	sub_822958A0(ctx, base);
	// clrlwi r11,r22,16
	ctx.r11.u64 = r22.u32 & 0xFFFF;
	// clrlwi r10,r21,16
	ctx.r10.u64 = r21.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// clrlwi r11,r23,16
	ctx.r11.u64 = r23.u32 & 0xFFFF;
	// beq cr6,0x82296bd0
	if (ctx.cr6.eq) goto loc_82296BD0;
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
loc_82296BD0:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi. r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82296bf0
	if (ctx.cr0.eq) goto loc_82296BF0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r9,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r9.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82296bf4
	goto loc_82296BF4;
loc_82296BF0:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82296BF4:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822d7b58
	ctx.lr = 0x82296BFC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82296C00:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_822A4998) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f30,0(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfd f30,-16(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A94B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A95C0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x822A95C8;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lis r28,-32254
	r28.s64 = -2113798144;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lis r27,-32255
	r27.s64 = -2113863680;
	// lfs f13,16620(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16620);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r26,-32255
	r26.s64 = -2113863680;
	// lfs f0,16188(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r25,-32256
	r25.s64 = -2113929216;
	// lfs f12,16204(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16204);
	ctx.f12.f64 = double(temp.f32);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,23084(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 23084);
	ctx.f0.f64 = double(temp.f32);
	// lis r23,-32256
	r23.s64 = -2113929216;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,23080(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 23080);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stb r30,48(r31)
	REX_STORE_U8(r31.u32 + 48, r30.u8);
	// lfs f0,16952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16952);
	ctx.f0.f64 = double(temp.f32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// addi r29,r31,464
	r29.s64 = r31.s64 + 464;
	// lfs f0,23076(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 23076);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4720(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + -4720);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f0,-24948(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -24948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// lfs f12,30004(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 30004);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// lfs f11,-24712(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24712);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,436(r31)
	REX_STORE_U32(r31.u32 + 436, r30.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r30,448(r31)
	REX_STORE_U32(r31.u32 + 448, r30.u32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stw r30,452(r31)
	REX_STORE_U32(r31.u32 + 452, r30.u32);
	// lfs f13,-4632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4632);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,456(r31)
	REX_STORE_U32(r31.u32 + 456, r30.u32);
	// lfs f12,19796(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 19796);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,464(r31)
	REX_STORE_U32(r31.u32 + 464, r30.u32);
	// lfs f31,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r30,468(r31)
	REX_STORE_U32(r31.u32 + 468, r30.u32);
	// stw r30,472(r31)
	REX_STORE_U32(r31.u32 + 472, r30.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 516, temp.u32);
	// lfs f0,17120(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 17120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 520, temp.u32);
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 528, temp.u32);
	// stfs f12,532(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 532, temp.u32);
	// stb r11,672(r31)
	REX_STORE_U8(r31.u32 + 672, ctx.r11.u8);
	// stfs f31,676(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
	// stb r11,680(r31)
	REX_STORE_U8(r31.u32 + 680, ctx.r11.u8);
	// bl 0x822a7b78
	ctx.lr = 0x822A9714;
	sub_822A7B78(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a9500
	ctx.lr = 0x822A9720;
	sub_822A9500(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// mr r28,r30
	r28.u64 = r30.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a9768
	if (ctx.cr0.eq) goto loc_822A9768;
loc_822A9738:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822a7b78
	ctx.lr = 0x822A9748;
	sub_822A7B78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a9738
	if (ctx.cr6.lt) goto loc_822A9738;
loc_822A9768:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// stfs f31,236(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// stfs f31,268(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// stfs f31,280(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f31,288(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// stfs f31,292(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f31,300(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f31,328(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f31,332(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f31,344(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f31,348(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f31,352(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f31,368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f31,372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f31,376(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822B9148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,120
	ctx.r7.s64 = ctx.r11.s64 + 120;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9ED8) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9ef8
	if (ctx.cr6.eq) goto loc_822B9EF8;
	// bl 0x822c5b40
	ctx.lr = 0x822B9EF4;
	sub_822C5B40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822B9EF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA2D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822BA304;
	sub_822C80D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// stfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// bl 0x822ad9c0
	ctx.lr = 0x822BA320;
	sub_822AD9C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822ba334
	if (ctx.cr6.eq) goto loc_822BA334;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b3b88
	ctx.lr = 0x822BA334;
	sub_822B3B88(ctx, base);
loc_822BA334:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_822BD4E0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x822BD4E8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f38
	ctx.lr = 0x822BD4F0;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd528
	if (ctx.cr6.eq) goto loc_822BD528;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x822bd52c
	if (ctx.cr0.eq) goto loc_822BD52C;
loc_822BD528:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822BD52C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822bd53c
	if (!ctx.cr0.eq) goto loc_822BD53C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822bd8fc
	goto loc_822BD8FC;
loc_822BD53C:
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822bd8f8
	if (ctx.cr6.eq) goto loc_822BD8F8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bd55c
	if (ctx.cr6.eq) goto loc_822BD55C;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x822bd574
	goto loc_822BD574;
loc_822BD55C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd56c
	if (ctx.cr6.eq) goto loc_822BD56C;
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// b 0x822bd574
	goto loc_822BD574;
loc_822BD56C:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r4,r11,-3168
	ctx.r4.s64 = ctx.r11.s64 + -3168;
loc_822BD574:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821f3f40
	ctx.lr = 0x822BD57C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f3f40
	ctx.lr = 0x822BD588;
	sub_821F3F40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f28,12(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822BD5C4;
	sub_821F3F40(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822ca188
	ctx.lr = 0x822BD5D0;
	sub_822CA188(ctx, base);
	// lfs f11,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_822BD61C:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lfs f11,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f11,f11,f7,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsx f11,r11,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bd61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BD61C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f29.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822BD684;
	sub_822A5AC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,15624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f31,f13,f31
	f31.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f31,0(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f30,4(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f29,8(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,52(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bd6f0
	if (ctx.cr6.eq) goto loc_822BD6F0;
	// lwz r29,56(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 56);
	// b 0x822bd6f4
	goto loc_822BD6F4;
loc_822BD6F0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
loc_822BD6F4:
	// lwz r25,48(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822bd8e4
	if (ctx.cr6.eq) goto loc_822BD8E4;
	// stfs f28,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
loc_822BD710:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822bd738
	if (ctx.cr6.eq) goto loc_822BD738;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfs f13,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// b 0x822bd754
	goto loc_822BD754;
loc_822BD738:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f13,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_822BD754:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x822bd770
	if (ctx.cr6.eq) goto loc_822BD770;
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822bd774
	goto loc_822BD774;
loc_822BD770:
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
loc_822BD774:
	// stfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822bb888
	ctx.lr = 0x822BD794;
	sub_822BB888(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd868
	if (ctx.cr0.eq) goto loc_822BD868;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822bd7ac
	if (ctx.cr6.eq) goto loc_822BD7AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x822bd7b0
	goto loc_822BD7B0;
loc_822BD7AC:
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
loc_822BD7B0:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x822bd7d4
	if (ctx.cr6.eq) goto loc_822BD7D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x822bd7d8
	goto loc_822BD7D8;
loc_822BD7D4:
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
loc_822BD7D8:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x822bd7fc
	if (ctx.cr6.eq) goto loc_822BD7FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x822bd800
	goto loc_822BD800;
loc_822BD7FC:
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 12);
loc_822BD800:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f28,124(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f28,204(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stfs f28,188(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822bb950
	ctx.lr = 0x822BD860;
	sub_822BB950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bd880
	if (!ctx.cr0.eq) goto loc_822BD880;
loc_822BD868:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x822bd710
	if (ctx.cr6.lt) goto loc_822BD710;
	// b 0x822bd8e4
	goto loc_822BD8E4;
loc_822BD880:
	// lfs f13,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 - f29.f64));
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f7,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - f31.f64));
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f10,f8,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f11,f6,f6,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f11.f64)));
	// fmadds f10,f7,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x822bd8e0
	if (!ctx.cr6.lt) goto loc_822BD8E0;
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f28,12(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
loc_822BD8E0:
	// li r23,1
	r23.s64 = 1;
loc_822BD8E4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd8f8
	if (ctx.cr0.eq) goto loc_822BD8F8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a5ac8
	ctx.lr = 0x822BD8F8;
	sub_822A5AC8(ctx, base);
loc_822BD8F8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822BD8FC:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f84
	ctx.lr = 0x822BD908;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822D1AA8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x822d1af4
	if (!ctx.cr6.lt) goto loc_822D1AF4;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_822D1AF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x822d1b08
	if (!ctx.cr6.gt) goto loc_822D1B08;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_822D1B08:
	// stfs f31,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822D38E0) {
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
	// bl 0x822d0de0
	ctx.lr = 0x822D38F8;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d39cc
	if (ctx.cr0.eq) goto loc_822D39CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D3908;
	sub_822D0DE0(ctx, base);
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x822d3930
	if (!ctx.cr6.eq) goto loc_822D3930;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822cd850
	ctx.lr = 0x822D3918;
	sub_822CD850(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d39cc
	if (ctx.cr0.eq) goto loc_822D39CC;
	// li r4,10
	ctx.r4.s64 = 10;
loc_822D3924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0d90
	ctx.lr = 0x822D392C;
	sub_822D0D90(ctx, base);
	// b 0x822d39cc
	goto loc_822D39CC;
loc_822D3930:
	// lbz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 256);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822d39a8
	if (!ctx.cr6.eq) goto loc_822D39A8;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822cd850
	ctx.lr = 0x822D3944;
	sub_822CD850(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d39a8
	if (ctx.cr0.eq) goto loc_822D39A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d396c
	if (!ctx.cr6.eq) goto loc_822D396C;
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
	// b 0x822d3924
	goto loc_822D3924;
loc_822D396C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D3974;
	sub_822D0DE0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x822d398c
	if (ctx.cr6.eq) goto loc_822D398C;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bne cr6,0x822d39a8
	if (!ctx.cr6.eq) goto loc_822D39A8;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x822d3990
	goto loc_822D3990;
loc_822D398C:
	// li r4,4
	ctx.r4.s64 = 4;
loc_822D3990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0d90
	ctx.lr = 0x822D3998;
	sub_822D0D90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
	// bl 0x822d3398
	ctx.lr = 0x822D39A8;
	sub_822D3398(ctx, base);
loc_822D39A8:
	// lbz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 256);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822d39cc
	if (!ctx.cr6.eq) goto loc_822D39CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0d40
	ctx.lr = 0x822D39BC;
	sub_822D0D40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d39cc
	if (ctx.cr0.eq) goto loc_822D39CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
loc_822D39CC:
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

DEFINE_REX_FUNC(sub_822D6910) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31844);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d693c
	if (ctx.cr0.eq) goto loc_822D693C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822D693C:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7240) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// cmpw r5,r4
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822d7284
	if (ctx.cr6.eq) goto loc_822D7284;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x822d7270
	if (ctx.cr0.eq) goto loc_822D7270;
loc_822D725C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822d7294
	if (ctx.cr6.eq) goto loc_822D7294;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne 0x822d725c
	if (!ctx.cr0.eq) goto loc_822D725C;
loc_822D7270:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq 0x822d7270
	if (ctx.cr0.eq) goto loc_822D7270;
	// b 0x822d725c
	goto loc_822D725C;
loc_822D7284:
	// beq 0x822d7294
	if (ctx.cr0.eq) goto loc_822D7294;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// b 0x822d7284
	goto loc_822D7284;
loc_822D7294:
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_24) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_93) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_87) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DF9F0) {
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
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// ori r10,r10,17234
	ctx.r10.u64 = ctx.r10.u64 | 17234;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dfa3c
	if (ctx.cr0.eq) goto loc_822DFA3C;
	// cmplwi cr6,r11,3067
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3067, ctx.xer);
	// beq cr6,0x822dfa3c
	if (ctx.cr6.eq) goto loc_822DFA3C;
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// ori r10,r10,12305
	ctx.r10.u64 = ctx.r10.u64 | 12305;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dfa60
	if (!ctx.cr6.eq) goto loc_822DFA60;
	// bl 0x822d6ff8
	ctx.lr = 0x822DFA30;
	sub_822D6FF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bl 0x822dbde8
	ctx.lr = 0x822DFA3C;
	sub_822DBDE8(ctx, base);
loc_822DFA3C:
	// bl 0x822d6ff8
	ctx.lr = 0x822DFA40;
	sub_822D6FF8(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822dfa60
	if (!ctx.cr6.gt) goto loc_822DFA60;
	// bl 0x822d6ff8
	ctx.lr = 0x822DFA50;
	sub_822D6FF8(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822DFA60:
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

DEFINE_REX_FUNC(sub_822E1CB8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x822E1CC0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x822dbd80
	ctx.lr = 0x822E1CD8;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	r28.s64 = 3;
	// lis r29,-32161
	r29.s64 = -2107703296;
	// lis r27,-32161
	r27.s64 = -2107703296;
loc_822E1CE8:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,-11324(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -11324);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e1d60
	if (!ctx.cr6.lt) goto loc_822E1D60;
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e1d54
	if (ctx.cr6.eq) goto loc_822E1D54;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1d34
	if (ctx.cr0.eq) goto loc_822E1D34;
	// bl 0x822e6038
	ctx.lr = 0x822E1D24;
	sub_822E6038(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e1d34
	if (ctx.cr6.eq) goto loc_822E1D34;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
loc_822E1D34:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(r28.s32, 20, ctx.xer);
	// blt cr6,0x822e1d54
	if (ctx.cr6.lt) goto loc_822E1D54;
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822d98f0
	ctx.lr = 0x822E1D48;
	sub_822D98F0(ctx, base);
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_822E1D54:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822e1ce8
	goto loc_822E1CE8;
loc_822E1D60:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x822e1d78
	ctx.lr = 0x822E1D6C;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E1D78(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822E8CE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-29896
	ctx.r10.s64 = ctx.r11.s64 + -29896;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822eeef8
	sub_822EEEF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E8DD8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29896
	ctx.r10.s64 = ctx.r11.s64 + -29896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822eeef8
	ctx.lr = 0x822E8E04;
	sub_822EEEF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e8e24
	if (ctx.cr6.eq) goto loc_822E8E24;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x823cd250
	ctx.lr = 0x822E8E20;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822E8E24:
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

DEFINE_REX_FUNC(sub_822EA4D0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EA7B0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea80c
	if (ctx.cr6.eq) goto loc_822EA80C;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA7EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea80c
	if (ctx.cr6.lt) goto loc_822EA80C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA80C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EA80C:
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

DEFINE_REX_FUNC(sub_822EC888) {
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
	// bl 0x822d4e84
	ctx.lr = 0x822EC890;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f31,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	f31.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ec8d0
	if (ctx.cr6.eq) goto loc_822EC8D0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC8D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822ec904
	if (ctx.cr6.eq) goto loc_822EC904;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ec904
	if (ctx.cr6.lt) goto loc_822EC904;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200a10
	ctx.lr = 0x822EC8E8;
	sub_82200A10(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC904:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ec92c
	if (ctx.cr6.eq) goto loc_822EC92C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ec92c
	if (ctx.cr6.lt) goto loc_822EC92C;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC92C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822ec9dc
	if (ctx.cr6.eq) goto loc_822EC9DC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ec9dc
	if (ctx.cr6.lt) goto loc_822EC9DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8d60
	ctx.lr = 0x822EC944;
	sub_822E8D60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824607c8
	ctx.lr = 0x822EC950;
	sub_824607C8(ctx, base);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x822ec960
	if (!ctx.cr6.eq) goto loc_822EC960;
	// li r29,32
	r29.s64 = 32;
	// b 0x822ec96c
	goto loc_822EC96C;
loc_822EC960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824607c8
	ctx.lr = 0x822EC968;
	sub_824607C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822EC96C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r31,r29,29,3,31
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x822e8d68
	ctx.lr = 0x822EC978;
	sub_822E8D68(ctx, base);
	// mullw r9,r3,r31
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// fdivs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 / f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// mulli r10,r11,8000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8000));
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// stw r9,332(r30)
	REX_STORE_U32(r30.u32 + 332, ctx.r9.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x822f4960
	ctx.lr = 0x822EC9DC;
	sub_822F4960(ctx, base);
loc_822EC9DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822eca4c
	if (ctx.cr6.eq) goto loc_822ECA4C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eca58
	if (ctx.cr6.lt) goto loc_822ECA58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e8d60
	ctx.lr = 0x822EC9F4;
	sub_822E8D60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eca64
	if (!ctx.cr6.eq) goto loc_822ECA64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e8d68
	ctx.lr = 0x822ECA08;
	sub_822E8D68(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eca64
	if (!ctx.cr6.eq) goto loc_822ECA64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e8d60
	ctx.lr = 0x822ECA1C;
	sub_822E8D60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e8d68
	ctx.lr = 0x822ECA28;
	sub_822E8D68(ctx, base);
	// mullw r11,r31,r3
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r11,r11,31,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFF;
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x822f4960
	ctx.lr = 0x822ECA4C;
	sub_822F4960(ctx, base);
loc_822ECA4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eca58
	if (ctx.cr6.lt) goto loc_822ECA58;
	// stfs f31,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 336, temp.u32);
loc_822ECA58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
loc_822ECA64:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F5028) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,244(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F5064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822f5124
	if (!ctx.cr6.eq) goto loc_822F5124;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822f5124
	if (!ctx.cr6.eq) goto loc_822F5124;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F509C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F50B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F50D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,196(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 196);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822F50E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F50F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,204(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 204);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F510C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,208(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F5120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822f512c
	goto loc_822F512C;
loc_822F5124:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_822F512C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5140;
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

DEFINE_REX_FUNC(sub_822FAB58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822FAB60;
	// li r30,3
	r30.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822fab88
	if (!ctx.cr6.eq) goto loc_822FAB88;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x822d4edc
	return;
loc_822FAB88:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822fac44
	if (!ctx.cr6.eq) goto loc_822FAC44;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fac44
	if (!ctx.cr6.eq) goto loc_822FAC44;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpd cr6,r11,r5
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r5.s64, ctx.xer);
	// blt cr6,0x822fac54
	if (ctx.cr6.lt) goto loc_822FAC54;
	// bne cr6,0x822fac70
	if (!ctx.cr6.eq) goto loc_822FAC70;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822fabd4
	if (!ctx.cr6.eq) goto loc_822FABD4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x822fac34
	goto loc_822FAC34;
loc_822FABD4:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822fac20
	if (!ctx.cr6.eq) goto loc_822FAC20;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fabf8
	if (!ctx.cr6.eq) goto loc_822FABF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822fabf8
	if (!ctx.cr6.eq) goto loc_822FABF8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822FABF8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822fac20
	if (!ctx.cr6.eq) goto loc_822FAC20;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fac20
	if (!ctx.cr6.eq) goto loc_822FAC20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822fac30
	if (!ctx.cr6.eq) goto loc_822FAC30;
loc_822FAC20:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fabd4
	if (!ctx.cr6.eq) goto loc_822FABD4;
	// b 0x822fac34
	goto loc_822FAC34;
loc_822FAC30:
	// li r4,1
	ctx.r4.s64 = 1;
loc_822FAC34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fac74
	if (ctx.cr6.lt) goto loc_822FAC74;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822fac60
	if (!ctx.cr6.eq) goto loc_822FAC60;
loc_822FAC44:
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822fab88
	if (!ctx.cr6.eq) goto loc_822FAB88;
	// b 0x822d4edc
	return;
loc_822FAC54:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x822d4edc
	return;
loc_822FAC60:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x822d4edc
	return;
loc_822FAC70:
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
loc_822FAC74:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82301FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82301FF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82302018
	if (ctx.cr6.gt) goto loc_82302018;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82302018:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230207c
	if (!ctx.cr6.gt) goto loc_8230207C;
	// li r30,0
	r30.s64 = 0;
loc_8230202C:
	// lwz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82302068
	if (!ctx.cr6.eq) goto loc_82302068;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82317d68
	ctx.lr = 0x82302060;
	sub_82317D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230207c
	if (ctx.cr6.lt) goto loc_8230207C;
loc_82302068:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230202c
	if (ctx.cr6.lt) goto loc_8230202C;
loc_8230207C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82305720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82305728;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,500(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 500);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// bne cr6,0x82305758
	if (!ctx.cr6.eq) goto loc_82305758;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82305758:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r29,0(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82305780
	if (ctx.cr6.eq) goto loc_82305780;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82449e88
	ctx.lr = 0x82305778;
	sub_82449E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823057dc
	if (ctx.cr6.lt) goto loc_823057DC;
loc_82305780:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82305308
	ctx.lr = 0x8230578C;
	sub_82305308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823057dc
	if (ctx.cr6.lt) goto loc_823057DC;
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823057dc
	if (!ctx.cr6.eq) goto loc_823057DC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823057dc
	if (ctx.cr6.eq) goto loc_823057DC;
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// clrlwi r7,r29,16
	ctx.r7.u64 = r29.u32 & 0xFFFF;
	// lbz r5,201(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 201);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne cr6,0x823057d8
	if (!ctx.cr6.eq) goto loc_823057D8;
	// bl 0x82322058
	ctx.lr = 0x823057CC;
	sub_82322058(ctx, base);
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823057D8:
	// bl 0x82321af0
	ctx.lr = 0x823057DC;
	sub_82321AF0(ctx, base);
loc_823057DC:
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82309270) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82309278;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r31,0
	r31.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// sth r31,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// sth r31,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r31.u16);
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, r31.u16);
	// sth r31,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r31.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823092C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// cmplwi cr6,r22,10
	ctx.cr6.compare<uint32_t>(r22.u32, 10, ctx.xer);
	// bge cr6,0x823092e4
	if (!ctx.cr6.lt) goto loc_823092E4;
loc_823092D4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_823092E4:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x823092FC;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230931C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230933C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230935C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230937C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r26,10
	r26.s64 = 10;
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x823093B0;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823093CC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823093cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823093CC;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r29,82(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r27,84(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r7,r29,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r25,86(r1)
	r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stw r9,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// rlwinm r6,r27,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r23,88(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r4,r25,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r23,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r8,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r6,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r4,6(r8)
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r4.u16);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r9.u16);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r31.u32);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, r31.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r31.u32);
	// beq cr6,0x8230950c
	if (ctx.cr6.eq) goto loc_8230950C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// bl 0x822f9490
	ctx.lr = 0x8230947C;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822d5870
	ctx.lr = 0x82309498;
	sub_822D5870(ctx, base);
	// addi r31,r30,10
	r31.s64 = r30.s64 + 10;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82307e08
	ctx.lr = 0x823094C4;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r31
	r26.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230950c
	if (ctx.cr6.eq) goto loc_8230950C;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x8230950c
	if (!ctx.cr6.gt) goto loc_8230950C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823094F8:
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
	// bdnz 0x823094f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823094F8;
loc_8230950C:
	// clrlwi r31,r29,16
	r31.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823095c0
	if (ctx.cr6.eq) goto loc_823095C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x822f9490
	ctx.lr = 0x82309530;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822d5870
	ctx.lr = 0x8230954C;
	sub_822D5870(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82307e08
	ctx.lr = 0x82309578;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823095c0
	if (ctx.cr6.eq) goto loc_823095C0;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ble cr6,0x823095c0
	if (!ctx.cr6.gt) goto loc_823095C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823095AC:
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
	// bdnz 0x823095ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823095AC;
loc_823095C0:
	// clrlwi r31,r27,16
	r31.u64 = r27.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82309674
	if (ctx.cr6.eq) goto loc_82309674;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// bl 0x822f9490
	ctx.lr = 0x823095E4;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822d5870
	ctx.lr = 0x82309600;
	sub_822D5870(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82307e08
	ctx.lr = 0x8230962C;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309674
	if (ctx.cr6.eq) goto loc_82309674;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// ble cr6,0x82309674
	if (!ctx.cr6.gt) goto loc_82309674;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82309660:
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
	// bdnz 0x82309660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82309660;
loc_82309674:
	// clrlwi r31,r25,16
	r31.u64 = r25.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82309728
	if (ctx.cr6.eq) goto loc_82309728;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// bl 0x822f9490
	ctx.lr = 0x82309698;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x822d5870
	ctx.lr = 0x823096B4;
	sub_822D5870(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82307e08
	ctx.lr = 0x823096E0;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309728
	if (ctx.cr6.eq) goto loc_82309728;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// ble cr6,0x82309728
	if (!ctx.cr6.gt) goto loc_82309728;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82309714:
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
	// bdnz 0x82309714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82309714;
loc_82309728:
	// clrlwi r31,r23,16
	r31.u64 = r23.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823097dc
	if (ctx.cr6.eq) goto loc_823097DC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// bl 0x822f9490
	ctx.lr = 0x8230974C;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x822d5870
	ctx.lr = 0x82309768;
	sub_822D5870(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x823092d4
	if (ctx.cr6.gt) goto loc_823092D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82307e08
	ctx.lr = 0x82309794;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823097dc
	if (ctx.cr6.eq) goto loc_823097DC;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ble cr6,0x823097dc
	if (!ctx.cr6.gt) goto loc_823097DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823097C8:
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
	// bdnz 0x823097c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823097C8;
loc_823097DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	// subf. r31,r26,r6
	r31.u64 = ctx.r6.u64 - r26.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8230982c
	if (ctx.cr0.eq) goto loc_8230982C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82309814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230982c
	if (ctx.cr6.lt) goto loc_8230982C;
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
loc_8230982C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82322E30) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x82322E38;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322f8c
	if (ctx.cr6.eq) goto loc_82322F8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r23,0
	r23.s64 = 0;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_82322E64:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82322f74
	if (ctx.cr6.eq) goto loc_82322F74;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 400);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,16(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,148(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// add r26,r10,r24
	r26.u64 = ctx.r10.u64 + r24.u64;
loc_82322E9C:
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 308);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82322eb8
	if (ctx.cr6.gt) goto loc_82322EB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82322EB8:
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82322f14
	if (!ctx.cr6.lt) goto loc_82322F14;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322ed4
	if (!ctx.cr6.lt) goto loc_82322ED4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82322ED4:
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82322f08
	if (!ctx.cr6.eq) goto loc_82322F08;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 + r27.u64;
	// clrlwi r30,r29,24
	r30.u64 = r29.u32 & 0xFF;
	// bl 0x82322db0
	ctx.lr = 0x82322EF4;
	sub_82322DB0(ctx, base);
	// rlwinm r11,r29,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82322F08:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x82322e9c
	goto loc_82322E9C;
loc_82322F14:
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82322f5c
	if (!ctx.cr0.gt) goto loc_82322F5C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - r25.u64;
	// lfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_82322F44:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82322f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322F44;
loc_82322F5C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82322f70
	if (ctx.cr6.eq) goto loc_82322F70;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_82322F70:
	// stb r29,0(r24)
	REX_STORE_U8(r24.u32 + 0, r29.u8);
loc_82322F74:
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,1776
	r23.s64 = r23.s64 + 1776;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82322e64
	if (ctx.cr6.lt) goto loc_82322E64;
loc_82322F8C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823288D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// lwz r9,52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// slw r10,r3,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 6;
	// lwzx r7,r8,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82328920
	if (ctx.cr6.lt) goto loc_82328920;
loc_823288FC:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823288fc
	if (!ctx.cr6.lt) goto loc_823288FC;
loc_82328920:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,56(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// ble cr6,0x82328960
	if (!ctx.cr6.gt) goto loc_82328960;
	// addi r10,r9,-7
	ctx.r10.s64 = ctx.r9.s64 + -7;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-6
	ctx.r7.s64 = ctx.r9.s64 + -6;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sraw r3,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x82328968
	goto loc_82328968;
loc_82328960:
	// subfic r10,r9,6
	ctx.xer.ca = ctx.r9.u32 <= 6;
	ctx.r10.u64 = static_cast<uint64_t>(6) - ctx.r9.u64;
	// slw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82328968:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232C658) {
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
	// bl 0x822d4e60
	ctx.lr = 0x8232C660;
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// slw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// std r11,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r11.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// beq cr6,0x8232c964
	if (ctx.cr6.eq) goto loc_8232C964;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8232c740
	if (ctx.cr6.eq) goto loc_8232C740;
	// clrlwi r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8232cbb4
	if (!ctx.cr6.gt) goto loc_8232CBB4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8232C6D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232c724
	if (!ctx.cr6.gt) goto loc_8232C724;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8232C6F0:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8232c6f0
	if (ctx.cr6.lt) goto loc_8232C6F0;
loc_8232C724:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// blt cr6,0x8232c6d4
	if (ctx.cr6.lt) goto loc_8232C6D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4eb0
	return;
loc_8232C740:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r10,60(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// extsh r27,r6
	r27.s64 = ctx.r6.s16;
	// lwz r9,1836(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subf r4,r27,r11
	ctx.r4.u64 = ctx.r11.u64 - r27.u64;
	// extsh r26,r4
	r26.s64 = ctx.r4.s16;
	// beq cr6,0x8232c8e0
	if (ctx.cr6.eq) goto loc_8232C8E0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8232c8e0
	if (!ctx.cr6.gt) goto loc_8232C8E0;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	r28.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// li r30,48
	r30.s64 = 48;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8232C79C:
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// addi r25,r11,7
	r25.s64 = ctx.r11.s64 + 7;
	// vor128 v62,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r23,r4,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v61,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v60,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,-192
	r21.s64 = ctx.r1.s64 + -192;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lfsx f10,r23,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,6
	r31.s64 = ctx.r11.s64 + 6;
	// lfsx f6,r23,r9
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r23,r11,3
	r23.s64 = ctx.r11.s64 + 3;
	// lfsx f8,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r5,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r25,r9
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r25,r23,2,0,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r1,-192
	r23.s64 = ctx.r1.s64 + -192;
	// lfsx f12,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfsx f11,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r22,r1,-144
	r22.s64 = ctx.r1.s64 + -144;
	// lfsx f7,r24,r9
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r24,r11,2
	r24.s64 = ctx.r11.s64 + 2;
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// stfs f11,-160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// lfsx f5,r31,r9
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r1,-176
	r20.s64 = ctx.r1.s64 + -176;
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r18,r1,-144
	r18.s64 = ctx.r1.s64 + -144;
	// lfsx f13,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r1,-160
	r19.s64 = ctx.r1.s64 + -160;
	// lfsx f1,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lfsx f12,r24,r9
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r25,r9
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r31,r4
	r31.s64 = ctx.r4.s16;
	// stfs f9,-144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f8,-136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stfs f5,-140(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// stfs f4,-132(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f3,-184(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f2,-180(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f1,-176(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f13,-168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f12,-172(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f11,-164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// lvx128 v9,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,-152(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f7,-156(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f6,-148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v61,v10,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v61.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v62,v11,v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r8,r29
	ea = (ctx.r8.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v60,v9,v60,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v60.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v62,r8,r28
	ea = (ctx.r8.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v62,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x8232c79c
	if (ctx.cr6.lt) goto loc_8232C79C;
loc_8232C8E0:
	// extsh r11,r26
	ctx.r11.s64 = r26.s16;
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// bge cr6,0x8232cbb4
	if (!ctx.cr6.lt) goto loc_8232CBB4;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_8232C8F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232c948
	if (!ctx.cr6.gt) goto loc_8232C948;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8232C914:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8232c914
	if (ctx.cr6.lt) goto loc_8232C914;
loc_8232C948:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// blt cr6,0x8232c8f8
	if (ctx.cr6.lt) goto loc_8232C8F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4eb0
	return;
loc_8232C964:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r6,r11,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// beq cr6,0x8232cb38
	if (ctx.cr6.eq) goto loc_8232CB38;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8232cb38
	if (!ctx.cr6.gt) goto loc_8232CB38;
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	r28.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// li r30,48
	r30.s64 = 48;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8232C9B8:
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,3
	r31.s64 = ctx.r11.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,-192
	r27.s64 = ctx.r1.s64 + -192;
	// addi r26,r11,6
	r26.s64 = ctx.r11.s64 + 6;
	// lfsx f11,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r11,7
	r25.s64 = ctx.r11.s64 + 7;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r1,-192
	r26.s64 = ctx.r1.s64 + -192;
	// lfsx f10,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r25,2,0,29
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r25,r11,5
	r25.s64 = ctx.r11.s64 + 5;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stfs f11,-184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r24,r1,-176
	r24.s64 = ctx.r1.s64 + -176;
	// stfs f10,-180(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// rlwinm r27,r25,2,0,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f9,r4,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r11,11
	r23.s64 = ctx.r11.s64 + 11;
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// stvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f8,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r22,r11,8
	r22.s64 = ctx.r11.s64 + 8;
	// lfsx f6,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r31,r11,9
	r31.s64 = ctx.r11.s64 + 9;
	// stfs f8,-164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f6,-172(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f7,-176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// rlwinm r23,r22,2,0,29
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,-168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r25,r11,10
	r25.s64 = ctx.r11.s64 + 10;
	// lvx128 v12,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r28
	ea = (ctx.r8.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r4,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r1,-160
	r27.s64 = ctx.r1.s64 + -160;
	// lfsx f2,r26,r10
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi r22,r1,-160
	r22.s64 = ctx.r1.s64 + -160;
	// lfsx f3,r23,r10
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r20,r11,14
	r20.s64 = ctx.r11.s64 + 14;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f5,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// stfs f5,-152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f2,-156(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// stfs f3,-160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r24,r11,12
	r24.s64 = ctx.r11.s64 + 12;
	// stfs f4,-148(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r21,r11,13
	r21.s64 = ctx.r11.s64 + 13;
	// lvx128 v12,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r19,r11,15
	r19.s64 = ctx.r11.s64 + 15;
	// stvx128 v63,r8,r29
	ea = (ctx.r8.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stvx128 v63,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r21,2,0,29
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r19,2,0,29
	r26.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lfsx f13,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f12,r26,r10
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f1,-136(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f12,-132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v12,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x8232c9b8
	if (ctx.cr6.lt) goto loc_8232C9B8;
loc_8232CB38:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// add r31,r11,r6
	r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// bge cr6,0x8232cbb4
	if (!ctx.cr6.lt) goto loc_8232CBB4;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_8232CB50:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232cba0
	if (!ctx.cr6.gt) goto loc_8232CBA0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8232CB6C:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8232cb6c
	if (ctx.cr6.lt) goto loc_8232CB6C;
loc_8232CBA0:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// blt cr6,0x8232cb50
	if (ctx.cr6.lt) goto loc_8232CB50;
loc_8232CBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8235DF58) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x8235DF60;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x8235DF68;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235df90
	if (!ctx.cr6.eq) goto loc_8235DF90;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235DF8C;
	// b 0x822d4ec8
	return;
loc_8235DF90:
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232ee40
	ctx.lr = 0x8235DFB4;
	sub_8232EE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e890
	if (!ctx.cr6.eq) goto loc_8235E890;
	// lwz r11,15368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15368);
	// lwz r27,15428(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15428);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8235dff8
	if (!ctx.cr6.eq) goto loc_8235DFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232ee40
	ctx.lr = 0x8235DFF0;
	sub_8232EE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e890
	if (!ctx.cr6.eq) goto loc_8235E890;
loc_8235DFF8:
	// addi r24,r31,15452
	r24.s64 = r31.s64 + 15452;
	// lwz r8,15456(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// addi r30,r31,15444
	r30.s64 = r31.s64 + 15444;
	// lwz r6,15448(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15448);
	// addi r26,r31,15440
	r26.s64 = r31.s64 + 15440;
	// addi r9,r31,15460
	ctx.r9.s64 = r31.s64 + 15460;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82358f00
	ctx.lr = 0x8235E024;
	sub_82358F00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e890
	if (!ctx.cr6.eq) goto loc_8235E890;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235e15c
	if (!ctx.cr6.gt) goto loc_8235E15C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8235e138
	if (ctx.cr6.eq) goto loc_8235E138;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8235e0ec
	if (ctx.cr6.eq) goto loc_8235E0EC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8235e068
	if (ctx.cr6.eq) goto loc_8235E068;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E064;
	// b 0x822d4ec8
	return;
loc_8235E068:
	// lwz r11,15448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15448);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,15468(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15468);
	// stw r9,15368(r31)
	REX_STORE_U32(r31.u32 + 15368, ctx.r9.u32);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f10,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f9,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f8,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f7,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f5,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f7,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x8235e170
	goto loc_8235E170;
loc_8235E0EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,15448(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15448);
	// lwz r27,15464(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15464);
	// stw r11,15368(r31)
	REX_STORE_U32(r31.u32 + 15368, ctx.r11.u32);
	// lfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f3,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f6,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// b 0x8235e16c
	goto loc_8235E16C;
loc_8235E138:
	// lwz r11,15448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15448);
	// lfs f6,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x8235e170
	goto loc_8235E170;
loc_8235E15C:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
loc_8235E16C:
	// lfs f7,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_8235E170:
	// lwz r11,15368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15368);
	// lwz r30,3832(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r29,3836(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r28,3840(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// bne cr6,0x8235e194
	if (!ctx.cr6.eq) goto loc_8235E194;
	// lwz r30,3800(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r29,3804(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r28,3808(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3808);
loc_8235E194:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,15472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 15472);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f31,31912(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 31912);
	// lfd f30,26664(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 26664);
	// lfs f29,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f28,16896(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16896);
	f28.f64 = double(temp.f32);
	// lfs f27,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	f27.f64 = double(temp.f32);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15492);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lfs f13,15496(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15496);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235e238
	if (ctx.cr6.eq) goto loc_8235E238;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8235e238
	if (!ctx.cr6.eq) goto loc_8235E238;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x8235e2f0
	if (!ctx.cr6.eq) goto loc_8235E2F0;
loc_8235E238:
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x8235e270
	if (!ctx.cr6.eq) goto loc_8235E270;
	// lwz r11,15456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, f27.f64);
	// bne cr6,0x8235e25c
	if (!ctx.cr6.eq) goto loc_8235E25C;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, f28.f64);
	// ble cr6,0x8235e2f0
	if (!ctx.cr6.gt) goto loc_8235E2F0;
loc_8235E25C:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bne cr6,0x8235e270
	if (!ctx.cr6.eq) goto loc_8235E270;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x8235e2f0
	if (ctx.cr6.gt) goto loc_8235E2F0;
loc_8235E270:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8235e28c
	if (!ctx.cr6.eq) goto loc_8235E28C;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x8235e2b0
	goto loc_8235E2B0;
loc_8235E28C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x8235e2a4
	if (!ctx.cr6.eq) goto loc_8235E2A4;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// b 0x8235e2b0
	goto loc_8235E2B0;
loc_8235E2A4:
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
loc_8235E2B0:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r5,3780(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,3776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f0.f64;
	// bl 0x82358da0
	ctx.lr = 0x8235E2D4;
	sub_82358DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e890
	if (!ctx.cr6.eq) goto loc_8235E890;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_8235E2F0:
	// lwz r11,15368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15368);
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stfs f1,15472(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 15472, temp.u32);
	// stfs f13,15476(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 15476, temp.u32);
	// stfs f3,15480(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 15480, temp.u32);
	// stfs f12,15484(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 15484, temp.u32);
	// stfs f11,15488(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 15488, temp.u32);
	// stfs f6,15492(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 15492, temp.u32);
	// stfs f0,15496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 15496, temp.u32);
	// bne cr6,0x8235e494
	if (!ctx.cr6.eq) goto loc_8235E494;
	// lfs f0,15500(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15504(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15508(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15508);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15512(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15516(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15520(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lfs f0,15524(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235e3b0
	if (ctx.cr6.eq) goto loc_8235E3B0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x8235e3b0
	if (!ctx.cr6.eq) goto loc_8235E3B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8235e460
	if (!ctx.cr6.eq) goto loc_8235E460;
loc_8235E3B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8235e3ec
	if (!ctx.cr6.eq) goto loc_8235E3EC;
	// lwz r11,15456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bne cr6,0x8235e3d8
	if (!ctx.cr6.eq) goto loc_8235E3D8;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x8235e460
	if (ctx.cr6.gt) goto loc_8235E460;
loc_8235E3D8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8235e3ec
	if (!ctx.cr6.eq) goto loc_8235E3EC;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x8235e460
	if (!ctx.cr6.gt) goto loc_8235E460;
loc_8235E3EC:
	// lwz r11,15428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235e40c
	if (!ctx.cr6.eq) goto loc_8235E40C;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x8235e430
	goto loc_8235E430;
loc_8235E40C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235e424
	if (!ctx.cr6.eq) goto loc_8235E424;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// b 0x8235e430
	goto loc_8235E430;
loc_8235E424:
	// lfs f5,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
loc_8235E430:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// lwz r5,3792(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lfs f6,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,3796(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r7,3844(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// lwz r8,3848(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// lwz r9,3852(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// bl 0x82358da0
	ctx.lr = 0x8235E454;
	sub_82358DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e890
	if (!ctx.cr6.eq) goto loc_8235E890;
	// lfs f7,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_8235E460:
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,15500(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 15500, temp.u32);
	// stfs f13,15504(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 15504, temp.u32);
	// stfs f12,15508(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 15508, temp.u32);
	// stfs f11,15512(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 15512, temp.u32);
	// stfs f10,15516(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 15516, temp.u32);
	// stfs f9,15520(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 15520, temp.u32);
	// stfs f7,15524(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 15524, temp.u32);
loc_8235E494:
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8235e834
	if (ctx.cr6.gt) goto loc_8235E834;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6980
	ctx.r12.s64 = ctx.r12.s64 + -6980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235E510;
	case 1:
		goto loc_8235E510;
	case 2:
		goto loc_8235E834;
	case 3:
		goto loc_8235E510;
	case 4:
		goto loc_8235E510;
	case 5:
		goto loc_8235E510;
	case 6:
		goto loc_8235E510;
	case 7:
		goto loc_8235E510;
	case 8:
		goto loc_8235E510;
	case 9:
		goto loc_8235E510;
	case 10:
		goto loc_8235E580;
	case 11:
		goto loc_8235E834;
	case 12:
		goto loc_8235E510;
	case 13:
		goto loc_8235E510;
	case 14:
		goto loc_8235E834;
	case 15:
		goto loc_8235E834;
	case 16:
		goto loc_8235E510;
	case 17:
		goto loc_8235E834;
	case 18:
		goto loc_8235E510;
	case 19:
		goto loc_8235E510;
	case 20:
		goto loc_8235E510;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8235E510:
	// lwz r11,3808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r27,3804(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r26,3800(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r30,3840(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r29,3836(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,3852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lwz r28,3832(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r10,3848(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,3844(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// lwz r8,15456(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r5,15376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r4,15372(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// lwz r3,15436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15436);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// bl 0x8235d8f8
	ctx.lr = 0x8235E568;
	sub_8235D8F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e88c
	if (ctx.cr6.eq) goto loc_8235E88C;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E57C;
	// b 0x822d4ec8
	return;
loc_8235E580:
	// lwz r11,15456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f12.u64);
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f10.u64);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stfd f8,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f8.u64);
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, f27.f64);
	// lwz r30,204(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// bne cr6,0x8235e5dc
	if (!ctx.cr6.eq) goto loc_8235E5DC;
	// lwz r5,3844(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// lwz r6,3848(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// lwz r7,3852(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// lwz r8,3800(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r9,3804(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r10,3808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// b 0x8235e5f4
	goto loc_8235E5F4;
loc_8235E5DC:
	// lwz r5,3800(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r6,3804(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r7,3808(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r8,3844(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// lwz r9,3848(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// lwz r10,3852(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3852);
loc_8235E5F4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8235e63c
	if (!ctx.cr6.eq) goto loc_8235E63C;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// lwz r3,3832(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r30,3840(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r29,3836(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x823acec8
	ctx.lr = 0x8235E628;
	sub_823ACEC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E638;
	// b 0x822d4ec8
	return;
loc_8235E63C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8235e684
	if (!ctx.cr6.eq) goto loc_8235E684;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r4,3832(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r3,3840(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r11,3836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823adbf8
	ctx.lr = 0x8235E670;
	sub_823ADBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E680;
	// b 0x822d4ec8
	return;
loc_8235E684:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8235e6cc
	if (!ctx.cr6.eq) goto loc_8235E6CC;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x823ad590
	ctx.lr = 0x8235E6B8;
	sub_823AD590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E6C8;
	// b 0x822d4ec8
	return;
loc_8235E6CC:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8235e714
	if (!ctx.cr6.eq) goto loc_8235E714;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823ac828
	ctx.lr = 0x8235E700;
	sub_823AC828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E710;
	// b 0x822d4ec8
	return;
loc_8235E714:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8235e75c
	if (!ctx.cr6.eq) goto loc_8235E75C;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823ac200
	ctx.lr = 0x8235E748;
	sub_823AC200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E758;
	// b 0x822d4ec8
	return;
loc_8235E75C:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x8235e7a4
	if (!ctx.cr6.eq) goto loc_8235E7A4;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823abfb8
	ctx.lr = 0x8235E790;
	sub_823ABFB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E7A0;
	// b 0x822d4ec8
	return;
loc_8235E7A4:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x8235e7ec
	if (!ctx.cr6.eq) goto loc_8235E7EC;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823abc10
	ctx.lr = 0x8235E7D8;
	sub_823ABC10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E7E8;
	// b 0x822d4ec8
	return;
loc_8235E7EC:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x8235e88c
	if (!ctx.cr6.eq) goto loc_8235E88C;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r29,3832(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// lwz r3,15372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// bl 0x823ab850
	ctx.lr = 0x8235E820;
	sub_823AB850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E830;
	// b 0x822d4ec8
	return;
loc_8235E834:
	// lwz r11,15368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15368);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8235e88c
	if (!ctx.cr6.eq) goto loc_8235E88C;
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,15392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// lwz r5,3832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,3844(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82358400
	ctx.lr = 0x8235E860;
	sub_82358400(ctx, base);
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,3848(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// bl 0x82358538
	ctx.lr = 0x8235E878;
	sub_82358538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,3840(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r4,3852(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// bl 0x82358538
	ctx.lr = 0x8235E88C;
	sub_82358538(ctx, base);
loc_8235E88C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235E890:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8235E89C;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823872E0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x823872E8;
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
	// beq cr6,0x82387324
	if (ctx.cr6.eq) goto loc_82387324;
	// li r25,12
	r25.s64 = 12;
	// li r28,0
	r28.s64 = 0;
loc_82387324:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82387334
	if (ctx.cr6.eq) goto loc_82387334;
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// b 0x82387354
	goto loc_82387354;
loc_82387334:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15928);
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
	ctx.lr = 0x82387350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82387354:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r11,3
	r28.s64 = ctx.r11.s64 + 3;
	// bne cr6,0x823873dc
	if (!ctx.cr6.eq) goto loc_823873DC;
	// addic. r29,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r29.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x823873b8
	if (!ctx.cr0.gt) goto loc_823873B8;
	// subf r28,r31,r28
	r28.u64 = r28.u64 - r31.u64;
loc_82387374:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15928);
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
	ctx.lr = 0x82387390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15932(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15932);
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
	ctx.lr = 0x823873AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82387374
	if (!ctx.cr0.eq) goto loc_82387374;
loc_823873B8:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15928);
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
	ctx.lr = 0x823873D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823873D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823873DC:
	// addic. r31,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r31.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x823873d4
	if (!ctx.cr0.gt) goto loc_823873D4;
loc_823873E4:
	// lwz r11,15932(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15932);
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
	ctx.lr = 0x82387400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x823873e4
	if (!ctx.cr0.eq) goto loc_823873E4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8238A968) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,-28600(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -28600);
	// ble cr6,0x8238a99c
	if (!ctx.cr6.gt) goto loc_8238A99C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8238A980:
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
	// bdnz 0x8238a980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A980;
loc_8238A99C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8238a9c8
	if (!ctx.cr6.gt) goto loc_8238A9C8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8238A9AC:
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
	// bdnz 0x8238a9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A9AC;
loc_8238A9C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8238A9D8:
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
	// bdnz 0x8238a9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A9D8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238C158) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c188
	if (ctx.cr6.eq) goto loc_8238C188;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C184;
	sub_8233D4C0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8238C188:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c19c
	if (ctx.cr6.eq) goto loc_8238C19C;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C198;
	sub_8233D4C0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8238C19C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C1A4;
	sub_8233D4C0(ctx, base);
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

DEFINE_REX_FUNC(sub_8238D888) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8238D890;
	// li r11,8
	ctx.r11.s64 = 8;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
loc_8238D8B0:
	// lbzx r30,r10,r31
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + r31.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r28,1(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rotlwi r29,r28,16
	r29.u64 = __builtin_rotateleft32(r28.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	r29.u64 = r29.u64 | r27.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lbzx r29,r5,r8
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stwx r30,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, r30.u32);
	// lbz r30,-1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r29,3(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r28,2(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r27,-1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r30.u32);
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,5(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r28,4(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r27,0(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r29.u32);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r29,7(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r28,6(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// lbz r27,1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r29.u32);
	// lbz r29,6(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r28,7(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r30.u32);
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,9(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 9);
	// lbz r28,8(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// lbz r27,2(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, r29.u32);
	// lbz r29,9(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r28,8(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, r30.u32);
	// lbz r30,3(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r29,11(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 11);
	// lbz r28,10(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 10);
	// lbz r27,3(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, r29.u32);
	// lbz r29,10(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r28,11(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r30.u32);
	// lbz r30,4(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r29,13(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 13);
	// lbz r28,12(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 12);
	// lbz r27,4(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, r29.u32);
	// lbz r29,12(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r28,13(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r30.u32);
	// lbz r30,15(r5)
	r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 15);
	// lbz r28,5(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r29,14(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 14);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,5(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rlwinm r28,r28,8,0,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r30,r30,r28
	r30.u64 = r30.u64 | r28.u64;
	// stw r30,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r30.u32);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbz r30,15(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// or r11,r30,r11
	ctx.r11.u64 = r30.u64 | ctx.r11.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stw r11,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// bdnz 0x8238d8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238D8B0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82394070) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82394078;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// ble cr6,0x82394240
	if (!ctx.cr6.gt) goto loc_82394240;
	// addi r23,r9,-2
	r23.s64 = ctx.r9.s64 + -2;
	// lwz r14,340(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// rlwinm r18,r23,2,0,29
	r18.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// subf r7,r3,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r3.u64;
	// addi r22,r9,-4
	r22.s64 = ctx.r9.s64 + -4;
	// addi r21,r9,-2
	r21.s64 = ctx.r9.s64 + -2;
	// addi r20,r9,-5
	r20.s64 = ctx.r9.s64 + -5;
	// addi r19,r23,-1
	r19.s64 = r23.s64 + -1;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// li r17,0
	r17.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
loc_823940D0:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// lbz r6,-1(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// addi r28,r8,1
	r28.s64 = ctx.r8.s64 + 1;
	// lbz r5,1(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// addi r27,r8,2
	r27.s64 = ctx.r8.s64 + 2;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,2(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r3,r3,14
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(14));
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r5,r3,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r6,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 7;
	// stw r6,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r6.u32);
	// ble cr6,0x82394194
	if (!ctx.cr6.gt) goto loc_82394194;
	// addi r10,r23,-3
	ctx.r10.s64 = r23.s64 + -3;
	// addi r26,r8,-2
	r26.s64 = ctx.r8.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r8,-3
	r25.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82394144:
	// lbzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzx r30,r28,r11
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r5,r26,r11
	ctx.r5.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// lbzx r3,r27,r11
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r25,r11
	r31.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mulli r3,r3,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// srawi r10,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 7;
	// stwu r10,8(r6)
	ea = 8 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x82394144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394144;
loc_82394194:
	// lbzx r10,r19,r8
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + ctx.r8.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lbzx r11,r21,r8
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r5,r22,r8
	ctx.r5.u64 = REX_LOAD_U8(r22.u32 + ctx.r8.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r20,r8
	ctx.r3.u64 = REX_LOAD_U8(r20.u32 + ctx.r8.u32);
	// mulli r31,r31,14
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(14));
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mulli r5,r10,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r18,r24
	REX_STORE_U32(r18.u32 + r24.u32, ctx.r10.u32);
	// ble cr6,0x82394228
	if (!ctx.cr6.gt) goto loc_82394228;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823941F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82394210
	if (!ctx.cr6.gt) goto loc_82394210;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
loc_82394210:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r17,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, r17.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stbx r10,r16,r6
	REX_STORE_U8(r16.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x823941f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823941F8;
loc_82394228:
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// add r8,r8,r14
	ctx.r8.u64 = ctx.r8.u64 + r14.u64;
	// add r16,r16,r14
	r16.u64 = r16.u64 + r14.u64;
	// bne 0x823940d0
	if (!ctx.cr0.eq) goto loc_823940D0;
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r26,276(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82394240:
	// lwz r30,332(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r27,348(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82394280
	if (!ctx.cr6.gt) goto loc_82394280;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r28,r4,r11
	r28.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_82394264:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// bl 0x82393ef8
	ctx.lr = 0x82394274;
	sub_82393EF8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82394264
	if (!ctx.cr0.eq) goto loc_82394264;
loc_82394280:
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823942b0
	if (!ctx.cr6.gt) goto loc_823942B0;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r29,r26,r11
	r29.u64 = ctx.r11.u64 - r26.u64;
loc_82394294:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x82393ef8
	ctx.lr = 0x823942A4;
	sub_82393EF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82394294
	if (!ctx.cr0.eq) goto loc_82394294;
loc_823942B0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823990F0) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823990F8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r31,0
	r31.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r31,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, r31.u8);
	// li r23,1
	r23.s64 = 1;
	// stb r11,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r11.u8);
	// li r29,2
	r29.s64 = 2;
	// stb r11,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// li r30,5
	r30.s64 = 5;
	// stb r23,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, r23.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r29,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, r29.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r11,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r11,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stb r8,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r8.u8);
	// li r24,3
	r24.s64 = 3;
	// stb r11,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r11.u8);
	// li r25,7
	r25.s64 = 7;
	// stb r30,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, r30.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r24,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, r24.u8);
	// li r26,11
	r26.s64 = 11;
	// stb r11,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r3,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r3.u8);
	// li r27,15
	r27.s64 = 15;
	// stb r11,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// li r28,17
	r28.s64 = 17;
	// stb r25,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, r25.u8);
	// li r17,20
	r17.s64 = 20;
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// li r18,21
	r18.s64 = 21;
	// stb r9,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
	// stb r11,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// li r19,24
	r19.s64 = 24;
	// stb r4,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r4.u8);
	// li r20,25
	r20.s64 = 25;
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// li r21,28
	r21.s64 = 28;
	// stb r5,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r5.u8);
	// li r22,29
	r22.s64 = 29;
	// stb r11,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// stb r26,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r26.u8);
	// stb r11,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stb r10,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r6,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r6.u8);
	// stb r11,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r7,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// stb r11,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r27,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, r27.u8);
	// stb r11,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r11.u8);
	// stb r31,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, r31.u8);
	// stb r11,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r11.u8);
	// stb r29,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, r29.u8);
	// stb r11,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r8,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r8.u8);
	// stb r11,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r11.u8);
	// stb r3,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r3.u8);
	// stb r11,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r9,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r9.u8);
	// stb r11,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r11.u8);
	// stb r5,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r5.u8);
	// stb r11,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r11.u8);
	// stb r10,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r10.u8);
	// stb r11,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r11.u8);
	// stb r7,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r7.u8);
	// stb r31,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, r31.u8);
	// stb r23,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, r23.u8);
	// stb r11,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// stb r28,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, r28.u8);
	// stb r8,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r8.u8);
	// stb r30,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, r30.u8);
	// stb r17,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, r17.u8);
	// stb r18,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, r18.u8);
	// stb r9,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stb r23,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, r23.u8);
	// lis r14,-32162
	r14.s64 = -2107768832;
	// stb r23,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, r23.u8);
	// li r23,18
	r23.s64 = 18;
	// stb r28,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, r28.u8);
	// li r15,22
	r15.s64 = 22;
	// stb r23,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r23.u8);
	// li r23,26
	r23.s64 = 26;
	// stb r28,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, r28.u8);
	// li r16,23
	r16.s64 = 23;
	// stb r28,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, r28.u8);
	// li r28,19
	r28.s64 = 19;
	// stb r8,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r8.u8);
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r28,27
	r28.s64 = 27;
	// stb r8,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r8.u8);
	// stb r8,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r8.u8);
	// addi r8,r14,-18328
	ctx.r8.s64 = r14.s64 + -18328;
	// stb r30,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, r30.u8);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// li r28,18
	r28.s64 = 18;
	// stb r11,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// std r23,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r23.u64);
	// li r23,19
	r23.s64 = 19;
	// stb r30,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, r30.u8);
	// stb r11,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r30,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, r30.u8);
	// li r30,30
	r30.s64 = 30;
	// stb r11,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r11.u8);
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r4,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r4.u8);
	// stb r19,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, r19.u8);
	// stb r20,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, r20.u8);
	// stb r10,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// stb r6,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r6.u8);
	// lbz r14,81(r1)
	r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r21,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, r21.u8);
	// stb r22,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, r22.u8);
	// stb r29,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// stb r24,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, r24.u8);
	// stb r14,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, r14.u8);
	// lbz r14,80(r1)
	r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r3.u8);
	// stb r25,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, r25.u8);
	// stb r9,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
	// stb r4,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r4.u8);
	// stb r5,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r5.u8);
	// stb r26,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, r26.u8);
	// stb r10,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// stb r6,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r6.u8);
	// stb r7,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// stb r27,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, r27.u8);
	// stb r31,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stb r29,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, r29.u8);
	// stb r24,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, r24.u8);
	// stb r3,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r3.u8);
	// stb r25,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, r25.u8);
	// stb r14,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, r14.u8);
	// stb r17,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, r17.u8);
	// stb r18,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, r18.u8);
	// stb r15,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, r15.u8);
	// stb r16,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, r16.u8);
	// stb r31,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r31.u8);
	// stb r9,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r9.u8);
	// stb r4,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r4.u8);
	// stb r10,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// stb r6,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r17,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, r17.u8);
	// stb r18,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, r18.u8);
	// stb r19,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, r19.u8);
	// stb r20,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, r20.u8);
	// stb r21,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, r21.u8);
	// stb r22,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, r22.u8);
	// stb r29,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, r29.u8);
	// stb r24,241(r1)
	REX_STORE_U8(ctx.r1.u32 + 241, r24.u8);
	// stb r3,242(r1)
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r3.u8);
	// stb r25,243(r1)
	REX_STORE_U8(ctx.r1.u32 + 243, r25.u8);
	// stb r5,244(r1)
	REX_STORE_U8(ctx.r1.u32 + 244, ctx.r5.u8);
	// stb r26,245(r1)
	REX_STORE_U8(ctx.r1.u32 + 245, r26.u8);
	// stb r7,246(r1)
	REX_STORE_U8(ctx.r1.u32 + 246, ctx.r7.u8);
	// stb r27,247(r1)
	REX_STORE_U8(ctx.r1.u32 + 247, r27.u8);
	// stb r28,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, r28.u8);
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// ld r28,112(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lis r29,-32161
	r29.s64 = -2107703296;
	// stb r10,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r9,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lis r25,-32161
	r25.s64 = -2107703296;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r26,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, r26.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r27,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, r27.u8);
	// lis r24,-32161
	r24.s64 = -2107703296;
	// stb r20,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, r20.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,249(r1)
	REX_STORE_U8(ctx.r1.u32 + 249, r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r23,96(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r9,5116(r29)
	REX_STORE_U32(r29.u32 + 5116, ctx.r9.u32);
	// lis r26,-32161
	r26.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r28,253(r1)
	REX_STORE_U8(ctx.r1.u32 + 253, r28.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r28,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, r28.u8);
	// stw r9,5088(r25)
	REX_STORE_U32(r25.u32 + 5088, ctx.r9.u32);
	// lis r27,-32161
	r27.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,252(r1)
	REX_STORE_U8(ctx.r1.u32 + 252, r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r23,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, r23.u8);
	// stw r9,5092(r24)
	REX_STORE_U32(r24.u32 + 5092, ctx.r9.u32);
	// lis r20,-32161
	r20.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,254(r1)
	REX_STORE_U8(ctx.r1.u32 + 254, r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r7,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stw r9,5124(r26)
	REX_STORE_U32(r26.u32 + 5124, ctx.r9.u32);
	// lis r28,-32161
	r28.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r11,255(r1)
	REX_STORE_U8(ctx.r1.u32 + 255, ctx.r11.u8);
	// stw r9,5104(r27)
	REX_STORE_U32(r27.u32 + 5104, ctx.r9.u32);
	// lis r23,-32161
	r23.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r4,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
	// stw r9,5080(r20)
	REX_STORE_U32(r20.u32 + 5080, ctx.r9.u32);
	// lis r7,-32161
	ctx.r7.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r5,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r22,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, r22.u8);
	// stw r9,5096(r28)
	REX_STORE_U32(r28.u32 + 5096, ctx.r9.u32);
	// lis r30,-32161
	r30.s64 = -2107703296;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r15,250(r1)
	REX_STORE_U8(ctx.r1.u32 + 250, r15.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r16,251(r1)
	REX_STORE_U8(ctx.r1.u32 + 251, r16.u8);
	// stw r9,5084(r23)
	REX_STORE_U32(r23.u32 + 5084, ctx.r9.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r6,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// stb r19,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r19.u8);
	// lis r22,-32161
	r22.s64 = -2107703296;
	// stb r21,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r21.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r3,5108(r7)
	REX_STORE_U32(ctx.r7.u32 + 5108, ctx.r3.u32);
	// stw r9,5100(r30)
	REX_STORE_U32(r30.u32 + 5100, ctx.r9.u32);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r11,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lis r21,-32161
	r21.s64 = -2107703296;
	// stb r11,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r11,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stb r11,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r11,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r11,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r10,5120(r22)
	REX_STORE_U32(r22.u32 + 5120, ctx.r10.u32);
	// stw r11,5112(r21)
	REX_STORE_U32(r21.u32 + 5112, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x823994F8;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,5116(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 5116);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x822d4fa0
	ctx.lr = 0x82399508;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5088(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 5088);
	// bl 0x822d4fa0
	ctx.lr = 0x82399518;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5092(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 5092);
	// bl 0x822d4fa0
	ctx.lr = 0x82399528;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5124(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 5124);
	// bl 0x822d4fa0
	ctx.lr = 0x82399538;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5104(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 5104);
	// bl 0x822d4fa0
	ctx.lr = 0x82399548;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5080(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 5080);
	// bl 0x822d4fa0
	ctx.lr = 0x82399558;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 5096);
	// bl 0x822d4fa0
	ctx.lr = 0x82399568;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,5084(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 5084);
	// bl 0x822d4fa0
	ctx.lr = 0x82399578;
	sub_822D4FA0(ctx, base);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r11,5120(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 5120);
	// ori r4,r6,128
	ctx.r4.u64 = ctx.r6.u64 | 128;
	// ori r3,r5,128
	ctx.r3.u64 = ctx.r5.u64 | 128;
	// rldimi r4,r4,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// rldimi r3,r3,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,5112(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5112);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r3,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r3,5100(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 5100);
	// bl 0x822d4fa0
	ctx.lr = 0x823995BC;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823AFE10) {
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
	// bl 0x822d4e74
	ctx.lr = 0x823AFE18;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// beq cr6,0x823afe34
	if (ctx.cr6.eq) goto loc_823AFE34;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823afe38
	if (ctx.cr6.eq) goto loc_823AFE38;
loc_823AFE34:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_823AFE38:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823afe44
	if (!ctx.cr6.eq) goto loc_823AFE44;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823AFE44:
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvlx128 v57,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r31,r6
	ctx.r10.u64 = r31.u64 + ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v56,r31,r5
	temp.u32 = r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v22,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v22.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// lvrx v5,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvrx v27,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v27.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvrx v30,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v30.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v57,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)v27.u8)));
	// vor128 v6,v56,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// lvlx128 v54,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v4,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v26,v54,v4
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvlx128 v53,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v3,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v25,v53,v3
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvlx128 v52,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v24,v52,v2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx v1,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v23,v51,v1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// bne cr6,0x823aff18
	if (!ctx.cr6.eq) goto loc_823AFF18;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r1,-192
	r30.s64 = ctx.r1.s64 + -192;
	// addi r29,r1,-160
	r29.s64 = ctx.r1.s64 + -160;
	// addi r28,r1,-176
	r28.s64 = ctx.r1.s64 + -176;
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// lvlx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v21,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v21.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v49,v50,v21
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// lvlx128 v48,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v20,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v20.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v47,v48,v20
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v49,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v45,v46,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v47,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823AFF18:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823b03bc
	if (ctx.cr6.eq) goto loc_823B03BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823b03bc
	if (!ctx.cr6.eq) goto loc_823B03BC;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v26,v0,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v23,v0,v24
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bne cr6,0x823b02bc
	if (!ctx.cr6.eq) goto loc_823B02BC;
loc_823AFF9C:
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vaddshs v24,v10,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v57,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vor128 v56,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// vaddshs v3,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// vaddshs v2,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// stvx128 v24,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v29,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v29,v29,v9
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// vor128 v55,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v9,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v1,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v32,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor128 v33,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// stvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v24,v1,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// lvx128 v1,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v5,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v54,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vslh v30,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v9,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v10,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v31,v4,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vaddshs v24,v7,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v23,v6,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// stvx128 v9,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v4,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v10,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// stvx128 v9,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v3,v26,v25
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v9,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v26,v8,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v8,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v6,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v8,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v8,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v7,v25
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v25,v24,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v24,v31,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v29,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v8,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v7,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v6,v10,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// lvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v26,v8,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v7,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v6,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v10,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v29,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v8,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v29,v10,v0
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v10,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v9,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v8,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v28,v28,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v31,v23,v0
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v7,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v6,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v5,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v4,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vor128 v3,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vor128 v2,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v1,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v30,v54,v54
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// beq cr6,0x823b02bc
	if (ctx.cr6.eq) goto loc_823B02BC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823b0178
	if (!ctx.cr6.eq) goto loc_823B0178;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vor v22,v19,v19
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vor v27,v18,v18
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vor v30,v17,v17
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vor v5,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vor v4,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vor v3,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// stvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v2,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v1,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vor128 v21,v62,v62
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v20,v61,v61
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
loc_823B0178:
	// vaddshs v26,v30,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vaddshs v25,v5,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v23,v5,v2
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v22,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vaddshs v26,v27,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v22,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v27,v4
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v19,v4,v3
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v4,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v3,v2
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v17,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vaddshs v26,v16,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v25,v30,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v2,v1
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v16,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v26,v3,v21
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v3,v2,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v24,v16,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vaddshs v19,v4,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v27,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v18,v21,v20
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vslh v16,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v1,v21
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v2,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v27,v16,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vsrah v25,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v4,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v27,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vslh v23,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v21,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v14,v25,v0
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v20,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v16,v23,v5
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vmaxsh v25,v21,v0
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vavgsh v28,v28,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vaddshs v19,v4,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vmaxsh v24,v20,v0
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v2,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v27,v5
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vaddshs v23,v4,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vavgsh v31,v31,v24
	simde_mm_store_si128((simde__m128i*)v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v4,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v17,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v1,v22
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v4,v11
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v14,v17,v5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vavgsh v29,v29,v25
	simde_mm_store_si128((simde__m128i*)v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vmaxsh v20,v2,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v4,v14,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmaxsh v16,v19,v0
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v2,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v25,v4,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v30,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vavgsh v10,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vmaxsh v27,v2,v0
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v22,v24,v26
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vavgsh v9,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vavgsh v8,v8,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmaxsh v20,v23,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v22,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vavgsh v7,v7,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v19,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v18,v19,v0
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vavgsh v6,v6,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
loc_823B02BC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b0364
	if (ctx.cr6.eq) goto loc_823B0364;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// addi r8,r4,96
	ctx.r8.s64 = ctx.r4.s64 + 96;
	// addi r7,r4,128
	ctx.r7.s64 = ctx.r4.s64 + 128;
	// addi r5,r4,160
	ctx.r5.s64 = ctx.r4.s64 + 160;
	// lvx128 v52,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r4,192
	r30.s64 = ctx.r4.s64 + 192;
	// lvx128 v51,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r4,224
	r29.s64 = ctx.r4.s64 + 224;
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v13,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// lvx128 v48,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v28,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvx128 v44,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v12,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// lvx128 v41,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v11,v50,v43
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// lvx128 v40,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v5,v49,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// lvx128 v39,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v4,v48,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// lvx128 v38,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v3,v47,v40
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vpkswss128 v2,v46,v39
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vaddshs v29,v29,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkswss128 v1,v45,v38
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vaddshs v31,v31,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
loc_823B0364:
	// vpkshus128 v37,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// add r11,r31,r6
	ctx.r11.u64 = r31.u64 + ctx.r6.u64;
	// vpkshus128 v36,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vpkshus128 v35,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vpkshus128 v34,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v33,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v32,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v63,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvlx128 v37,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// vpkshus128 v62,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v36,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v35,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v34,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v33,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v32,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v62,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// b 0x822d4ec4
	return;
loc_823B03BC:
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v29,v10,v5,6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 10));
	// vsldoi v22,v10,v5,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 14));
	// vsldoi v19,v10,v5,4
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 12));
	// vmrglb v20,v0,v26
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v21,v10,v29
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmrghb v28,v0,v26
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v14,v0,v25
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v9,v22,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vmrglb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v26,v0,v23
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v25,v0,v23
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v16,v10,v3,6
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 10));
	// vsldoi v27,v10,v3,2
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 14));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v18,v10,v3,4
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 12));
	// vor128 v43,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v42,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vaddshs v15,v10,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vmrglb v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v31,v0,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v23,v27,v18
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vmrglb v29,v0,v24
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v17,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v44,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v7,v10,v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 10));
	// vor v9,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vsldoi v30,v10,v1,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v17,v10,v1,4
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 12));
	// vsubshs v8,v8,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v3,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v30,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi128 v23,v10,v44,6
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 10));
	// vsldoi128 v5,v10,v44,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vsldoi128 v16,v10,v44,4
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// vsubshs v7,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v10,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vaddshs v15,v5,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v6,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v28,v7,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v4,v10,v20,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v20.u8), 14));
	// vor v9,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vsldoi v15,v10,v20,4
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v20.u8), 12));
	// vsldoi v21,v10,v20,6
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v20.u8), 10));
	// vsubshs v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v4,v15
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v1,v10,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor v10,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vaddshs v7,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vaddshs v23,v6,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v3,v10,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// vsldoi128 v14,v10,v43,4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 12));
	// vsubshs v2,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v20,v10,v43,6
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 10));
	// vaddshs v8,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v7,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmrghb v10,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v2,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v1,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v20,v10,v29,6
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v29.u8), 10));
	// vaddshs v8,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi v26,v10,v29,4
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v29.u8), 12));
	// vsrah v6,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi v2,v10,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v29.u8), 14));
	// vsrah v31,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v1,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vaddshs v20,v10,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor v10,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vaddshs v9,v2,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// vsldoi128 v29,v10,v42,6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 10));
	// vmaxsh v28,v6,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsldoi128 v25,v10,v42,4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// vslh v7,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v1,v10,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v29,v31,v0
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v31,v7,v9
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// vaddshs v10,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vor v7,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v6,v31,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmaxsh v10,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v31,v23,v0
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v23,v6,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v9,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v8,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v24,v7
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v24,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v20,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v23,v21,v24
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v7,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v20,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v6,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// bne cr6,0x823b0744
	if (!ctx.cr6.eq) goto loc_823B0744;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v41,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// vor128 v37,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// vor128 v36,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r23,r1,-96
	r23.s64 = ctx.r1.s64 + -96;
	// vor128 v34,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// lvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// vmrghb v26,v0,v25
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// vmrglb v24,v0,v25
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-144
	r28.s64 = ctx.r1.s64 + -144;
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r24,r1,-112
	r24.s64 = ctx.r1.s64 + -112;
	// vmrglb v21,v0,v25
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v10,v26,v24,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v24.u8), 10));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// vmrghb v20,v0,v25
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v40,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)v21.u8));
	// vsldoi v21,v26,v24,2
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v24.u8), 14));
	// vaddshs v10,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v59,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// addi r25,r1,-128
	r25.s64 = ctx.r1.s64 + -128;
	// stvx128 v25,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v26,v24,4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v24.u8), 12));
	// vor v26,v23,v23
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// lvx128 v39,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v24,v26,v40,4
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v23,v26,v40,6
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// stvx128 v25,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// vaddshs v25,v21,v25
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// lvx128 v62,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v20,v26,v40,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// lvx128 v38,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v26,v23
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvx128 v24,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-112
	r30.s64 = ctx.r1.s64 + -112;
	// vaddshs v23,v20,v24
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// vslh v9,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// stvx128 v23,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// lvx128 v25,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v26,v38,v38
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vsldoi128 v8,v26,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vsldoi128 v23,v26,v39,4
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsldoi128 v24,v26,v39,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vaddshs v8,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvx128 v23,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v23,v9,v10
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v26,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v23,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v7,v7
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v10,v25
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v24,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v25,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v24,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsrah v24,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v23,v26,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v25,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v10,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vmaxsh v26,v24,v0
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v24,v23,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v9,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v8,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v25,v23,v0
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v7,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vmaxsh v23,v24,v0
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// b 0x823aff9c
	goto loc_823AFF9C;
loc_823B0744:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b02bc
	if (ctx.cr6.eq) goto loc_823B02BC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823b0778
	if (ctx.cr6.eq) goto loc_823B0778;
	// vavgsh v28,v28,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vavgsh v29,v29,v27
	simde_mm_store_si128((simde__m128i*)v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vavgsh v31,v31,v30
	simde_mm_store_si128((simde__m128i*)v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vavgsh v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vavgsh v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vavgsh v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vavgsh v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vavgsh v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// b 0x823b02bc
	goto loc_823B02BC;
loc_823B0778:
	// vavgsh v28,v28,v19
	simde_mm_store_si128((simde__m128i*)v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vavgsh v29,v29,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vavgsh v31,v31,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vavgsh v10,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vavgsh v9,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vavgsh v8,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vavgsh v7,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vavgsh v6,v6,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// b 0x823b02bc
	goto loc_823B02BC;
}

DEFINE_REX_FUNC(sub_82407DC8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82407DD0;
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
	// bl 0x82215b80
	ctx.lr = 0x82407DF4;
	sub_82215B80(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82407fe0
	if (ctx.cr6.eq) goto loc_82407FE0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82407f40
	if (ctx.cr6.eq) goto loc_82407F40;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x82407f00
	if (ctx.cr6.eq) goto loc_82407F00;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x82407ed0
	if (ctx.cr6.eq) goto loc_82407ED0;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x82407e90
	if (ctx.cr6.eq) goto loc_82407E90;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x82407e64
	if (ctx.cr6.eq) goto loc_82407E64;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x824081ec
	if (!ctx.cr6.eq) goto loc_824081EC;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82222dc0
	ctx.lr = 0x82407E40;
	sub_82222DC0(ctx, base);
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
	// b 0x82408014
	goto loc_82408014;
loc_82407E64:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x82407E74;
	sub_82222DC0(ctx, base);
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
	// b 0x82408008
	goto loc_82408008;
loc_82407E90:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x82407EA0;
	sub_82222DC0(ctx, base);
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
	// b 0x82408018
	goto loc_82408018;
loc_82407ED0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222f58
	ctx.lr = 0x82407EE0;
	sub_82222F58(ctx, base);
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
	// b 0x82408010
	goto loc_82408010;
loc_82407F00:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82223330
	ctx.lr = 0x82407F0C;
	sub_82223330(ctx, base);
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
	// b 0x82408018
	goto loc_82408018;
loc_82407F40:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82223270
	ctx.lr = 0x82407F4C;
	sub_82223270(ctx, base);
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
	// beq 0x82407f90
	if (ctx.cr0.eq) goto loc_82407F90;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r28,r11,4,28,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x82408018
	goto loc_82408018;
loc_82407F90:
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// addi r7,r7,22352
	ctx.r7.s64 = ctx.r7.s64 + 22352;
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
	// b 0x824081ec
	goto loc_824081EC;
loc_82407FE0:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x82407FF0;
	sub_82222DC0(ctx, base);
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
loc_82408008:
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
loc_82408010:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82408014:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82408018:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r10,22352
	ctx.r11.s64 = ctx.r10.s64 + 22352;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x82221460
	ctx.lr = 0x82408040;
	sub_82221460(ctx, base);
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
	// bl 0x82407b48
	ctx.lr = 0x8240805C;
	sub_82407B48(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824080d8
	if (!ctx.cr6.eq) goto loc_824080D8;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x824080d8
	if (!ctx.cr6.eq) goto loc_824080D8;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824080d8
	if (!ctx.cr0.eq) goto loc_824080D8;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824080d8
	if (!ctx.cr0.eq) goto loc_824080D8;
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824080d8
	if (!ctx.cr0.eq) goto loc_824080D8;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824080d8
	if (!ctx.cr0.eq) goto loc_824080D8;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824080d8
	if (!ctx.cr0.eq) goto loc_824080D8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82221288
	ctx.lr = 0x824080C0;
	sub_82221288(ctx, base);
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
	// b 0x824080dc
	goto loc_824080DC;
loc_824080D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824080DC:
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
	// bne cr6,0x8240811c
	if (!ctx.cr6.eq) goto loc_8240811C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bgt cr6,0x8240811c
	if (ctx.cr6.gt) goto loc_8240811C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82215b80
	ctx.lr = 0x82408114;
	sub_82215B80(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8240813c
	if (ctx.cr6.eq) goto loc_8240813C;
loc_8240811C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82215b80
	ctx.lr = 0x82408124;
	sub_82215B80(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x8240813c
	if (ctx.cr6.eq) goto loc_8240813C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8240813C:
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
	// beq cr6,0x82408160
	if (ctx.cr6.eq) goto loc_82408160;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82408160:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82408178
	if (ctx.cr6.eq) goto loc_82408178;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82408178:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82408190
	if (ctx.cr0.eq) goto loc_82408190;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82408190:
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
loc_824081EC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8241A880) {
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
	// bge cr6,0x8241a96c
	if (!ctx.cr6.lt) goto loc_8241A96C;
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
	// lfs f0,27992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27992);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f13.f64 = double(temp.f32);
loc_8241A8E4:
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
	// bdnz 0x8241a8e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A8E4;
loc_8241A96C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a988
	if (ctx.cr6.eq) goto loc_8241A988;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241A988;
	sub_82413D40(ctx, base);
loc_8241A988:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a9a4
	if (ctx.cr6.eq) goto loc_8241A9A4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241A9A4;
	sub_82414110(ctx, base);
loc_8241A9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241CBB0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82413788
	ctx.lr = 0x8241CBD8;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-82
	ctx.xer.ca = ctx.r11.u32 > 81;
	ctx.r11.s64 = ctx.r11.s64 + -82;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241cc70
	if (ctx.cr0.eq) goto loc_8241CC70;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241cc58
	if (ctx.cr6.eq) goto loc_8241CC58;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8241cc40
	if (ctx.cr6.eq) goto loc_8241CC40;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x8241cc2c
	if (ctx.cr6.eq) goto loc_8241CC2C;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x8241cc90
	if (!ctx.cr6.eq) goto loc_8241CC90;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r11,r11,24744
	ctx.r11.s64 = ctx.r11.s64 + 24744;
	// addi r10,r10,23536
	ctx.r10.s64 = ctx.r10.s64 + 23536;
	// b 0x8241cc80
	goto loc_8241CC80;
loc_8241CC2C:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r11,r11,24384
	ctx.r11.s64 = ctx.r11.s64 + 24384;
	// addi r10,r10,23408
	ctx.r10.s64 = ctx.r10.s64 + 23408;
	// b 0x8241cc80
	goto loc_8241CC80;
loc_8241CC40:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,26984
	ctx.r11.s64 = ctx.r11.s64 + 26984;
	// addi r10,r10,26864
	ctx.r10.s64 = ctx.r10.s64 + 26864;
	// b 0x8241cc84
	goto loc_8241CC84;
loc_8241CC58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,26960
	ctx.r11.s64 = ctx.r11.s64 + 26960;
	// addi r10,r10,26768
	ctx.r10.s64 = ctx.r10.s64 + 26768;
	// b 0x8241cc84
	goto loc_8241CC84;
loc_8241CC70:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r11,r11,24056
	ctx.r11.s64 = ctx.r11.s64 + 24056;
	// addi r10,r10,22824
	ctx.r10.s64 = ctx.r10.s64 + 22824;
loc_8241CC80:
	// li r9,8
	ctx.r9.s64 = 8;
loc_8241CC84:
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
loc_8241CC90:
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x822d4fa0
	ctx.lr = 0x8241CCA0;
	sub_822D4FA0(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r8.u32);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r7,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r7.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r8,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r8.u32);
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r7,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r7.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r7,164(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r9.u32);
	// stw r8,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// stw r7,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r7.u32);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// stw r6,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r6.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82421D58) {
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
	// bl 0x822d4e84
	ctx.lr = 0x82421D60;
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
	// bne cr6,0x82421da0
	if (!ctx.cr6.eq) goto loc_82421DA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-18872
	ctx.r6.s64 = ctx.r11.s64 + -18872;
	// addi r5,r10,16968
	ctx.r5.s64 = ctx.r10.s64 + 16968;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// bl 0x8240e308
	ctx.lr = 0x82421DA0;
	sub_8240E308(ctx, base);
loc_82421DA0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412c68
	ctx.lr = 0x82421DB0;
	sub_82412C68(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82421df8
	if (ctx.cr6.eq) goto loc_82421DF8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421df8
	if (ctx.cr6.eq) goto loc_82421DF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x82421DCC;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,264(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// bctrl 
	ctx.lr = 0x82421DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421DF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824269C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x824269dc
	if (ctx.cr6.eq) goto loc_824269DC;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_824269DC:
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824270A8) {
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
	// b 0x824270e0
	goto loc_824270E0;
loc_824270C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824270e0
	if (ctx.cr6.eq) goto loc_824270E0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82412de0
	ctx.lr = 0x824270E0;
	sub_82412DE0(ctx, base);
loc_824270E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824270c0
	if (!ctx.cr6.eq) goto loc_824270C0;
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

DEFINE_REX_FUNC(sub_82428330) {
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
	// bl 0x82427100
	ctx.lr = 0x82428350;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5612
	ctx.r11.s64 = ctx.r11.s64 + -5612;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1420);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1420(r30)
	REX_STORE_U32(r30.u32 + 1420, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82428F58) {
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
	// bl 0x82428a88
	ctx.lr = 0x82428F70;
	sub_82428A88(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-2680
	ctx.r10.s64 = ctx.r10.s64 + -2680;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_824298F8) {
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
	// bl 0x82412d18
	ctx.lr = 0x82429920;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x8242994c
	if (ctx.cr0.eq) goto loc_8242994C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x82428f58
	ctx.lr = 0x8242993C;
	sub_82428F58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-2456
	ctx.r11.s64 = ctx.r11.s64 + -2456;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82429950
	goto loc_82429950;
loc_8242994C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429950:
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

DEFINE_REX_FUNC(sub_8242B6A8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8242B6B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// li r28,0
	r28.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242B6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8242b6f0
	if (!ctx.cr0.lt) goto loc_8242B6F0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8242b798
	goto loc_8242B798;
loc_8242B6F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242a6e8
	ctx.lr = 0x8242B6F8;
	sub_8242A6E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242b708
	if (!ctx.cr0.eq) goto loc_8242B708;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
loc_8242B708:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8242b798
	if (ctx.cr6.lt) goto loc_8242B798;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8242b73c
	if (ctx.cr6.eq) goto loc_8242B73C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242b2e8
	ctx.lr = 0x8242B720;
	sub_8242B2E8(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8242B73C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8242b7a4
	if (ctx.cr6.lt) goto loc_8242B7A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242B760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242b7a4
	if (ctx.cr0.lt) goto loc_8242B7A4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242b598
	ctx.lr = 0x8242B77C;
	sub_8242B598(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242b7a4
	if (ctx.cr0.lt) goto loc_8242B7A4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8242b798
	if (ctx.cr6.eq) goto loc_8242B798;
loc_8242B78C:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd250
	ctx.lr = 0x8242B798;
	sub_823CD250(ctx, base);
loc_8242B798:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8242B7A4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8242b798
	if (ctx.cr6.eq) goto loc_8242B798;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242b798
	if (ctx.cr6.eq) goto loc_8242B798;
	// lis r11,-30569
	ctx.r11.s64 = -2003369984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8242b78c
	if (!ctx.cr6.eq) goto loc_8242B78C;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// b 0x8242b798
	goto loc_8242B798;
}

DEFINE_REX_FUNC(sub_824324E0) {
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
	// bl 0x822d4f00
	ctx.lr = 0x824324F0;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
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
	// lfs f0,21052(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f19,f12,f0
	f19.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,84(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,92(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f13,f0
	f20.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,60(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f25,f12,f0
	f25.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f24,f11,f0
	f24.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f23,f12,f0
	f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,76(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f22,f11,f0
	f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmuls f21,f12,f0
	f21.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f19,-168(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f13,-164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bne cr6,0x824327c8
	if (!ctx.cr6.eq) goto loc_824327C8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82432c00
	if (ctx.cr6.eq) goto loc_82432C00;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82432604:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.r6.u64);
	// lfd f13,-464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// std r5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.r5.u64);
	// lfd f0,-472(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r5.u64);
	// lfd f0,-312(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// fcfid f18,f0
	f18.f64 = double(ctx.f0.s64);
	// std r3,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.r3.u64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// lfd f12,-448(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f18
	ctx.f12.f64 = double(float(f18.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
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
	// beq cr6,0x82432740
	if (ctx.cr6.eq) goto loc_82432740;
	// stfd f8,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f8.u64);
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
	// lfd f8,-328(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
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
	// b 0x824327ac
	goto loc_824327AC;
loc_82432740:
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
loc_824327AC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82432604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432604;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x824327BC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824327C8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f10,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f10.u64);
	// stfd f9,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f9.u64);
	// stfd f8,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.f8.u64);
	// stfd f7,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f7.u64);
	// stfd f6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.f6.u64);
	// stfd f5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.f5.u64);
	// stfd f4,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f4.u64);
	// stfd f3,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f3.u64);
	// stfd f2,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f2.u64);
	// stfd f1,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f1.u64);
	// stfd f31,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, f31.u64);
	// stfd f30,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, f30.u64);
	// stfd f29,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, f29.u64);
	// stfd f28,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, f28.u64);
	// stfd f27,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, f27.u64);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f18,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f18.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f17,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f17.f64 = double(temp.f32);
	// fmuls f18,f18,f0
	f18.f64 = double(float(f18.f64 * ctx.f0.f64));
	// lfs f16,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f16.f64 = double(temp.f32);
	// fmuls f17,f17,f0
	f17.f64 = double(float(f17.f64 * ctx.f0.f64));
	// lfs f15,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f15.f64 = double(temp.f32);
	// fmuls f16,f16,f0
	f16.f64 = double(float(f16.f64 * ctx.f0.f64));
	// lfs f14,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f14.f64 = double(temp.f32);
	// fmuls f15,f15,f0
	f15.f64 = double(float(f15.f64 * ctx.f0.f64));
	// lfs f10,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f14,f14,f0
	f14.f64 = double(float(f14.f64 * ctx.f0.f64));
	// lfs f9,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,56(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,60(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f31,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,76(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 76);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f29,80(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f28,84(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 84);
	f28.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// lfs f27,88(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 88);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// stfd f26,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, f26.u64);
	// fmuls f27,f27,f0
	f27.f64 = double(float(f27.f64 * ctx.f0.f64));
	// lfs f26,92(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 92);
	f26.f64 = double(temp.f32);
	// stfs f11,-432(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 * ctx.f0.f64));
	// stfs f12,-428(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// stfs f13,-424(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// stfs f18,-420(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// stfs f17,-416(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// stfs f16,-412(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f15,-408(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// stfs f14,-404(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// stfs f10,-400(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f9,-396(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// stfs f8,-392(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// stfs f7,-388(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// stfs f6,-384(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// stfs f5,-380(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// stfs f4,-376(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// stfs f3,-372(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// stfs f2,-368(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// stfs f1,-364(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// stfs f31,-360(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f30,-356(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// stfs f29,-352(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// stfs f28,-348(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// stfs f27,-344(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfd f10,-480(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// lfd f9,-328(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// lfd f8,-448(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// lfd f7,-312(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// lfd f6,-464(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// lfd f5,-472(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lfd f4,-272(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// lfd f3,-288(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// lfd f1,-280(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// lfd f31,-264(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// lfd f30,-456(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// lfd f29,-440(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// lfd f28,-336(r1)
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// lfd f27,-320(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lfd f26,-304(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// stfs f0,-340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// beq cr6,0x82432c00
	if (ctx.cr6.eq) goto loc_82432C00;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82432988:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f0,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r5,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r5.u64);
	// lfd f12,-320(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r5.u64);
	// lfd f11,-336(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// std r3,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, ctx.r3.u64);
	// lfd f11,-440(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f0,f8
	f18.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmuls f19,f0,f19
	f19.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fmadds f18,f11,f7,f18
	f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, f18.f64)));
	// beq cr6,0x82432ab8
	if (ctx.cr6.eq) goto loc_82432AB8;
	// fmuls f16,f0,f4
	f16.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfd f8,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, ctx.f8.u64);
	// fmuls f15,f0,f31
	f15.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	f20.f64 = double(temp.f32);
	// fmuls f14,f0,f27
	f14.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f17,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f17.f64 = double(temp.f32);
	// fmuls f8,f0,f23
	ctx.f8.f64 = double(float(ctx.f0.f64 * f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f16,f11,f3,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f16.f64)));
	// fmadds f15,f11,f30,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f15.f64)));
	// fmadds f14,f11,f26,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f19.f64)));
	// fmadds f19,f12,f9,f18
	f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f12,f5,f16
	f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, f16.f64)));
	// fmadds f16,f12,f1,f15
	f16.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, f15.f64)));
	// fmadds f15,f12,f28,f14
	f15.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f14.f64)));
	// fmadds f14,f12,f24,f8
	f14.f64 = double(float(std::fma(ctx.f12.f64, f24.f64, ctx.f8.f64)));
	// lfd f8,-456(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, f19.f64)));
	// fmadds f19,f13,f6,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, f18.f64)));
	// fmadds f18,f13,f2,f16
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, f16.f64)));
	// fmadds f16,f13,f29,f15
	f16.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, f15.f64)));
	// fmadds f15,f13,f25,f14
	f15.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f14.f64)));
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f12.f64)));
	// fadds f12,f11,f17
	ctx.f12.f64 = double(float(ctx.f11.f64 + f17.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f19,f11
	ctx.f12.f64 = double(float(f19.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f18,f11
	ctx.f12.f64 = double(float(f18.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f16,f11
	ctx.f12.f64 = double(float(f16.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f15,f11
	ctx.f12.f64 = double(float(f15.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82432b28
	goto loc_82432B28;
loc_82432AB8:
	// fmuls f17,f0,f4
	ctx.fpscr.disableFlushMode();
	f17.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f16,f0,f31
	f16.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f15,f0,f27
	f15.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f14,f0,f23
	f14.f64 = double(float(ctx.f0.f64 * f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f17,f11,f3,f17
	f17.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f17.f64)));
	// fmadds f16,f11,f30,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f16.f64)));
	// fmadds f15,f11,f26,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f15.f64)));
	// fmadds f14,f11,f22,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, f14.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f19.f64)));
	// fmadds f19,f12,f9,f18
	f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f12,f5,f17
	f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, f17.f64)));
	// fmadds f17,f12,f1,f16
	f17.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, f16.f64)));
	// fmadds f16,f12,f28,f15
	f16.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f15.f64)));
	// fmadds f15,f12,f24,f14
	f15.f64 = double(float(std::fma(ctx.f12.f64, f24.f64, f14.f64)));
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, f19.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f11,f13,f6,f18
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, f18.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f2,f17
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, f17.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f29,f16
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, f16.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f25,f15
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f15.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f12.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82432B28:
	// lfs f12,-348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f20,f12,f20
	f20.f64 = double(float(ctx.f12.f64 + f20.f64));
	// lfs f13,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f12.f64 = double(temp.f32);
	// fadds f19,f11,f13
	f19.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,-432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f12,-424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,-420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f12,-412(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f11,-408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// lfs f12,-400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f11,-396(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f12,-388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f31
	f31.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f11,-384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-380(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f11,f29
	f29.f64 = double(float(ctx.f11.f64 + f29.f64));
	// lfs f12,-376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// lfs f11,-372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-368(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f26,f11,f26
	f26.f64 = double(float(ctx.f11.f64 + f26.f64));
	// lfs f12,-364(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f25
	f25.f64 = double(float(ctx.f13.f64 + f25.f64));
	// fadds f24,f12,f24
	f24.f64 = double(float(ctx.f12.f64 + f24.f64));
	// lfs f11,-360(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-356(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f23,f11,f23
	f23.f64 = double(float(ctx.f11.f64 + f23.f64));
	// lfs f12,-352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -352);
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
	// bdnz 0x82432988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432988;
loc_82432C00:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x82432C08;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245D0F4) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245D458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245D460;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,628
	ctx.r11.s64 = ctx.r3.s64 + 628;
loc_8245D46C:
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
	// bne 0x8245d46c
	if (!ctx.cr0.eq) goto loc_8245D46C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r29,-1
	r29.s64 = -1;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// b 0x8245d4a4
	goto loc_8245D4A4;
loc_8245D498:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245ca08
	ctx.lr = 0x8245D4A4;
	sub_8245CA08(ctx, base);
loc_8245D4A4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// bl 0x8220aa00
	ctx.lr = 0x8245D4B0;
	sub_8220AA00(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8245d498
	if (ctx.cr6.eq) goto loc_8245D498;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245E510) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245E518;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E53C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245f750
	ctx.lr = 0x8245E54C;
	sub_8245F750(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245F1E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8245F1E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bl 0x82475a28
	ctx.lr = 0x8245F224;
	sub_82475A28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8245f268
	if (ctx.cr0.lt) goto loc_8245F268;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x8245f100
	ctx.lr = 0x8245F24C;
	sub_8245F100(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8245f268
	if (ctx.cr0.lt) goto loc_8245F268;
	// lwz r4,228(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82474448
	ctx.lr = 0x8245F260;
	sub_82474448(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8245F268:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8245FFF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82460018) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82460028
	sub_82460028(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82460090) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8245f378
	ctx.lr = 0x824600B4;
	sub_8245F378(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r11,31284
	ctx.r11.s64 = ctx.r11.s64 + 31284;
	// addi r10,r10,31224
	ctx.r10.s64 = ctx.r10.s64 + 31224;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82461C60) {
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
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,356(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82461C98;
	sub_822D5870(ctx, base);
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82461cc4
	if (ctx.cr6.eq) goto loc_82461CC4;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sraw r11,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x82461cfc
	goto loc_82461CFC;
loc_82461CC4:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82461cf0
	if (ctx.cr6.eq) goto loc_82461CF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x82461cfc
	goto loc_82461CFC;
loc_82461CF0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_82461CFC:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82461D14;
	sub_822D5870(ctx, base);
	// lwz r8,460(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82461d34
	if (ctx.cr6.eq) goto loc_82461D34;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82461D34;
	sub_822D5870(ctx, base);
loc_82461D34:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,360(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r30,388(r31)
	REX_STORE_U32(r31.u32 + 388, r30.u32);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// stw r30,372(r31)
	REX_STORE_U32(r31.u32 + 372, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82461D54;
	sub_822D5870(ctx, base);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x82461D68;
	sub_822D5870(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,368(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 368);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x82461D7C;
	sub_822D5870(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_82469888) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82469890;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lwz r9,460(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 460);
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// beq cr6,0x824698d8
	if (ctx.cr6.eq) goto loc_824698D8;
	// lwz r30,328(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 328);
	// b 0x824698dc
	goto loc_824698DC;
loc_824698D8:
	// lwz r30,56(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
loc_824698DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824698ec
	if (ctx.cr6.eq) goto loc_824698EC;
	// lwz r31,328(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 328);
	// b 0x824698f0
	goto loc_824698F0;
loc_824698EC:
	// lwz r31,144(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 144);
loc_824698F0:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82469a5c
	if (!ctx.cr6.eq) goto loc_82469A5C;
	// lwz r11,140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82469934
	if (!ctx.cr6.eq) goto loc_82469934;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82469934
	if (ctx.cr6.eq) goto loc_82469934;
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82469934
	if (ctx.cr6.eq) goto loc_82469934;
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82469940
	if (ctx.cr6.eq) goto loc_82469940;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82469980
	goto loc_82469980;
loc_82469934:
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82469950
	if (!ctx.cr6.eq) goto loc_82469950;
loc_82469940:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
loc_82469950:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bne cr6,0x82469974
	if (!ctx.cr6.eq) goto loc_82469974;
	// bl 0x82469820
	ctx.lr = 0x82469970;
	sub_82469820(ctx, base);
	// b 0x82469978
	goto loc_82469978;
loc_82469974:
	// bl 0x82320178
	ctx.lr = 0x82469978;
	sub_82320178(ctx, base);
loc_82469978:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469b30
	if (ctx.cr6.lt) goto loc_82469B30;
loc_82469980:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x82469a1c
	if (ctx.cr6.lt) goto loc_82469A1C;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r6,r31,r30
	ctx.r6.u64 = r30.u64 - r31.u64;
loc_8246999C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8246999c
	if (ctx.cr6.lt) goto loc_8246999C;
loc_82469A1C:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x82469a5c
	if (!ctx.cr6.lt) goto loc_82469A5C;
	// subf r8,r9,r28
	ctx.r8.u64 = r28.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82469A38:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82469a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82469A38;
loc_82469A5C:
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82469b30
	if (!ctx.cr6.eq) goto loc_82469B30;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82469b30
	if (ctx.cr6.lt) goto loc_82469B30;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,-24328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24328);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82469af4
	if (ctx.cr6.lt) goto loc_82469AF4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r5,r10,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_82469AB0:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f12,-12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f11,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,-16(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// stfs f10,-20(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// lfs f9,-12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,-28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stfs f8,-24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// lfsu f13,-16(r9)
	ea = -16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f7,-36(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -36, temp.u32);
	// stfsu f7,-32(r10)
	ea = -32 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82469ab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82469AB0;
loc_82469AF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82469b30
	if (ctx.cr6.lt) goto loc_82469B30;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82469B1C:
	// lfsu f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfsu f13,-8(r11)
	ea = -8 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82469b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82469B1C;
loc_82469B30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82473FF0) {
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
	// bl 0x82473cc8
	ctx.lr = 0x82474010;
	sub_82473CC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82474020
	if (ctx.cr0.eq) goto loc_82474020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82474020;
	sub_82473600(ctx, base);
loc_82474020:
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

DEFINE_REX_FUNC(sub_824747E8) {
	REX_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82474814:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x82474814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474814;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475108) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82475110;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,188(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824751e4
	if (!ctx.cr6.gt) goto loc_824751E4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247516c
	if (!ctx.cr6.eq) goto loc_8247516C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,536(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r10,532(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8247516C:
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x824751d8
	goto loc_824751D8;
loc_82475174:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82475218
	if (ctx.cr6.eq) goto loc_82475218;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bge cr6,0x824751ac
	if (!ctx.cr6.lt) goto loc_824751AC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_824751AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822091c8
	ctx.lr = 0x824751B8;
	sub_822091C8(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// bl 0x82474620
	ctx.lr = 0x824751D8;
	sub_82474620(ctx, base);
loc_824751D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82475174
	if (!ctx.cr6.eq) goto loc_82475174;
	// b 0x82475218
	goto loc_82475218;
loc_824751E4:
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824751fc
	if (ctx.cr6.eq) goto loc_824751FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822091c8
	ctx.lr = 0x824751F8;
	sub_822091C8(ctx, base);
	// b 0x82475200
	goto loc_82475200;
loc_824751FC:
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
loc_82475200:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// bl 0x82474620
	ctx.lr = 0x82475218;
	sub_82474620(ctx, base);
loc_82475218:
	// ld r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 200);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8247C94C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// lwz r30,188(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x8247c984
	goto loc_8247C984;
loc_8247C984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd40
	ctx.lr = 0x8247C98C;
	sub_822DCD40(ctx, base);
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

DEFINE_REX_FUNC(sub_8247D42C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x822dcd40
	ctx.lr = 0x8247D44C;
	sub_822DCD40(ctx, base);
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

DEFINE_REX_FUNC(sub_8247D9CC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247d9f8
	if (ctx.cr6.eq) goto loc_8247D9F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dcd40
	ctx.lr = 0x8247D9F8;
	sub_822DCD40(ctx, base);
loc_8247D9F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822dbb00
	ctx.lr = 0x8247DA00;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247F2C8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x8247F2D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247f2f8
	if (!ctx.cr6.eq) goto loc_8247F2F8;
	// bl 0x822db6c0
	ctx.lr = 0x8247F2E4;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247F2F0;
	sub_822D6910(ctx, base);
loc_8247F2F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247f4e0
	goto loc_8247F4E0;
loc_8247F2F8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e15a8
	ctx.lr = 0x8247F300;
	sub_822E15A8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8247f318
	if (!ctx.cr6.lt) goto loc_8247F318;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_8247F318:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247f148
	ctx.lr = 0x8247F328;
	sub_8247F148(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8247f2f0
	if (ctx.cr0.lt) goto loc_8247F2F0;
	// lwz r7,12(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 12);
	// andi. r11,r7,264
	ctx.r11.u64 = ctx.r7.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247f34c
	if (!ctx.cr0.eq) goto loc_8247F34C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// subf r3,r11,r24
	ctx.r3.u64 = r24.u64 - ctx.r11.u64;
	// b 0x8247f4e0
	goto loc_8247F4E0;
loc_8247F34C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,-11584
	r26.s64 = ctx.r11.s64 + -11584;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// subf r25,r11,r9
	r25.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq 0x8247f3c8
	if (ctx.cr0.eq) goto loc_8247F3C8;
	// srawi r10,r28,5
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = r28.s32 >> 5;
	// clrlwi r8,r28,27
	ctx.r8.u64 = r28.u32 & 0x1F;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r8,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(72));
	// lwzx r8,r6,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247f3b8
	if (ctx.cr0.eq) goto loc_8247F3B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8247f3b8
	if (!ctx.cr6.lt) goto loc_8247F3B8;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8247F39C:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bne cr6,0x8247f3ac
	if (!ctx.cr6.eq) goto loc_8247F3AC;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8247F3AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247f39c
	if (ctx.cr6.lt) goto loc_8247F39C;
loc_8247F3B8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8247f3e8
	if (!ctx.cr6.eq) goto loc_8247F3E8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8247f4e0
	goto loc_8247F4E0;
loc_8247F3C8:
	// rlwinm. r10,r7,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247f3b8
	if (!ctx.cr0.eq) goto loc_8247F3B8;
	// bl 0x822db6c0
	ctx.lr = 0x8247F3D4;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247f4e0
	goto loc_8247F4E0;
loc_8247F3E8:
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247f4dc
	if (ctx.cr0.eq) goto loc_8247F4DC;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8247f404
	if (!ctx.cr6.eq) goto loc_8247F404;
	// li r25,0
	r25.s64 = 0;
	// b 0x8247f4dc
	goto loc_8247F4DC;
loc_8247F404:
	// srawi r8,r28,5
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r8.s64 = r28.s32 >> 5;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r28,27
	ctx.r9.u64 = r28.u32 & 0x1F;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r30,r9,72
	r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f4d8
	if (ctx.cr0.eq) goto loc_8247F4D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247f148
	ctx.lr = 0x8247F440;
	sub_8247F148(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r24.s32, ctx.xer);
	// bne cr6,0x8247f484
	if (!ctx.cr6.eq) goto loc_8247F484;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8247f478
	if (!ctx.cr6.lt) goto loc_8247F478;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247F460:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8247f470
	if (!ctx.cr6.eq) goto loc_8247F470;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8247F470:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8247f460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247F460;
loc_8247F478:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8247f4d0
	goto loc_8247F4D0;
loc_8247F484:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247f148
	ctx.lr = 0x8247F494;
	sub_8247F148(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247f2f0
	if (ctx.cr0.lt) goto loc_8247F2F0;
	// cmplwi cr6,r31,512
	ctx.cr6.compare<uint32_t>(r31.u32, 512, ctx.xer);
	// bgt cr6,0x8247f4bc
	if (ctx.cr6.gt) goto loc_8247F4BC;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247f4bc
	if (ctx.cr0.eq) goto loc_8247F4BC;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// beq 0x8247f4c0
	if (ctx.cr0.eq) goto loc_8247F4C0;
loc_8247F4BC:
	// lwz r31,24(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 24);
loc_8247F4C0:
	// lwzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8247F4D0:
	// beq 0x8247f4d8
	if (ctx.cr0.eq) goto loc_8247F4D8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8247F4D8:
	// subf r24,r31,r24
	r24.u64 = r24.u64 - r31.u64;
loc_8247F4DC:
	// add r3,r25,r24
	ctx.r3.u64 = r25.u64 + r24.u64;
loc_8247F4E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824A2F58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// addic r1,r1,-56
	ctx.xer.ca = ctx.r1.u32 > 55;
	ctx.r1.s64 = ctx.r1.s64 + -56;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r12,56(r1)
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r12.u32);
	// std r31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, r31.u64);
	// std r30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, r30.u64);
	// li r30,0
	r30.s64 = 0;
	// stw r3,0(r1)
	REX_STORE_U32(ctx.r1.u32 + 0, ctx.r3.u32);
	// stw r4,8(r1)
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r4.u32);
	// stw r5,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// stw r6,24(r1)
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r6.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r12,8(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r12,1
	ctx.r5.s64 = ctx.r12.s64 + 1;
	// lwz r2,4(r4)
	ctx.r2.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,36(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
loc_824A2FB0:
	// rldicl r11,r7,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r11,r8,60
	ctx.r11.u64 = ctx.r8.u64 & 0xF;
	// blt cr6,0x824a313c
	if (ctx.cr6.lt) goto loc_824A313C;
	// sld r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x824a3064
	if (ctx.cr0.lt) goto loc_824A3064;
loc_824A2FDC:
	// rldicl r11,r7,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rldicr r7,r7,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// blt 0x824a31a0
	if (ctx.cr0.lt) goto loc_824A31A0;
loc_824A2FEC:
	// rldicr r12,r8,1,62
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r11,r11,7,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// cmpw cr6,r8,r2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// cmpw cr5,r8,r5
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lhzx r12,r31,r12
	ctx.r12.u64 = REX_LOAD_U16(r31.u32 + ctx.r12.u32);
	// or r12,r12,r11
	ctx.r12.u64 = ctx.r12.u64 | ctx.r11.u64;
	// sth r12,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r12.u16);
	// clrldi r12,r12,57
	ctx.r12.u64 = ctx.r12.u64 & 0x7F;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r12,r12,1
	ctx.r12.s64 = ctx.r12.s64 + 1;
	// subf. r10,r12,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cror 4*cr1+eq,lt,4*cr6+eq
	ctx.cr1.eq = ctx.cr0.lt | ctx.cr6.eq;
	// crorc eq,4*cr1+eq,4*cr5+lt
	ctx.cr0.eq = ctx.cr1.eq | !(ctx.cr5.lt);
	// bne 0x824a2fb0
	if (!ctx.cr0.eq) goto loc_824A2FB0;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// blt cr6,0x824a32dc
	if (ctx.cr6.lt) goto loc_824A32DC;
	// cmpw cr5,r8,r2
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// beq cr5,0x824a3208
	if (ctx.cr5.eq) goto loc_824A3208;
loc_824A303C:
	// lwz r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// ld r31,48(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// ld r30,40(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	return;
loc_824A3064:
	// lwz r12,12(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r12,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r12.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x824a3104
	if (ctx.cr6.gt) goto loc_824A3104;
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x82337e90
	ctx.lr = 0x824A30B8;
	sub_82337E90(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r12,r3
	ctx.r12.u64 = ctx.r3.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// cmpwi cr6,r12,1
	ctx.cr6.compare<int32_t>(ctx.r12.s32, 1, ctx.xer);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x824a2fdc
	if (!ctx.cr6.eq) goto loc_824A2FDC;
	// b 0x824a3064
	goto loc_824A3064;
loc_824A3104:
	// lhz r11,0(r12)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r12.u32 + 0);
	// lhz r0,2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + 2);
	// addi r12,r12,6
	ctx.r12.s64 = ctx.r12.s64 + 6;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r0,r0,16,47
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// lhz r0,-2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + -2);
	// stw r12,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r12.u32);
	// neg r12,r6
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// sld r11,r11,r12
	ctx.r11.u64 = ctx.r12.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r12.u8 & 0x7F));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x824a2fdc
	goto loc_824A2FDC;
loc_824A313C:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// bl 0x824a2cd0
	ctx.lr = 0x824A3170;
	sub_824A2CD0(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// b 0x824a2fdc
	goto loc_824A2FDC;
loc_824A31A0:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x824a2e88
	ctx.lr = 0x824A31D4;
	sub_824A2E88(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x824a2fec
	goto loc_824A2FEC;
loc_824A3208:
	// lwz r6,0(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r7,8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// rlwinm r5,r11,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
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
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x8248b3c0
	ctx.lr = 0x824A3250;
	sub_8248B3C0(ctx, base);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addic. r8,r3,0
	ctx.xer.ca = ctx.r3.u32 > 4294967295;
	ctx.r8.s64 = ctx.r3.s64 + 0;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blt 0x824a32dc
	if (ctx.cr0.lt) goto loc_824A32DC;
	// clrldi r11,r8,57
	ctx.r11.u64 = ctx.r8.u64 & 0x7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r12,r11,r12
	ctx.r12.u64 = ctx.r12.u64 - ctx.r11.u64;
	// rlwinm r11,r8,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a32bc
	if (ctx.cr6.eq) goto loc_824A32BC;
	// ori r12,r8,64
	ctx.r12.u64 = ctx.r8.u64 | 64;
	// li r30,128
	r30.s64 = 128;
	// sth r12,-2(r3)
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r12.u16);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x824a32c0
	goto loc_824A32C0;
loc_824A32BC:
	// sth r8,-2(r3)
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r8.u16);
loc_824A32C0:
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r8,16,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x824a2fb0
	if (ctx.cr6.lt) goto loc_824A2FB0;
	// b 0x824a303c
	goto loc_824A303C;
loc_824A32DC:
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AB190) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x824AB198;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v58,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v57,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v60,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vadduhm v30,v3,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v29,v2,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v1,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v28,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824ab348
	if (!ctx.cr6.eq) goto loc_824AB348;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	r28.s64 = ctx.r1.s64 + 416;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
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
	// b 0x824ab34c
	goto loc_824AB34C;
loc_824AB348:
	// blt cr6,0x824ab3c4
	if (ctx.cr6.lt) goto loc_824AB3C4;
loc_824AB34C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824ab3c4
	if (!ctx.cr6.gt) goto loc_824AB3C4;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// subf r28,r9,r11
	r28.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r31,-48
	ctx.r11.s64 = r31.s64 + -48;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_824AB380:
	// lbzux r8,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzx r5,r28,r10
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// rotlwi r31,r8,1
	r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r30,r5,1
	r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r5,r30
	ctx.r8.u64 = ctx.r5.u64 + r30.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r31,r5
	ctx.r8.u64 = r31.u64 + ctx.r5.u64;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r3.u16);
	// sthu r5,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x824ab380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB380;
loc_824AB3C4:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r27,r11
	ea = (r27.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a9ce0
	ctx.lr = 0x824AB3D8;
	sub_824A9CE0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B2CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e84
	ctx.lr = 0x824B2CE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b2d08
	if (ctx.cr6.eq) goto loc_824B2D08;
	// bl 0x824b2b58
	ctx.lr = 0x824B2D00;
	sub_824B2B58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_824B2D08:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r30,r5,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r5,r30
	r30.u64 = r30.u64 - ctx.r5.u64;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvx128 v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v6,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r29,r3,28
	r29.u64 = ctx.r3.u32 & 0xF;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r30,r3
	r31.u64 = r30.u64 + ctx.r3.u64;
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824b2da0
	if (!ctx.cr6.eq) goto loc_824B2DA0;
	// vmrghb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x824b2dc0
	goto loc_824B2DC0;
loc_824B2DA0:
	// vmrglb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_824B2DC0:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	r30.s64 = 32;
	// vaddshs v5,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r29,48
	r29.s64 = 48;
	// li r28,64
	r28.s64 = 64;
	// li r27,80
	r27.s64 = 80;
	// lvx128 v4,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,96
	ctx.r11.s64 = 96;
	// lvx128 v3,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v1,r4,r29
	ea = (ctx.r4.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v11,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v30,r4,r28
	ea = (ctx.r4.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,112
	r30.s64 = 112;
	// vaddshs v29,v10,v1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v26,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v62,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v28,r4,r27
	ea = (ctx.r4.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vaddshs v27,v9,v30
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vpkshus128 v61,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v25,v8,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vpkshus128 v60,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// lvx128 v24,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v7,v26
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v22,v0,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vpkshus128 v59,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v58,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvewx128 v62,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v57,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v56,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B8730) {
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
	// bl 0x822d4e74
	ctx.lr = 0x824B8738;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r26,r25,30
	r26.u64 = r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b87b0
	if (ctx.cr6.lt) goto loc_824B87B0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B87A8;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8810
	goto loc_824B8810;
loc_824B87B0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b880c
	if (!ctx.cr6.gt) goto loc_824B880C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B87BC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b87bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B87BC;
loc_824B880C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8810:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b887c
	if (!ctx.cr6.eq) goto loc_824B887C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x824b8898
	goto loc_824B8898;
loc_824B887C:
	// rlwinm r10,r26,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// clrlwi r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B8898;
	sub_824A64E0(ctx, base);
loc_824B8898:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r26,r9,30
	r26.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b88f4
	if (ctx.cr6.lt) goto loc_824B88F4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B88EC;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8954
	goto loc_824B8954;
loc_824B88F4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8950
	if (!ctx.cr6.gt) goto loc_824B8950;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8900:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r27,r3
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8900;
loc_824B8950:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8954:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	// bne cr6,0x824b89c4
	if (!ctx.cr6.eq) goto loc_824B89C4;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_824B89C4:
	// rlwinm r11,r26,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B89DC;
	sub_824A64E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_824D2BF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2C50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,30472
	ctx.r11.s64 = ctx.r11.s64 + 30472;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824D2C68:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r10,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d2c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2C68;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3260) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// bl 0x824d440c
	ctx.lr = 0x824D3278;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// bl 0x822d5848
	ctx.lr = 0x824D3284;
	sub_822D5848(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D37C8) {
	REX_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20232
	ctx.r11.s64 = ctx.r11.s64 + 20232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D37E4:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x824d37e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D37E4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A78) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25284
	ctx.r3.s64 = ctx.r11.s64 + 25284;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3AE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25332
	ctx.r3.s64 = ctx.r11.s64 + 25332;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25732
	ctx.r3.s64 = ctx.r11.s64 + 25732;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26276
	ctx.r3.s64 = ctx.r11.s64 + 26276;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3EB0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200028b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D3FF0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000250
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4150) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D42D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010136
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4450) {
	REX_FUNC_PROLOGUE();
	// .long 0x201004d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201014d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4750) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000048
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A50) {
	REX_FUNC_PROLOGUE();
	// .long 0x201018e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BD0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010226
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

